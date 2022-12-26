#include<bits/stdc++.h>
#include<utility> // pair, 

using namespace std;

void print_equal(){
    cout << "\n========================================================\n\n";
}


void print_vector_ints(auto v){
    cout << "Vector elements are \n";
    for(auto it : v)
        cout<< it << " ";
    cout << "\n";
}


void pair_example() {
    pair<int, int> p = {3, 9};
    cout << p.first << " " << p.second << endl;

    pair<int, pair<int, int>> q = {5, {1, 2}};
    cout << q.first << q.second.first << q.second.second << endl;

    pair<int, int> roll_no[] = {{1,2}, {2,9}, {1,8}, {3,9}, {3,7}};

    int n = sizeof(roll_no) / sizeof(roll_no[0]);

    cout << "number of pairs = " << n << endl;
    
    for(int i = 0; i < n; i++){
        cout << roll_no[i].first << " " << roll_no[i].second << "\n";
    }
    
    print_equal();
}


void vector_example(){
    vector<int> v; // declare a vector

    v.push_back(1);
    v.emplace_back(2); // almost similar to push_back
    v.emplace_back(3);

    vector<pair<int, int>> v_pair;
    v_pair.push_back({1,2}); // need to pass in as pair for push_back
    v_pair.emplace_back(1, 0); // emplace_back assumes it to be a pair

    vector<int> v1(5, 100); // vector with 5 elements as 100s
    vector<int> v2(5);  // vector with 5 elements as 0s

    vector<int> v3(5, 20);
    vector<int> v4(v3); // copy vector 3 into vector 4

    vector<int>::iterator it = v.begin();

    cout<< "elements of vector v are \n";
    for(; it!= v.end(); it++){
        cout << *(it) << " ";
    } 
    cout << endl;
    cout << v[1] << " " << v.at(1) << endl;


    cout << "elements of vector v using iterators \n";
    for(vector<int>::iterator it = v.begin(); it!= v.end(); it++){
        cout << *(it) <<" ";
    }
    cout << endl;
    cout << "elements of vector v using iterators \n";
    for(auto it = v.begin(); it!= v.end(); it++){
        cout << *(it) <<" ";
    }
    cout << endl;
    cout << "elements of vector v using iterators \n";
    for(auto it : v){
        cout << it <<" ";
    }
    cout << endl;

    v.erase(v.begin()); // delete first element
    print_vector_ints(v);

    v.erase(v.begin(), v.begin()+1);  // delete element from start till end [start, end)
    print_vector_ints(v);

    v.insert(v.begin(), 2);
    print_vector_ints(v);

    v.insert(v.end()-1, 2, 4);
    print_vector_ints(v);

    cout << *(v.end()-1) << endl;
    

    vector<int> v5 {10,20, 30, 40, 50};
    v.insert(v.end(), v5.begin(), v5.end());
    print_vector_ints(v);


    cout << "size of v = " << v.size() << endl;

    v.pop_back();
    cout<< "vector after deleting last element\n";
    print_vector_ints(v);

    v.swap(v5);
    cout << "Swapped v with v5\n";

    print_vector_ints(v);

    v.clear();
    cout << "cleared vector v elements\n";
    print_vector_ints(v);

    cout <<"is vector v empty "<< v.empty() << endl;


    cout <<"is vector v5 empty "<< v5.empty() << endl;

    print_equal();
}


void list_example(){
    list<int> ls;
    ls.push_back(4);
    ls.push_back(5);
    ls.emplace_back(6);
    ls.push_front(3);
    ls.emplace_front(2);

    print_vector_ints(ls);

    // begin, end, rbegin, rend, clear, insert, size, swap

    print_equal();
}


void deque_example(){ 

    deque<int> dq;
    dq.push_back(4);
    dq.emplace_back(5);
    dq.push_front(3);
    dq.emplace_front(2);

    cout << "Elements of Deque before popping back and front are as below\n";
    print_vector_ints(dq);

    dq.pop_back();
    dq.pop_front();

    cout << "Elements of Deque after popping back and front are as below\n";
    print_vector_ints(dq);

    dq.back() = 2; // read write reference to the element at the back
    dq.front() = 5;// read write reference to the element at the front


    cout << "Elements of Deque after popping back and front are as below\n";
    print_vector_ints(dq);

    // begin, end, rbegin, rend, clear, insert, size, swap

    print_equal();
}


void stack_example(){  
    // Last In First Out -- O(1)
    stack<int> st;
    st.push(4);
    st.push(3);
    st.push(2);
    st.push(1);
    st.emplace(0);

    cout << "Element at the top of stack = " << st.top() << endl;

    st.pop();
    st.pop();

    cout << "Element at the top of stack = " << st.top() << endl;

    cout << "Size of the stack = " << st.size() << endl;

    cout << "is stack empty? : " << st.empty() << endl;

    stack<int> st1, st2;
    st1.push(4);
    st1.push(3);

    st2.push(2);
    st2.push(1);

    cout << "Stack st1 top = " << st1.top() << endl;
    cout << "Stack st2 top = " << st2.top() << endl;

    st1.swap(st2);

    cout << "Stack st1 top = " << st1.top() << endl;
    cout << "Stack st2 top = " << st2.top() << endl;

    print_equal();

}


void queue_example(){ 
    // First in First Out -- O(1)
    queue<int> q;

    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.emplace(5);

    cout << "Element at the end of the queue = " << q.back() << endl;
    q.back() += 5;
    cout << "Element at the end of the queue = " << q.back() << endl;

    cout << "Element at the front of the queue = " << q.front() << endl;
    q.pop(); // removes first element
    cout << "Element at the front of the queue = " << q.front() << endl;

    cout << "Size of the queue = " << q.size() << endl;

    cout << "is queue empty? : " << q.empty() << endl;

    queue<int> q1, q2;
    q1.push(1);
    q1.push(2);
    q2.push(3);
    q2.push(4);
    
    cout << "Element at end of q1 = " << q1.back() << endl;
    cout << "Element at end of q2 = " << q2.back() << endl;
    q1.swap(q2);
    cout << "Element at end of q1 = " << q1.back() << endl;
    cout << "Element at end of q2 = " << q2.back() << endl;

    print_equal();

}


void priority_queue_example(){

    // by default implements max heap
    // Not a linear data structure
    // A tree is maintained

    // push, pop -- log(n)
    // top -- O(1)

    priority_queue<int> pq;
    pq.push(1);     // 1
    pq.push(2);     // 2 1
    pq.push(5);     // 5 2 1
    pq.push(8);     // 8 5 2 1 
    pq.emplace(10); // 10 8 5 2 1

    cout << "Element at the top = " << pq.top() << endl;  // 10
    pq.pop(); // removes first element
    cout << "Element at the top = " << pq.top() << endl;  // 8


    // Min Heap
    priority_queue<int, vector<int>, greater<int>> pq1;
    pq1.push(5);    // 5
    pq1.push(2);    // 2 5
    pq1.push(8);    // 2 5 8
    pq1.emplace(10);// 2 5 8 10

    cout << "Element at the top = " << pq1.top() << endl;
    pq1.pop(); // removes first element
    cout << "Element at the top = " << pq1.top() << endl;

    print_equal();
}


void set_example(){
    // unique and sorted
    // erase -- log(n)
    // everything else -- log(n)

    set<int> s;
    s.insert(1);
    s.insert(20);
    s.insert(10);
    s.insert(-5);
    s.insert(1);
    s.insert(20);

    cout << "Size of the set = " << s.size() << endl;

    auto it = s.find(-5); // returns iterator to -5
    cout << "Value of it = " << *it << endl;

    auto it1 = s.find(50); // since 50 isn't in the set, it returns s.end()

    s.erase(it);
    s.erase(-5);
    cout << "Size of the set = " << s.size() << endl;

    int cnt = s.count(1); // 1 if exists in set, else 0
    cout << "Value of cnt(1)= " << cnt << endl;

    auto it2 = s.find(1);
    cout << "Value of find(1) = " << *it2 << endl;
    auto it3 = s.find(10);
    cout << "Value of find(10) = " << *it3 << endl;
    s.erase(it2, it3);
    cout << "Size of the set = " << s.size() << endl;

    auto it4 = s.lower_bound(20);
    cout << "Value of lower_bound(20) = " << *it4 << endl;

    auto it5 = s.upper_bound(20);
    cout << "Value of upper_bound(20) = " << *it5 << endl;

    print_equal();

}


void multi_set_example(){
    // sorted, not unique
    multiset<int> ms;
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);
    ms.insert(2);
    ms.insert(2);

    cout << "Size of the multiset = " << ms.size() << endl;

    ms.erase(2); // erases all occurances of 2
    cout << "Size of the multiset = " << ms.size() << endl;

    int cnt = ms.count(1); // number of occurances of 1
    cout << "count(1) = " << cnt << endl;

    cnt = ms.count(2);
    cout << "count(2) = " << cnt << endl;

    ms.erase(ms.find(1));
    cout << "Size of the multiset = " << ms.size() << endl;

    print_equal();

}


void unordered_set_example(){
    // unique and not sorted; randomized order
    // lower_bound, upper_bound doesn't work
    // usually takes O(1), but in worst case can take O(n)

    unordered_set<int> us;
    us.insert(1);

    print_equal();

}


void map_example(){
    // keys are unique and can be of any data type
    // values need not be unique and can be of any data type
    // keys are stored in sorted order

    map<int, int> m_i_i;
    map<int, pair<int, int>> m_i_pii;
    map<pair<int, int>, int> m_pii_i;

    m_i_i.insert(make_pair(1, 2));
    m_i_i[2] = 3;
    m_i_i.emplace(3, 4);
    m_i_i.emplace(4, 5);
    m_i_i.insert({5, 6});
    m_i_i.insert({-6, 7});

    for(auto it : m_i_i){
        cout << it.first << " : " << it.second << endl;
    }

    cout << "value at key 10 = " << m_i_i[10] << endl; // since there is no key 10, it outputs 0 or null

    auto it = m_i_i.find(10); // since key 10 doesn't exisit, points to end()

    auto it1 = m_i_i.lower_bound(2);
    auto it2 = m_i_i.upper_bound(2);
    cout << "it1 points to " << (*it1).first << " : " << (*it1).second << endl;
    cout << "it2 points to " << (*it2).first << " : " << (*it2).second << endl;
    

    print_equal();
}


void multi_map_example(){
    // can store multiple keys, but sorted
    // cannot use map[key]
    multimap<int, int> mm;
    mm.insert(make_pair(1, 2));
    mm.insert(make_pair(3, 4));
    mm.insert(make_pair(5, 6));
    mm.insert(make_pair(1, 5));
    mm.insert(make_pair(1, 3));

    for(auto it : mm){
        cout << it.first << " : " << it.second << endl;
    }

    print_equal();
}


void unordered_map_example(){
    // unique keys but not in sorted order

    unordered_map<int, int> um;
    um.insert(make_pair(1, 2));
    um.insert(make_pair(3, 4));
    um.insert(make_pair(5, 6));
    um.insert(make_pair(1, 5));
    um.insert({5, 7});
    um.insert({-6, 7});
    um.insert({1, -7});

    for(auto it : um){
        cout << it.first << " : " << it.second << endl;
    }

    print_equal();
}


void binary_search_example(){
    int a[] = {1, 4, 5, 8, 9};
    int n = sizeof(a) / sizeof(a[0]);

    bool res = binary_search(a, a+n, 3);
    cout << "found 3? = " << res << endl;

    res = binary_search(a, a+n, 4);
    cout << "found 4? = " <<res << endl;

    print_equal();

}


void lower_bound_example(){
    // returns iterator to element if element exists
    // returns iterator to next greater element if element doesn't exist
    // returns iterator to end() if next greater element doesn't exist
    // log(n)

    int a[] = {1, 4, 5, 6, 9, 9};
    int n = sizeof(a) / sizeof(a[0]);

    auto it1 = lower_bound(a, a+n, 4);
    cout << "value of lower_bound(4) = " << *it1 << endl;

    int i1 = it1 - a; // gives the index, a is pointer to first element
    cout << "value of it1 - a = " << i1 << endl;

    auto it2 = lower_bound(a, a+n, 7);
    cout << "value of lower_bound(7) = " << *it2 << endl;

    int i2 = it2 - a; 
    cout << "value of it2 - a = " << i2 << endl;

    auto it3 = lower_bound(a, a+n, 10); // returns pointer to end()
    cout << "value of lower_bound(10) = " << *it3 << endl; // some random value

    int i3 = it3 - a; // returns index after last index
    cout << "value of it3 - a = " << i3 << endl;


    // lower_bound(v.begin(), v.end(), x) - v.begin()

    print_equal();

}


void upper_bound_example(){
    // returns iterator to next greater element if element exists
    // returns iterator to next greater element if element doesn't exist
    // returns iterator to end() if next greater element doesn't exist
    // log(n)

    int a[] = {1, 4, 5, 6, 9, 9};
    int n = sizeof(a) / sizeof(a[0]);

    auto it1 = upper_bound(a, a+n, 4);
    cout << "value of upper_bound(4) = " << *it1 << endl;

    int i1 = it1 - a; // gives the index, a is pointer to first
    cout << "value of it1 - a = " << i1 << endl;

    auto it2 = upper_bound(a, a+n, 7);
    cout << "value of upper_bound(7) = " << *it2 << endl;

    int i2 = it2 - a;
    cout << "value of it2 - a = " << i2 << endl;

    auto it3 = upper_bound(a, a+n, 10); // returns pointer to end()
    cout << "value of upper_bound(10) = " << *it3 << endl;
    int i3 = it3 - a;
    cout << "value of it3 - a = " << i3 << endl;

    // upper_bound(v.begin(), v.end(), x) - v.begin

    print_equal();

}


void application_1(){
    // using lower_bound to find the index of first occurence of an element in a sorted array
    // return -1 if element doesn't exist

    int a[] = {1, 4, 5, 6, 9, 0, 9, 10, 11};
    int n = sizeof(a) / sizeof(a[0]);
    int x = 4;
    int i = lower_bound(a, a+n, x) - a;
    
    if (i!=n && a[i]==x) cout << "found at " << i << endl;
    else cout << "not found : " << -1 << endl;

    x = 12;
    i = lower_bound(a, a+n, x) - a;
    if (i!=n && a[i]==x) cout << "found at " << i << endl;
    else cout << "not found : " << -1 << endl;

    print_equal();


}


void application_2(){
    // using upper_bound to find the index of last occurence of an element in a
    // sorted array
    // return -1 if element doesn't exist

    int a[] = {1, 4, 4, 4, 4, 9, 9, 10, 11};
    int n = sizeof(a) / sizeof(a[0]);

    int x = 4;
    int i = upper_bound(a, a+n, x) - a;
    i--;

    if(i >= 0 && a[i] == x) cout << "found at " << i << endl;
    else cout << "not found : " << -1 << endl;

    x = 12;
    i = upper_bound(a, a+n, x) - a;
    i--;
    if(i >= 0 && a[i] == x) cout << "found at " << i << endl;
    else cout << "not found : " << -1 << endl;

    print_equal();

}


void application_3(){
    // largest number smaller than some x


    print_equal();

}


void application_4(){
    // smallest number greater than some x


    print_equal();

}


bool comp(pair<int, int> p1, pair<int, int> p2){
    if(p1.second < p2.second) return true; // keeps in ascending order of second
    if(p1.second > p2.second) return false; // not in correct order, so swap

    if(p1.first > p2.first) return true; // keeps in descending
    else return false; // swap
}


void other_useful_functions(){
    vector<int> a;
    a.push_back(4);
    a.push_back(2);
    a.push_back(1);
    a.push_back(5);
    a.push_back(7);
    a.push_back(0);

    vector<int> a2(a);
    vector<int> a3(a);
    
    print_vector_ints(a);
    sort(a.begin(), a.end());
    print_vector_ints(a);
    sort(a2.begin(), a2.end()-3);
    print_vector_ints(a2);
    sort(a3.begin(), a3.end(), greater<int>());
    print_vector_ints(a3);


    pair<int, int> p[] = {{1,2}, {2,1}, {4,1}};

    cout <<  "Elements of pair are \n";

    for(auto it : p){
        cout << it.first << " " << it.second << endl;
    }

    sort(p, p + 3, comp);

    cout <<  "Elements of pair after sorting are \n";

    for(auto it : p){
        cout << it.first << " " << it.second << endl;
    }


    int num = 7;
    int set_bits_in_num = __builtin_popcount(num);
    cout << "Number of set bits in num : " << set_bits_in_num << endl;

    long long num1 = 1241024730431;
    int set_bits_in_num1 = __builtin_popcountll(num1);
    cout << "Number of set bits in num1 : " << set_bits_in_num1 << endl;


    string s = "123";
    int i = 1;
    do {
        cout << i++ << " : " << s << endl;
    } while(next_permutation(s.begin(), s.end()));

    cout << endl;


    s = "321";
    i = 1;
    do {
        cout << i++ << " : " << s << endl;
    } while(next_permutation(s.begin(), s.end()));

    cout << endl;

    // to get all permutations, first sort and then compute permutations

    s = "321";
    sort(s.begin(), s.end());
    i = 1;
    do {
        cout << i++ << " : " << s << endl;
    } while(next_permutation(s.begin(), s.end()));

    cout << endl;


    int maxv = *max_element(a.begin(), a.end());
    cout << "Max elment of a = " << maxv << endl;

    int minv = *min_element(a.begin(), a.end());
    cout << "Min elment of a = " << minv << endl;

    print_equal();
}

int main(){
    // STL 
        // Algorithms
        // Containers
        // Functions
        // Iterators
    pair_example();
    vector_example();
    list_example();
    deque_example();
    stack_example();
    queue_example();
    priority_queue_example();
    set_example();
    multi_set_example();
    unordered_set_example();
    map_example();
    multi_map_example();
    unordered_map_example();
    binary_search_example();
    lower_bound_example();
    upper_bound_example();
    application_1();
    application_2();
    application_3(); // pending 
    application_4(); // pending
    multi_set_example();
    other_useful_functions();

    return 0;
}
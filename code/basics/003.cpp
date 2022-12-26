#include<bits/stdc++.h>

using namespace std;

void pattern1(){
    int i = 5;
    for(; i>0; i--){
        cout << "* * * * *\n"; 
    }
}

void print_line(){
    cout << "\n---------------------------------\n\n";
}

void pattern2(){
    int i = 1, j = 1;
    for(; i<=5; i++){
        for(j = 1; j<=i; j++){
            cout << "*";
        }
        cout << "\n";
    }
}

void pattern3(){
    int i = 1, j = 1;
    for(; i<=5; i++){
        for(j = 1; j<=i; j++){
            cout << j << " ";
        }
        cout << "\n";
    }
}


void pattern4(){
    int i = 1, j = 1;
    for(; i<=5; i++){
        for(j = 1; j<=i; j++){
            cout << i << " ";
        }
        cout << "\n";
    }
}


void pattern5(){
    int i = 5, j = 5;
    for(; i>=1; i--){
        for(j = i; j>=1; j--){
            cout <<"* ";
        }
        cout << "\n";
    }
}


void pattern6(){
    int i = 5, j = 1;
    for(; i>=1; i--){
        for(j = 1; j<=i; j++){
            cout << j << " ";
        }
        cout << "\n";
    }
}


void pattern7(){
    int i = 1, j = 1;
    for(; i<=5; i++){
        for(j = 1; j<= 5- i; j ++){
            cout << " ";
        }
        
        for(j = 1; j<= 2 * i - 1; j++){
            cout << "*";
        }
    
        cout << "\n";
    }
}



void pattern8(){
    int n = 5;
    int i = n, j = 1;
        for(; i>=1; i--){
            for(j = 0; j< n - i; j ++){
            cout << " ";
            }
    
            for(j = 1; j<= 2 * i - 1; j++){
            cout << "*";
            }

            cout << "\n";
        }
}



void pattern9(){
    int n = 5;
     for(int i = 1; i <=n; i++){
            for(int j = 1; j <= n-i; j++){
                cout << " ";
            }
            
            for(int j = 1; j <= i; j++){
                cout << "* ";
            }
            
            cout << "\n";
        }
        
         for(int i = 1; i <=n; i++){
            for(int j = 1; j <= i - 1; j++){
                cout << " ";
            }
            
            for(int j = 1; j <= n - i + 1; j++){
                cout << "* ";
            }
            
            cout << "\n";
        }
}

void pattern10(){
        int k, i = 1, n = 5;
        for(; i< 2* n; i++){
            if (i < n) k = i;
            else k = 2 * n - i;
            
            for(int j = 1; j<=k ; j ++){
                cout << "* ";
            }
            cout << "\n";
        }
}


void pattern11(){
    int n = 5;
    for(int i = 1; i <=n; i++){
        for(int j = 1; j<= i; j++){
            cout << (j + i + 1) % 2 << " ";
        }
        cout << "\n";
        }
}


void pattern12(){
    int n = 5;
        for(int i = 1; i<=n; i++){
        for(int j = 1; j <= i; j ++){
            cout << j <<" ";
        }
        
        for(int j = 1; j <= 2*(n-i); j++){
            cout << "  ";
        }
        
        for(int j = i; j >= 1; j--){
            cout << j << " ";
        }
        
        cout << "\n";
    }
}



void pattern13(){
    int n = 5;
    int k = 1;
    for(int i = 1; i<= n; i++){
        for(int j = 1; j<=i; j++){
            cout << k++ << ' ';
        }
        cout << "\n";
    }
}


void pattern14(){
    int n = 5;
    string alpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
        
        for(int i = 1; i <= n; i++){
            for(int j = 1; j<=i; j++){
                cout<< alpha[j-1] ;
            }
            cout << "\n";
        }
}


void pattern15(){
    int n = 5; 
    string alpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
        for(int i = 1; i <= n; i++){
            for(int j = 1; j<= n-i+1; j++){
                cout << alpha[j-1];
            }
            cout << "\n";
        }


    char ch = 'A';
    cout << "Value of ch = " << ch << " and ch + 1 = " << ch + 1;
}


void pattern16(){
    int n = 5;
    string alpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char ch = 'A';
    for(int i = 1; i <= n; i ++){
        for(int j = 1; j<=i; j++){
            cout <<(char)(ch + i - 1);
        }
        cout << "\n";
    }

}


void pattern17(){
    int n = 5;
    string alpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
     char ch = 'A';
    for(int i = 1; i<=n; i++){
        for(int j = 1;  j<= n - i  ; j++){
            cout << " ";
        }
        
        
        for(int j = 1; j<=i; j++){
            cout << (char)(ch + j - 1); 
        }
        
        for(int j = i; j> 1 ; j--){
            cout << (char)(ch + j- 2);
        }
        
        cout << "\n";
    }
}


void pattern18(){
    int n = 5;
    string alpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    char ch = 'A';
        
    for(int i = 1; i <= n; i++){
        for(int j = 1; j<= i; j++){
            cout << (char)(ch + n - j) << " ";
            
        }
        cout << "\n";
    }

}



void pattern19(){
    int n = 5;
    string alpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int k;
    for(int i = 1; i<= 2*n; i++){
        if(i <=n) k = n - i + 1;
        else k = i - n;
        
        for(int j = 1; j<=k; j ++){
            cout << "*";
        }
        
        for(int j = 1; j <= 2 *n - 2*k; j ++){
            cout << " ";
        }
        
        for(int j = 1; j<=k; j ++){
            cout << "*";
        }
        
        cout  << "\n";
    }
}

void pattern20(){
    int n = 5;
    string alpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int k;
    for(int i = 1; i< 2*n; i++){
        if(i <=n) k = i;
        else k = 2 * n - i;
        
        for(int j = 1; j<=k; j ++){
            cout << "*";
        }
        
        for(int j = 1; j <= 2 *n - 2*k; j ++){
            cout << " ";
        }
        
        for(int j = 1; j<=k; j ++){
            cout << "*";
        }
        
        cout  << "\n";
    }
}

void pattern21(){
    int n = 5;
    string alpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int k;
    for(int i = 1; i <= n; i++){
        if(i == 1 || i == n) {
            k = n; 
            for(int j = 1; j<= k; j++){
                cout << "*";
            }
            
        }
        else {
            k = 1;
        
            for(int j = 1; j<= k; j++){
                cout << "*";
            }
        
            for(int j = 1; j <= n-k-1 ; j++){
                cout << " ";
            }
        
            for(int j = 1; j<= k; j++){
                cout << "*";
            }
        }
        cout << "\n";
    }
}


void pattern22(){
    int n = 5;

}


int main() {
    pattern1();
    print_line();
    pattern2();
    print_line();
    pattern3();
    print_line();
    pattern4();
    print_line();
    pattern5();
    print_line();
    pattern6();
    print_line();
    pattern7();
    print_line();
    pattern8();
    print_line();
    pattern9();
    print_line();
    pattern10();
    print_line();
    pattern11();
    print_line();
    pattern12();
    print_line();
    pattern13();
    print_line();
    pattern14();
    print_line();
    pattern15();
    print_line();
    pattern16();
    print_line();
    pattern17();
    print_line();
    pattern18();
    print_line();
    pattern19();
    print_line();
    pattern20();
    print_line();
    pattern21();
    print_line();
    pattern22();
    print_line();
    return 0;
}
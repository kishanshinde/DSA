#include<bits/stdc++.h>
using namespace std;

//---------------------------------------------------------------------
// In coding plateform this is how the backend code looks like 

// int main(){
//     int t; //testcases
//     cin >> t;
//     for(int i = 0; i <t; i++){
//         int n; 
//         cin >> n;
//         print1(n);
//     }
// }

// void print1(int 1){
//     --here the actual code we will be writing--
// }
//-------------------------------------------------------------------

//1. in the notebook 
// ****
// ****
// ****
// ****

//solutuon :

// int main(){
//     for(int i = 0; i < 4; i++){
//         for(int j = 0; j < 4; j++){
//             cout << " * " ;
//         }
//         cout << endl;
//     }
//     return 0;
// }

//2. in the notebook 
// *
// **
// ***
// ****

//solution

// int main(){
//     for(int i = 1; i <= 6; i++){         
//         for(int j = 1 ; j <= i; j++){  
//             cout << " * ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

//3. in the notebook 
// 1
// 12
// 123
// 1234

//solution

// int main(){
//     for(int i = 1; i <= 6; i++){         
//         for(int j = 1 ; j <= i; j++){  
//             cout << j << "\t";
//         }
//         cout << endl;
//     }
//     return 0;
// }

//4. in the notebook 
// 1
// 22
// 333
// 4444

//solution

// int main(){
//     for(int i = 1; i <= 6; i++){         
//         for(int j = 1 ; j <= i; j++){  
//             cout << i << "\t";
//         }
//         cout << endl;
//     }
//     return 0;
// }


//5. in notebook
// ****
// ***
// **
// *

//aolution
// here make the outer loop to higher nos ; and lower loop upto outer loop value;

// int main(){
//     for(int i = 6; i >= 0 ; i--){
//         for(int j = 1;j <= i; j++){
//             cout << " * ";
//         }
//         cout << endl; 
//     }
//     return 0;
// }


//6. in notebook
// 1234
// 123
// 12
// 1

//aolution
// here make the outer loop to higher nos ; and lower loop upto outer loop value;

// int main(){
//     for(int i = 6; i >= 0 ; i--){
//         for(int j = 1;j <= i; j++){
//             cout << j << "\t";
//         }
//         cout << endl; 
//     }
//     return 0;
// }


//7. in notebook 
//    *   
//   ***
//  *****
// *******

//solution



// int main() {
//     int n = 4; // Number of levels in the pyramid
//     for (int i = 1; i <= n; i++) {
//         // Print leading spaces
//         for (int j = i; j < n; j++) {
//             cout << " ";
//         }
//         // Print asterisks
//         for (int k = 1; k <= (2 * i - 1); k++) {
//             cout << "*";
//         }
//         // Move to the next line
//         cout << endl;
//     }
//     return 0;
// }

//8. in notebook
// *******
//  ***** 
//   ***
//    *

//solution

// int main() {
//     int n = 4; // Number of levels in the pyramid
//     for (int i = n; i >= 1; i--) {
//         // Print leading spaces
//         for (int j = n; j > i; j--) {
//             cout << " ";
//         }
//         // Print asterisks
//         for (int k = 1; k <= (2 * i - 1); k++) {
//             cout << "*";
//         }
//         // Move to the next line
//         cout << endl;
//     }
//     return 0;
// }

//----------------------------------------------

//7. in notebook 
//    *   
//   ***
//  *****
// *******

//solution

// int main(){
//     int n = 4;
//     for(int i = 0; i < n ; i++){
//         // space
//         for(int j = 0 ; j < (n-i-1) ; j++){
//             cout << " ";
//         }
//         //star
//         for(int j = 0 ; j < (2*i+1) ; j++){
//             cout << "*";
//         }
//         //space
//         for(int j = 0 ; j < (n-i-1) ; j++){
//             cout << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

//8. in notebook
// *******
//  ***** 
//   ***
//    *

//solution

// int main(){
//     int n = 4;

//     for(int i = 0 ; i < n ; i++){
//         //space
//         for(int j = 0 ; j < i ; j++){
//             cout << " ";
//         }
//         //star
//         for(int j = 0; j < (2*n-(2*i+1)); j++){
//             cout << "*";
//         }
//         //space
//         for(int j = 0 ; j < i ; j++){
//             cout << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

//9. in notebook
//    *   
//   ***
//  *****
// *******
// *******
//  ***** 
//   ***
//    *

//solution

//combine both 7,8

// int main(){
//     int n = 4;
//     for(int i = 0; i < n ; i++){
//         // space
//         for(int j = 0 ; j < (n-i-1) ; j++){
//             cout << " ";
//         }
//         //star
//         for(int j = 0 ; j < (2*i+1) ; j++){
//             cout << "*";
//         }
//         //space
//         for(int j = 0 ; j < (n-i-1) ; j++){
//             cout << " ";
//         }
//         cout << endl;
//     }
    
//     for(int i = 0 ; i < n ; i++){
//         //space
//         for(int j = 0 ; j < i ; j++){
//             cout << " ";
//         }
//         //star
//         for(int j = 0; j < (2*n-(2*i+1)); j++){
//             cout << "*";
//         }
//         //space
//         for(int j = 0 ; j < i ; j++){
//             cout << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }



//10. in the notebook 
// *
// **
// ***
// ****
// *****
// ****
// ***
// **
// *

//solution

// int main(){
//     int n = 5;
//     for(int i = 1; i <= (2*n-1); i++){
//         int stars = i;
//         if (i > n) stars = (2*n-i);
//         for(int j = 1 ; j <= stars; j++){
//             cout << "*";
//         }      
//         cout << endl;
//     }
//     return 0;
// }

// 11. in the notebook
// 1
// 01
// 101
// 0101
// 10101

// solution

// int main(){
//     int start =1;
//     int n =5;
//     for(int i = 0; i<n ; i++){
//         if(i%2==0) start =1;
//         else start =0;
//         for(int j =0; j <= i;j++){
//             cout << start;
//             start = 1- start;
//         }
//         cout << endl;
//     }
//     return 0;
// }

// 12. in the notebook
// 1      1
// 12    21
// 123  321
// 12344321

// solution

// int main(){
//     int n = 4;
//     int space = 2*(n-1);
//     for(int i =1; i <= n ; i++){
//         //num
//         for(int j = 1; j <= i; j++){
//             cout << j;
//         }
//         //space
//         for(int j =1; j <= space; j++ ){
//             cout << " ";
//         }
//         //num
//         for(int j = i; j >= 1; j--){
//             cout << j;
//     }
//     cout << endl;
//     space -= 2;
// }
// return 0;
// }

// 13. in the notebook
// 1
// 2 3
// 4 5 6
// 7 8 9 10
// 11 12 13 14 15

// solution

// int main(){
//     int n =5;
//     int count = 1;
//     for(int i=1;i <= n; i++){
//         for(int j = 1; j <= i ; j++){
//             cout << count << " ";
//             count++;
//         }
//         cout << endl;
//     }
//     return 0;
// }

// 14. in the notebook
// A
// A B
// A B C
// A B C D
// A B C D E

// solution

// int main(){
//     int n = 5;
//     for(int i = 1; i <= n; i++){
//         for(char j = 'A'; j <= 'A'+ i; j++){
//                 cout << j;
//             }
//             cout << endl;
//     } 
//     return 0;
// }

// 15. in the notebook
// ABCDE
// ABCD
// ABC 
// AB 
// A 

// solution

// int main(){
//     int n = 6;
//     for(int i = n; i >= 0 ; i--){
//         for(char j = 'A';j <= 'A'+i; j++){
//             cout << j ;
//         }
//         cout << endl; 
//     }
//     return 0;
// }

// 16. in the notebook
// A
// B B
// C C C
// D D D D
// E E E E E

//solution

// int main(){
//     int n = 5;
//     char c = 'A';
//     for(int i = 1; i <= n; i++){
//         for(int j = 1; j <= i; j++){
//             cout << c;
//         }
//         c = c + 1;
//         cout << endl;
//     }
//     return 0;
// }

// 17. in the notebook
//    A
//   ABA 
//  ABCBA 
// ABCDCBA

// solution
//mysol
// int main(){
//     int n = 4;
//     for(int i =1; i <= n; i++){
//         //space
//         for(int j = 1; j <= (n-i); j++){
//             cout << " ";
//         }
//         //alphabet
//         char alp = 'A';
//         int breakpoint = i;
//         for(int j = 1; j <= i+(i-1); j++){
//             cout << alp;
//             if (j < breakpoint) alp++;
//             else alp--; 
//         }
//         //space
//         for(int j = 1; j <= (n-i); j++){
//             cout << " ";
//     }
//     cout << endl;
//     }
//     return 0;
// }

//chatgpt
// int main() {
//     int n = 4;
//     for (int i = 1; i <= n; i++) {
//         // Print leading spaces
//         for (int j = 1; j <= (n - i); j++) {
//             cout << " ";
//         }

//         // Print increasing alphabets
//         char alp = 'A';
//         for (int j = 1; j <= i; j++) {
//             cout << alp;
//             alp++;
//         }

//         // Decrement by 2 to reset alp for the decreasing part
//         alp -= 2;
//         for (int j = 1; j < i; j++) {
//             cout << alp;
//             alp--;
//         }

//         cout << endl;
//     }
//     return 0;
// }


// 18. in the notebook
// E 
// DE 
// CDE 
// BCDE 
// ABCDE

// solution

// int main(){
//     int n =5;
//     for(int i = 1; i <= n; i++){
//         char c= 'F' -i;
//         for(int j = 1; j <= i; j++){
//             cout << c;
//             c++;
//         }
//         cout << endl;
//     }
//    return 0;
// }


//19. in the notebook
// **********
// ****  ****
// ***    ***
// **      **
// *        *
// *        *
// **      ** 
// ***    ***
// ****  ****
// **********

//solution
// int main(){
//     int n = 5;
//     int above_space = 0;
//     for(int i =0; i < n; i++){
//         //stars
//         for(int j=1; j <= n-i; j++){
//             cout << "*";
//         }
//         //space
//         for(int j =0; j < above_space; j++){
//             cout << " ";
//         }
//         //stars
//         for(int j=1; j <= n-i; j++){
//             cout << "*";
//         }
//         above_space += 2;
//         cout << endl;
//     }
//     int below_space = 8;
//     for(int i = 1; i <= n; i++){
//         //stars
//         for(int j=1; j <= i; j++){
//             cout << "*";
//         }
//         //space
//         for(int j =1; j <= below_space; j++){
//             cout << " ";
//         }
//         //stars
//         for(int j=1; j <= i; j++){
//             cout << "*";
//         }
//         below_space -= 2;
//         cout << endl;
//     }
//     return 0;
// }


// 20. in the notebook
// *        *
// **      **
// ***    ***
// ****  ****
// **********
// ****  ****
// ***    ***
// **      **
// *        *

// solution

// int main(){
//     int n =5;
//     int upper_space=8;
//     for(int i= 1; i<= n; i++){
//         //star
//         for(int j = 1; j <= i ; j++){
//             cout << "*";
//         }
//         //space
//         for(int j = 1; j <= upper_space; j++){
//             cout << " ";
//         }
//         //star
//         for(int j = 1; j <= i ; j++){
//             cout << "*";
//         }
//         upper_space -= 2;
//         cout<<endl;
//     }
//     int lower_space = 2;
//     for(int i = 1; i < n; i++){
//         //star
//         for(int j = 1; j <= n-i ; j++){
//             cout << "*";
//         }
//         //space
//         for(int j = 1; j <= lower_space; j++){
//             cout << " ";
//         }
//         //star
//         for(int j = 1; j <= n-i ; j++){
//             cout << "*";
//         }
//         lower_space += 2;
//         cout<<endl;
//     } 
//     return 0;
// }

// 21. in the notebook

// ****
// *  *
// *  *
// ****

// solution

// int main(){
//     int n = 2;
//     int space =0;
//     for(int i =0; i < n; i++){
//         //star
//         for(int j = 0; j < n-i; j++ ){
//             cout << "*";
//         }
//         //space
//         for(int j = 0; j < space; j++){
//             cout << " ";
//         }
//         //star
//         for(int j = 0; j < n-i; j++ ){
//             cout << "*";
//         }
//         space +=2;
//         cout << endl;
//     }
//     int spaces = 2;
//     for(int i = 1; i <= n ; i++){
//        //star
//         for(int j = 0; j < i; j++ ){
//             cout << "*";
//         }
//         //space
//         for(int j = 0; j < spaces; j++){
//             cout << " ";
//         }
//         //star
//         for(int j = 0; j < i; j++ ){
//             cout << "*";
//         }
//         spaces -=2;
//         cout << endl; 
//     }
//     return 0;
// }

// or 

// int main(){
//     int n = 4;
//     for(int i=0; i < n; i++){
//         for(int j = 0; j < n; j++){
//             if(i==0||i== (n-1)|| j == 0|| j == (n-1)){
//                 cout <<  " * ";
//             }
//             else 
//             cout << "   ";
//         }
//         cout <<endl; 
//     }
//     return 0;
// }

// 22. in the notebook

// 4444444
// 4333334
// 4322234
// 4321234
// 4322234
// 4333334
// 4444444

// solution

// int main(){
//     int n = 4;
//     for(int i = 0 ; i < 2*n-1; i++){
//         for(int j =0; j < 2*n-1; j++){
//             int top = i;
//             int left = j;
//             int right = (2*n -2)-j;
//             int bottom = (2*n -2)-i;
//             cout << (n -min(min(top,bottom),min(left, right)));
//         }
//         cout << endl;
//     }
//     return 0;
// }
#include <iostream>
#include <iomanip>
#include <vector> 
#include<set>
using namespace std;

const int COLS = 3;
// 
int sum(const int arr[], int n); 
// int largest(const int arr[], int n); 
int smallest(const int arr[], int n); 
double avg(const int arr[], int n);
bool findElement(const int arr[], int n, int num); 
int indexOf(const int arr[], int n, int num); 
int evenCount(const int arr[], int n); 
int oddCount(const int arr[], int n); 
void largestThree(const int arr[], int n); 
void smallestThree(const int arr[], int n); 
int secondLargest(const int arr[], int n); 
int secondSmallest(const int arr[], int n); 
void sortAsc(const int arr[], int n); 
void sortDesc(const int arr[], int n); 
void frequency(const int arr[], int n); 
int firstRepeatingElement(const int arr[], int n); 
int secondRepeatingElement(const int arr[], int n); 
int thirdRepeatingElement(const int arr[], int n); 
int findPairSum(const int arr[], int n, int sum); 
int findModSum(const int arr[], int n); 
int findDuplicate(const int arr[], int n); 
void reverse(const int arr[], int n); 
vector<int> reverseToVector(const int arr[], int n);
vector<int> sortAscToVector(const int arr[], int n); 
vector<int> sortDescToVector(const int arr[], int n);
void addMatrix(const int arr1[][COLS], const int arr2[][COLS], int r); 
vector<vector<int>> addMatrixToVector(const int arr1[][COLS], const int arr2[][COLS], int r);
void diffMatrix(const int arr1[][COLS], const int arr2[][COLS], int r);
vector<vector<int>> diffMatrixToVector(const int arr1[][COLS], const int arr2[][COLS], int r);
void extractRow(const int arr1[][COLS], int r, int rowNum);
vector<int> extractRowToVector(const int arr1[][COLS], int r, int rowNum);
void extractColumn(const int arr1[][COLS], int r, int colNum);
vector<int> extractColumnToVector(const int arr1[][COLS], int r, int colNum);
void mainDiagonal(const int arr1[][COLS], int r);
vector<int> mainDiagonalToVector(const int arr1[][COLS], int r);
void secondaryDiagonal(const int arr1[][COLS], int r);
vector<int> secondaryDiagonalToVector(const int arr1[][COLS], int r);
void print2DMatrix(const int arr1[][COLS], int r);
vector<int> convert2DToVector(const int arr1[][COLS], int r);
void printRowsSum(const int arr1[][COLS], int r);
vector<int> rowsSumToVector(const int arr1[][COLS], int r);
void printColumnsSum(const int arr1[][COLS], int r);
vector<int> columnsSumToVector(const int arr1[][COLS], int r);
vector<int> largestRowsElement(const int arr1[][COLS], int r);
vector<int> smallestRowsElement(const int arr1[][COLS], int r);
vector<int> largestColumnsElement(const int arr1[][COLS], int r);
vector<int> smallestColumnsElement(const int arr1[][COLS], int r);
vector<double> avgRowsElement(const int arr1[][COLS], int r);
vector<double> avgColumnsElement(const int arr1[][COLS], int r);
double avgMainDiagonal (const int arr1[][COLS], int r);
double avgSecondaryDiagonal (const int arr1[][COLS], int r);
int largestMainDiagonal (const int arr1[][COLS], int r);
int smallestMainDiagonal (const int arr1[][COLS], int r);
int largestSecondaryDiagonal (const int arr1[][COLS], int r);
int smallestSecondaryDiagonal (const int arr1[][COLS], int r);
int evenCount2DMatrix(const int arr1[][COLS], int r);
int oddCount2DMatrix(const int arr1[][COLS], int r);
int evenSum2DMatrix(const int arr1[][COLS], int r);
int oddSum2DMatrix(const int arr1[][COLS], int r);
vector<int> reverse2DMatrix(const int arr1[][COLS], int r);

vector<vector<int>> soru29;
vector<vector<int>> soru27;

int main()
{
    
//      int test1[]={1,2,3,4,5};
//   cout << "sum           :"    << sum (test1,5) <<endl;//1
//      cout << "largest       :"    << largest (test1,5) <<endl;//2
//      cout << "smallest      :"    << smallest(test1,5) <<endl;//3
//      cout << "average       :"    << avg(test1,5) <<endl;//4
//      cout << "find element  :"    <<  findElement(test1,5,2) <<endl;//5
//      cout << "index Of      :"    <<   indexOf(test1,5,5) <<endl;//6
//      cout << "even numbers  :"    <<   evenCount(test1,5) <<endl;//7
//      cout << "odd Count     :"    << oddCount(test1,5) <<endl;//8
//      largestThree(test1,5);//9
//      cout << "" <<endl;
//      smallestThree(test1,5);//10
//      cout << "" <<endl;
//      cout << "second largest:"<< secondLargest(test1,5) <<endl;//11 
//      cout << "second Smallest:"<<  secondSmallest(test1,5) <<endl; //12
//      sortAsc(test1,5);//13
//      cout << "" <<endl; 
//      sortDesc(test1,5); //14
//      cout << "" <<endl; 
     
//        int test2[]={3,1,5,1,5,7,9,7,9};

//  frequency(test2,9);//15


//   cout << "first Repeating Element :"<< firstRepeatingElement(test2, 9); //16


// reverse(test1,5); //22


// int test3[]={3,1,5,1,5,7,9,7,9};//23
// vector<int> soru23(9); //23
// soru23 = reverseToVector(test3, 9);//23
// for (int i = 0; i < 9; i++)//23
// {
//      cout<<" "<<soru23[i]<<" "; //23
// }

// cout<< endl ;  //23





// const int ba[3][3] = {{10, 11, 12}, {13, 14, 15}, {16, 17, 18}};//26
//   const int ab[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};  //26

//  addMatrix(ba,ab,3); //26
 


// //soru 27------------------------------------------
//     const int r1[][3] = {{10, 11, 12}, {13, 14, 15}, {16, 17, 18}};
//     const int r2[][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};  
//      soru27 =  addMatrixToVector (r1, r2,3);
//      for(int is27 = 0; is27 < 3; is27++){
//           for(int js27 = 0; js27 < 3; js27++ ){
//                cout<<" " <<soru27[is27][js27];
//           }
//           cout<<"\n";
//      }

// // 27 son------------------------------------------



//  const int a[3][3] = {{10, 11, 12}, {13, 14, 15}, {16, 17, 18}};//28
//   const int b[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};  //28

//  diffMatrix(a,b,3); //28



//     //soru 29-------------------------------------- 
//     const int d1[][3] = {{10, 11, 12}, {13, 14, 15}, {16, 17, 18}};
//     const int d2[][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};  
//      soru29 =  diffMatrixToVector(d1, d2, 3);
//      for(int is29 = 0; is29 < 3; is29++){
//           for(int js29 = 0; js29 < 3; js29++ ){
//                cout<<" " <<soru29[is29][js29];
//           }
//           cout<<"\n";
//      }

// // 29 son



// int arr1 [3][3] ={
//      {2,3,4},
//      {4,5,6},
//      {7,8,9}
// } ;
// extractRow(arr1, 3, 2);



// 		 //soru 34 -----------------------------------
// 		 const int d3[][3] = {{1, 2, 3,}, {4, 5, 6}, {7, 8, 9}};
// 		 mainDiagonal(d3, 3);
// //-----------------------------------------



// //soru43
// 		 cout<<"soru43------------"<<endl;
// 		 vector<int> soru43;
//      const int d43[][COLS] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}};
//      soru43 = columnsSumToVector(d43, 4);
// 		 for(int i = 0; i < 4; i++){
// 		 	cout<<" "<< soru43[i];
// 		 }
// 		 cout<<endl;	
// //--------------------------------




// 		 //soru 50
// 		 float ort = 0;
//      ort = avgMainDiagonal (d3, 3);
// 			cout<<"ort : "<<ort<<endl; 

//                //----------------




// 		 //soru 53
// 		 int theSmallest; 
// 		 const int d53[][COLS] = {{5, 2, 4}, {1, 4, 9}, {3, 2, 1}};
// 		 theSmallest = smallestMainDiagonal(d53 ,3);
// 		 cout<<"the smallest : "<<theSmallest<<endl;
//            //----------------------------------------------

     

		
// 		 //soru 60 -------------------------
// 		 cout<<"soru60\n";
// 		 vector<int> soru60;
// 	 	 ;const int d60[][COLS] = {{10, 11, 12}, {13, 14, 15}, {16, 17, 18}, {19, 20, 21}};
//    	 soru60 = reverse2DMatrix(d60, 3);
 
//      for(int is60 = 0; is60 < 12; is60++){
//                cout<<" " <<soru60[is60];     
//      }
// 		 cout<<endl;


// int n, m;  test46
// cin >> n >> m;
//     int arr1[][COLS](n, m);
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             std::cin >> mat[i][j];
//         }
//     }

//      //test 48 
//     double test48[4][3] = {10, 15, 5, 8, 12, 11, 6, 5, 4, 2, 12, 17};
//     cout<<avgRowsElement;
    
//     //test 49
//     double test49[4][3] = {1,2,3,4,5,6,7,8,9,10,12,11};
//     cout<<avgRowsElement;

//     //51.soru
//     int n = 3;
//     int a[][MAX] = { {1, 2, 3 },
//                      {4, 5, 6} ,
//                     {7, 8, 9 }, }

//     //test52
//      inttheSmallest; 
//       constint d52[][COLS] = {{5, 2, 4}, {1, 4, 9}, {3, 2, 1}};
//       the-laergesy= largestMainDiagonal(d52 ,3);
//       cout<<"thelargest : "<<thelargest<<endl;

//     //test54
//     int dizi[3][3] = {4,8,16,98,105,7};

//     //test 55
//     int dizi[3][3] = [2,3,8,0,6,7]

//     //test56
//     int dizi[4][3] = {10,12,15,17,3,6,8,10,9,11,14,8};
//     for(int i=0;i<4;i++)
//     {
//         for(int j=0; j<3; j++)
//         {
//            cout<<i+1<<".nci eleman giriniz : ";  cin >> dizi[i][j];
//         }
//     cout<<"Çift Sayilar : " <<cift(dizi[][]) <<endl;

//     //test57
//     int dizi[4][3] = {10,12,15,17,3,6,8,10,9,11,14,8};
//     for(int i=0;i<4;i++)
//     {
//         for(int j=0; j<3; j++)
//         {
//           cout<<i+1<<".nci eleman giriniz : ";  cin >> dizi[i][j];
//        }
//     cout<<"Tek Sayilar : " <<tek(dizi[][])<<endl;

//     //58.soru
//     int dizi[4][3] = {10,12,15,17,3,6,8,10,9,11,14,8};
//     for(int i=0;i<4;i++)
//     {
//         for(int j=0; j<3, j++)
//         {
//            cout<<i+1<<".nci eleman giriniz : ";  cin >> dizi[i][j];
//        }
//         cout<<"Toplam : " <<dizitopla(dizi[4]3[])<<endl;
//     }

//     //59.soru
//     int dizi[4][3] = {10,12,15,17,3,6,8,10,9,11,14,8};
//     for(int i=0;i<4;i++)
//     {
//        for(int j=0; j<3, j++)
//        {
//           cout<<i+1<<".nci eleman giriniz : ";  cin >> dizi[i][j];
//         }
//        cout<<"Toplam : " <<dizitopla(dizi[4]3[])<<endl;
//     }
// int n, m;  test46
//     cin >> n >> m;
//     int arr1[][COLS](n, m);
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//          {
//             cin >> mat[i][j];
//          }
//     }

//     //test 48 
//     double test48[4][3] = {10, 15, 5, 8, 12, 11, 6, 5, 4, 2, 12, 17};
//     cout<<avgRowsElement;
    
//     //test 49
//     double test49[4][3] = {1,2,3,4,5,6,7,8,9,10,12,11};
//     cout<<avgRowsElement;

//     //51.soru
//     int n = 3;
//     int a[][MAX] = { {1, 2, 3 },
//                      {4, 5, 6} ,
//                      {7, 8, 9 }, }

//     //test52
//     inttheSmallest; 
//      constint d52[][COLS] = {{5, 2, 4}, {1, 4, 9}, {3, 2, 1}};
//      the-laergesy= largestMainDiagonal(d52 ,3);
//      cout<<"thelargest : "<<thelargest<<endl;

//     int dizi[3][3] = {4,8,16,98,105,7};   //test54
 

//     //test 55
//     int dizi[3][3] = [2,3,8,0,6,7]

//     //test56
//     int dizi[4][3] = {10,12,15,17,3,6,8,10,9,11,14,8};
//     for(int i=0;i<4;i++)
//     {
//         for(int j=0; j<3; j++)
//        {
//           cout<<i+1<<".nci eleman giriniz : ";  cin >> dizi[i][j];
//        }
//     cout<<"Çift Sayilar : " <<cift(dizi[][]) <<endl;

//     //test57
//     int dizi[4][3] = {10,12,15,17,3,6,8,10,9,11,14,8};
//     for(int i=0;i<4;i++)
//     {
//         for(int j=0; j<3; j++)
//         {
//            cout<<i+1<<".nci eleman giriniz : ";  cin >> dizi[i][j];
//         }
//     cout<<"Tek Sayilar : " <<tek(dizi[][])<<endl;

//     //58.soru
//     int dizi[4][3] = {10,12,15,17,3,6,8,10,9,11,14,8};
//     for(int i=0;i<4;i++)
//     {
//         for(int j=0; j<3, j++)
//         {
//            cout<<i+1<<".nci eleman giriniz : ";  cin >> dizi[i][j];
//         }
//         cout<<"Toplam : " <<dizitopla(dizi[4]3[])<<endl;
//     }

//     //59.soru
//     int dizi[4][3] = {10,12,15,17,3,6,8,10,9,11,14,8};
//     for(int i=0;i<4;i++)
//     {
//         for(int j=0; j<3, j++)
//         {
//            cout<<i+1<<".nci eleman giriniz : ";  cin >> dizi[i][j];
//         }
//        cout<<"Toplam : " <<dizitopla(dizi[4]3[])<<endl;
//     }










     return 0;
}


// fonksiyonlar 




int sum(const int arr[], int n){
          int sum = 0;
     for (int i = 0; i < n ; i++)
     {
          sum += arr[i];
     }
     return sum;
}



int largest(const int arr[], int n){
     int largest = 0 ;
     for (int i = 0; i < n ; i++)
     {
          if(i == 0){
               largest = arr[i];
          }
          if (arr[i] > largest){ 
               largest = arr[i];
          }

     }
     return largest;
}


int smallest(const int arr[], int n)
{
     int smallest =99999999 ;
     for (int i = 0; i < n ; i++)
     {
          if (smallest > arr [i]){ 
              smallest = arr[i];
          }
     
          
     }
     return smallest ;

}


double avg(const int arr[], int n){
     double avg=0;
     double total = 0;
for (int i = 0; i < n ; i++){
   total = total+arr[i];
}
avg =total/n ;

return avg ;
}


 bool findElement(const int arr[], int n, int num){
     
bool findElement  ;
int counter =0;
for (int i = 0; i < n ; i++){
   if (arr[i] == num){
      counter = counter +1;  
     }
 }

 if (0<counter){ return true; }
     
 else{ return false; }
 
}

int indexOf(const int arr[], int n, int num){
     
int indexOf = 0;
for (int i = 0; i < n ; i++){
if ( arr[i] == num){
     indexOf = i;
    break;
     }
    else{
       indexOf = -1;
     }
}
return indexOf;
}


int evenCount(const int arr[], int n){
      int evenCount= 0;
     for (int i = 0; i < n ; i++){
if ( arr[i] %2 ==0 ){
   evenCount= evenCount +1 ;
   
}
     }
   return evenCount;  
}



int oddCount(const int arr[], int n){

     int oddCount= 0;
for (int i = 0; i < n ; i++){
      if ( arr[i] %2 !=0 ){
      oddCount= oddCount +1 ;
      
}
}
   return oddCount;  
}


void largestThree(const int arr[], int n){
    int num1=arr[0];
    int num2=arr[0];
    int num3=arr[0];

    for (int i = 1; i < n ; i++)
    {
        if(num1<arr[i]){
	       num3=num2;
		  num2=num1;
	       num1=arr[i];
	   }
	   else if(num2<arr[i]){
		  num3=num2;
		  num2=arr[i];	
	   }
	   else if(num3<arr[i]){
  	       num3=arr[i];	
	   }  
     }//for döngüsü sonu
     cout << "largest Three : "<< num1<< " " << num2 << " " << num3;
}//largestThree fonksiyonu



void smallestThree(const int arr[], int n){
    int num1=arr[2];
    int num2=arr[2];
    int num3=arr[2];

    for (int i = 0; i < n ; i++)
    {
        if(num1>arr[i]){
	       num3=num2;
		  num2=num1;
	       num1=arr[i];
	   }
	   else if(num2>arr[i]){
		  num3=num2;
		  num2=arr[i];	
	   }
	   else if(num3>arr[i]){
  	       num3=arr[i];	
	   }  
     }//for döngüsü sonu
     cout << "smallest Three : "<< num1<< " " << num2 << " " << num3;
}//smallestThree fonksiyonu


int secondLargest(const int arr[], int n){
     int max1, secondLargest ,size;
     max1 = arr[0];
     secondLargest = arr[1];

     for (int i = 1; i <  n ; i++){
          if( arr[i] > max1){
             secondLargest = max1;
             max1= arr[i];
          }
          else if (arr[i] > secondLargest){
                secondLargest = arr[i];
          }
     }//for döngüsü sonu
     
     return secondLargest ;
}//secondLargest fonksiyonu



int  secondSmallest(const int arr[], int n){
     int max1,  secondSmallest ,size;
     max1 = arr[0];
     secondSmallest= arr[1];

     for (int i = 1; i <  n ; i++){
          if( arr[i] < max1){
             secondSmallest = max1;
             max1= arr[i];
          }
          else if (arr[i] <  secondSmallest ){
                secondSmallest = arr[i];
          }
     }//for döngüsü sonu
     
     return  secondSmallest  ;
}// secondSmallest  fonksiyonu


//KÜÇÜKTEN  BÜYÜĞE
 void sortAsc(const int arr[], int n){
    
	int temp, i;
     int arr2[n];

     for(int k = 0; k < n; k++){
          arr2[k] = arr[k];
     } 
     
     for(i = 0; i < (n - 1); i++){
          for(int j = 0; j < (n - 1); j++)
          {
               if( arr2[j] > arr2[j + 1] ){
                    temp       = arr2[j];
                    arr2[j]     = arr2[j + 1];
                    arr2[j + 1] = temp;
               }
          }//for döngüsü sonu   
     }//for döngüsü sonu

     cout << "sort Asc :";
     for(i = 0; i < n; i++){ 
          cout << arr2[i] << " ";  
     }
}// sortAsc  fonksiyonu


//büyükten küçüğe
 void  sortDesc (const int arr[], int n){
    
	int temp, i;
     int arr2[n];

     for(int k = 0; k < n; k++){
          arr2[k] = arr[k];
     } 
     
     for(i = 0; i < (n - 1); i++){
          for(int j = 0; j < (n - 1); j++)
          {
               if( arr2[j] < arr2[j + 1] ){
                    temp       = arr2[j];
                    arr2[j]     = arr2[j + 1];
                    arr2[j + 1] = temp;
               }
          }//for döngüsü sonu   
     }//for döngüsü sonu

     cout << " sort Desc:";
     for(i = 0; i < n; i++){ 
          cout << arr2[i] << " ";  
     }
}//  sortDesc  fonksiyonu



//15



void frequency(const int arr[], int n){
     
     int arr2[n];
     for(int k = 0; k < n; k++){
          arr2[k] = arr[k];
          } 

     int sayac;
     for (int i = 0; i < n; i++ ){
          sayac = 0;
          for (int j = 0; j <n ; j++){
               if(i== arr2[j]){
                    sayac++;
               }

          }//for döngüsü sonu
          if( sayac != 0){
               cout << i<< " number : "<< sayac << endl;
          }
     }//for döngüsü sonu
}// frequency  fonksiyonu








//16
int firstRepeatingElement(const int arr[], int n){
    int firstRepeatingElement;
     int arr2[n];

     for(int k = 0; k < n; k++){
          arr2[k] = arr[k];
     } 

 int min = -1;
   set<int> myset; 

    // Traverse the input array from right to left 
    for (int i = n - 1; i >= 0; i--) 
      { 
      // If element is already in hash set, update min 
       if (myset.find(arr2[i]) != myset.end()) 
       min = i; 

      else   // Else add element to hash set 

            myset.insert(arr2[i]); 
      } 

      // Print the result 

    if (min != -1)
     {

        firstRepeatingElement = arr2[min]; 
      }
            
    else {
           firstRepeatingElement = 0 ; 
         
    }

     // Driver method to test above method 
  
return  firstRepeatingElement  ;
}//firstRepeatingElement sonu














//22
void reverse(const int arr[], int n){
     
    int  size  = sizeof(arr)/sizeof(arr[0]);
       cout <<" reverse : ";
       for (int i = n - 1; i >= 0; i--) {
       cout << arr[i] << ' ';
    }
     cout <<endl;
}




//soru23
vector<int> reverseToVector(const int arr[], int n){
     
     vector<int> reverseToVector(n); 
     int j = 0;
     for (int i = n - 1; i >= 0; i--) {
       reverseToVector[j] = arr[i];
       j++;
    }
    return reverseToVector;
}



//26
void addMatrix(const int arr1[][COLS], const int arr2[][COLS], int r){

 int addMatrix [3][3];
 
     for(int i = 0; i < 3; i++){
          
          for(int j = 0; j < 3; j++ ){
 
          addMatrix[i][j] = arr1[i][j]  + arr2[i][j];
          }
     }
      for(int is27 = 0; is27 < 3; is27++){
          for(int js27 = 0; js27 < 3; js27++ ){
               cout<<" " << addMatrix[is27][js27];
          }
          cout<<"\n";
     }
}//addMatrix


//27
vector<vector<int>> addMatrixToVector(const int arr1[][COLS], const int arr2[][COLS], int r){
     vector<vector<int>> addMatrixToVector (3 ,vector<int>(3));

     for(int i = 0; i < 3; i++){
          
          for(int j = 0; j < 3; j++ ){
 
             addMatrixToVector [i][j] = arr1[i][j] + arr2[i][j];
          }
     }
      
     return addMatrixToVector; 
     
}//addMatrixToVector



//28
void diffMatrix(const int arr1[][COLS], const int arr2[][COLS], int r){

 int  diffMatrix [3][3];
 
     for(int i = 0; i < 3; i++){
          
          for(int j = 0; j < 3; j++ ){
 
             diffMatrix[i][j] = arr1[i][j] - arr2[i][j];
          }
     }
      for(int is28 = 0; is28 < 3; is28++){
          for(int js28 = 0; js28 < 3; js28++ ){
               cout<<" " << diffMatrix [is28][js28];
          }
          cout<<"\n";
     }

}//diffMatrix



//29
vector<vector<int>> diffMatrixToVector(const int arr1[][COLS], const int arr2[][COLS], int r){

 
     vector<vector<int>> diffMatrix(3 ,vector<int>(3));

     for(int i = 0; i < 3; i++){
          
          for(int j = 0; j < 3; j++ ){
 
             diffMatrix[i][j] = arr1[i][j] - arr2[i][j];
          }
     }
      
     return diffMatrix; 
}//diffMatrixToVector






//30
void extractRow(const int arr1[][COLS], int r, int rowNum){

 
 cout <<"extract Row : ";
     for(int i = 0; i < 3; i++){
        
          for(int j = 0; j < 3; j++ ){
  j= rowNum;
          cout  <<arr1[i][j]<< " " ; 
          }
     }
      
  
}//extractRow





//soru34
void mainDiagonal(const int arr1[][COLS], int r){
	
	for(int i = 0; i < 	r; i++){
		cout<<" "<< arr1[i][i];
	}
	cout<<"\n";
}//soru34 sonu





 //soru43
vector<int> columnsSumToVector(const int arr1[][COLS], int r){
	vector<int> toplam(r);
	for(int i = 0; i < r; i++){
		toplam[i] = 0;
	}
	
	for(int i = 0; i < r; i++){
		for(int j = 0; j < COLS; j++){
			toplam[i] = toplam[i] + arr1[i][j];	
		}
	}	

	return toplam;
}












//soru50
double avgMainDiagonal (const int arr1[][COLS], int r){
	
	float ort = 0;  

	for(int i = 0; i < 	r; i++){
		ort = ort + arr1[i][i];
	}

	return ort;
}//soru50










//soru53
int smallestMainDiagonal (const int arr1[][COLS], int r){

	int mainDiagonal[COLS];
	int smallest;
	for(int i = 0; i < 	r; i++){
		mainDiagonal[i] = arr1[i][i];
	}
  
	for(int i = 0; i < COLS; i++){
		if(i == 0){
			smallest = mainDiagonal[i];
		}
		if(mainDiagonal[i] < smallest){
			smallest = mainDiagonal[i];
		}
	}

	return smallest;
}












//soru60
vector<int> reverse2DMatrix(const int arr1[][COLS], int r){

 	vector<int> reverse1Matrix(12);
	int s = 0;
	for(int i = 3; i >= 0; i--){
		for(int j = r-1; j >= 0; j--){
			reverse1Matrix[s] = arr1[i][j];
			s++;
		}
	}

	return reverse1Matrix;
}//soru60


//1.soru
intsum(constintarr[], intn);
    {
    intsum = 0;
    for (int i = 0; i < n; i++)
       {
         sum += arr[i];
        }

    returnsum; 
    }

//46.soru
vector<int>largestColumnsElement(constintarr1[][COLS], intr); 
    {
        int r;
       for (int i = 0; i < r; i++)
       {
           intmaxm = mat[0][i];
           for (int j = 1; j < arr1[][COLS]; j++) 
           {
              if (mat[j][i] >maxm)
                  maxm = mat[j][i];
           }
           std::cout<<maxm<<std::endl;
           returnlargestColumnsElement;
       }
    }
//47.soru

//48.soru
vector<double>avgRowsElement(constintarr1[][COLS], intr);
    {
        doubletest48[4][3] = {10, 15, 5, 8, 12, 11, 6, 5, 4, 2, 12, 17};
        floatort; 
        for(int r = 0; r <4; r++)
        {
            ort = (test48[r][0] + test48[r][1] + test48[r][2]) + test48[r][3] / 4;
            cout<< r <<". satırın ortalaması: "<<endl;  
        }   
        returnavgRowsElement;
    }
//49.soru
 vector<double>avgColumnsElement(constintarr1[][COLS], intr);
  {
        doubletest49[4][3] = {1,2,3,4,5,6,7,8,9,10,12,11};
        floatort; 
        for(int r = 0; r <3; r++)
        {
            ort = (test48[0][r] + test48[1][r] + test48[2][r]) / 3;
            cout<< r <<". sğtunun ortalaması: "<<endl;  
        }   
        returnavgColumnsElement;
    }
//51.soru
doubleavgSecondaryDiagonal (constintarr1[][COLS], intr);
{
    floatort = 0;  

    for(int i = 0; i <  n; i++){
        ort = ort + arr1[i][i];
    }

    returnort;
}
//52.soru
intlargestMainDiagonal (constintarr1[][COLS], intr);
    intlargestDiagonal[COLS];
    intlargest;
    for(int i = 0; i <  r; i++){
        largestDiagonal[i] = arr1[i][i];
    }
  
    for(int i = 0; i < COLS; i++){
        if(i == 0){
            largest = largestDiagonal[i];
        }
        if(largestDiagonal[i] <largest){
            largest = largestDiagonal[i];
        }
    }

    returnlargest;
}

//54.soru
intlargestSecondaryDiagonal (constintarr1[][COLS], intr);
{
intenBuyukSayı;
enBuyukSayı = dizi[0][0];
for (int i = 0; i <3; i++) 
    {
       for (int j = 0; j <3; j++)
       {
           if (enBuyukSayı<dizi[i][j])
           {
               enBuyukSayı = dizi[i][j];
           }
       }
       cout<<"diziniz en büyük elemanı: "<<enBuyukSayı;
   }
    returnsecondary;
}
//55.soru
intsmallestSecondaryDiagonal (constintarr1[][COLS], intr); 
{
intenkucukSayı;
enkucukSayı = dizi[0][0];
for (int i = 0; i <3; i++) 
    {
       for (int j = 0; j <3; j++)
       {
           if (enkucukSayı>dizi[i][j])
           {
               enkucukSayı = dizi[i][j];
           }
       }
       cout<<"diziniz en küçük elemanı: "<<enBuyukSayı;
   }
    returnsmallestSecondary;
}
//56.soru
intevenCount2DMatrix(constintarr1[][COLS], intr);
{
    intcift=0;
    for(int i=0;i<r;i++){
        for(int j=0; j<r; j++)
        {
             if(dizi[i][j]%2==0)
            {
               cift+=1;
            }
        }
    }
    return evenCount2DMatrix;
}
//57.soru
intoddCount2DMatrix(constintarr1[][COLS], intr);
{
    int tek=0;
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<r, j++)
        {
             if(dizi[i][j]%2!=0)
             {
                tek+=1;
             }
        }
    }
        return oddCount2DMatrix;
}
//58.soru
intevenSum2DMatrix(constintarr1[][COLS], intr);
{
    intcift=0, topla=0;
    for(int i=0;i<r;i++){
        for(int j=0; j<r; j++)
        {
             if(dizi[i][j]%2==0)
            {
               cift+=1;
               topla+= dizi[i][j];
            }
    }
    return evenCount2DMatrix;
}
//59.soru
intoddSum2DMatrix(constint arr1[][COLS], int r);
{
int tek=0, topla=0;
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<r, j++)
        {
             if(dizi[i][j]%2!=0)
             {
                tek+=1;
                topla+= dizi[i][j];
             }
        }
    }
    return oddCount2DMatrix;
}

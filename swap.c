void swap_max( int arr[], int l, int n){
 int swap =0;
 int index =0;
 int a=-9999;
 for( int i =n;i<l;i++){
 if(a<arr[i]){
 a=arr[i];
 index=i ;
 
 }
 }
 
 swap=arr[index];
 arr[index]=arr[n];
 arr[n] = swap;
 }
 
 
 void ssort( int arr[], int l)
 {
 for(int i=0;i<=l-1;i++)
 {
  swap_max(arr,l,i);
 }
 }

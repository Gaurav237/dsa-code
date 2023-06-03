#include <bits/stdc++.h>
using namespace std;

// double medianOfSortedArrays(int a1[],int a2[],int n1,int n2){
//     int i = 0;
//     int j = 0;
//     int arr_size = n1 + n2;
//     int arr[arr_size];
//     int x = 0;
//     while(i < n1 && j < n2){
//         if(a1[i] < a2[j]){
//             arr[x++] = a1[i++];
//         }else{
//             arr[x++] = a2[j++];
//         }
//     }
//     while(i < n1){
//         arr[x++] = a1[i++];
//     }
//     while(j < n2){
//         arr[x++] = a2[j++];
//     }

//     int k = arr_size / 2;
//     if(k % 2 == 0){
//         return arr[k];
//     }else{
//         return ;
//     }
// }

double median(int A1[], int A2[], int n, int m){
    if(n > m){
        return median(A2, A1, m, n);
    }

    int low = 0, high = n, medianPos = (n+m+1)/2;

    while(low <= high){
        int cut1 = (low + high) / 2;
        int cut2 = medianPos - cut1;

        int l1 = (cut1 == 0) ? INT_MIN : A1[cut1 - 1];
        int l2 = (cut2 == 0) ? INT_MIN : A2[cut2 - 1];
        int r1 = (cut1 == n) ? INT_MAX : A1[cut1];
        int r2 = (cut2 == m) ? INT_MAX : A2[cut2];

        if(l1 <= r2 && l2 <= r1){
            if((m+n) % 2 != 0){
                return max(l1, l2);
            }else{
                return ((max(l1, l2) + min(r1, r2)) / 2.0);
            }
        }else if(l1 > r2){
            high = cut1 - 1;  // high = mid - 1
        }else{
            low = cut1 + 1;     // low = mid + 1
        }
    }

    return 0.0;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int nums1[] = {1,4,7,10,12};
    int nums2[] = {2,3,6,15};
    int n = sizeof(nums1)/sizeof(nums1[0]);
    int m = sizeof(nums2)/sizeof(nums2[0]);

    cout<<"The Median of two sorted arrays is "<<fixed<<setprecision(5)
    << median(nums1,nums2,n,m);
    return 0;



    return 0;
}

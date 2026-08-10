void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
    int* ar= (int*)  malloc ((m+n) * sizeof(int));
    int i=0;
    int j=0;
    int k=0;

    while (i<m && j<n){
        if(nums1[i]<nums2[j])
        {
            ar[k]= nums1[i];
            k++;
            i++;
        }

        else{
            ar[k]=nums2[j];
            j++;
            k++;
        }

    
    }

    while (i<m){
        ar[k]=nums1[i];
        k++;
        i++;
    }

     while (j<n){
        ar[k]=nums2[j];
        k++;
        j++;
    }

    for(int t=0;t<(m+n);t++){
        nums1[t]= ar[t];

    }

    free(ar);
}


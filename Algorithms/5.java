public public double findMedianSortedArrays(int[] nums1, int[] nums2) {
    int m = nums1.length, n = nums2.length;
    int[] merged = new int[m + n];
    int i = 0, j = 0, k = 0;

    while (i < m && j < n) {
        if (nums1[i] < nums2[j]) {
            merged[k++] = nums1[i++];
        } else {
            merged[k++] = nums2[j++];
        }
    }

    while (i < m) {
        merged[k++] = nums1[i++];
    }

    while (j < n) {
        merged[k++] = nums2[j++];
    }

    int len = merged.length;
    if (len % 2 == 1) {
        return merged[len / 2];
    } else {
        return (merged[len / 2] + merged[len / 2 - 1]) / 2.0;
    }
}
 {
    
}

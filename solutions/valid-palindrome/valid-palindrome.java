class Solution {
    public boolean isPalindrome(String s) {
      s=s.replaceAll("[^a-zA-Z0-9]", "");
      s=s.toLowerCase();
      char[] arr1 = s.toCharArray();
      int n = arr1.length;
      int start = 0;
      int end = n - 1;
      char reversed[] = new char[n];

      for (int i = 0; i < n; i++) {
         reversed[i] = arr1[n - 1 - i];
      }
      if (Arrays.equals(arr1, reversed)){
         return true;
      }
      else{
         return false;
      }
    }
}
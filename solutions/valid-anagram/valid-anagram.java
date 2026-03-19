class Solution {
    public boolean isAnagram(String s, String t) {
        Scanner sc = new Scanner(System.in);
        s=s.toLowerCase();
        t=t.toLowerCase();
        char[] arr1 = s.toCharArray();
        char[] arr2 = t.toCharArray();
        Arrays.sort(arr1);
        Arrays.sort(arr2);
        if(Arrays.equals(arr1, arr2))
            {return true;}
        else{
            return false;
        }
    }
}
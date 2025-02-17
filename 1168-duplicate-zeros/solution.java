import java.util.ArrayList;

class Solution {
    public void duplicateZeros(int[] arr) {
        ArrayList<Integer> res = new ArrayList<>();

        for (int i = 0; i < arr.length; i++) {
            res.add(arr[i]);
            if (arr[i] == 0) {
                res.add(0); // Add duplicate zero
            }
        }

        // Copy back the first arr.length elements
        for (int i = 0; i < arr.length; i++) {
            arr[i] = res.get(i);
        }
    }
}


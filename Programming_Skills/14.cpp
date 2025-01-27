class Solution {
    public int calPoints(String[] operations) {
        int[] scores = new int[operations.length];
        int index = 0;
        
        for (String op : operations) {
            if (op.equals("C")) {
                index--;
            } else if (op.equals("D")) {
                scores[index] = 2 * scores[index - 1];
                index++;
            } else if (op.equals("+")) {
                scores[index] = scores[index - 1] + scores[index - 2];
                index++;
            } else {
                scores[index] = Integer.parseInt(op);
                index++;
            }
        }
        
        int total = 0;
        for (int i = 0; i < index; i++) {
            total += scores[i];
        }
        
        return total;
    }
}

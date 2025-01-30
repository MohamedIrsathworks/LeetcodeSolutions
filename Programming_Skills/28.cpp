class Solution {
    public String multiply(String num1, String num2) {
        int numb1 = Integer.parseInt(num1);
        int numb2 = Integer.parseInt(num2);

        int sum = numb1*numb2;
        String str = String.valueOf(sum);
        return str;
    }
}
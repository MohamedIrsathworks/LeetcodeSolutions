class Solution {
    public double average(int[] salary) {
        int len = salary.length;
        int maxSalary = Integer.MIN_VALUE;
        int minSalary = Integer.MAX_VALUE;
        int sum = 0;

        for (int i = 0; i < len; i++) {
            if (salary[i] > maxSalary) {
                maxSalary = salary[i];
            }
            if (salary[i] < minSalary) {
                minSalary = salary[i];
            }
            sum += salary[i];
        }

        sum -= (maxSalary + minSalary);

        return (double) sum / (len - 2);
    }
}

//Input: Given a list of numbers separated with a comma.The numbers 5 and 8 are present in the list.
//
//Assume that 8 always comes after 5.
//
//Case 1: num1 -> Add all numbers which do not lie between 5 and 8 in the Input List.
//
//Case 2: num2 -> Numbers formed by concatenating all numbers from 5 to 8 in the list
//
//.Output: Sum of num1 and num2
//
//Example: 3,2,6,5,1,4,8,9
//
//Num1: 3+2+6+9 =20
//
//Num2: 5148
//
//O/p = 5148+20 = 5168

import java.util.*;
public class ConcatenateEightFiveSum {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		String str = sc.nextLine();
		String s[] = str.split(",");
		int i, l, sum11 = 0, sum12 = 0, sum1 = 0, sum2 = 0, sum = 0, five = 0, eight = 0;
		l = s.length;
		int a[] = new int[l];
		for(i=0;i<l;i++) {
			a[i] = Integer.parseInt(s[i]);
			if(a[i] == 5) {
				five = i;
			}
			if(a[i] == 8) {
				eight = i;
			}
		}
		i = 0;
		while(i < five) {
			sum11 += a[i];
			i++;
		}
		i = eight + 1;
		while(i < l) {
			sum12 += a[i];
			i++;
		}
		sum1 = sum11 + sum12;
		String ss = "", sss = "";
		for(i=0;i<l;i++) {
			ss += s[i];
		}
		sss = ss.substring(five,eight+1);
		sum2  = Integer.parseInt(sss);
		sum = sum1 + sum2;
		System.out.println(sum);
	}
}

//A non-empty string containing only alphabets. print the longest prefix from the input string which is the same as the suffix.
//
//Prefix and Suffix should not be overlapped.
//
//Print -1 if no prefix exists which is also the suffix without overlap.
//
//Do case-sensitive comparison.
//
//Positions start from 1.
//
//Input : xxAbcxxAbcxx
//
//o/p: xx (‘xx’ in the prefix and ‘xx’ in the suffix and this is the longest one in the input string so the output will be ‘xx’).
//
//Input: Racecar
//
//o/p: -1 (There is no prefix which is also a suffix so the output will be -1).

import java.util.*;
public class PrefixEqualSuffix {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		String s = sc.nextLine();
		int l = s.length();
		int i = 0, j = l-1;
		while(i < j) {
			if(s.charAt(i) == s.charAt(j)) {
				i++;
				j--;
			}
			else {
				break;
			}
			
		}
		int n = i;
		if(n == 0) {
			System.out.println(-1);
			System.exit(0);
		}
		for(i=0;i<n;i++) {
			System.out.print(s.charAt(i));
		}
	}
}

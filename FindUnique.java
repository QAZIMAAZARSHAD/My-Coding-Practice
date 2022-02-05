//Take input a number ’N’ and an array as given below.
//
//Input:-N = 2
//
//Array =1,2,3,3,4,4
//
//O/p : 2
//
//Find the least number of unique elements after deleting N numbers of elements from the array.
//
//In the above example, after deleting N=2 elements from the array.
//
//In above 1,2 will be deleted.
//
//So 3,3,4,4 will be remaining so,
//
//2 unique elements are in the array i.e 3 and 4.

import java.util.*;
public class LeastUnique {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n = 2;
		String str = sc.nextLine();
		String s[] = str.split(",");
		int l = s.length;
		int a[] = new int[l];
		int i;
		for(i=0;i<l;i++) {
			a[i] = Integer.parseInt(s[i]);
		}
		ArrayList<Integer> al = new ArrayList<Integer>();
		for(i=n;i<l;i++) {
			al.add(a[i]);
		}
		Collections.sort(al);
		long unique = al.stream().distinct().count();
		System.out.println(unique);
	}

}

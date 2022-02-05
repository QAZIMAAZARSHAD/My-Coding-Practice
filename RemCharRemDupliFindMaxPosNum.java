//A string which is a mixture of letters, numbers, and special characters from which produce the largest
//
//even number from the available digit after removing the duplicates digits.
//
//If an even number did not produce then return -1.
//
//Ex: infosys@337
//
//O/p : -1
//
//— — — — — — — — — — — -
//
//Hello#81@21349
//
//O/p : 984312

import java.util.*;
public class RemCharRemDupliFindMaxPosNum {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		String str = sc.nextLine();
		str = str.replaceAll("[^\\d]", " "); 
        str = str.trim(); 
        str = str.replaceAll(" +", ""); 
        String s = "";
        int i, l = str.length(), digit, ans = 0;
        char c;
        for(i=0;i<l;i++) {
        	c = str.charAt(i);
        	if(s.indexOf(c) < 0) {
                s += c;
            }
        }
        int n = Integer.parseInt(s);
        ArrayList<Integer> al = new ArrayList<Integer>();
        while(n>0) {
        	digit = n%10;
        	al.add(digit);
        	n = n/10;
        }
        Collections.sort(al, Collections.reverseOrder());
        for(i=0;i<al.size();i++) {
        	ans = ans*10 + al.get(i);
        }
        System.out.println(ans);

	}

}

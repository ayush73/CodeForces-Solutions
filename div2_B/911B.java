import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {
   
 public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n,a,b,c,ans;
        n = in.nextInt();
        a = in.nextInt();
        b = in.nextInt();
        ans=0;
        for(int i=1;i<n;i++)
        {
            int val=a/(i);
            val=Math.min(val,b/(n-i));
            if(ans<val)
            {
              ans=val;
            }
        }
        System.out.println(ans);
   }
}
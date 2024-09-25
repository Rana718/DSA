//Acromatic string ---> input ---> srinanty ghosh   output---> S.G.
package Java.array;
import java.util.Scanner;
class Acromatic1
{
     public static void main(String as[])
      {
           Scanner sc=new Scanner(System.in);
           System.out.print("Enter the String = ");
           String x=sc.nextLine();
           System.out.println("String = "+x);
           x=" "+x.toUpperCase();
           System.out.println("String = "+x);
           for(int i=0;i<x.length();i++)
            {
                  if(x.charAt(i)==' ')
                     System.out.print(x.charAt(i+1)+".");
            }
      }
}

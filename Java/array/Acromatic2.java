//Acromatic String    input  --> srinanty ghosh     output---> S.GHOSH
package Java.array;
import java.util.Scanner;
class Acromatic2
{
    public static void main(String as[])
     {
           Scanner ob =new Scanner(System.in);
           System.out.print("Enter the String = ");
           String x=ob.nextLine();
           int i,j=0;
           x=x.toUpperCase();
           System.out.print(x.charAt(0));
           for(i=1;i<x.length();i++)
            {
                  if(x.charAt(i)==' ')
                     {
                        System.out.print("."+x.charAt(i+1));
                        j=i;
                      }
            }
           for(i=j+2;i<x.length();i++)
              System.out.print(x.charAt(i));
     }
}

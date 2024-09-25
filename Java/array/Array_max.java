package Java.array;
import java.util.Scanner;
class Array_max
{
     int arr[],n,i,max,j; 
    public void input()
      {
         Scanner ob =new Scanner(System.in);
         System.out.print("Enter the Range = ");
         n=ob.nextInt();
         arr=new int[n];
              System.out.print("Enter "+n+" No. =  ");
         for(i=0;i<n;i++)
          {
              arr[i]=ob.nextInt();
          }
     }
    public void display()
     {
           for(i=0;i<n;i++)
              System.out.print(arr[i]+" ");
     }
    public void check()
     {
          max=arr[0];
          j=0;
          for(i=0;i<n;i++)
           {
                if(arr[i]>max)
                 {
                      max=arr[i];
                      j=i;
                 }
           }
        System.out.print("Max. Element = "+max+" Index= "+j+" Position = "+(++j));
     }
    public static void main(String as[])
      {
          Array_max ob=new Array_max();
          ob.input();
          ob.display();
          ob.check();
      }
}

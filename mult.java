import java.io.*;
public class mult
{
    /**
     * @param arg
     * @throws IOException
     * @throws NullPointerException
     * @throws DevisionbyZeroException
    */
    public static void main(String arg[])throws Exception
    {
        int a[][]=new int[20][20];
        int b[][]=new int[20][20];
        int c[][]=new int[20][20];
        int i,j,k,r1,r2,c1,c2;
        DataInputStream in=new DataInputStream(System.in);
        System.out.println("Enter the no. of rows and Columns of first matrix");
        r1=Integer.parseInt(in.readLine());
        c1=Integer.parseInt(in.readLine());
        System.out.println("Enter the no. of rows and Columns of second matrix");
        r2=Integer.parseInt(in.readLine());
        c2=Integer.parseInt(in.readLine());
        if(c1==r2)
        {
            System.out.println("Multiplication is possible");
            System.out.println("Enter the elements of first matrix");
            for(i=0;i<r1;i++)
            for(j=0;j<c1;j++)
            a[i][j]=Integer.parseInt(in.readLine());
            System.out.println("Enter the elements of second matrix");
            for(i=0;i<r2;i++)
            for(j=0;j<c2;j++)
            b[i][j]=Integer.parseInt(in.readLine());
            System.out.println();
            for(i=0;i<r1;i++)
            {
            for(j=0;j<c1;j++)
            {
                System.out.print(a[i][j]+"\t");
            }
            System.out.println();
            }
            System.out.println();
            for(i=0;i<r2;i++)
            {
            for(j=0;j<c2;j++)
            {
                System.out.print(b[i][j]+"\t");
            }
            System.out.println();
            }
            System.out.println();
            for(i=0;i<r1;i++)
            {
                for(j=0;j<c2;j++)
                {
                    c[i][j]=0;
                  for(k=0;k<c2;k++)
                  {
                    c[i][j]+=a[i][k]*b[k][j];
                  }
                }
            }
            System.out.println("The matrix after multiplication is:-");
            for(i=0;i<r1;i++)
            {
            for(j=0;j<c2;j++)
            {
                System.out.print(c[i][j]+"\t");
            }
            System.out.println();
            }
        }
        else
        {
          System.out.println("Multiplication is not possible");
        }
    }
}
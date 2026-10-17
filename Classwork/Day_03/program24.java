import java.util.Scanner;

class program24
{
    public static void main(String A[])
    {
        Scanner scanner =null;
        String sName=null;
        
        scanner = new Scanner(System.in);

        System.out.println("Enter Your Name:");
        sName = scanner.next();   // next method is used to accept only a word

        System.out.println("Welcome "+sName);
    }
}
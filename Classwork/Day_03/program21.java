import java.util.Scanner;

class program21
{
    public static void main(String A[])
    {
        Scanner sObj = new Scanner(System.in);

        System.out.println("Enter Your Name:");
        String name = sObj.nextLine();

        System.out.println("Welcome "+name);
    }
}
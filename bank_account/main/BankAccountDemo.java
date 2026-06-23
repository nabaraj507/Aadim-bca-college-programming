package main;
import model.BankAccount;

public class BankAccountDemo {
    public static void main(String[] args) {
        BankAccount account = new BankAccount();
        
        account.setAccountholder("Ram");  // Fixed: lowercase 'h'
        account.deposit(10000);
        
        account.displayAccountInfo();
        System.out.println("Balance: " + account.getBalance());
    }
}
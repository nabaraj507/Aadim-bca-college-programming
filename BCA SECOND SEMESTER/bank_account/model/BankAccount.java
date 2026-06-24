package model;

public class BankAccount {
    private String accountholder;
    private double balance;

    public void setAccountholder(String accountholder) {
        this.accountholder = accountholder;
    }

    public void deposit(double amount) {
        if (amount > 0) {
            balance = balance + amount;
        }
    }

    public String getAccountholder() {  // Fixed: matches field name
        return accountholder;
    }

    public double getBalance() {
        return balance;
    }

    public void displayAccountInfo() {
        System.out.println("Account Holder: " + accountholder);
        System.out.println("Balance: " + balance);
    }
}
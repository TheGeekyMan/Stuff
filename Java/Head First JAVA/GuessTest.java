import java.util.*;
import java.lang.*;

class GuessGame{
        Player p1;
        Player p2;
        Player p3;

        void startGame(){
            p1 = new Player();
            p2 = new Player();
            p3 = new Player();

            int guessp1 = 0;
            int guessp2 = 0;
            int guessp3 = 0;

            boolean p1isRight  = false;
            boolean p2isRight  = false;
            boolean p3isRight  = false;

            int target = (int) (Math.random() * 10);
            System.out.println("I'm thinking a number between 0 to 9");

            while(true){
                System.out.println("The target is " + target);

                p1.guess();
                p2.guess();
                p3.guess();

                guessp1 = p1.number;
                System.out.println("The player 1 guessed " + guessp1);

                guessp2 = p2.number;
                System.out.println("The player 2 guessed " + guessp2);

                guessp3 = p3.number;
                System.out.println("The player 3 guessed " + guessp3);

                if(guessp1 == target){
                    p1isRight = true;
                }

                if(guessp2 == target){
                    p2isRight = true;
                }

                if(guessp3 == target){
                    p3isRight = true;
                }

                if(p1isRight || p2isRight || p3isRight){
                    System.out.println("We have a winner");
                    System.out.println("Player 1 got it right ?" + p1isRight);
                    System.out.println("Player 2 got it right ?" + p2isRight);
                    System.out.println("Player 3 got it right ?" + p3isRight);
                    System.out.println("Game is over");
                    break;
                }
                else{
                    System.out.println("Players have to try again");
                }
            }
        }
}

class Player{
    int number = 0;
    void guess(){
        number = (int) (Math.random() * 10);
        System.out.println("I'm guessing " + number);
    }
}

public class GuessTest {
    public static void main(String[] args) {
        GuessGame game = new GuessGame();
        game.startGame();
    }
}

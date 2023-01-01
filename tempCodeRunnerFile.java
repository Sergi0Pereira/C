import java.awt.*; 
import javax.swing.*; 
 
public class Yoxxi { 
 
  public static void main(String[] args) { 
 
    // Create the frame 
    JFrame frame = new JFrame("Yoxxi"); 
    frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE); 
 
    // Set the size of the frame 
    frame.setSize(400, 400); 
    frame.setVisible(true); 
 
    // Create the panel 
    JPanel panel = new JPanel(); 
    panel.setLayout(new GridLayout(3, 3)); 
    frame.add(panel); 
 
    // Create the game table 
    JLabel label1 = new JLabel(" "); 
    JLabel label2 = new JLabel(" "); 
    JLabel label3 = new JLabel(" "); 
    JLabel label4 = new JLabel(" "); 
    JLabel label5 = new JLabel(" "); 
    JLabel label6 = new JLabel(" "); 
    JLabel label7 = new JLabel(" "); 
    JLabel label8 = new JLabel(" "); 
    JLabel label9 = new JLabel(" "); 
 
    // Add the labels to the panel 
    panel.add(label1); 
    panel.add(label2); 
    panel.add(label3); 
    panel.add(label4); 
    panel.add(label5); 
    panel.add(label6); 
    panel.add(label7); 
    panel.add(label8); 
    panel.add(label9); 
 
    // Create the game logic 
    // Initialize the game variables 
    int player1Symbol = 0; 
    int player2Symbol = 0; 
    int currentPlayer = 1; 
 
    // Create a loop to handle each turn 
    while (true) { 
 
      // Prompt the current player to enter their move 
      System.out.print("Player " + currentPlayer + ": Enter your move (1-9): "); 
 
      // Read the player's move 
      int move = Integer.parseInt(System.console().readLine()); 
 
      // Check if the move is valid 
      if (move >= 1 && move <= 9) { 
 
        // Update the game table 
        if (currentPlayer == 1) { 
          player1Symbol = 1; 
          switch(move){ 
            case 1: label1.setText("X"); 
            break; 
            case 2: label2.setText("X"); 
            break; 
            case 3: label3.setText("X"); 
            break; 
            case 4: label4.setText("X"); 
            break; 
            case 5: label5.setText("X"); 
            break; 
            case 6: label6.setText("X"); 
            break; 
            case 7: label7.setText("X"); 
            break; 
            case 8: label8.setText("X"); 
            break; 
            case 9: label9.setText("X"); 
            break; 
          } 
        } 
        else { 
          player2Symbol = 1; 
          switch(move){ 
            case 1: label1.setText("O"); 
            break; 
            case 2: label2.setText("O"); 
            break; 
            case 3: label3.setText("O"); 
            break; 
            case 4: label4.setText("O"); 
            break; 
            case 5: label5.setText("O"); 
            break; 
            case 6: label6.setText("O"); 
            break; 
            case 7: label7.setText("O"); 
            break; 
            case 8: label8.setText("O"); 
            break; 
            case 9: label9.setText("O"); 
            break; 
          } 
        } 
 
        // Check for a winner 
        if (player1Symbol == 1 && player2Symbol == 1) { 
          if ((label1.getText().equals("X") && label2.getText().equals("X") && label3.getText().equals("X")) ||  
              (label4.getText().equals("X") && label5.getText().equals("X") && label6.getText().equals("X")) ||  
              (label7.getText().equals("X") && label8.getText().equals("X") && label9.getText().equals("X")) ||  
              (label1.getText().equals("X") && label4.getText().equals("X") && label7.getText().equals("X")) ||  
              (label2.getText().equals("X") && label5.getText().equals("X") && label8.getText().equals("X")) ||  
              (label3.getText().equals("X") && label6.getText().equals("X") && label9.getText().equals("X")) ||  
              (label1.getText().equals("X") && label5.getText().equals("X") && label9.getText().equals("X")) ||  
              (label3.getText().equals("X") && label5.getText().equals("X") && label7.getText().equals("X"))) { 
            System.out.println("Player 1 wins!"); 
            break; 
          } 
          else if ((label1.getText().equals("O") && label2.getText().equals("O") && label3.getText().equals("O")) ||  
                   (label4.getText().equals("O") && label5.getText().equals("O") && label6.getText().equals("O")) ||  
                   (label7.getText().equals("O") && label8.getText().equals("O") && label9.getText().equals("O")) ||  
                   (label1.getText().equals("O") && label4.getText().equals("O") && label7.getText().equals("O")) ||  
                   (label2.getText().equals("O") && label5.getText().equals("O") && label8.getText().equals("O")) ||  
                   (label3.getText().equals("O") && label6.getText().equals("O") && label9.getText().equals("O")) ||  
                   (label1.getText().equals("O") && label5.getText().equals("O") && label9.getText().equals("O")) ||  
                   (label3.getText().equals("O") && label5.getText().equals("O") && label7.getText().equals("O"))) { 
            System.out.println("Player 2 wins!"); 
            break; 
          } 
        } 
 
        // Switch the current player 
        currentPlayer = (currentPlayer == 1) ? 2 : 1; 
 
      } 
      else { 
        System.out.println("Invalid move!"); 
      } 
    } 
  } 
}
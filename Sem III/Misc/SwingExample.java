import javax.swing.*; 
import java.awt.*; 
import java.awt.event.ActionEvent; 
import java.awt.event.ActionListener; 
 
public class SwingExample { 
    public static void main(String[] args) { 
        JFrame frame = new JFrame("Input Form"); 
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE); 
        frame.setSize(400, 300); 
        frame.setLayout(new FlowLayout()); 
 
        JLabel nameLabel = new JLabel("Enter Name:"); 
        JTextField nameField = new JTextField(20); 
        JLabel usnLabel = new JLabel("Enter USN:"); 
        JTextField usnField = new JTextField(20); 
 
        JButton submitButton = new JButton("Submit"); 
 
        JLabel outputLabel = new JLabel(" "); 
 
        submitButton.addActionListener(new ActionListener() { 
            @Override 
            public void actionPerformed(ActionEvent e) { 
                String name = nameField.getText(); 
                String usn = usnField.getText(); 
                outputLabel.setText("Name: " + name + " | USN: " + usn); 
            } 
        }); 
 
        frame.add(nameLabel); 
        frame.add(nameField); 
        frame.add(usnLabel); 
        frame.add(usnField); 
        frame.add(submitButton); 
        frame.add(outputLabel); 
 
        frame.setVisible(true); 
    } 
}

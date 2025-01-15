import javax.swing.JFrame;
import javax.swing.JOptionPane;
import javax.swing.JButton;
import java.awt.event.ActionListener;
import java.awt.event.ActionEvent;

public class SwingExample {

	public static void main(String[] args) {
		// Creating the frame
		JFrame frame = new JFrame("Swing Example");
		
		frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		frame.setSize(400, 600);
		
		//Creating the button
		JButton button = new JButton("Click Me");
		button.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent e) {
				//Display the dialog message when the button is clicked\
				JOptionPane.showMessageDialog(frame, "Hello Swing!");
			}
		});
		
		frame.getContentPane().add(button);
		
		frame.setVisible(true);

	}

}

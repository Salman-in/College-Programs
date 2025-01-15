import javax.swing.*;
import java.awt.event.KeyEvent;
import java.awt.event.KeyListener;
import java.awt.event.MouseEvent;
import java.awt.event.MouseListener;


public class KeyEventMouseEventSimulator extends JFrame implements KeyListener,MouseListener {
	public KeyEventMouseEventSimulator() {
		setTitle("Key Event and Mouse Event Simulator");
		setSize(400,300);
		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		setLocationRelativeTo(null);
		
		addKeyListener(this);
		addMouseListener(this);
		
		setFocusable(true);
	}
	
	public static void main(String args[]) {
		SwingUtilities.invokeLater(()-> {
			KeyEventMouseEventSimulator simulator = new KeyEventMouseEventSimulator();
			simulator.setVisible(true);
		});
	}
	
	@Override 
	public void keyTyped(KeyEvent e) {
		//Handle key typed event 
		System.out.println("Key Typed : " + e.getKeyChar());
	}
	
	@Override 
	public void keyPressed(KeyEvent e) {
		//Handle key pressed event 
		System.out.println("Key Pressed : " + KeyEvent.getKeyText(e.getKeyCode()));
	}
	
	@Override 
	public void keyReleased(KeyEvent e) {
		//Handle key released event 
		System.out.println("Key Released : " + KeyEvent.getKeyText(e.getKeyCode()));
	}
	
	@Override 
	public void mouseClicked(MouseEvent e) {
		//Handle mouse clicked event 
		System.out.println("Mouse Clicked at ( " + e.getX() + "," + e.getY() + " )");
	}
	
	@Override 
	public void mousePressed(MouseEvent e) {
		//Handle mouse pressed event 
		System.out.println("Mouse Pressed at ( " + e.getX() + "," + e.getY() + " )");
	}

	@Override 
	public void mouseReleased(MouseEvent e) {
		//Handle mouse released event 
		System.out.println("Mouse Released at ( " + e.getX() + "," + e.getY() + " )");
	}
	
	@Override 
	public void mouseEntered(MouseEvent e) {
		//Handle mouse entered event 
		System.out.println("Mouse Entered");
	}
	
	@Override 
	public void mouseExited(MouseEvent e) {
		//Handle mouse exited event 
		System.out.println("Mouse Exited");
	}
}

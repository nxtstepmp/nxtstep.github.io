import javax.swing.*; // Import Swing components for GUI
import java.awt.*; // Import AWT classes for colors and graphics
import java.awt.event.*; // Import AWT event classes for handling user actions

class TrafficLight extends JPanel implements ActionListener {
    // Declare JRadioButton for three light states: Red, Green, Orange
    private JRadioButton r1; 
    private JRadioButton r2;
    private JRadioButton r3;
    // Color variables to hold the current colors of the lights
    private Color red_c;
    private Color green_c;
    private Color orange_c;

    public TrafficLight() {
        // Set the size and layout of the panel
        setBounds(0,0,600,480);
        // Initialize radio buttons with labels
        r1 = new JRadioButton("Red");
        r2 = new JRadioButton("Green");
        r3 = new JRadioButton("Orange");
        // Group radio buttons to ensure only one can be selected at a time
        ButtonGroup group = new ButtonGroup();
        // Set the default selected radio button to Red
        r1.setSelected(true);
        group.add(r1);
        group.add(r2);
        group.add(r3);
        // Add radio buttons to the panel
        add(r1);
        add(r2);
        add(r3);
        // Set initial colors for the traffic light
        red_c = Color.red;
        green_c = getBackground();
        orange_c = getBackground();
        // Attach the action listener to the radio buttons
        r1.addActionListener(this);
        r2.addActionListener(this);
        r3.addActionListener(this);
    }

    public void actionPerformed(ActionEvent e) {
        // Logic to update the colors based on the selected radio button
        if(r1.isSelected()) {           
            red_c = Color.red;
            green_c = getBackground();
            orange_c = getBackground();
        } else if(r2.isSelected()) {
            red_c = getBackground();
            green_c = Color.green;
            orange_c = getBackground();
        } else if(r3.isSelected()) {
            red_c = getBackground();
            green_c = getBackground();
            orange_c = Color.orange;
        }
        // Trigger repaint to update the traffic light display
        repaint();
    }

    public void paintComponent(Graphics g) {
        // Call superclass method for proper painting
        super.paintComponent(g);
        // Draw circles for traffic lights
        g.drawOval(50,50,50,50);   // Red
        g.drawOval(50,110,50,50);  // Orange
        g.drawOval(50,170,50,50);  // Green
        // Set colors and fill ovals based on the current state
        g.setColor(red_c);
        g.fillOval(50,50,50,50);
        g.setColor(orange_c);
        g.fillOval(50,110,50,50);
        g.setColor(green_c);
        g.fillOval(50,170,50,50);
    }
}

class TrafficLightTest {
    public static void main(String args[]) {
        // Create a frame to hold the panel
        JFrame f1 = new JFrame();
        f1.setVisible(true);
        f1.setSize(600,480);
        f1.setLayout(null);
        // Create an instance of TrafficLight and add to the frame
        TrafficLight t = new TrafficLight();
        f1.add(t);
    }
}

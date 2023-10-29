#include <stdio.h>
#include <string.h>

// Function to display the definition and formula for a given term
void displayPhysicsTerm(const char* term) {
    if (strcmp(term, "Scalar quantities") == 0) {
        printf("Term: Scalar quantities\n");
        printf("Definition: Magnitude-only physical properties (e.g., mass).\n");
        printf("Formula: N/A\n");
    } else if (strcmp(term, "Vector quantities") == 0) {
        printf("Term: Vector quantities\n");
        printf("Definition: Physical properties with magnitude and direction (e.g., force).\n");
        printf("Formula: N/A\n");
    } else if (strcmp(term, "Unit vectors") == 0) {
        printf("Term: Unit vectors\n");
        printf("Definition: Vectors with magnitude 1, used to specify direction (e.g., i, j, k).\n");
        printf("Formula: N/A\n");
    } else if (strcmp(term, "Zero vectors") == 0) {
        printf("Term: Zero vectors\n");
        printf("Definition: Vectors with magnitude 0 and no specific direction (e.g., null vector).\n");
        printf("Formula: N/A\n");
    } else if (strcmp(term, "Collinear vectors") == 0) {
        printf("Term: Collinear vectors\n");
        printf("Definition: Vectors that lie along the same line.\n");
        printf("Formula: N/A\n");
    } else if (strcmp(term, "Position of vectors") == 0) {
        printf("Term: Position of vectors\n");
        printf("Definition: Describes the location of a point in space.\n");
        printf("Formula: N/A\n");
    } else if (strcmp(term, "Divergence") == 0) {
        printf("Term: Divergence\n");
        printf("Definition: A vector operator that measures the rate of a quantity's spread at a point.\n");
        printf("Formula: N/A\n");
    } else if (strcmp(term, "Curl") == 0) {
        printf("Term: Curl\n");
        printf("Definition: A vector operator that represents the rotation of a vector field.\n");
        printf("Formula: N/A\n");
    } else if (strcmp(term, "Motion") == 0) {
        printf("Term: Motion\n");
        printf("Definition: The change in position of an object with respect to time.\n");
        printf("Formula: N/A\n");
    } else if (strcmp(term, "Time") == 0) {
        printf("Term: Time\n");
        printf("Definition: A fundamental dimension in physics, often measured in seconds.\n");
        printf("Formula: N/A\n");
    } else if (strcmp(term, "Linear momentum") == 0) {
        printf("Term: Linear momentum\n");
        printf("Definition: The product of an object's mass and its velocity.\n");
        printf("Formula: N/A\n");
    } else if (strcmp(term, "Angular momentum") == 0) {
        printf("Term: Angular momentum\n");
        printf("Definition: A property of a rotating object related to its angular velocity.\n");
        printf("Formula: N/A\n");
    } else if (strcmp(term, "Time period") == 0) {
        printf("Term: Time period\n");
        printf("Definition: The time taken for one complete cycle of a periodic motion.\n");
        printf("Formula: N/A\n");
    } else if (strcmp(term, "Speed") == 0) {
        printf("Term: Speed\n");
        printf("Definition: The rate at which an object covers distance (e.g., distance traveled per unit time).\n");
        printf("Formula: N/A\n");
    } else if (strcmp(term, "Distance") == 0) {
        printf("Term: Distance\n");
        printf("Definition: The total length of the path traveled by an object.\n");
        printf("Formula: N/A\n");
    } else if (strcmp(term, "Displacement") == 0) {
        printf("Term: Displacement\n");
        printf("Definition: A vector that represents the change in position of an object.\n");
        printf("Formula: N/A\n");
    } else if (strcmp(term, "Velocity") == 0) {
        printf("Term: Velocity\n");
        printf("Definition: The rate of change of an object's displacement with respect to time.\n");
        printf("Formula: N/A\n");
    } else if (strcmp(term, "Acceleration") == 0) {
        printf("Term: Acceleration\n");
        printf("Definition: The rate of change of an object's velocity with respect to time.\n");
        printf("Formula: N/A\n");
    } else if (strcmp(term, "Linear acceleration") == 0) {
        printf("Term: Linear acceleration\n");
        printf("Definition: Acceleration of an object moving along a straight line.\n");
        printf("Formula: N/A\n");
    } else if (strcmp(term, "Angular acceleration") == 0) {
        printf("Term: Angular acceleration\n");
        printf("Definition: The rate of change of angular velocity of a rotating object.\n");
        printf("Formula: N/A\n");
    } else if (strcmp(term, "Friction") == 0) {
        printf("Term: Friction\n");
        printf("Definition: The force that opposes the relative motion or tendency of such motion of two surfaces in contact.\n");
        printf("Formula: N/A\n");
    } else if (strcmp(term, "Energy") == 0) {
        printf("Term: Energy\n");
        printf("Definition: A measure of an object's ability to do work or cause change.\n");
        printf("Formula: N/A\n");
    } else if (strcmp(term, "Potential energy") == 0) {
        printf("Term: Potential energy\n");
        printf("Definition: Energy stored in an object due to its position or state.\n");
        printf("Formula: N/A\n");
    } else if (strcmp(term, "Kinetic energy") == 0) {
        printf("Term: Kinetic energy\n");
        printf("Definition: Energy of an object in motion, related to its mass and velocity.\n");
        printf("Formula: N/A\n");
    } else if (strcmp(term, "Work done") == 0) {
        printf("Term: Work done\n");
        printf("Definition: A measure of energy transfer when a force acts on an object in the direction of motion.\n");
        printf("Formula: N/A\n");
    } else if (strcmp(term, "Entropy") == 0) {
        printf("Term: Entropy\n");
        printf("Definition: A measure of disorder or randomness in a system.\n");
        printf("Formula: N/A\n");
    }     else if (strcmp(term, "Enthalpy") == 0) {
        printf("Term: Enthalpy\n");
        printf("Definition: A measure of a system's total internal energy plus pressure and volume.\n");
        printf("Formula: N/A\n");
    }
    else if (strcmp(term, "Rocket propulsion") == 0) {
        printf("Term: Rocket propulsion\n");
        printf("Definition: A method of spacecraft propulsion using expelled mass for thrust.\n");
        printf("Formula: N/A\n");
    }
    else if (strcmp(term, "Electrostatics") == 0) {
        printf("Term: Electrostatics\n");
        printf("Definition: The study of stationary electric charges and their effects.\n");
        printf("Formula: N/A\n");
    }
    else if (strcmp(term, "Electrodynamics") == 0) {
        printf("Term: Electrodynamics\n");
        printf("Definition: The study of electric charges in motion, including electric currents.\n");
        printf("Formula: N/A\n");
    }
    else if (strcmp(term, "Torque") == 0) {
        printf("Term: Torque\n");
        printf("Definition: A measure of the tendency of a force to rotate an object about an axis.\n");
        printf("Formula: N/A\n");
    }
    else if (strcmp(term, "Electric potential") == 0) {
        printf("Term: Electric potential\n");
        printf("Definition: The electric potential energy per unit charge at a point in space.\n");
        printf("Formula: N/A\n");
    }
    else if (strcmp(term, "Electric field") == 0) {
        printf("Term: Electric field\n");
        printf("Definition: A vector that describes the force experienced by a charged object at a point.\n");
        printf("Formula: N/A\n");
    }
    else if (strcmp(term, "Electromagnetism") == 0) {
        printf("Term: Electromagnetism\n");
        printf("Definition: The study of the electromagnetic force, which includes electricity and magnetism.\n");
        printf("Formula: N/A\n");
    }
    else if (strcmp(term, "Alternative current") == 0) {
        printf("Term: Alternative current\n");
        printf("Definition: Electric current that reverses direction periodically, commonly used in power distribution.\n");
        printf("Formula: N/A\n");
    }
    else if (strcmp(term, "Direct current") == 0) {
        printf("Term: Direct current\n");
        printf("Definition: Electric current that flows in one direction continuously.\n");
        printf("Formula: N/A\n");
    }
    else if (strcmp(term, "Collision") == 0) {
        printf("Term: Collision\n");
        printf("Definition: An event where two or more objects interact with one another.\n");
        printf("Formula: N/A\n");
    }
    else if (strcmp(term, "Simple harmonic motion") == 0) {
        printf("Term: Simple harmonic motion\n");
        printf("Definition: A periodic motion that is sinusoidal, like a swinging pendulum.\n");
        printf("Formula: N/A\n");
    }
    else if (strcmp(term, "Oscillation") == 0) {
        printf("Term: Oscillation\n");
        printf("Definition: Repeated back-and-forth motion about a central point or position.\n");
        printf("Formula: N/A\n");
    }
    else if (strcmp(term, "Elasticity") == 0) {
        printf("Term: Elasticity\n");
        printf("Definition: A material's ability to return to its original shape after being deformed.\n");
        printf("Formula: N/A\n");
    }
    else if (strcmp(term, "Wavelength") == 0) {
        printf("Term: Wavelength\n");
        printf("Definition: The distance between two successive points in a wave, such as a light wave.\n");
        printf("Formula: N/A\n");
    }
    else if (strcmp(term, "Wave frequency") == 0) {
        printf("Term: Wave frequency\n");
        printf("Definition: The number of complete wave cycles passing a point per unit time.\n");
        printf("Formula: N/A\n");
    }
    else if (strcmp(term, "Wave number") == 0) {
        printf("Term: Wave number\n");
        printf("Definition: A property of waves, the number of waves per unit distance.\n");
        printf("Formula: N/A\n");
    }
    else if (strcmp(term, "Pressure") == 0) {
        printf("Term: Pressure\n");
        printf("Definition: Force applied per unit area, often measured in Pascals (Pa).\n");
        printf("Formula: N/A\n");
    }
       else if (strcmp(term, "Rigid body") == 0) {
        printf("Term: Rigid body\n");
        printf("Definition: A body with a stable and unchanging shape under external forces.\n");
        printf("Formula: N/A\n");
    }
    else if (strcmp(term, "Gravitation") == 0) {
        printf("Term: Gravitation\n");
        printf("Definition: The force of attraction between objects with mass.\n");
        printf("Formula: N/A\n");
    }
    else if (strcmp(term, "Escape velocity") == 0) {
        printf("Term: Escape velocity\n");
        printf("Definition: The minimum velocity required for an object to escape a celestial body's gravitational pull.\n");
        printf("Formula: N/A\n");
    }
    else if (strcmp(term, "Equipotential surface") == 0) {
        printf("Term: Equipotential surface\n");
        printf("Definition: A surface on which the electric potential is constant, representing a region of equal potential.\n");
        printf("Formula: N/A\n");
    }
    else if (strcmp(term, "Poisson's ratio") == 0) {
        printf("Term: Poisson's ratio\n");
        printf("Definition: A measure of a material's ability to compress in one direction when stretched in another.\n");
        printf("Formula: N/A\n");
    }
    else if (strcmp(term, "Rigidity modulus, bulk modulus, and Young's modulus") == 0) {
        printf("Term: Rigidity modulus, bulk modulus, and Young's modulus\n");
        printf("Definition: Mechanical properties that describe a material's response to deformation.\n");
        printf("Formula: N/A\n");
    }
    else {
        printf("Term not found.\n");
    }
}

int main() {
    char inputTerm[100];
    int continueLoop = 1;

    while (continueLoop) {
        printf("Enter a physics term (e.g., Velocity, Acceleration, Force), or type 'exit' to quit: ");
        scanf("%s", inputTerm);

        if (strcmp(inputTerm, "exit") == 0) {
            continueLoop = 0;
        } else {
            displayPhysicsTerm(inputTerm);
        }
    }

    return 0;
}

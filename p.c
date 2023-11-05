#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Structure to represent a vehicle
struct Vehicle {
    char regNumber[20];
    char Model[50];
    int year;
};

// Function to add a new vehicle to the system
void addVehicle(struct Vehicle *vehicles, int *numVehicles) {
    if (*numVehicles < 100) {
        printf("Enter vehicle registration number: ");
        scanf("%s", vehicles[*numVehicles].regNumber);
        printf("Enter model: ");
        scanf("%s", vehicles[*numVehicles].Model);
        printf("Enter year: ");
        scanf("%d", &vehicles[*numVehicles].year);
        (*numVehicles)++;
    } else {
        printf("Maximum number of vehicles reached!\n");
    }
}

// Function to display all vehicles in the system

void displayVehicles(struct Vehicle *vehicles, int numVehicles) {
    if (numVehicles > 0) {
        printf("List of vehicles:\n");
        for (int i = 0; i < numVehicles; i++) {
            printf("Vehicle %d\n", i + 1);
            printf("Registration Number: %s\n", vehicles[i].regNumber);
            printf(" Model: %s\n", vehicles[i].Model);
            printf("Year: %d\n", vehicles[i].year);
        }
    } else {
        printf("No vehicles in the system.\n");
    }
}





int main() {
    struct Vehicle vehicles[100];
    int numVehicles = 0;
    int choice;

    do {
        printf("\nTransport Management System\n");
        printf("1. Add Vehicle\n");
        printf("2. Display Vehicles\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addVehicle(vehicles, &numVehicles);
                break;
            case 2:
                displayVehicles(vehicles, numVehicles);
                break;
            case 3:
                printf("Exiting program. Goodbye!\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 3);


}

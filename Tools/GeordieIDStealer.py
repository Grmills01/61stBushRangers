import fileinput
import os

def get_file_path():
    # Prompt the user for the file directory and ensure it exists
    while True:
        file_path = input("Please enter the file path: ").strip()
        if os.path.isfile(file_path):
            return file_path
        else:
            print("Invalid file path. Please try again.")

def StealIDs(fileURL):
    outputString = "serverMod=\""
    with fileinput.FileInput(fileURL) as file:
        for line in file:
            if "<a href=" in line:
                # Split based on quotation marks, get the steam id string
                steamURL = line.split("\"")[1]
                # Grab the id and append ';'
                modID = "@" + str(steamURL.split("?id=")[1]) + ";"
                outputString += str(modID)
    print(outputString + "\"")

def main():
    # Get the file URL from the user
    fileURL = get_file_path()
    StealIDs(fileURL)

    # Ask the user if they want to quit or continue
    while True:
        quit_input = input("\nPress Enter to quit or type 'q' to exit and close: ").strip().lower()
        if quit_input == 'q' or quit_input == '':
            print("Exiting program. Goodbye!")
            break
        else:
            print("Invalid input. Please press Enter to quit or type 'q' to quit.")

# Run the main function
main()
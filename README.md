# LMS-Library-Management-System-CPP


This is a command-line library management system implemented in C++. It allows users to register books, register members, issue books, and remove members. The system stores book and member data in separate text files.

## Features

- Register books: Users can enter book details such as name, author, publisher, ISBN, and edition. Multiple books can be registered at once.

- Print book data: Users can view the list of books stored in the library, including their details.

- Save book data to file: The system saves the book data to a text file for future reference.

- Register members: Users can enter member details including name, address, email, and ID.

- Save member data to file: The system saves the member data to a text file for future reference.

- Check member existence: The system checks if a member with the same name or email already exists before registering a new member.

- Remove members: Users can remove a member from the system by providing the member ID.

## Usage

1. Compile the code using a C++ compiler.
2. Run the executable.
3. Follow the command-line prompts to interact with the system.
4. Enter the corresponding option number to perform various actions:

   - Option 1: Register books
   - Option 2: Issue books
   - Option 3: Register a member
   - Option 4: Remove a member

5. For each option, enter the required information as prompted.

## File Structure

- `main.cpp`: The main source code file containing the implementation of the library management system.
- `book_data.txt`: The file where book data is stored.
- `member_data.txt`: The file where member data is stored.
- `temp.txt`: A temporary file used for removing members.

## License

This project is licensed under the [MIT License](LICENSE).

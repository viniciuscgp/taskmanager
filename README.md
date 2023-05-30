# Task Manager in C with SQLite

This project is a simple console-based task manager application written in C and utilizes SQLite for data persistence. 

## Description

This Task Manager allows users to manage their tasks efficiently by providing the following features:

- Create a new task with a title, description, priority level, and deadline.
- Edit an existing task's title, description, priority level, and deadline.
- List all tasks.
- Mark a task as completed.
- Delete a task.

All data is stored in a SQLite database, making this a lightweight solution for task management without the need for a separate database server.

## Installation

First, ensure SQLite is installed on your system. For example, on Ubuntu, you can install SQLite with:


Next, compile the program with:

```c
make 
```

This will create an executable named `taskmanager`.

## Usage

Run the program with:

```shell
./taskmanager
```

Once running, follow the interactive prompts in your console to manage tasks.

## Contributing

Contributions, issues, and feature requests are welcome. Feel free to check the issues page for a list of known issues or feature requests.

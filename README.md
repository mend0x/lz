# lz - A Beautiful Directory Listing

`lz` is a command-line program designed to list files and directories in a visually appealing format. It enhances the typical `ls` command by adding decorative elements to the output, making it easier to read and navigate through directories.

## Innovation

Unlike the standard `ls` command, `lz` provides a more structured and aesthetic output by adding a `├` prefix to each file and directory, as well as enclosing the list within separator lines. This format helps in quickly identifying and navigating through files and directories, offering a clearer view of the contents.

## Prerequisites

To build and run `lz`, you need the following:

- **g++** version 7.0 or higher
- Operating System: Linux, macOS, or Windows with MinGW
- Basic knowledge of the command line

## Downloading

To download `lz`, clone the repository from GitHub using the following command:

```bash
git clone https://github.com/your_username/your_repository.git
cd your_repository
```

## Compiling 

To compile the `lz` program, use g++ with the C++17 standard:

```bash
g++ -std=c++17 -o lz lz.cc
```

This command will compile the `lz` program and create an executable file named `lz`.

## Running 

To run the lz program, execute the following command in your terminal:

```bash
./lz
```

This will display the list of files and directories in the current directory with a beautiful format, including a separator line at the start and end of the output.

## Terminal command: Add lz to Your Terminal Path

To run `lz` from any directory without using `./`, you can add the executable to a directory included in your system's `PATH`.

### For Linux/macOS:

1. **Move the executable to `/usr/local/bin/`:**

   ```bash
   sudo mv lz /usr/local/bin/
   ```

   This allows you to run `lz` from any location in the terminal by simply typing `lz`.

2. **Verify the installation:**

After moving the executable, you can verify the installation by typing lz from any directory in your terminal. If everything is set up correctly, the lz command should run as expected.

## For Windows:

1. **Add the directory containing lz.exe to your system's PATH environment variable:**

Open System Properties:

- Right-click on 'This PC' or 'Computer' on the desktop or in File Explorer, and choose 'Properties'.
- Then click 'Advanced system settings'.

Open Environment Variables:

- In the System Properties window, click on 'Environment Variables'.

Edit the Path variable:

- In the 'System variables' section, find the Path variable, select it, and click 'Edit'.
- Add the path to the directory where lz.exe is located.

2. **Verify the installation:**

After adding the directory to your PATH, open a new command prompt window and type `lz`. If the setup is correct, the `lz` command should execute properly from any location.

## Optional Installation Script for Linux/macOS:

You can automate the compilation and installation process with an `install.sh script`. This script will compile the `lz` program and move it to `/usr/local/bin/`, making it accessible from any directory in your terminal.

1. **Create a file named `install.sh` with the following content:

```bash
#!/bin/bash
g++ -std=c++17 -o lz lz.cc
sudo mv lz /usr/local/bin/
echo "lz has been successfully installed."
```

2. **Make the script executable:**

```bash
chmod +x install.sh
```

3. **Run the installation script:**

```bash
./install.sh
```

This script will compile the `lz` program and move the executable to `/usr/local/bin/`. Once the script completes, you should be able to run `lz` from any location in your terminal.

**Usage:**

To use lz, simply navigate to the directory you want to list and run:

```bash
lz
```

This will display the files and directories in the current directory with a visually appealing format.



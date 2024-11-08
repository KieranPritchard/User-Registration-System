# User Registraition System

<div align="center">
    <img alt="GitHub Created At" src="https://img.shields.io/github/created-at/KieranPritchard/User-Registraition-System">
    <img alt="GitHub License" src="https://img.shields.io/github/license/KieranPritchard/User-Registraition-System">
    <img alt="GitHub commit activity" src="https://img.shields.io/github/commit-activity/t/KieranPritchard/User-Registraition-System">
    <img alt="GitHub last commit" src="https://img.shields.io/github/last-commit/KieranPritchard/User-Registraition-System">
    <img alt="GitHub language count" src="https://img.shields.io/github/languages/count/KieranPritchard/User-Registraition-System">
    <img alt="GitHub Repo stars" src="https://img.shields.io/github/stars/KieranPritchard/User-Registraition-System">
</div>

## Project Description

This project is a user resgister system, it allows you to register usernames and passwords to a csv file. then you can login into the app using the restiered credinatals.

The reasons for this project was to test my current knowledge of C++, because i had recently learnt how to code using it. I also wanted to learn how to handle files using this language, because all my projects using this langauge so far havent relyed on outside dependanceys.

i had three challenges with this project, that i overcame. the first was getting to grips with the "<fstream>" header and its functionality, i overcame this by watching and refeering to various tutorials on youtube about it. the second was widthin the "getline" command i coded it like this `getline(ss, un, ",")` instead of this `getline(ss, un, ',')`, because i thought the quote marks and approsthropies were inter-changable. the third challenge i overcame involved previously regsteired credentials being erased, this was overcame when i became aware of the `ios::app` code which can be added to the end of a "offstream" object to write the new data to the end of the file.

## How to Use the Project

1. **Clone The Repository**

    * This saves the repository to a local directory, this can be done using git.

2. **Make The Bash Script Executable**

    * Open the terminal, then navigate to directory where the executable script is located and input this in the terminal: `chmod +x build.sh`

3. **Using The Bash Script**

    * Copy the `build.sh` executable script from the tools directory, into the "src" sub-directoy of the local directory where `Rock_Paper_Scissors.cpp` is stored.
    * Open the terminal, then navigate to the directory with the script and code file and input this with the code file as the arguement: `./build.sh User_Restraition_System.cpp`
    * The script when run will do this:
        *  Check if the filename was provided.
        *  Confirm the file exists.
        *  Ensure g++ is installed.
        *  Compile the code and name the output executable with the same name as the file but with an .exe extension.
        *  Display any errors if the compilation fails or notify you if it was successful.

4. **Run The Program**

    * If compilation was successful, input this command to run the program: `./User_Restraition_System`.

5. **Register A User**

    * When you are prompted, enter a **username** and **password** to register a new user.
    * The credentials you enter will be saved in a file named test.csv, located in User-Registration-System/res/.

6. **Login A User**

    * After registering your credentials, run the program again.
    * Now choose the login option, then enter your username and password.
    * The program will check `test.csv` to verify the credentials.

7. **File Management**

    * The user data file (test.csv) is in CSV format, delete or edit it as needed to reset or modify user records.
   
## Licenses

License can be found in the root of the repository.

# Wacom and Leap Motion Recorder 

An Acquisition Software for Windows developed in C++ and the Visual Studio Graphical Interface Toolkit. 

This application is designed for two things:
- Handwriting Acquisition using a Wacom Tablet *(I only tested on an Intuous Pro but should work on any)*
- Hand Gesture Acquisition using a Leap Motion

-------
# System Requierements

The sofware has to be used in Windows OS.
First you must install the Wacom Drivers as explained in the Tutorial [here](https://www.dropbox.com/s/juup7uxulsmdr6z/Wacom_Configuration.pdf?dl=0)
The first time the program is run, the computer might need some missing DLLs. However, this rarelly happens.

-------
# Using the App

You can download the precopiled Windows app from [here](https://www.dropbox.com/s/dodpf0txgpwdu8w/Recorder.tar.gz?dl=0) and hopefully it will work.
Otherwise you will have to download the sources here and recopile it.
Once you have the **RecordingApplication.exe** you can run it to lauch the recorder 

------
# Recording

To log into the application
- **Username:** TelecomSudParis
- **Password:** 123

Once you log in, you can create a new patient and fill its information

Once you have a patient you can start recording, you can chose one of the following protocols:

- **Broca French** : Record using the Wacom Tablet. Some handwriting excercises are proposed. The most interesting thing here is that you have two types of  exercises: *free*, where you have as much time as you need, and *limited* where you have 15 seconds to write something. 
- **Broca Arab** : Same as **Broca French**, but it gets saved into another folder. Nobody checks if it is Arab or French, they are just names.
- **Signatures** : Record using the Wacom Tablet. Intended to record handwritten signatures
- **Leap Motion Tools** : Record using the Leap Motion and a pointing tool
- **Leap Motion Hand** : Record using the Leap Motion and a full hand recording

Once you select the type of activity you want to do, you can launch the recording and stop when you are done.

Normally, it should give you a preview of what has been recorded, so you can accept it before it gets written into a file

All files are stored in a CSV alike format, so you can parse them easily, you can find a sample file [here]()

-------
# Modifying the App
To open the source code in order to modify it, you will have to use Visual Studio.
In particular this was programmed using Visual Studio 2013, so I recommend this version or newer.

Most of the project files are intended to input information about the person being recorded.
At that time we had a very extensive protocol which wont be necessary for most of the applications.
However it is quite easy to bypass these extensive questionaries in the code.

License
----
MIT

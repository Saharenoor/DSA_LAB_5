#include "MyStack2.h"

class TextEditor {
    string text;
    MyStack2<string> undoStack;
    MyStack2<string> redoStack;

public:
    TextEditor() : undoStack(100), redoStack(100) {}

    void type(char ch) {
        undoStack.push(text);
        text += ch;
        redoStack.clear();
    }

    void backspace() {
        if (!text.empty()) {
            undoStack.push(text);
            text.pop_back();
            redoStack.clear();
        } else {
            cout << "Nothing to delete.\n";
        }
    }

    void undo() {
        if (!undoStack.isEmpty()) {
            redoStack.push(text);
            text = undoStack.top();
            undoStack.pop();
        } else {
            cout << "Nothing to undo.\n";
        }
    }

    void redo() {
        if (!redoStack.isEmpty()) {
            undoStack.push(text);
            text = redoStack.top();
            redoStack.pop();
        } else {
            cout << "Nothing to redo.\n";
        }
    }

    void show() const {
        cout << "Current Text: " << text << endl;
    }
};

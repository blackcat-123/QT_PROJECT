#include "mainwindow.h"
#include "./ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //graphicsView = new QGraphicsView(this);
    connect(ui->actionZoom_in, &QAction::triggered, this, &MainWindow::on_actionZoom_in_triggered);
    connect(ui->actionZoom_out, &QAction::triggered, this, &MainWindow::on_actionZoom_out_triggered);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionNew_triggered()
{
        // Check if the current file has unsaved content
        if (!ui->textEdit->toPlainText().isEmpty() && currentFile.isEmpty()) {
            QMessageBox::StandardButton reply;
            reply = QMessageBox::question(this, "Save?", "Do you want to save the current file?",
                                          QMessageBox::Yes|QMessageBox::No);
            if (reply == QMessageBox::Yes) {
                on_actionSave_triggered();
            }
        }

        ui->textEdit->clear();
        ui->textEdit->setText(QString());
}


void MainWindow::on_actionOpen_triggered()
{
    // Opens a dialog that allows you to select a file to open
    QString fileName = QFileDialog::getOpenFileName(this, "Open the file");

    // An object for reading and writing files
    QFile file(fileName);

    // Store the currentFile name
    currentFile = fileName;

    // Try to open the file as a read only file if possible or display a
    // warning dialog box
    if (!file.open(QIODevice::ReadOnly | QFile::Text)) {
        QMessageBox::warning(this, "Warning", "Cannot open file: " + file.errorString());
        return;
    }

    // Set the title for the window to the file name
    setWindowTitle(fileName);

    // Interface for reading text
    QTextStream in(&file);

    // Copy text in the string
    QString text = in.readAll();

    // Put the text in the textEdit widget
    ui->textEdit->setText(text);

    // Close the file
    file.close();
}


void MainWindow::on_actionSave_triggered()
{

        // Mo dialog de user chon noi luu file
        QString fileName = QFileDialog::getSaveFileName(this, "Save as");
        QFile file(fileName);

        // Mo file voi quyen ghi
        // Neu file ko mo, bao loi
        if (!file.open(QFile::WriteOnly | QFile::Text)) {
            QMessageBox::warning(this, "Warning", "Cannot save file: " + file.errorString());
            return;
        }

        // Ghi noi dung vao file
        currentFile = fileName;

        setWindowTitle(fileName);

        QTextStream out(&file);

        QString text = ui->textEdit->toPlainText();

        out << text;

        file.close();
}


void MainWindow::on_actionExit_triggered()
{
    QApplication::quit();
}




void MainWindow::on_actionUndo_triggered()
{
    ui->textEdit->undo();
}


void MainWindow::on_actionCopy_triggered()
{
    ui->textEdit->copy();
}


void MainWindow::on_actionCut_triggered()
{
    ui->textEdit->cut();
}


void MainWindow::on_actionPaste_triggered()
{
    ui->textEdit->paste();
}


void MainWindow::on_actionDelete_triggered()
{
    ui->textEdit->clear();

}


/**void MainWindow::on_actionZoom_in_triggered()
{
    graphicsView->scale(1.2, 1.2);
}
*/

/**void MainWindow::on_actionZoom_out_triggered()
{
    graphicsView->scale(1/1.2, 1/1.2);
}
*/

void MainWindow::on_actionZoom_in_triggered()
{
    ui->textEdit->zoomIn(2);
}


void MainWindow::on_actionZoom_out_triggered()
{
    ui->textEdit->zoomOut(2);
}

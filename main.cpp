#include <QCoreApplication>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    // --> QMap
    QMap<int,QString> Employees;

    Employees.insert(1,"Bob");
    Employees.insert(2,"Marley");
    Employees.insert(3,"Mariana");


    foreach (int i, Employees.keys()) {
        qDebug()<<"Employees "<< i <<" name is "<< Employees[i];
    }

    QMapIterator<int,QString> IterMap(Employees);

    while(IterMap.hasNext()){
        IterMap.next();
        qDebug()<<IterMap.key()<<" is "<<IterMap.value(); // Key refer to index, value refer to Empl value.
    }


    // ->> QHash = faster than QMap
    QHash<int,QString> EmployeesH;

    EmployeesH.insert(1,"Bob");
    EmployeesH.insert(2,"Marley");
    EmployeesH.insert(3,"Mariana");


    foreach (int i, EmployeesH.keys()) {
        qDebug()<<"Employees "<< i <<" name is "<< EmployeesH[i];
    }


    qDebug()<<"\n";
    // ---> Q StringList

    QStringList SList;

    QString list = "a,b,c,d,e,f,g";

    SList = list.split(",");
    SList.replaceInStrings("b","boy");

    QString After = SList.join(",");
    qDebug()<<After;

    foreach (QString item, SList) {
        qDebug()<<item;
    }
    return a.exec();
}

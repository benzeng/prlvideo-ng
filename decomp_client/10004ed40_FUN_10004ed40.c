
void FUN_10004ed40(undefined8 param_1,QString *param_2,undefined8 param_3)

{
  char cVar1;
  QString local_30;
  
  QDir::QDir((QDir *)&local_30,param_2);
  cVar1 = QDir::exists();
  if (cVar1 == '\0') {
    QDir::mkpath(&local_30);
    FUN_10004edc0(param_1,param_2,param_3,0);
  }
  QDir::~QDir((QDir *)&local_30);
  return;
}


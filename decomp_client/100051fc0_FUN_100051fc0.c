
void FUN_100051fc0(undefined8 param_1,QString *param_2,undefined8 param_3)

{
  char cVar1;
  QString local_30;
  
  QDir::QDir((QDir *)&local_30,param_2);
  cVar1 = QDir::exists();
  if (cVar1 == '\0') {
    QDir::mkpath(&local_30);
    FUN_100052040(param_1,param_2,param_3);
  }
  QDir::~QDir((QDir *)&local_30);
  return;
}


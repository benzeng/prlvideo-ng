
undefined1 FUN_100d31ab0(QString *param_1)

{
  char cVar1;
  undefined1 uVar2;
  QString local_20;
  
  QDir::QDir((QDir *)&local_20,param_1);
  cVar1 = QDir::exists();
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    cVar1 = QDir::exists(&local_20);
    uVar2 = 1;
    if (cVar1 == '\0') {
      uVar2 = QDir::mkpath(&local_20);
    }
  }
  QDir::~QDir((QDir *)&local_20);
  return uVar2;
}


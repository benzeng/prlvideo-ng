
undefined1 FUN_100753790(undefined8 param_1,QString *param_2)

{
  char cVar1;
  undefined1 uVar2;
  QFileInfo local_18 [8];
  
  QFileInfo::QFileInfo(local_18,param_2);
  cVar1 = QFileInfo::exists();
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    uVar2 = QFileInfo::isReadable();
  }
  QFileInfo::~QFileInfo(local_18);
  return uVar2;
}


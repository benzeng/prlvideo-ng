
undefined4 FUN_1000f3e00(long param_1,int param_2)

{
  QString *pQVar1;
  char cVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  QFileInfo local_30 [8];
  
  pQVar1 = (QString *)(param_1 + 8);
  QFileInfo::QFileInfo(local_30,pQVar1);
  cVar2 = QFileInfo::isDir();
  if (cVar2 != '\0') {
    cVar2 = QFileInfo::isSymLink();
    if (cVar2 == '\0') {
      FUN_1000f3730(pQVar1,param_2);
      uVar3 = 0;
      if (param_2 == 0) {
        uVar3 = 0;
        uVar4 = 0;
        if (*(long *)(param_1 + 0x40) != 0) {
          uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x40) + 0x10);
        }
        FUN_1000f73f0(uVar4);
      }
      goto LAB_1000f3e80;
    }
  }
  QFile::remove(pQVar1);
  uVar3 = FUN_1000f31c0(pQVar1);
LAB_1000f3e80:
  QFileInfo::~QFileInfo(local_30);
  return uVar3;
}



undefined1 FUN_1006f7a00(QString *param_1)

{
  char cVar1;
  int iVar2;
  undefined1 uVar3;
  long local_20 [2];
  
  QFile::QFile((QFile *)local_20,param_1);
  cVar1 = QFile::open((QFile *)local_20,1);
  if (cVar1 == '\0') {
    iVar2 = QFileDevice::error();
    uVar3 = 1;
    if (iVar2 == 5) goto LAB_1006f7a4c;
  }
  (**(code **)(local_20[0] + 0x70))(local_20);
  uVar3 = 0;
LAB_1006f7a4c:
  QFile::~QFile((QFile *)local_20);
  return uVar3;
}


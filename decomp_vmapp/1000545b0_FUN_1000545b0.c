
undefined8 FUN_1000545b0(long param_1,QString *param_2)

{
  char cVar1;
  uint uVar2;
  undefined8 uVar3;
  long local_30 [2];
  
  cVar1 = QFileInfo::exists(param_2);
  uVar3 = 1;
  if (cVar1 == '\0') {
    QFile::QFile((QFile *)local_30,param_2);
    cVar1 = QFile::open((QFile *)local_30,3);
    uVar3 = 2;
    if (cVar1 != '\0') {
      uVar2 = *(int *)(param_1 + 0x3c) + 1;
      *(uint *)(param_1 + 0x3c) = uVar2;
      if (*(uint *)(param_1 + 0x28) < uVar2) {
        *(uint *)(param_1 + 0x28) = uVar2;
      }
      uVar3 = 0;
      (**(code **)(local_30[0] + 0x70))(local_30);
    }
    QFile::~QFile((QFile *)local_30);
  }
  return uVar3;
}



undefined8 FUN_100d62f90(long param_1)

{
  int iVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long local_28 [2];
  
  if (*(char *)(param_1 + 0x18) == '\0') {
    if (DAT_10230ffd0 < 3) {
      return 0x8000000;
    }
    FUN_100df99c0("","WinRegistry",3,"OA00006.02:");
    return 0x8000000;
  }
  FUN_100df99c0("","WinRegistry",0,"Qt reg hive writing (dirty).");
  QFile::QFile((QFile *)local_28,(QString *)(param_1 + 8));
  cVar2 = QFile::open((QFile *)local_28,10);
  if (cVar2 == '\0') {
    iVar1 = *(int *)(*(long *)(param_1 + 0x10) + 4);
    uVar3 = 0;
  }
  else {
    (**(code **)(local_28[0] + 0x88))(local_28,0);
    uVar3 = QIODevice::write((char *)local_28,
                             *(long *)(*(long *)(param_1 + 0x10) + 0x10) + *(long *)(param_1 + 0x10)
                            );
    iVar1 = *(int *)(*(long *)(param_1 + 0x10) + 4);
    uVar4 = 0x8000000;
    if ((int)uVar3 == iVar1) goto LAB_100d6308e;
  }
  uVar4 = 0x8158001;
  FUN_100df99c0("","WinRegistry",0,"OA00006.03:\t%d;\t%d",iVar1,uVar3);
LAB_100d6308e:
  QFile::~QFile((QFile *)local_28);
  return uVar4;
}


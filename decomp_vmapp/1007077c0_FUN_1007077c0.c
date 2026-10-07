
undefined8
FUN_1007077c0(long *param_1,QString *param_2,uint param_3,uint param_4,uint param_5,uint param_6)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  QArrayData *local_40;
  
  param_1[3] = 0;
  QString::operator=((QString *)(param_1 + 0xc),param_2);
  cVar1 = FUN_100768c70(param_2);
  uVar2 = param_3 - 1;
  if (2 < uVar2) {
    uVar2 = 0;
  }
  *(uint *)(param_1 + 0xd) = uVar2 | param_6;
  QString::toUtf8();
  iVar3 = _open((char *)(local_40 + *(long *)(local_40 + 0x10)),
                *(uint *)(param_1 + 0xd) | param_5 | 0x1000000,0x1b4);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) goto LAB_100707873;
    }
    QArrayData::deallocate(local_40,1,8);
  }
LAB_100707873:
  if (iVar3 < 0) {
    ___error();
    uVar5 = FUN_100768f60();
    FUN_1008e3970("","AbstractFile",0,"open64() error: %d, flags = 0x%X, disp = 0x%X",uVar5,
                  (int)param_1[0xd],param_5 | 0x1000000);
  }
  else if (((param_3 & 2) != 0 && cVar1 == '\0') &&
          (iVar4 = _flock(iVar3,2 - (param_4 >> 1 & 1) | 4), iVar4 != 0)) {
    iVar4 = FUN_100768f60();
    if ((iVar4 != 0x2d) && (iVar4 != 0x4d)) {
      _close(iVar3);
      FUN_1008e3970("","AbstractFile",0,"flock() error: %d",iVar4);
      FUN_1007079c0(param_1);
      *(int *)((long)param_1 + 0x14) = iVar4;
      return 0xffffffff;
    }
    FUN_1008e3970("","AbstractFile",0,"flock() not supported");
  }
  uVar5 = FUN_100768f60();
  *(undefined4 *)((long)param_1 + 0x14) = uVar5;
  uVar6 = (**(code **)(*param_1 + 0x20))(param_1,iVar3);
  return uVar6;
}


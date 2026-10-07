
undefined1 FUN_100043a20(undefined8 param_1,long *param_2,uint param_3)

{
  char cVar1;
  undefined1 uVar2;
  long lVar3;
  QArrayData *local_28;
  undefined1 local_1a;
  
  if ((ulong)param_3 - 0x20 < 4) {
    if (0 < DAT_1011b55f8) {
      FUN_1008e3970("SGAH","vm",1,"Invalid VConfig params size (%ld)");
      return 0;
    }
    return 0;
  }
  lVar3 = 0;
  if (*param_2 != 0) {
    lVar3 = *(long *)(*param_2 + 0x10);
  }
  QByteArray::QByteArray((QByteArray *)&local_28,(char *)(lVar3 + 0x20),4);
  cVar1 = FUN_1000488f0(1,(QByteArray *)&local_28);
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      local_1a = *(int *)local_28 != 0;
      UNLOCK();
      if ((bool)local_1a) goto LAB_100043ad3;
    }
    QArrayData::deallocate(local_28,1,8);
  }
LAB_100043ad3:
  uVar2 = 1;
  if (cVar1 == '\0') {
    if (DAT_1011b55f8 < 1) {
      uVar2 = 0;
    }
    else {
      uVar2 = 0;
      FUN_1008e3970("SGAH","vm",1,"Failed on set VConfigqmap");
    }
  }
  return uVar2;
}


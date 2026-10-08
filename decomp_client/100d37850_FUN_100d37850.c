
undefined1 FUN_100d37850(undefined8 param_1,long *param_2)

{
  QArrayData QVar1;
  long lVar2;
  QArrayData *pQVar3;
  byte bVar4;
  undefined1 uVar5;
  QArrayData *local_28;
  
  QString::toLatin1();
  if (*(int *)(local_28 + 4) == 6) {
    lVar2 = *(long *)(local_28 + 0x10);
    if ((((((byte)((char)local_28[lVar2] - 0x30U) < 10) &&
          ((byte)((char)local_28[lVar2 + 1] - 0x30U) < 10)) &&
         ((byte)((char)local_28[lVar2 + 2] - 0x30U) < 10)) &&
        (((byte)((char)local_28[lVar2 + 3] - 0x30U) < 10 &&
         (QVar1 = local_28[lVar2 + 4], (byte)((char)QVar1 - 0x30U) < 10)))) &&
       ((byte)((char)local_28[lVar2 + 5] - 0x30U) < 10)) {
      if (local_28[lVar2 + 1] == local_28[lVar2 + 2]) {
        bVar4 = local_28[lVar2] == local_28[lVar2 + 1] | 2;
      }
      else {
        bVar4 = 1;
      }
      if (bVar4 != 3) {
        if (local_28[lVar2 + 2] == local_28[lVar2 + 3]) {
          bVar4 = bVar4 + 1;
        }
        else {
          bVar4 = 1;
        }
        if (((bVar4 < 3) && ((local_28[lVar2 + 3] != QVar1 || ((byte)(bVar4 + 1) < 3)))) &&
           ((local_28[lVar2 + 4] != local_28[lVar2 + 5] || (local_28[lVar2 + 3] != QVar1)))) {
          pQVar3 = (QArrayData *)*param_2;
          *param_2 = (long)local_28;
          uVar5 = 1;
          local_28 = pQVar3;
          goto LAB_100d37971;
        }
      }
    }
  }
  uVar5 = 0;
LAB_100d37971:
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      UNLOCK();
      if (*(int *)local_28 != 0) {
        return uVar5;
      }
    }
    QArrayData::deallocate(local_28,1,8);
  }
  return uVar5;
}



byte FUN_1001221f0(long param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  uint uVar4;
  Data *local_30;
  
  if (param_1 == 0) {
    return 0;
  }
  MacUtils::getHiDPIDisplays();
  iVar1 = *(int *)(local_30 + 0xc);
  iVar2 = *(int *)(local_30 + 8);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      UNLOCK();
      if (*(int *)local_30 != 0) goto LAB_10012223c;
    }
    QListData::dispose(local_30);
  }
LAB_10012223c:
  if (iVar1 == iVar2) {
    return 0;
  }
  uVar3 = FUN_10018f890(param_1);
  uVar4 = (uint)((ulong)uVar3 >> 8) & 0xffffff;
  if (uVar4 != 7) {
    return -((int)uVar3 - 0x80bU < 3) & uVar4 == 8;
  }
  return 1;
}


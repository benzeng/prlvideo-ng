
uint FUN_1001222e0(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  Data *local_30;
  
  MacUtils::getHiDPIDisplays();
  iVar1 = *(int *)(local_30 + 0xc);
  iVar2 = *(int *)(local_30 + 8);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      UNLOCK();
      if (*(int *)local_30 != 0) goto LAB_100122326;
    }
    QListData::dispose(local_30);
  }
LAB_100122326:
  if (iVar1 == iVar2) {
    uVar4 = 0;
  }
  else {
    cVar3 = FUN_1001221f0(param_1);
    if (((cVar3 != '\0') || (uVar4 = FUN_10018f890(param_1), uVar4 - 0x80e < 3)) ||
       (uVar6 = 1, (uVar4 & 0xffffff00) == 0x700)) {
      uVar6 = 3;
    }
    cVar3 = FUN_1001221f0(param_1);
    if ((cVar3 != '\0') ||
       ((uVar4 = FUN_10018f890(param_1), 2 < uVar4 - 0x80e && ((uVar4 & 0xffffff00) != 0x700)))) {
      uVar6 = uVar6 | 4;
    }
    uVar5 = FUN_10018f890(param_1);
    uVar4 = uVar6 | 8;
    if ((uVar5 & 0xffffff00) != 0x800) {
      uVar4 = uVar6;
    }
    if (2 < uVar5 - 0x80e) {
      uVar4 = uVar6;
    }
  }
  return uVar4;
}


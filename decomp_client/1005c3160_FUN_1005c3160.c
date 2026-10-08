
undefined4 FUN_1005c3160(long param_1)

{
  QArrayData *pQVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (*(int *)(*(long *)(param_1 + 0x18) + 0x50) == 8) {
    return 0x14;
  }
  pQVar1 = *(QArrayData **)(*(long *)(param_1 + 0x18) + 0x98);
  if (1 < *(int *)pQVar1 + 1U) {
    LOCK();
    *(int *)pQVar1 = *(int *)pQVar1 + 1;
    UNLOCK();
  }
  iVar2 = QString::compare_helper
                    (pQVar1 + *(long *)(pQVar1 + 0x10),*(undefined4 *)(pQVar1 + 4),
                     PTR_s_ModernIE_102275038,0xffffffff,1);
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_1005c31ea;
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_1005c31ea:
  if (iVar2 == 0) {
    return 0x16;
  }
  pQVar1 = *(QArrayData **)(*(long *)(param_1 + 0x18) + 0x98);
  if (1 < *(int *)pQVar1 + 1U) {
    LOCK();
    *(int *)pQVar1 = *(int *)pQVar1 + 1;
    UNLOCK();
  }
  iVar2 = QString::compare_helper
                    (pQVar1 + *(long *)(pQVar1 + 0x10),*(undefined4 *)(pQVar1 + 4),
                     PTR_s_Windows_10_development_102275048,0xffffffff,1);
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_1005c3262;
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_1005c3262:
  uVar3 = 0x12;
  if (iVar2 == 0) {
    uVar3 = 4;
  }
  return uVar3;
}


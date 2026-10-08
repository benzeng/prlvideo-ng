
undefined8 FUN_100577620(long *param_1,int param_2)

{
  uint uVar1;
  uint *puVar2;
  long lVar3;
  undefined8 uVar4;
  Data *pDVar5;
  long lVar6;
  long lVar7;
  
  puVar2 = (uint *)*param_1;
  if (1 < *puVar2) {
    uVar1 = puVar2[2];
    pDVar5 = (Data *)QListData::detach((int)param_1);
    lVar3 = *param_1;
    lVar6 = (long)*(int *)(lVar3 + 8);
    if ((puVar2 + (long)(int)uVar1 * 2 != (uint *)(lVar3 + lVar6 * 8)) &&
       (lVar7 = *(int *)(lVar3 + 0xc) - lVar6, lVar7 != 0 && lVar6 <= *(int *)(lVar3 + 0xc))) {
      _memcpy((void *)(lVar3 + 0x10 + lVar6 * 8),puVar2 + (long)(int)uVar1 * 2 + 4,lVar7 * 8);
    }
    if (*(int *)pDVar5 != -1) {
      if (*(int *)pDVar5 != 0) {
        LOCK();
        *(int *)pDVar5 = *(int *)pDVar5 + -1;
        UNLOCK();
        if (*(int *)pDVar5 != 0) goto LAB_1005776a4;
      }
      QListData::dispose(pDVar5);
    }
  }
LAB_1005776a4:
  uVar4 = *(undefined8 *)(*param_1 + 0x10 + ((long)*(int *)(*param_1 + 8) + (long)param_2) * 8);
  QListData::remove((int)param_1);
  return uVar4;
}



long FUN_100989830(long *param_1,int param_2)

{
  uint uVar1;
  uint *puVar2;
  long lVar3;
  Data *pDVar4;
  long lVar5;
  long lVar6;
  
  puVar2 = (uint *)*param_1;
  if (1 < *puVar2) {
    uVar1 = puVar2[2];
    pDVar4 = (Data *)QListData::detach((int)param_1);
    lVar3 = *param_1;
    lVar5 = (long)*(int *)(lVar3 + 8);
    if ((puVar2 + (long)(int)uVar1 * 2 != (uint *)(lVar3 + lVar5 * 8)) &&
       (lVar6 = *(int *)(lVar3 + 0xc) - lVar5, lVar6 != 0 && lVar5 <= *(int *)(lVar3 + 0xc))) {
      _memcpy((void *)(lVar3 + 0x10 + lVar5 * 8),puVar2 + (long)(int)uVar1 * 2 + 4,lVar6 * 8);
    }
    if (*(int *)pDVar4 != -1) {
      if (*(int *)pDVar4 != 0) {
        LOCK();
        *(int *)pDVar4 = *(int *)pDVar4 + -1;
        UNLOCK();
        if (*(int *)pDVar4 != 0) goto LAB_1009898b4;
      }
      QListData::dispose(pDVar4);
    }
  }
LAB_1009898b4:
  return *param_1 + 0x10 + ((long)param_2 + (long)*(int *)(*param_1 + 8)) * 8;
}


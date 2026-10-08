
void FUN_100745250(long *param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  Data *pDVar4;
  
  lVar2 = *param_1;
  iVar1 = *(int *)(lVar2 + 8);
  pDVar4 = (Data *)QListData::detach((int)param_1);
  lVar3 = *param_1;
  FUN_100745310(param_1,lVar3 + 0x10 + (long)*(int *)(lVar3 + 8) * 8,
                lVar3 + 0x10 + (long)*(int *)(lVar3 + 0xc) * 8,lVar2 + 0x10 + (long)iVar1 * 8);
  if (*(int *)pDVar4 != -1) {
    if (*(int *)pDVar4 != 0) {
      LOCK();
      *(int *)pDVar4 = *(int *)pDVar4 + -1;
      UNLOCK();
      if (*(int *)pDVar4 != 0) {
        return;
      }
    }
    FUN_1007454a0(param_1,pDVar4 + (long)*(int *)(pDVar4 + 8) * 8 + 0x10,
                  pDVar4 + (long)*(int *)(pDVar4 + 0xc) * 8 + 0x10);
    QListData::dispose(pDVar4);
  }
  return;
}



long FUN_1000720a0(long *param_1,int param_2,int param_3)

{
  int iVar1;
  long lVar2;
  Data *pDVar3;
  Data *pDVar4;
  long lVar5;
  int local_38;
  undefined1 local_31;
  
  lVar5 = *param_1;
  iVar1 = *(int *)(lVar5 + 8);
  local_38 = param_2;
  pDVar3 = (Data *)QListData::detach_grow((int *)param_1,(int)&local_38);
  lVar2 = *param_1;
  FUN_100072240(param_1,lVar2 + 0x10 + (long)*(int *)(lVar2 + 8) * 8,
                lVar2 + 0x10 + ((long)local_38 + (long)*(int *)(lVar2 + 8)) * 8,
                lVar5 + 0x10 + (long)iVar1 * 8);
  lVar2 = *param_1;
  FUN_100072240(param_1,lVar2 + 0x10 +
                        ((long)param_3 + (long)*(int *)(lVar2 + 8) + (long)local_38) * 8,
                lVar2 + 0x10 + (long)*(int *)(lVar2 + 0xc) * 8,
                lVar5 + 0x10 + ((long)iVar1 + (long)local_38) * 8);
  if (*(int *)pDVar3 != -1) {
    if (*(int *)pDVar3 != 0) {
      LOCK();
      *(int *)pDVar3 = *(int *)pDVar3 + -1;
      local_31 = *(int *)pDVar3 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10007218f;
    }
    iVar1 = *(int *)(pDVar3 + 0xc);
    if (iVar1 != *(int *)(pDVar3 + 8)) {
      lVar5 = (long)*(int *)(pDVar3 + 8) * 8 + (long)iVar1 * -8;
      pDVar4 = pDVar3 + (long)iVar1 * 8 + 8;
      do {
        if (*(void **)pDVar4 != (void *)0x0) {
          operator_delete(*(void **)pDVar4);
        }
        pDVar4 = pDVar4 + -8;
        lVar5 = lVar5 + 8;
      } while (lVar5 != 0);
    }
    QListData::dispose(pDVar3);
  }
LAB_10007218f:
  return *param_1 + 0x10 + ((long)local_38 + (long)*(int *)(*param_1 + 8)) * 8;
}


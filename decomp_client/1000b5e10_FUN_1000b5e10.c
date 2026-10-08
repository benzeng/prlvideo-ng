
long FUN_1000b5e10(long *param_1,int param_2,int param_3)

{
  int iVar1;
  long lVar2;
  void *pvVar3;
  Data *pDVar4;
  Data *pDVar5;
  long lVar6;
  int local_38;
  undefined1 local_31;
  
  lVar6 = *param_1;
  iVar1 = *(int *)(lVar6 + 8);
  local_38 = param_2;
  pDVar4 = (Data *)QListData::detach_grow((int *)param_1,(int)&local_38);
  lVar2 = *param_1;
  FUN_1000b5ff0(param_1,lVar2 + 0x10 + (long)*(int *)(lVar2 + 8) * 8,
                lVar2 + 0x10 + ((long)local_38 + (long)*(int *)(lVar2 + 8)) * 8,
                lVar6 + 0x10 + (long)iVar1 * 8);
  lVar2 = *param_1;
  FUN_1000b5ff0(param_1,lVar2 + 0x10 +
                        ((long)param_3 + (long)*(int *)(lVar2 + 8) + (long)local_38) * 8,
                lVar2 + 0x10 + (long)*(int *)(lVar2 + 0xc) * 8,
                lVar6 + 0x10 + ((long)iVar1 + (long)local_38) * 8);
  if (*(int *)pDVar4 != -1) {
    if (*(int *)pDVar4 != 0) {
      LOCK();
      *(int *)pDVar4 = *(int *)pDVar4 + -1;
      local_31 = *(int *)pDVar4 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000b5f0a;
    }
    iVar1 = *(int *)(pDVar4 + 0xc);
    if (iVar1 != *(int *)(pDVar4 + 8)) {
      lVar6 = (long)*(int *)(pDVar4 + 8) * 8 + (long)iVar1 * -8;
      pDVar5 = pDVar4 + (long)iVar1 * 8 + 8;
      do {
        pvVar3 = *(void **)pDVar5;
        if (pvVar3 != (void *)0x0) {
          FUN_1000b5720(pvVar3);
          operator_delete(pvVar3);
        }
        pDVar5 = pDVar5 + -8;
        lVar6 = lVar6 + 8;
      } while (lVar6 != 0);
    }
    QListData::dispose(pDVar4);
  }
LAB_1000b5f0a:
  return *param_1 + 0x10 + ((long)local_38 + (long)*(int *)(*param_1 + 8)) * 8;
}


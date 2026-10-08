
long FUN_10014a6a0(long *param_1,int param_2,int param_3)

{
  int iVar1;
  long lVar2;
  long *plVar3;
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
  FUN_10014a880(param_1,lVar2 + 0x10 + (long)*(int *)(lVar2 + 8) * 8,
                lVar2 + 0x10 + ((long)local_38 + (long)*(int *)(lVar2 + 8)) * 8,
                lVar6 + 0x10 + (long)iVar1 * 8);
  lVar2 = *param_1;
  FUN_10014a880(param_1,lVar2 + 0x10 +
                        ((long)param_3 + (long)*(int *)(lVar2 + 8) + (long)local_38) * 8,
                lVar2 + 0x10 + (long)*(int *)(lVar2 + 0xc) * 8,
                lVar6 + 0x10 + ((long)iVar1 + (long)local_38) * 8);
  if (*(int *)pDVar4 != -1) {
    if (*(int *)pDVar4 != 0) {
      LOCK();
      *(int *)pDVar4 = *(int *)pDVar4 + -1;
      local_31 = *(int *)pDVar4 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10014a7a0;
    }
    iVar1 = *(int *)(pDVar4 + 0xc);
    if (iVar1 != *(int *)(pDVar4 + 8)) {
      lVar6 = (long)*(int *)(pDVar4 + 8) * 8 + (long)iVar1 * -8;
      pDVar5 = pDVar4 + (long)iVar1 * 8 + 8;
      do {
        plVar3 = *(long **)pDVar5;
        if (plVar3 != (long *)0x0) {
          if (*plVar3 != 0) {
            _PrlHandle_Free();
          }
          operator_delete(plVar3);
        }
        pDVar5 = pDVar5 + -8;
        lVar6 = lVar6 + 8;
      } while (lVar6 != 0);
    }
    QListData::dispose(pDVar4);
  }
LAB_10014a7a0:
  return *param_1 + 0x10 + ((long)local_38 + (long)*(int *)(*param_1 + 8)) * 8;
}


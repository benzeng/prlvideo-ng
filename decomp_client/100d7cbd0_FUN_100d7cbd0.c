
long FUN_100d7cbd0(long *param_1,int param_2,int param_3)

{
  int iVar1;
  long lVar2;
  Data *pDVar3;
  Data *pDVar4;
  int *piVar5;
  long lVar6;
  int local_38;
  undefined1 local_33;
  undefined1 local_32;
  
  lVar6 = *param_1;
  iVar1 = *(int *)(lVar6 + 8);
  local_38 = param_2;
  pDVar3 = (Data *)QListData::detach_grow((int *)param_1,(int)&local_38);
  lVar2 = *param_1;
  FUN_100d7cdc0(param_1,lVar2 + 0x10 + (long)*(int *)(lVar2 + 8) * 8,
                lVar2 + 0x10 + ((long)local_38 + (long)*(int *)(lVar2 + 8)) * 8,
                lVar6 + 0x10 + (long)iVar1 * 8);
  lVar2 = *param_1;
  FUN_100d7cdc0(param_1,lVar2 + 0x10 +
                        ((long)param_3 + (long)*(int *)(lVar2 + 8) + (long)local_38) * 8,
                lVar2 + 0x10 + (long)*(int *)(lVar2 + 0xc) * 8,
                lVar6 + 0x10 + ((long)iVar1 + (long)local_38) * 8);
  if (*(int *)pDVar3 != -1) {
    if (*(int *)pDVar3 != 0) {
      LOCK();
      *(int *)pDVar3 = *(int *)pDVar3 + -1;
      local_32 = *(int *)pDVar3 != 0;
      UNLOCK();
      if ((bool)local_32) goto LAB_100d7ccda;
    }
    iVar1 = *(int *)(pDVar3 + 0xc);
    if (iVar1 != *(int *)(pDVar3 + 8)) {
      lVar6 = (long)*(int *)(pDVar3 + 8) * 8 + (long)iVar1 * -8;
      pDVar4 = pDVar3 + (long)iVar1 * 8 + 8;
      do {
        piVar5 = *(int **)pDVar4;
        if (*piVar5 == 0) {
LAB_100d7ccc0:
          FUN_100d7c9e0(pDVar4,piVar5);
        }
        else if (*piVar5 != -1) {
          LOCK();
          *piVar5 = *piVar5 + -1;
          local_33 = *piVar5 != 0;
          UNLOCK();
          if (!(bool)local_33) {
            piVar5 = *(int **)pDVar4;
            goto LAB_100d7ccc0;
          }
        }
        pDVar4 = pDVar4 + -8;
        lVar6 = lVar6 + 8;
      } while (lVar6 != 0);
    }
    QListData::dispose(pDVar3);
  }
LAB_100d7ccda:
  return *param_1 + 0x10 + ((long)local_38 + (long)*(int *)(*param_1 + 8)) * 8;
}


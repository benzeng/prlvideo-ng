
long FUN_10012bcc0(long *param_1,int param_2,int param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  Data *pDVar4;
  int local_38;
  undefined1 local_31;
  
  lVar2 = *param_1;
  iVar1 = *(int *)(lVar2 + 8);
  local_38 = param_2;
  pDVar4 = (Data *)QListData::detach_grow((int *)param_1,(int)&local_38);
  lVar3 = *param_1;
  FUN_10012beb0(param_1,lVar3 + 0x10 + (long)*(int *)(lVar3 + 8) * 8,
                lVar3 + 0x10 + ((long)local_38 + (long)*(int *)(lVar3 + 8)) * 8,
                lVar2 + 0x10 + (long)iVar1 * 8);
  lVar3 = *param_1;
  FUN_10012beb0(param_1,lVar3 + 0x10 +
                        ((long)param_3 + (long)*(int *)(lVar3 + 8) + (long)local_38) * 8,
                lVar3 + 0x10 + (long)*(int *)(lVar3 + 0xc) * 8,
                lVar2 + 0x10 + ((long)iVar1 + (long)local_38) * 8);
  if (*(int *)pDVar4 != -1) {
    if (*(int *)pDVar4 != 0) {
      LOCK();
      *(int *)pDVar4 = *(int *)pDVar4 + -1;
      local_31 = *(int *)pDVar4 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10012bd8a;
    }
    FUN_10012bba0(param_1,pDVar4 + (long)*(int *)(pDVar4 + 8) * 8 + 0x10,
                  pDVar4 + (long)*(int *)(pDVar4 + 0xc) * 8 + 0x10);
    QListData::dispose(pDVar4);
  }
LAB_10012bd8a:
  return *param_1 + 0x10 + ((long)local_38 + (long)*(int *)(*param_1 + 8)) * 8;
}


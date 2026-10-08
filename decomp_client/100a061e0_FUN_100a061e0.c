
long FUN_100a061e0(long *param_1,int param_2,int param_3)

{
  long lVar1;
  Data *pDVar2;
  int iVar3;
  long lVar4;
  size_t sVar5;
  long lVar6;
  long lVar7;
  int local_38;
  undefined1 local_31;
  
  lVar1 = *param_1;
  lVar7 = (long)*(int *)(lVar1 + 8);
  local_38 = param_2;
  pDVar2 = (Data *)QListData::detach_grow((int *)param_1,(int)&local_38);
  lVar6 = *param_1;
  iVar3 = *(int *)(lVar6 + 8);
  if ((lVar1 + lVar7 * 8 != lVar6 + (long)iVar3 * 8) && (0 < (long)local_38 * 8)) {
    _memcpy((void *)(lVar6 + 0x10 + (long)iVar3 * 8),(void *)(lVar1 + 0x10 + lVar7 * 8),
            (long)local_38 * 8);
    lVar6 = *param_1;
    iVar3 = *(int *)(lVar6 + 8);
  }
  lVar4 = (long)param_3 + (long)iVar3 + (long)local_38;
  lVar7 = lVar7 + local_38;
  if ((lVar1 + lVar7 * 8 != lVar6 + lVar4 * 8) &&
     (sVar5 = (long)*(int *)(lVar6 + 0xc) * 8 + lVar4 * -8, 0 < (long)sVar5)) {
    _memcpy((void *)(lVar6 + 0x10 + lVar4 * 8),(void *)(lVar1 + 0x10 + lVar7 * 8),sVar5);
  }
  if (*(int *)pDVar2 != -1) {
    if (*(int *)pDVar2 != 0) {
      LOCK();
      *(int *)pDVar2 = *(int *)pDVar2 + -1;
      local_31 = *(int *)pDVar2 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100a062cc;
    }
    QListData::dispose(pDVar2);
  }
LAB_100a062cc:
  return *param_1 + 0x10 + ((long)local_38 + (long)*(int *)(*param_1 + 8)) * 8;
}


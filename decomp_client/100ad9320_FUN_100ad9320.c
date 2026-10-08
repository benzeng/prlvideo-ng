
undefined1 FUN_100ad9320(long *param_1)

{
  long lVar1;
  QArrayData *pQVar2;
  QArrayData *pQVar3;
  QArrayData *pQVar4;
  undefined1 uVar5;
  QArrayData *local_28;
  undefined1 local_19;
  
  (**(code **)(*param_1 + 0x140))(&local_28,param_1);
  pQVar2 = (QArrayData *)param_1[0x15b];
  if (local_28 == pQVar2) {
    uVar5 = 0;
  }
  else if (*(int *)(local_28 + 4) == *(int *)(pQVar2 + 4)) {
    lVar1 = (long)*(int *)(local_28 + 4) * 0x18;
    if (lVar1 == 0) {
      uVar5 = 0;
    }
    else {
      pQVar4 = local_28 + *(long *)(local_28 + 0x10);
      pQVar3 = pQVar4 + lVar1;
      pQVar2 = pQVar2 + *(long *)(pQVar2 + 0x10);
      do {
        if ((((*(int *)pQVar4 != *(int *)pQVar2) || (*(int *)(pQVar4 + 4) != *(int *)(pQVar2 + 4)))
            || (*(int *)(pQVar4 + 8) != *(int *)(pQVar2 + 8))) ||
           (((*(int *)(pQVar4 + 0xc) != *(int *)(pQVar2 + 0xc) ||
             (*(int *)(pQVar4 + 0x10) != *(int *)(pQVar2 + 0x10))) ||
            (*(int *)(pQVar4 + 0x14) != *(int *)(pQVar2 + 0x14))))) goto LAB_100ad93bf;
        pQVar4 = pQVar4 + 0x18;
        pQVar2 = pQVar2 + 0x18;
        uVar5 = 0;
      } while (pQVar4 != pQVar3);
    }
  }
  else {
LAB_100ad93bf:
    FUN_100ad9800(param_1 + 0x15b,&local_28);
    FUN_100ae3450(param_1);
    uVar5 = 1;
  }
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      UNLOCK();
      if (*(int *)local_28 != 0) {
        return uVar5;
      }
      local_19 = 0;
    }
    QArrayData::deallocate(local_28,0x18,8);
  }
  return uVar5;
}


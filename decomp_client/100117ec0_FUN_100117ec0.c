
undefined1 FUN_100117ec0(undefined8 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  char cVar2;
  long lVar3;
  Data *pDVar4;
  undefined1 uVar5;
  Data *local_28;
  undefined1 local_19;
  
  local_28 = (Data *)PTR_shared_null_1021e15e8;
  cVar2 = FUN_100117390(param_1,param_3,&local_28);
  if (cVar2 == '\0') {
    uVar5 = 0;
  }
  else {
    iVar1 = *(int *)(local_28 + 8);
    if (iVar1 == *(int *)(local_28 + 0xc)) {
      uVar5 = 0;
    }
    else {
      pDVar4 = local_28 + (long)iVar1 * 8 + 0x10;
      lVar3 = (long)*(int *)(local_28 + 0xc) * 8 + (long)iVar1 * -8;
      do {
        uVar5 = 1;
        if (*(int *)pDVar4 == param_2) goto LAB_100117f33;
        pDVar4 = pDVar4 + 8;
        lVar3 = lVar3 + -8;
      } while (lVar3 != 0);
      uVar5 = 0;
    }
  }
LAB_100117f33:
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
    QListData::dispose(local_28);
  }
  return uVar5;
}


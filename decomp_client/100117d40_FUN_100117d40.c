
undefined4 FUN_100117d40(long param_1,int param_2,int param_3)

{
  uint uVar1;
  Data *pDVar2;
  char cVar3;
  Data *pDVar4;
  long lVar5;
  long lVar6;
  undefined4 uVar7;
  Data *local_40;
  undefined1 local_32;
  undefined1 local_31;
  
  if (param_1 == 0) {
    return 0xffffffff;
  }
  local_40 = (Data *)PTR_shared_null_1021e15e8;
  cVar3 = FUN_100117390(param_1,param_2,&local_40);
  pDVar2 = local_40;
  uVar7 = 0xffffffff;
  if (cVar3 == '\0') goto LAB_100117e43;
  uVar1 = *(uint *)(local_40 + 8);
  if (*(uint *)(local_40 + 0xc) == uVar1) goto LAB_100117e43;
  if ((param_2 == 0) && (param_3 == 5)) {
    lVar5 = (long)(int)uVar1 * 8;
    do {
      uVar7 = 1;
      if (*(int *)(local_40 + lVar5 + 0x10) == 1) goto LAB_100117e43;
      lVar5 = lVar5 + 8;
    } while ((long)(int)*(uint *)(local_40 + 0xc) * 8 != lVar5);
  }
  if (1 < *(uint *)local_40) {
    pDVar4 = (Data *)QListData::detach((int)&local_40);
    lVar5 = (long)(int)*(uint *)(local_40 + 8);
    if ((pDVar2 + (long)(int)uVar1 * 8 + 0x10 != local_40 + lVar5 * 8 + 0x10) &&
       (lVar6 = (int)*(uint *)(local_40 + 0xc) - lVar5,
       lVar6 != 0 && lVar5 <= (int)*(uint *)(local_40 + 0xc))) {
      _memcpy(local_40 + lVar5 * 8 + 0x10,pDVar2 + (long)(int)uVar1 * 8 + 0x10,lVar6 * 8);
    }
    if (*(int *)pDVar4 != -1) {
      if (*(int *)pDVar4 != 0) {
        LOCK();
        *(int *)pDVar4 = *(int *)pDVar4 + -1;
        local_31 = *(int *)pDVar4 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100117e36;
      }
      QListData::dispose(pDVar4);
    }
  }
LAB_100117e36:
  uVar7 = *(undefined4 *)(local_40 + (long)(int)*(uint *)(local_40 + 8) * 8 + 0x10);
LAB_100117e43:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return uVar7;
      }
      local_32 = 0;
    }
    QListData::dispose(local_40);
  }
  return uVar7;
}


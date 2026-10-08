
undefined1 FUN_100ac3e30(long param_1,undefined8 param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined1 uVar5;
  Data *pDVar6;
  Data *local_68;
  Data *local_60;
  undefined1 local_58 [4];
  int local_54;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_38;
  undefined1 local_29;
  
  local_38 = (QArrayData *)PTR_shared_null_1021e1288;
  iVar2 = FUN_100d7b000(&local_38);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_29 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100ac3e8c;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_100ac3e8c:
  FUN_100d7aac0(local_58,param_2);
  if (0 < local_54) {
    iVar2 = local_54;
  }
  FUN_100ac81e0(&local_60,param_1 + 0xb00);
  iVar3 = *(int *)(local_60 + 8);
  if (iVar3 == *(int *)(local_60 + 0xc)) {
    bVar1 = false;
  }
  else {
    pDVar6 = local_60 + (long)iVar3 * 8 + 0x10;
    lVar4 = (long)*(int *)(local_60 + 0xc) * 8 + (long)iVar3 * -8;
    do {
      bVar1 = true;
      if (*(int *)pDVar6 == iVar2) goto LAB_100ac3ef3;
      pDVar6 = pDVar6 + 8;
      lVar4 = lVar4 + -8;
    } while (lVar4 != 0);
    bVar1 = false;
  }
LAB_100ac3ef3:
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_29 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100ac3f15;
    }
    QListData::dispose(local_60);
  }
LAB_100ac3f15:
  if (bVar1) {
    uVar5 = 0;
  }
  else {
    FUN_100ac8310(&local_68,param_1 + 0xaf0);
    if (*(int *)(local_68 + 8) == *(int *)(local_68 + 0xc)) {
      uVar5 = 0;
    }
    else {
      pDVar6 = local_68 + (long)*(int *)(local_68 + 8) * 8 + 0x10;
      do {
        iVar3 = FUN_100d7b300(*(undefined4 *)pDVar6);
        if (iVar3 == iVar2) {
          uVar5 = 1;
          goto LAB_100ac3f7c;
        }
        pDVar6 = pDVar6 + 8;
      } while (pDVar6 != local_68 + (long)*(int *)(local_68 + 0xc) * 8 + 0x10);
      uVar5 = 0;
    }
LAB_100ac3f7c:
    if (*(int *)local_68 != -1) {
      if (*(int *)local_68 != 0) {
        LOCK();
        *(int *)local_68 = *(int *)local_68 + -1;
        local_29 = *(int *)local_68 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100ac3f9e;
      }
      QListData::dispose(local_68);
    }
  }
LAB_100ac3f9e:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_29 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100ac3fce;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100ac3fce:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      UNLOCK();
      if (*(int *)local_50 != 0) {
        return uVar5;
      }
      local_29 = 0;
    }
    QArrayData::deallocate(local_50,2,8);
  }
  return uVar5;
}


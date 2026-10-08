
void FUN_100ac5a90(undefined8 param_1,undefined8 *param_2,undefined8 param_3,long *param_4)

{
  int iVar1;
  undefined1 uVar2;
  long lVar3;
  long lVar4;
  Data *pDVar5;
  Data *pDVar6;
  long lVar7;
  Data *local_58;
  Data *local_50;
  Data *local_48;
  QArrayData *local_40;
  undefined8 local_38;
  undefined1 local_29;
  
  local_40 = (QArrayData *)*param_2;
  if (1 < *(int *)local_40 + 1U) {
    LOCK();
    *(int *)local_40 = *(int *)local_40 + 1;
    local_29 = *(int *)local_40 != 0;
    UNLOCK();
  }
  local_48 = (Data *)*param_4;
  local_38 = param_3;
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 == 0) {
      QListData::detach((int)&local_48);
      lVar3 = (long)*(int *)(local_48 + 8);
      lVar7 = *param_4;
      if (((Data *)(lVar7 + (long)*(int *)(lVar7 + 8) * 8) != local_48 + lVar3 * 8) &&
         (lVar4 = *(int *)(local_48 + 0xc) - lVar3, lVar4 != 0 && lVar3 <= *(int *)(local_48 + 0xc))
         ) {
        _memcpy(local_48 + lVar3 * 8 + 0x10,(void *)(lVar7 + 0x10 + (long)*(int *)(lVar7 + 8) * 8),
                lVar4 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + 1;
      local_29 = *(int *)local_48 != 0;
      UNLOCK();
    }
  }
  FUN_100ad7990(param_1,&local_40,param_3,&local_48);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_29 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100ac5b5d;
    }
    QListData::dispose(local_48);
  }
LAB_100ac5b5d:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_29 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100ac5b8d;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100ac5b8d:
  uVar2 = FUN_100ad42c0(param_1);
  local_50 = (Data *)PTR_shared_null_1021e15e8;
  FUN_1000aaa10(&local_50,&local_38);
  FUN_1000abcb0(&local_58,&local_50);
  FUN_100ad3870(param_1,uVar2,&local_58);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_29 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100ac5c2f;
    }
    iVar1 = *(int *)(local_58 + 0xc);
    if (iVar1 != *(int *)(local_58 + 8)) {
      lVar7 = (long)*(int *)(local_58 + 8) * 8 + (long)iVar1 * -8;
      pDVar5 = local_58 + (long)iVar1 * 8 + 8;
      do {
        if (*(void **)pDVar5 != (void *)0x0) {
          operator_delete(*(void **)pDVar5);
        }
        pDVar5 = pDVar5 + -8;
        lVar7 = lVar7 + 8;
      } while (lVar7 != 0);
    }
    QListData::dispose(local_58);
  }
LAB_100ac5c2f:
  pDVar5 = local_50;
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      UNLOCK();
      if (*(int *)local_50 != 0) {
        return;
      }
      local_29 = 0;
    }
    iVar1 = *(int *)(local_50 + 0xc);
    if (iVar1 != *(int *)(local_50 + 8)) {
      lVar7 = (long)*(int *)(local_50 + 8) * 8 + (long)iVar1 * -8;
      pDVar6 = local_50 + (long)iVar1 * 8 + 8;
      do {
        if (*(void **)pDVar6 != (void *)0x0) {
          operator_delete(*(void **)pDVar6);
        }
        pDVar6 = pDVar6 + -8;
        lVar7 = lVar7 + 8;
      } while (lVar7 != 0);
    }
    QListData::dispose(pDVar5);
  }
  return;
}


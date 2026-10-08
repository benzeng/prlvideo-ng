
undefined1 FUN_1006a8550(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  int iVar2;
  Data *pDVar3;
  undefined1 uVar4;
  long lVar5;
  long lVar6;
  Data *pDVar7;
  undefined4 local_74;
  _func_void_Node_ptr *local_70;
  Data *local_68;
  Data *local_60;
  Data *local_58;
  Data *local_50;
  int local_48;
  Data *local_40;
  undefined1 local_31;
  
  if (param_4 == 0) {
    FUN_100df99c0("[ACTION_MNG]","prl_client_app",0,"ASSERT( %s ) occured in %s:%d [%s]",
                  "0 != context","ActionManager/ActionUpdater/CActionUpdater.cpp",0xfe,
                  "scheduleUpdate");
  }
  local_40 = (Data *)PTR_shared_null_1021e15e8;
  FUN_100693390(&local_70,*(undefined8 *)(param_1 + 0x10),param_4);
  FUN_100693fb0(&local_68,&local_70);
  local_60 = local_68;
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 == 0) {
      QListData::detach((int)&local_60);
      lVar5 = (long)*(int *)(local_60 + 8);
      if ((local_68 + (long)*(int *)(local_68 + 8) * 8 != local_60 + lVar5 * 8) &&
         (lVar6 = *(int *)(local_60 + 0xc) - lVar5, lVar6 != 0 && lVar5 <= *(int *)(local_60 + 0xc))
         ) {
        _memcpy(local_60 + lVar5 * 8 + 0x10,local_68 + (long)*(int *)(local_68 + 8) * 8 + 0x10,
                lVar6 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + 1;
      local_31 = *(int *)local_68 != 0;
      UNLOCK();
    }
  }
  local_58 = local_60 + (long)*(int *)(local_60 + 8) * 8 + 0x10;
  local_50 = local_60 + (long)*(int *)(local_60 + 0xc) * 8 + 0x10;
  local_48 = 1;
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_31 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006a868b;
    }
    QListData::dispose(local_68);
  }
LAB_1006a868b:
  if (*(int *)(local_70 + 0x10) != -1) {
    if (*(int *)(local_70 + 0x10) != 0) {
      LOCK();
      pcVar1 = local_70 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      local_31 = *(int *)pcVar1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006a86ba;
    }
    QHashData::free_helper(local_70);
  }
LAB_1006a86ba:
  if ((local_48 != 0) && (local_58 != local_50)) {
    do {
      local_74 = FUN_1006947d0(*(undefined8 *)local_58);
      FUN_100071ff0(&local_40,&local_74);
      local_58 = local_58 + 8;
      local_48 = 1;
    } while (local_58 != local_50);
  }
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006a8735;
    }
    QListData::dispose(local_60);
  }
LAB_1006a8735:
  uVar4 = FUN_1006a80b0(param_1,param_2,param_3,&local_40,param_4);
  pDVar3 = local_40;
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return uVar4;
      }
      local_31 = 0;
    }
    iVar2 = *(int *)(local_40 + 0xc);
    if (iVar2 != *(int *)(local_40 + 8)) {
      lVar5 = (long)*(int *)(local_40 + 8) * 8 + (long)iVar2 * -8;
      pDVar7 = local_40 + (long)iVar2 * 8 + 8;
      do {
        if (*(void **)pDVar7 != (void *)0x0) {
          operator_delete(*(void **)pDVar7);
        }
        pDVar7 = pDVar7 + -8;
        lVar5 = lVar5 + 8;
      } while (lVar5 != 0);
    }
    QListData::dispose(pDVar3);
  }
  return uVar4;
}



void FUN_1006a6660(long param_1,long param_2)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  _func_void_Node_ptr *local_58;
  Data *local_50;
  Data *local_48;
  Data *local_40;
  Data *local_38;
  int local_30;
  undefined1 local_21;
  
  if (param_2 == 0) {
    FUN_100df99c0("[ACTION_MNG]","prl_client_app",0,"ASSERT( %s ) occured in %s:%d [%s]",
                  "0 != context","ActionManager/ActionUpdater/CActionUpdater.cpp",0x93,
                  "updateActions");
    return;
  }
  FUN_100693390(&local_58,*(undefined8 *)(param_1 + 0x10),param_2);
  FUN_100693fb0(&local_50,&local_58);
  local_48 = local_50;
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 == 0) {
      QListData::detach((int)&local_48);
      lVar2 = (long)*(int *)(local_48 + 8);
      if ((local_50 + (long)*(int *)(local_50 + 8) * 8 != local_48 + lVar2 * 8) &&
         (lVar3 = *(int *)(local_48 + 0xc) - lVar2, lVar3 != 0 && lVar2 <= *(int *)(local_48 + 0xc))
         ) {
        _memcpy(local_48 + lVar2 * 8 + 0x10,local_50 + (long)*(int *)(local_50 + 8) * 8 + 0x10,
                lVar3 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + 1;
      local_21 = *(int *)local_50 != 0;
      UNLOCK();
    }
  }
  local_40 = local_48 + (long)*(int *)(local_48 + 8) * 8 + 0x10;
  local_38 = local_48 + (long)*(int *)(local_48 + 0xc) * 8 + 0x10;
  local_30 = 1;
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_21 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1006a6797;
    }
    QListData::dispose(local_50);
  }
LAB_1006a6797:
  if (*(int *)(local_58 + 0x10) != -1) {
    if (*(int *)(local_58 + 0x10) != 0) {
      LOCK();
      pcVar1 = local_58 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      local_21 = *(int *)pcVar1 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1006a67c6;
    }
    QHashData::free_helper(local_58);
  }
LAB_1006a67c6:
  if (local_30 != 0) {
    for (; local_40 != local_38; local_40 = local_40 + 8) {
      FUN_1006a6000(param_1,*(undefined8 *)local_40,param_2);
      local_30 = 1;
    }
  }
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      UNLOCK();
      if (*(int *)local_48 != 0) {
        return;
      }
      local_21 = 0;
    }
    QListData::dispose(local_48);
  }
  return;
}


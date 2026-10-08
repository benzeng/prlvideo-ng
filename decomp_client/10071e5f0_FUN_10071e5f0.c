
void FUN_10071e5f0(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  Data *local_58;
  Data *local_50;
  Data *local_48;
  undefined4 local_40;
  undefined1 local_31;
  
  local_58 = *(Data **)(param_1 + 0x28);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 == 0) {
      QListData::detach((int)&local_58);
      lVar2 = (long)*(int *)(local_58 + 8);
      lVar1 = *(long *)(param_1 + 0x28);
      if (((Data *)(lVar1 + (long)*(int *)(lVar1 + 8) * 8) != local_58 + lVar2 * 8) &&
         (lVar3 = *(int *)(local_58 + 0xc) - lVar2, lVar3 != 0 && lVar2 <= *(int *)(local_58 + 0xc))
         ) {
        _memcpy(local_58 + lVar2 * 8 + 0x10,(void *)(lVar1 + 0x10 + (long)*(int *)(lVar1 + 8) * 8),
                lVar3 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + 1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
    }
  }
  local_50 = local_58 + (long)*(int *)(local_58 + 8) * 8 + 0x10;
  local_48 = local_58 + (long)*(int *)(local_58 + 0xc) * 8 + 0x10;
  if (*(int *)(local_58 + 8) != *(int *)(local_58 + 0xc)) {
    do {
      local_40 = 1;
      if (*(long *)local_50 == 0) {
        FUN_100df99c0("","prl_client_app",0,"ASSERT( %s ) occured in %s:%d [%s]","d",
                      "ShortcutManager/CKeyActionLogic.cpp",0x141,
                      "deinstallCustomAppShortcutsKeyActions");
      }
      else {
        FUN_100723880();
      }
      local_50 = local_50 + 8;
    } while (local_50 != local_48);
  }
  local_40 = 1;
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      UNLOCK();
      if (*(int *)local_58 != 0) {
        return;
      }
      local_31 = 0;
    }
    QListData::dispose(local_58);
  }
  return;
}


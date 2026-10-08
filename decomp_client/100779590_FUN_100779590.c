
bool FUN_100779590(void)

{
  int iVar1;
  int iVar2;
  Data *local_28;
  undefined1 local_19;
  
  CMessageManager::instance();
  CMessageManager::getMessageWindowsForId((int)&local_28);
  iVar1 = *(int *)(local_28 + 0xc);
  iVar2 = *(int *)(local_28 + 8);
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      UNLOCK();
      if (*(int *)local_28 != 0) goto LAB_1007795de;
      local_19 = 0;
    }
    QListData::dispose(local_28);
  }
LAB_1007795de:
  return iVar1 != iVar2;
}


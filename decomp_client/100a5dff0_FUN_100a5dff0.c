
void FUN_100a5dff0(long param_1,undefined8 param_2,int param_3)

{
  QArrayData *local_28;
  undefined1 local_19;
  
  if (param_3 != 0) {
    FUN_100a60d80(&local_28,param_2);
    if (*(int *)(local_28 + 4) == 0) {
      if (1 < DAT_10230ffd0) {
        FUN_100df99c0("","LayoutSyncClient",2,"couldn\'t find layout for %s",param_2);
      }
    }
    else if ((*(char *)(param_1 + 0x32) != '\0') && (*(char *)(param_1 + 0x30) != '\0')) {
      FUN_100a5f1c0(*(undefined8 *)(param_1 + 0x40),&local_28);
    }
    if (*(int *)local_28 != -1) {
      if (*(int *)local_28 != 0) {
        LOCK();
        *(int *)local_28 = *(int *)local_28 + -1;
        UNLOCK();
        if (*(int *)local_28 != 0) {
          return;
        }
        local_19 = 0;
      }
      QArrayData::deallocate(local_28,1,8);
    }
  }
  return;
}


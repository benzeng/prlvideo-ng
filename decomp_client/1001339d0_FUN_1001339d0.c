
void FUN_1001339d0(undefined8 param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  Data *local_50;
  Data *local_48;
  Data *local_40;
  undefined4 local_38;
  undefined1 local_29;
  
  QComboBox::clear();
  local_50 = (Data *)*param_2;
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 == 0) {
      QListData::detach((int)&local_50);
      lVar3 = (long)*(int *)(local_50 + 8);
      lVar2 = *param_2;
      if (((Data *)(lVar2 + (long)*(int *)(lVar2 + 8) * 8) != local_50 + lVar3 * 8) &&
         (lVar4 = *(int *)(local_50 + 0xc) - lVar3, lVar4 != 0 && lVar3 <= *(int *)(local_50 + 0xc))
         ) {
        _memcpy(local_50 + lVar3 * 8 + 0x10,(void *)(lVar2 + 0x10 + (long)*(int *)(lVar2 + 8) * 8),
                lVar4 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + 1;
      local_29 = *(int *)local_50 != 0;
      UNLOCK();
    }
  }
  local_48 = local_50 + (long)*(int *)(local_50 + 8) * 8 + 0x10;
  local_40 = local_50 + (long)*(int *)(local_50 + 0xc) * 8 + 0x10;
  if (*(int *)(local_50 + 8) != *(int *)(local_50 + 0xc)) {
    do {
      local_38 = 1;
      iVar1 = *(int *)local_48;
      if (iVar1 == 0) {
        FUN_100132ec0(param_1);
      }
      else if (iVar1 == 2) {
        FUN_100133060(param_1);
      }
      else if (iVar1 == 1) {
        FUN_100133240(param_1);
      }
      else {
        FUN_100df99c0("","prl_client_app",0,"wrong interface type requested.");
      }
      local_48 = local_48 + 8;
    } while (local_48 != local_40);
  }
  local_38 = 1;
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
    QListData::dispose(local_50);
  }
  return;
}


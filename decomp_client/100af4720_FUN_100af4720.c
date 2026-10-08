
undefined8 FUN_100af4720(undefined8 param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  int *piVar5;
  int *local_38;
  int *local_30;
  undefined1 local_21;
  
  iVar2 = FUN_100af5c30();
  uVar4 = 0;
  if (iVar2 == 0) {
    CDispUsbPreferences::getUsbBlackList();
    FUN_1000341d0(&local_38,param_2);
    local_30 = local_38;
    if (*local_38 != -1) {
      if (*local_38 == 0) {
        QListData::detach((int)&local_30);
        iVar2 = local_30[2];
        if (iVar2 != local_30[3]) {
          local_38 = local_38 + (long)local_38[2] * 2 + 4;
          piVar5 = local_30 + (long)iVar2 * 2 + 4;
          lVar3 = (long)local_30[3] * 8 + (long)iVar2 * -8;
          do {
            piVar1 = *(int **)local_38;
            *(int **)piVar5 = piVar1;
            if (1 < *piVar1 + 1U) {
              LOCK();
              *piVar1 = *piVar1 + 1;
              local_21 = *piVar1 != 0;
              UNLOCK();
            }
            piVar5 = piVar5 + 2;
            local_38 = local_38 + 2;
            lVar3 = lVar3 + -8;
          } while (lVar3 != 0);
        }
      }
      else {
        LOCK();
        *local_38 = *local_38 + 1;
        local_21 = *local_38 != 0;
        UNLOCK();
      }
    }
    CDispUsbPreferences::setUsbBlackList(param_1,&local_30);
    FUN_100039a80(&local_30);
    FUN_100039a80(&local_38);
    uVar4 = 1;
  }
  return uVar4;
}


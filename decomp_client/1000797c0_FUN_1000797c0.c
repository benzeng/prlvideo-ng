
void FUN_1000797c0(long param_1)

{
  int iVar1;
  int *piVar2;
  QArrayData *pQVar3;
  long lVar4;
  int *piVar5;
  QArrayData *local_68;
  int *local_60;
  int *local_58;
  int *local_50;
  int *local_48;
  int local_40;
  undefined1 local_31;
  
  if (2 < DAT_10230ffd0) {
    FUN_100df99c0("[APP_RESUME]","prl_client_app",3,"Remain handlers:");
  }
  FUN_10007b0b0(&local_60,param_1 + 0x28);
  local_58 = local_60;
  if (*local_60 != -1) {
    if (*local_60 == 0) {
      QListData::detach((int)&local_58);
      iVar1 = local_58[2];
      if (iVar1 != local_58[3]) {
        local_60 = local_60 + (long)local_60[2] * 2 + 4;
        piVar5 = local_58 + (long)iVar1 * 2 + 4;
        lVar4 = (long)local_58[3] * 8 + (long)iVar1 * -8;
        do {
          piVar2 = *(int **)local_60;
          *(int **)piVar5 = piVar2;
          if (1 < *piVar2 + 1U) {
            LOCK();
            *piVar2 = *piVar2 + 1;
            local_31 = *piVar2 != 0;
            UNLOCK();
          }
          piVar5 = piVar5 + 2;
          local_60 = local_60 + 2;
          lVar4 = lVar4 + -8;
        } while (lVar4 != 0);
      }
    }
    else {
      LOCK();
      *local_60 = *local_60 + 1;
      local_31 = *local_60 != 0;
      UNLOCK();
    }
  }
  local_50 = local_58 + (long)local_58[2] * 2 + 4;
  local_48 = local_58 + (long)local_58[3] * 2 + 4;
  local_40 = 1;
  FUN_100039a80(&local_60);
  if ((local_40 != 0) && (local_50 != local_48)) {
    do {
      if (2 < DAT_10230ffd0) {
        pQVar3 = *(QArrayData **)local_50;
        if (1 < *(int *)pQVar3 + 1U) {
          LOCK();
          *(int *)pQVar3 = *(int *)pQVar3 + 1;
          local_31 = *(int *)pQVar3 != 0;
          UNLOCK();
        }
        QString::toLocal8Bit();
        FUN_100df99c0("[APP_RESUME]","prl_client_app",3,"%s",local_68 + *(long *)(local_68 + 0x10));
        if (*(int *)local_68 != -1) {
          if (*(int *)local_68 != 0) {
            LOCK();
            *(int *)local_68 = *(int *)local_68 + -1;
            local_31 = *(int *)local_68 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10007996b;
          }
          QArrayData::deallocate(local_68,1,8);
        }
LAB_10007996b:
        if (*(int *)pQVar3 != -1) {
          if (*(int *)pQVar3 != 0) {
            LOCK();
            *(int *)pQVar3 = *(int *)pQVar3 + -1;
            local_31 = *(int *)pQVar3 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1000799a0;
          }
          QArrayData::deallocate(pQVar3,2,8);
        }
      }
LAB_1000799a0:
      local_50 = local_50 + 2;
      local_40 = 1;
    } while (local_50 != local_48);
  }
  FUN_100039a80(&local_58);
  return;
}


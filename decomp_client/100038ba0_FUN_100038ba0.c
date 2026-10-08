
void FUN_100038ba0(long param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  long lVar3;
  int *piVar4;
  int *piVar5;
  int *local_68;
  int *local_60;
  int *local_58;
  undefined4 local_50;
  int *local_48;
  int *local_40;
  int *local_38;
  long local_30;
  undefined1 local_21;
  
  if (param_2 == 1) {
    FUN_1000398b0(&local_48,param_1 + 0x18);
    local_40 = local_48;
    if (*local_48 != -1) {
      if (*local_48 == 0) {
        QListData::detach((int)&local_40);
        iVar1 = local_40[2];
        if (iVar1 != local_40[3]) {
          local_48 = local_48 + (long)local_48[2] * 2 + 4;
          piVar4 = local_40 + (long)iVar1 * 2 + 4;
          lVar3 = (long)local_40[3] * 8 + (long)iVar1 * -8;
          do {
            piVar5 = *(int **)local_48;
            *(int **)piVar4 = piVar5;
            if (1 < *piVar5 + 1U) {
              LOCK();
              *piVar5 = *piVar5 + 1;
              local_21 = *piVar5 != 0;
              UNLOCK();
            }
            piVar4 = piVar4 + 2;
            local_48 = local_48 + 2;
            lVar3 = lVar3 + -8;
          } while (lVar3 != 0);
        }
      }
      else {
        LOCK();
        *local_48 = *local_48 + 1;
        local_21 = *local_48 != 0;
        UNLOCK();
      }
    }
    FUN_100039a80(&local_48);
    local_68 = local_40;
    if (*local_40 != -1) {
      if (*local_40 == 0) {
        QListData::detach((int)&local_68);
        iVar1 = local_68[2];
        if (iVar1 != local_68[3]) {
          piVar4 = local_40 + (long)local_40[2] * 2 + 4;
          piVar5 = local_68 + (long)iVar1 * 2 + 4;
          lVar3 = (long)local_68[3] * 8 + (long)iVar1 * -8;
          do {
            piVar2 = *(int **)piVar4;
            *(int **)piVar5 = piVar2;
            if (1 < *piVar2 + 1U) {
              LOCK();
              *piVar2 = *piVar2 + 1;
              local_21 = *piVar2 != 0;
              UNLOCK();
            }
            piVar5 = piVar5 + 2;
            piVar4 = piVar4 + 2;
            lVar3 = lVar3 + -8;
          } while (lVar3 != 0);
        }
      }
      else {
        LOCK();
        *local_40 = *local_40 + 1;
        local_21 = *local_40 != 0;
        UNLOCK();
      }
    }
    local_60 = local_68 + (long)local_68[2] * 2 + 4;
    local_58 = local_68 + (long)local_68[3] * 2 + 4;
    if (local_68[2] != local_68[3]) {
      do {
        local_50 = 1;
        FUN_1000393a0(&local_38,param_1 + 0x18);
        if (local_38 != (int *)0x0) {
          lVar3 = 0;
          if (local_38[1] != 0) {
            lVar3 = local_30;
          }
          LOCK();
          *local_38 = *local_38 + -1;
          local_21 = *local_38 != 0;
          UNLOCK();
          if (!(bool)local_21) {
            operator_delete(local_38);
          }
          if (lVar3 != 0) {
            QObject::deleteLater();
          }
        }
        local_60 = local_60 + 2;
      } while (local_60 != local_58);
    }
    local_50 = 1;
    FUN_100039a80(&local_68);
    FUN_100039a80(&local_40);
  }
  return;
}


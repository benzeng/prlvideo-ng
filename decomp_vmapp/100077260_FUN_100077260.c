
void FUN_100077260(long param_1,byte param_2)

{
  int iVar1;
  int *piVar2;
  long lVar3;
  int *piVar4;
  int *piVar5;
  QArrayData *local_a8;
  int *local_a0;
  QString *local_98;
  QString *local_90;
  int local_88;
  QArrayData *local_80;
  int *local_78;
  QString *local_70;
  QString *local_68;
  int local_60;
  QString local_58;
  int *local_50;
  int *local_48;
  int *local_40;
  int *local_38;
  undefined1 local_29;
  
  lVar3 = FUN_1000915f0(*(undefined8 *)(param_1 + 0x20));
  piVar4 = (int *)PTR_shared_null_100ba2188;
  if (lVar3 == 0) {
    return;
  }
  if (DAT_101116b58 == 1) {
    return;
  }
  if (DAT_101116b58 == 0) {
    FUN_1002bacc0(param_2 ^ 1,7,"test-1");
    FUN_1002bacc0(param_2 ^ 1,7,"test-2");
    return;
  }
  local_40 = (int *)PTR_shared_null_100ba2188;
  local_48 = (int *)PTR_shared_null_100ba2188;
  FUN_100256dc0(&local_50,0,&local_40);
  piVar5 = (int *)PTR_shared_null_100ba2188;
  if (local_50 != piVar4) {
    local_38 = local_50;
    if (*local_50 != -1) {
      if (*local_50 == 0) {
        QListData::detach((int)&local_38);
        iVar1 = local_38[2];
        if (iVar1 != local_38[3]) {
          local_50 = local_50 + (long)local_50[2] * 2 + 4;
          piVar4 = local_38 + (long)iVar1 * 2 + 4;
          lVar3 = (long)local_38[3] * 8 + (long)iVar1 * -8;
          do {
            piVar5 = *(int **)local_50;
            *(int **)piVar4 = piVar5;
            if (1 < *piVar5 + 1U) {
              LOCK();
              *piVar5 = *piVar5 + 1;
              local_29 = *piVar5 != 0;
              UNLOCK();
            }
            piVar4 = piVar4 + 2;
            local_50 = local_50 + 2;
            lVar3 = lVar3 + -8;
            piVar5 = local_48;
          } while (lVar3 != 0);
        }
      }
      else {
        LOCK();
        *local_50 = *local_50 + 1;
        local_29 = *local_50 != 0;
        UNLOCK();
      }
    }
    piVar4 = local_38;
    local_48 = local_38;
    local_38 = piVar5;
    FUN_100013180(&local_38);
  }
  FUN_100013180(&local_50);
  local_58.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
  local_78 = piVar4;
  if (*piVar4 != -1) {
    if (*piVar4 == 0) {
      QListData::detach((int)&local_78);
      iVar1 = local_78[2];
      if (iVar1 != local_78[3]) {
        piVar4 = piVar4 + (long)piVar4[2] * 2 + 4;
        piVar5 = local_78 + (long)iVar1 * 2 + 4;
        lVar3 = (long)local_78[3] * 8 + (long)iVar1 * -8;
        do {
          piVar2 = *(int **)piVar4;
          *(int **)piVar5 = piVar2;
          if (1 < *piVar2 + 1U) {
            LOCK();
            *piVar2 = *piVar2 + 1;
            local_29 = *piVar2 != 0;
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
      *piVar4 = *piVar4 + 1;
      local_29 = *piVar4 != 0;
      UNLOCK();
    }
  }
  local_70 = (QString *)(local_78 + (long)local_78[2] * 2 + 4);
  local_68 = (QString *)(local_78 + (long)local_78[3] * 2 + 4);
  if (local_78[2] != local_78[3]) {
    do {
      local_60 = 1;
      QString::operator=(&local_58,local_70);
      if (local_60 != 0) {
        QString::toUtf8();
        FUN_1002bacc0(param_2 ^ 1,7,local_80 + *(long *)(local_80 + 0x10));
        if (*(int *)local_80 != -1) {
          if (*(int *)local_80 != 0) {
            LOCK();
            *(int *)local_80 = *(int *)local_80 + -1;
            local_29 = *(int *)local_80 != 0;
            UNLOCK();
            if ((bool)local_29) goto LAB_1000774e5;
          }
          QArrayData::deallocate(local_80,1,8);
        }
      }
LAB_1000774e5:
      local_70 = local_70 + 1;
    } while (local_70 != local_68);
  }
  local_60 = 1;
  FUN_100013180(&local_78);
  if (param_2 == 0) {
    local_a0 = local_40;
    if (*local_40 != -1) {
      if (*local_40 == 0) {
        QListData::detach((int)&local_a0);
        iVar1 = local_a0[2];
        if (iVar1 != local_a0[3]) {
          piVar4 = local_40 + (long)local_40[2] * 2 + 4;
          piVar5 = local_a0 + (long)iVar1 * 2 + 4;
          lVar3 = (long)local_a0[3] * 8 + (long)iVar1 * -8;
          do {
            piVar2 = *(int **)piVar4;
            *(int **)piVar5 = piVar2;
            if (1 < *piVar2 + 1U) {
              LOCK();
              *piVar2 = *piVar2 + 1;
              local_29 = *piVar2 != 0;
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
        local_29 = *local_40 != 0;
        UNLOCK();
      }
    }
    local_98 = (QString *)(local_a0 + (long)local_a0[2] * 2 + 4);
    local_90 = (QString *)(local_a0 + (long)local_a0[3] * 2 + 4);
    if (local_a0[2] != local_a0[3]) {
      do {
        local_88 = 1;
        QString::operator=(&local_58,local_98);
        if (local_88 != 0) {
          QString::toUtf8();
          FUN_1002bacc0(1,7,local_a8 + *(long *)(local_a8 + 0x10));
          if (*(int *)local_a8 != -1) {
            if (*(int *)local_a8 != 0) {
              LOCK();
              *(int *)local_a8 = *(int *)local_a8 + -1;
              local_29 = *(int *)local_a8 != 0;
              UNLOCK();
              if ((bool)local_29) goto LAB_100077650;
            }
            QArrayData::deallocate(local_a8,1,8);
          }
        }
LAB_100077650:
        local_98 = local_98 + 1;
      } while (local_98 != local_90);
    }
    local_88 = 1;
    FUN_100013180(&local_a0);
  }
  if (*(int *)local_58.field0_0x0 != -1) {
    if (*(int *)local_58.field0_0x0 != 0) {
      LOCK();
      *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
      local_29 = *(int *)local_58.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1000776b2;
    }
    QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
  }
LAB_1000776b2:
  FUN_100013180(&local_48);
  FUN_100013180(&local_40);
  return;
}


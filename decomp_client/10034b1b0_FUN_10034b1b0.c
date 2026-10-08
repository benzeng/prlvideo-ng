
void FUN_10034b1b0(long param_1,ulong param_2)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  uint uVar3;
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  QArrayData *local_30;
  undefined4 local_24;
  
  if ((int)param_2 == -1) {
    return;
  }
  uVar3 = *(uint *)(param_1 + 0x34);
  if (((param_2 & 0x100) != 0) && ((uVar3 & 0x100) == 0)) {
    puVar1 = operator_new(0x20);
    *puVar1 = 1;
    *(code **)(puVar1 + 2) = FUN_10034d570;
    *(code **)(puVar1 + 4) = FUN_10034b560;
    *(undefined8 *)(puVar1 + 6) = 0;
    QTimer::singleShotImpl(5000,1,param_1,puVar1);
    uVar3 = *(uint *)(param_1 + 0x34);
  }
  if (((param_2 & 0x38) != 0) && ((uVar3 & 0x38) == 0)) {
    FUN_10034b700(param_1,0);
  }
  *(int *)(param_1 + 0x34) = (int)param_2;
  param_2 = param_2 >> 0xc;
  uVar3 = (uint)param_2 & 1;
  if (((param_2 & 1) == 0) || (*(char *)(param_1 + 0x31) != '\0')) {
    if (((param_2 & 1) != 0) || (*(char *)(param_1 + 0x31) == '\0')) goto LAB_10034b44a;
    if (2 < DAT_10230ffd0) {
      uVar2 = 0;
      if ((*(long *)(param_1 + 0x10) != 0) &&
         (uVar2 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0)) {
        uVar2 = *(undefined8 *)(param_1 + 0x18);
      }
      FUN_100319410(&local_48,uVar2);
      QString::toUtf8();
      FUN_100df99c0("WINUPDATE_LOGIC","prl_client_app",3,"\'%s\' maintenance has finished",
                    local_40 + *(long *)(local_40 + 0x10));
      if (*(int *)local_40 != -1) {
        if (*(int *)local_40 != 0) {
          LOCK();
          *(int *)local_40 = *(int *)local_40 + -1;
          UNLOCK();
          local_24 = CONCAT31(local_24._1_3_,*(int *)local_40 != 0);
          if (*(int *)local_40 != 0) goto LAB_10034b3d2;
        }
        QArrayData::deallocate(local_40,1,8);
      }
LAB_10034b3d2:
      if (*(int *)local_48 != -1) {
        if (*(int *)local_48 != 0) {
          LOCK();
          *(int *)local_48 = *(int *)local_48 + -1;
          UNLOCK();
          local_24 = CONCAT31(local_24._1_3_,*(int *)local_48 != 0);
          if (*(int *)local_48 != 0) goto LAB_10034b402;
        }
        QArrayData::deallocate(local_48,2,8);
      }
    }
LAB_10034b402:
    FUN_10034c310(param_1);
    if (*(char *)(param_1 + 0x30) != '\0') {
      local_24 = 0;
      uVar2 = 0;
      if ((*(long *)(param_1 + 0x10) != 0) &&
         (uVar2 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0)) {
        uVar2 = *(undefined8 *)(param_1 + 0x18);
      }
      uVar2 = FUN_100319c60(uVar2);
      FUN_10033c620(uVar2,0x20,&local_24,4);
    }
    goto LAB_10034b44a;
  }
  if (DAT_10230ffd0 < 3) goto LAB_10034b44a;
  uVar2 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) && (uVar2 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0))
  {
    uVar2 = *(undefined8 *)(param_1 + 0x18);
  }
  FUN_100319410(&local_38,uVar2);
  QString::toUtf8();
  FUN_100df99c0("WINUPDATE_LOGIC","prl_client_app",3,"\'%s\' maintenance has started",
                local_30 + *(long *)(local_30 + 0x10));
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      UNLOCK();
      local_24 = CONCAT31(local_24._1_3_,*(int *)local_30 != 0);
      if (*(int *)local_30 != 0) goto LAB_10034b2ed;
    }
    QArrayData::deallocate(local_30,1,8);
  }
LAB_10034b2ed:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      local_24 = CONCAT31(local_24._1_3_,*(int *)local_38 != 0);
      if (*(int *)local_38 != 0) goto LAB_10034b44a;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_10034b44a:
  if (*(byte *)(param_1 + 0x31) != uVar3) {
    *(char *)(param_1 + 0x31) = (char)uVar3;
    FUN_100830bb0(param_1,(param_2 & 1) != 0);
  }
  return;
}


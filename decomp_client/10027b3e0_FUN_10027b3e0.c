
void FUN_10027b3e0(long *param_1,int param_2)

{
  int iVar1;
  long lVar2;
  code *UNRECOVERED_JUMPTABLE;
  char *pcVar3;
  undefined8 uVar4;
  int *local_98;
  int *local_90;
  int *local_88;
  long local_80;
  int *local_78;
  int *local_70;
  int *local_68;
  undefined8 local_60;
  QString local_58;
  int *local_50;
  int *local_48;
  int *local_40;
  undefined8 local_38;
  QString local_30;
  undefined1 local_21;
  
  lVar2 = QObject::sender();
  if (param_2 < 0) {
    if ((*(long *)(lVar2 + 0x38) == 0) || (iVar1 = QNetworkReply::error(), 3 < iVar1 - 1U)) {
      UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0xb0);
      uVar4 = 0x80015413;
    }
    else {
      UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0xb0);
      uVar4 = 0x80015417;
    }
                    /* WARNING: Could not recover jumptable at 0x00010027b638. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(param_1,uVar4);
    return;
  }
  lVar2 = *(long *)(lVar2 + 0x28);
  local_50 = *(int **)(lVar2 + 0x30);
  if (1 < *local_50 + 1U) {
    LOCK();
    *local_50 = *local_50 + 1;
    local_21 = *local_50 != 0;
    UNLOCK();
  }
  local_48 = *(int **)(lVar2 + 0x38);
  if (1 < *local_48 + 1U) {
    LOCK();
    *local_48 = *local_48 + 1;
    local_21 = *local_48 != 0;
    UNLOCK();
  }
  local_40 = *(int **)(lVar2 + 0x40);
  if (1 < *local_40 + 1U) {
    LOCK();
    *local_40 = *local_40 + 1;
    local_21 = *local_40 != 0;
    UNLOCK();
  }
  local_38 = *(undefined8 *)(lVar2 + 0x48);
  QString::simplified();
  QString::operator=((QString *)(param_1 + 4),&local_30);
  if (*(int *)local_30.field0_0x0 != -1) {
    if (*(int *)local_30.field0_0x0 != 0) {
      LOCK();
      *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
      local_21 = *(int *)local_30.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10027b4a3;
    }
    QArrayData::deallocate((QArrayData *)local_30.field0_0x0,2,8);
  }
LAB_10027b4a3:
  FUN_1001b8da0(&local_50);
  if (*(int *)(((QString *)(param_1 + 4))->field0_0x0 + 4) == 0) {
    pcVar3 = "Failed to query download urls. Primary URL is missing";
  }
  else {
    local_78 = *(int **)(lVar2 + 0x30);
    if (1 < *local_78 + 1U) {
      LOCK();
      *local_78 = *local_78 + 1;
      local_21 = *local_78 != 0;
      UNLOCK();
    }
    local_70 = *(int **)(lVar2 + 0x38);
    if (1 < *local_70 + 1U) {
      LOCK();
      *local_70 = *local_70 + 1;
      local_21 = *local_70 != 0;
      UNLOCK();
    }
    local_68 = *(int **)(lVar2 + 0x40);
    if (1 < *local_68 + 1U) {
      LOCK();
      *local_68 = *local_68 + 1;
      local_21 = *local_68 != 0;
      UNLOCK();
    }
    local_60 = *(undefined8 *)(lVar2 + 0x48);
    QString::simplified();
    QString::operator=((QString *)(param_1 + 6),&local_58);
    if (*(int *)local_58.field0_0x0 != -1) {
      if (*(int *)local_58.field0_0x0 != 0) {
        LOCK();
        *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
        local_21 = *(int *)local_58.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_10027b559;
      }
      QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
    }
LAB_10027b559:
    FUN_1001b8da0(&local_78);
    if (*(int *)(((QString *)(param_1 + 6))->field0_0x0 + 4) == 0) {
      pcVar3 = "Failed to query download urls. Package MD5 is missing";
    }
    else {
      local_98 = *(int **)(lVar2 + 0x30);
      if (1 < *local_98 + 1U) {
        LOCK();
        *local_98 = *local_98 + 1;
        local_21 = *local_98 != 0;
        UNLOCK();
      }
      local_90 = *(int **)(lVar2 + 0x38);
      if (1 < *local_90 + 1U) {
        LOCK();
        *local_90 = *local_90 + 1;
        local_21 = *local_90 != 0;
        UNLOCK();
      }
      local_88 = *(int **)(lVar2 + 0x40);
      if (1 < *local_88 + 1U) {
        LOCK();
        *local_88 = *local_88 + 1;
        local_21 = *local_88 != 0;
        UNLOCK();
      }
      local_80 = *(long *)(lVar2 + 0x48);
      param_1[7] = local_80;
      FUN_1001b8da0(&local_98);
      if (param_1[7] != 0) {
        DLCItemInfo::save();
        lVar2 = *param_1;
        uVar4 = 0;
        goto LAB_10027b68e;
      }
      pcVar3 = "Failed to query download urls. Package size is missing";
    }
  }
  FUN_100df99c0("","prl_client_app",0,pcVar3);
  lVar2 = *param_1;
  uVar4 = 0x80015414;
LAB_10027b68e:
  (**(code **)(lVar2 + 0xb0))(param_1,uVar4);
  return;
}


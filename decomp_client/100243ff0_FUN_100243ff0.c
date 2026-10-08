
void FUN_100243ff0(long *param_1)

{
  long lVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  char *pcVar6;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  int *local_38;
  long local_30;
  undefined1 local_21;
  
  if (5 < (int)param_1[9]) {
    lVar4 = 0;
    FUN_100df99c0("","prl_client_app",0,"Call install tools.");
    if ((param_1[3] != 0) && (lVar4 = 0, *(int *)(param_1[3] + 4) != 0)) {
      lVar4 = param_1[4];
    }
    FUN_1001943a0(lVar4,1);
    FUN_100243dd0(param_1,DAT_100e152a4 / 2);
    return;
  }
  uVar3 = FUN_100370280();
  lVar4 = 0;
  if ((param_1[3] != 0) && (lVar4 = 0, *(int *)(param_1[3] + 4) != 0)) {
    lVar4 = param_1[4];
  }
  FUN_100188480(&local_40,lVar4);
  FUN_100370e30(&local_38,uVar3,&local_40,DAT_100e152b8);
  lVar4 = 0;
  if (local_38 != (int *)0x0) {
    lVar4 = 0;
    if (local_38[1] != 0) {
      lVar4 = local_30;
    }
    LOCK();
    *local_38 = *local_38 + -1;
    local_21 = *local_38 != 0;
    UNLOCK();
    if ((!(bool)local_21) && (local_38 != (int *)0x0)) {
      operator_delete(local_38);
    }
  }
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_21 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100244113;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100244113:
  lVar1 = param_1[3];
  lVar5 = 0;
  if (lVar4 == 0) {
    if ((lVar1 != 0) && (lVar5 = 0, *(int *)(lVar1 + 4) != 0)) {
      lVar5 = param_1[4];
    }
    FUN_100188480(&local_50,lVar5);
    QString::toLocal8Bit();
    FUN_100df99c0("","prl_client_app",0,"Error(!): VM upgrade: Cant get CVmConsoleWidget for vm: %s"
                  ,local_48 + *(long *)(local_48 + 0x10));
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        local_21 = *(int *)local_48 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1002442df;
      }
      QArrayData::deallocate(local_48,1,8);
    }
LAB_1002442df:
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        local_21 = *(int *)local_50 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_10024430f;
      }
      QArrayData::deallocate(local_50,2,8);
    }
LAB_10024430f:
    uVar2 = CAbstractTask::getCurrentSubTask();
    if (7 < uVar2) {
      pcVar6 = "Unknown";
      goto LAB_100244332;
    }
  }
  else {
    if (((lVar1 != 0) && (*(int *)(lVar1 + 4) != 0)) && (param_1[4] != 0)) {
      uVar3 = FUN_10018c280(param_1[4]);
      uVar3 = FUN_100319d40(uVar3);
      FUN_100df99c0("","prl_client_app",0,"Send \"Escape\" key into VM.");
      *(int *)(param_1 + 9) = (int)param_1[9] + 1;
      FUN_10035c110(uVar3,9,1);
      FUN_10035c110(uVar3,9,0);
      if (param_1[8] != 0) {
        QTimer::start();
        return;
      }
      lVar4 = 0;
      FUN_100df99c0("","prl_client_app",0,"Call install tools.");
      if ((param_1[3] != 0) && (lVar4 = 0, *(int *)(param_1[3] + 4) != 0)) {
        lVar4 = param_1[4];
      }
      FUN_1001943a0(lVar4,1);
      FUN_100243dd0(param_1,DAT_100e152a4 / 2);
      return;
    }
    FUN_100188480(&local_60,0);
    QString::toLocal8Bit();
    FUN_100df99c0("","prl_client_app",0,"Error(!): VM upgrade: Cant get VM %s to send Escape key",
                  local_58 + *(long *)(local_58 + 0x10));
    if (*(int *)local_58 != -1) {
      if (*(int *)local_58 != 0) {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + -1;
        local_21 = *(int *)local_58 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_100244213;
      }
      QArrayData::deallocate(local_58,1,8);
    }
LAB_100244213:
    if (*(int *)local_60 != -1) {
      if (*(int *)local_60 != 0) {
        LOCK();
        *(int *)local_60 = *(int *)local_60 + -1;
        local_21 = *(int *)local_60 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_100244243;
      }
      QArrayData::deallocate(local_60,2,8);
    }
LAB_100244243:
    uVar2 = CAbstractTask::getCurrentSubTask();
    if (7 < uVar2) {
      pcVar6 = "Unknown";
      goto LAB_100244332;
    }
  }
  pcVar6 = (&PTR_s_Prepare_1021ef300)[(int)uVar2];
LAB_100244332:
  FUN_100df99c0("","prl_client_app",0,"(!)Error: Exit from upgrade task. Last sub task \"%s\".",
                pcVar6);
  (**(code **)(*param_1 + 0x98))(param_1,0x80000009);
  return;
}


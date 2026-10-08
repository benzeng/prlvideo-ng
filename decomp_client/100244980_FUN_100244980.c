
void FUN_100244980(long *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  QString *pQVar3;
  undefined4 uVar4;
  long lVar5;
  char *pcVar6;
  uint uVar7;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  uVar7 = param_2 - 0x18a88;
  if (uVar7 < 9) {
    pcVar6 = (&PTR_s_Upgrade_init_1021ef340)[(int)uVar7];
  }
  else {
    pcVar6 = "Unknown upgrade event";
  }
  FUN_100df99c0("","prl_client_app",0,"Received \"%s\" event.",pcVar6);
  if (((param_1[3] == 0) || (*(int *)(param_1[3] + 4) == 0)) || (param_1[4] == 0)) {
    FUN_100df99c0("","prl_client_app",0,"(!)Error: Vm instance is NULL.");
    return;
  }
  pQVar3 = (QString *)CMessageManager::instance();
  lVar5 = 0;
  if ((param_1[3] != 0) && (lVar5 = 0, *(int *)(param_1[3] + 4) != 0)) {
    lVar5 = param_1[4];
  }
  FUN_100188480(&local_40,lVar5);
  CMessageManager::closeSpecificMessageBox(pQVar3,(int)&local_40);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100244a6a;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100244a6a:
  pQVar3 = (QString *)CMessageManager::instance();
  lVar5 = 0;
  if ((param_1[3] != 0) && (lVar5 = 0, *(int *)(param_1[3] + 4) != 0)) {
    lVar5 = param_1[4];
  }
  FUN_100188480(&local_48,lVar5);
  CMessageManager::closeSpecificMessageBox(pQVar3,(int)&local_48);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100244ad7;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100244ad7:
  if (8 < uVar7) {
LAB_100244b95:
    FUN_100df99c0("","prl_client_app",0,"Error(!): VM upgrade: UNKNOWN UPGRADE EVENT.");
    return;
  }
  if ((0x19dU >> (uVar7 & 0x1f) & 1) == 0) {
    if ((0x42U >> (uVar7 & 0x1f) & 1) == 0) {
      if (uVar7 != 5) goto LAB_100244b95;
      *(undefined1 *)((long)param_1 + 0x4c) = 1;
      iVar2 = CAbstractTask::getCurrentSubTask();
      if (iVar2 != 3) {
        uVar1 = CAbstractTask::getCurrentSubTask();
        if (uVar1 < 8) {
          pcVar6 = (&PTR_s_Prepare_1021ef300)[(int)uVar1];
        }
        else {
          pcVar6 = "Unknown";
        }
        FUN_100df99c0("","prl_client_app",0,
                      "(!)Error: Exit from upgrade task. Last sub task \"%s\".",pcVar6);
        (**(code **)(*param_1 + 0x98))(param_1,0x80000009);
      }
      FUN_100244810(param_1,0x18a8d);
      uVar4 = 0;
      goto LAB_100244c50;
    }
    FUN_1002425c0(param_1,param_2);
    uVar1 = CAbstractTask::getCurrentSubTask();
    if (uVar1 < 8) {
      pcVar6 = (&PTR_s_Prepare_1021ef300)[(int)uVar1];
    }
    else {
      pcVar6 = "Unknown";
    }
    FUN_100df99c0("","prl_client_app",0,"(!)Error: Exit from upgrade task. Last sub task \"%s\".",
                  pcVar6);
    (**(code **)(*param_1 + 0x98))(param_1,0x80000009);
  }
  FUN_100244810(param_1,param_2);
  if (param_2 == 0x18a88) {
    *(undefined4 *)((long)param_1 + 0x2c) = 0;
  }
  else if (param_2 == 0x18a8f) {
    *(undefined4 *)((long)param_1 + 0x2c) = 1;
  }
  else {
    uVar4 = 0;
    if (param_2 != 0x18a90) goto LAB_100244c50;
    *(undefined4 *)((long)param_1 + 0x2c) = 2;
  }
  uVar4 = DAT_100e152a4;
  if ((int)param_1[5] == 0) {
    *(undefined4 *)(param_1 + 5) = 1;
    uVar4 = DAT_100e152a4;
  }
LAB_100244c50:
  FUN_100243dd0(param_1,uVar4);
  if ((uVar7 < 9) && ((0x62UL >> ((ulong)uVar7 & 0x3f) & 1) == 0)) {
    uVar4 = *(undefined4 *)((long)param_1 + 0x5c);
    iVar2 = (int)param_1[0xb];
    if (iVar2 < *(int *)(&DAT_100e17020 + (long)(int)uVar7 * 4)) {
      *(int *)(param_1 + 0xb) = *(int *)(&DAT_100e17020 + (long)(int)uVar7 * 4);
      lVar5 = param_1[10];
      if (-1 < *(int *)(lVar5 + 0x10)) {
        QTimer::stop();
        lVar5 = param_1[10];
      }
      *(undefined4 *)(param_1 + 0xc) = 0;
      QTimer::start((int)lVar5);
      iVar2 = (int)param_1[0xb];
    }
    FUN_100815b40(param_1,iVar2,uVar4);
  }
  iVar2 = CAbstractTask::getCurrentSubTask();
  if (iVar2 == 7) {
    (**(code **)(*param_1 + 0xb0))(param_1,0);
  }
  return;
}


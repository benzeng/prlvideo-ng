
undefined8 FUN_100225650(long *param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  QArrayData *pQVar5;
  long *plVar6;
  int iVar7;
  Connection local_58 [8];
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  *(undefined1 *)((long)param_1 + 0x34) = 1;
  if (2 < DAT_10230ffd0) {
    lVar4 = 0;
    if ((param_1[3] != 0) && (lVar4 = 0, *(int *)(param_1[3] + 4) != 0)) {
      lVar4 = param_1[4];
    }
    FUN_1003193e0(&local_40,lVar4);
    QString::toLocal8Bit();
    pQVar5 = local_38 + *(long *)(local_38 + 0x10);
    EnumUtils::enumToString(&local_50,(int)param_1[5],1);
    QString::toLocal8Bit();
    FUN_100df99c0("","prl_client_app",3,
                  "About to switch VM [%s] desktop into [%s] mode, wait for mode availability!",
                  pQVar5,local_48 + *(long *)(local_48 + 0x10));
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        local_29 = *(int *)local_48 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100225732;
      }
      QArrayData::deallocate(local_48,1,8);
    }
LAB_100225732:
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        local_29 = *(int *)local_50 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100225762;
      }
      QArrayData::deallocate(local_50,2,8);
    }
LAB_100225762:
    if (*(int *)local_38 != -1) {
      if (*(int *)local_38 != 0) {
        LOCK();
        *(int *)local_38 = *(int *)local_38 + -1;
        local_29 = *(int *)local_38 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100225792;
      }
      QArrayData::deallocate(local_38,1,8);
    }
LAB_100225792:
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        local_29 = *(int *)local_40 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1002257ca;
      }
      QArrayData::deallocate(local_40,2,8);
    }
  }
LAB_1002257ca:
  plVar6 = param_1 + 3;
  iVar7 = (int)param_1[5];
  lVar4 = 0;
  if ((*plVar6 != 0) && (lVar4 = 0, *(int *)(*plVar6 + 4) != 0)) {
    lVar4 = param_1[4];
  }
  iVar2 = FUN_100319ae0(lVar4);
  if ((iVar7 == 3) && (iVar2 == 0)) {
    cVar1 = FUN_1002251d0(param_1);
    iVar7 = 3;
    if (cVar1 == '\0') {
      lVar4 = 0;
      if ((*plVar6 != 0) && (lVar4 = 0, *(int *)(*plVar6 + 4) != 0)) {
        lVar4 = param_1[4];
      }
      uVar3 = FUN_100319390(lVar4);
      iVar2 = FUN_10018a9d0(uVar3);
      if (iVar2 != 0x30000004) {
        lVar4 = 0;
        if ((*plVar6 != 0) && (lVar4 = 0, *(int *)(*plVar6 + 4) != 0)) {
          lVar4 = param_1[4];
        }
        uVar3 = FUN_100319390(lVar4);
        iVar2 = FUN_10018a9d0(uVar3);
        if (iVar2 == 0x30000005) {
          lVar4 = 0;
          if ((*plVar6 != 0) && (lVar4 = 0, *(int *)(*plVar6 + 4) != 0)) {
            lVar4 = param_1[4];
          }
          uVar3 = FUN_100319390(lVar4);
          cVar1 = FUN_10018ffd0(uVar3);
          if (cVar1 != '\0') goto LAB_100225895;
        }
        iVar7 = 1;
      }
    }
  }
LAB_100225895:
  lVar4 = 0;
  if ((*plVar6 != 0) && (lVar4 = 0, *(int *)(*plVar6 + 4) != 0)) {
    lVar4 = param_1[4];
  }
  lVar4 = FUN_10031bef0(lVar4,iVar7,param_1 + 6);
  if (lVar4 != 0) {
    if (*(char *)(lVar4 + 0x30) != '\0') {
      CAbstractTask::setWaitForSubTaskCompletion();
      QObject::connect(local_58,lVar4,"2switchFinished(PRL_RESULT)",param_1,
                       "1onVmDesktopViewModeSwitchFinished(PRL_RESULT)",0);
      QMetaObject::Connection::~Connection(local_58);
      if (*(char *)(lVar4 + 0x30) != '\0') {
        return 0;
      }
    }
    (**(code **)(*param_1 + 0xb0))(param_1,0);
  }
  return 0;
}


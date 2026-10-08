
undefined4 FUN_1001e4dd0(long param_1)

{
  char cVar1;
  undefined4 uVar2;
  long *plVar3;
  undefined1 auVar4 [16];
  QArrayData *local_50;
  QArrayData *local_48;
  QString local_40;
  char local_31;
  QArrayData *local_30;
  undefined1 local_21;
  
  plVar3 = operator_new(0x40);
  uVar2 = FUN_100d7e9e0();
  FUN_100d8e790(&local_30,uVar2);
  FUN_100ae9de0(plVar3,0,&local_30);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1001e4e3b;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_1001e4e3b:
  cVar1 = FUN_100ae9df0(plVar3);
  (**(code **)(*plVar3 + 0x20))(plVar3);
  uVar2 = 0x80015352;
  if (cVar1 == '\0') {
    uVar2 = 0;
    goto LAB_1001e4f7c;
  }
  local_31 = '\0';
  MacUtils::getOtherRunningAppInstancePath((bool *)&local_40);
  if (local_31 == '\0') {
    FUN_100df99c0("[INIT_THREAD]","prl_client_app",0,
                  "Failed to determine the running application version");
  }
  else {
    auVar4 = CAppVersion::fromMacBundle(&local_40);
    *(undefined1 (*) [16])(param_1 + 0x1c) = auVar4;
    CAppVersion::toString();
    QString::toUtf8();
    FUN_100df99c0("[INIT_THREAD]","prl_client_app",0,
                  "Another instance is already running. Version [%s]",
                  local_48 + *(long *)(local_48 + 0x10));
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        local_21 = *(int *)local_48 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1001e4efc;
      }
      QArrayData::deallocate(local_48,1,8);
    }
LAB_1001e4efc:
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        local_21 = *(int *)local_50 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1001e4f4c;
      }
      QArrayData::deallocate(local_50,2,8);
    }
  }
LAB_1001e4f4c:
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_21 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1001e4f7c;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_1001e4f7c:
  FUN_1001e50a0(param_1,0,uVar2);
  return uVar2;
}


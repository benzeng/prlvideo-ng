
undefined8 FUN_100219840(long param_1)

{
  char cVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  QArrayData *pQVar9;
  char *pcVar10;
  QArrayData *local_80;
  long local_78;
  long local_70;
  long local_68;
  QVariant local_60;
  QArrayData *local_50;
  QString local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  if (*(char *)(param_1 + 0x168) != '\0') {
    uVar8 = 0;
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (uVar8 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
      uVar8 = *(undefined8 *)(param_1 + 0x20);
    }
    iVar4 = FUN_10018a9d0(uVar8);
    if (iVar4 != 0x30000004) {
      uVar8 = 0;
      if ((*(long *)(param_1 + 0x18) != 0) &&
         (uVar8 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
        uVar8 = *(undefined8 *)(param_1 + 0x20);
      }
      iVar4 = FUN_10018a9d0(uVar8);
      if (iVar4 != 0x30000009) {
        uVar8 = 0;
        if ((*(long *)(param_1 + 0x18) != 0) &&
           (uVar8 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
          uVar8 = *(undefined8 *)(param_1 + 0x20);
        }
        iVar4 = FUN_10018a9d0(uVar8);
        if (iVar4 != 0x30000006) {
          uVar8 = 0;
          if ((*(long *)(param_1 + 0x18) != 0) &&
             (uVar8 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
            uVar8 = *(undefined8 *)(param_1 + 0x20);
          }
          iVar4 = FUN_10018a9d0(uVar8);
          if (iVar4 != 0x30000010) {
            return 0x80000009;
          }
        }
      }
    }
  }
  cVar1 = COsInstallationInfo::load();
  if (cVar1 == '\0') {
    FUN_100df99c0("","prl_client_app",0,"(!)Error: can\'t load OS installation info.");
    return 0x80000009;
  }
  uVar8 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar8 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar8 = *(undefined8 *)(param_1 + 0x20);
  }
  FUN_10018bcf0(uVar8,1);
  CAbstractTask::setWaitForSubTaskCompletion();
  uVar5 = FUN_100370280();
  uVar8 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar8 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar8 = *(undefined8 *)(param_1 + 0x20);
  }
  FUN_100188480(&local_40,uVar8);
  lVar6 = FUN_1003704b0(uVar5,&local_40,DAT_100e152b8);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002199a9;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1002199a9:
  if ((lVar6 != 0) && (lVar7 = FUN_10036ab70(lVar6), lVar7 != 0)) {
    uVar8 = FUN_10036ab70(lVar6);
    lVar6 = FUN_10037a2c0(uVar8);
    if (lVar6 != 0) {
      cVar1 = COsInstallationInfo::isUnattanded();
      if (cVar1 == '\0') {
        iVar4 = 0x1dc6c8f;
      }
      else {
        iVar4 = 0x1ddc56f;
      }
      QMetaObject::tr((char *)&local_48,(char *)&PTR_staticMetaObject_1022013e0,iVar4);
      uVar8 = FUN_10037dac0(lVar6);
      local_50 = (QArrayData *)QString::fromAscii_helper("installPageTitleText",0x14);
      QVariant::QVariant(&local_60,&local_48);
      FUN_10072e3c0(uVar8,&local_50,&local_60);
      QVariant::~QVariant(&local_60);
      if (*(int *)local_50 != -1) {
        if (*(int *)local_50 != 0) {
          LOCK();
          *(int *)local_50 = *(int *)local_50 + -1;
          local_31 = *(int *)local_50 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100219ab1;
        }
        QArrayData::deallocate(local_50,2,8);
      }
LAB_100219ab1:
      if (*(int *)local_48.field0_0x0 != -1) {
        if (*(int *)local_48.field0_0x0 != 0) {
          LOCK();
          *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
          local_31 = *(int *)local_48.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100219ae1;
        }
        QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
      }
    }
  }
LAB_100219ae1:
  uVar8 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar8 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar8 = *(undefined8 *)(param_1 + 0x20);
  }
  uVar8 = FUN_10018c280(uVar8);
  cVar1 = '\0';
  QObject::connect(&local_68,uVar8,
                   "2toolsInstallationStageChanged(CVmDesktop::ToolsInstallationStage,CVmDesktop::ToolsInstallationStage)"
                   ,param_1,
                   "1onVmToolsInstallationStageChanged(CVmDesktop::ToolsInstallationStage,CVmDesktop::ToolsInstallationStage)"
                   ,0);
  if (local_68 != 0) {
    cVar1 = QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_68);
  uVar8 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar8 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar8 = *(undefined8 *)(param_1 + 0x20);
  }
  cVar2 = '\0';
  QObject::connect(&local_70,uVar8,"2vmStateChanged(VIRTUAL_MACHINE_STATE,VIRTUAL_MACHINE_STATE)",
                   param_1,"1onVmStateChanged(VIRTUAL_MACHINE_STATE,VIRTUAL_MACHINE_STATE)",0);
  if (cVar1 != '\0') {
    if (local_70 == 0) {
      cVar2 = '\0';
    }
    else {
      cVar2 = QMetaObject::Connection::isConnected_helper();
    }
  }
  QMetaObject::Connection::~Connection((Connection *)&local_70);
  uVar8 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar8 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar8 = *(undefined8 *)(param_1 + 0x20);
  }
  QObject::connect(&local_78,uVar8,"2vmTypeChanged(GUI::VmType)",param_1,
                   "1onVmTypeChanged(GUI::VmType)",0);
  if ((cVar2 != '\0') && (local_78 != 0)) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_78);
  bVar3 = COsInstallationInfo::isIntegrated();
  pcVar10 = "ISOLATED";
  if (bVar3 != 0) {
    pcVar10 = "INTEGRATED";
  }
  pQVar9 = (QArrayData *)QString::fromAscii_helper(pcVar10,bVar3 + 8 + (uint)bVar3);
  QString::toLocal8Bit();
  FUN_100df99c0("","prl_client_app",0,"Installation type: %s",local_80 + *(long *)(local_80 + 0x10))
  ;
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_31 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100219c8b;
    }
    QArrayData::deallocate(local_80,1,8);
  }
LAB_100219c8b:
  if (*(int *)pQVar9 != -1) {
    if (*(int *)pQVar9 != 0) {
      LOCK();
      *(int *)pQVar9 = *(int *)pQVar9 + -1;
      UNLOCK();
      if (*(int *)pQVar9 != 0) {
        return 0;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(pQVar9,2,8);
  }
  return 0;
}


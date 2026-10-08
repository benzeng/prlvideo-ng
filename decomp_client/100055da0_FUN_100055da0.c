
undefined1 FUN_100055da0(long param_1,QString *param_2,undefined1 param_3,undefined4 param_4)

{
  long *plVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  undefined1 uVar5;
  undefined2 uVar6;
  undefined8 uVar7;
  long lVar8;
  char *pcVar9;
  uint uVar10;
  char *pcVar11;
  char *pcVar12;
  QArrayData *local_e8;
  long local_e0;
  QString local_d8;
  QVariant local_d0;
  QArrayData *local_c0;
  QVariant local_b8;
  QArrayData *local_a8;
  QVariant local_a0;
  QString local_90;
  QArrayData *local_88;
  QString local_80;
  QString local_78;
  QFileInfo local_70 [8];
  QArrayData *local_68;
  QArrayData *local_60;
  QString local_58;
  QString local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  uVar7 = FUN_100152280();
  lVar8 = FUN_1001548f0(uVar7,param_2);
  if (lVar8 == 0) {
    QString::toUtf8();
    FUN_100df99c0("SGAC","prl_client_app",0,"Failed to get vm for vmUuid=\"%s\"",
                  local_48 + *(long *)(local_48 + 0x10));
    if (*(int *)local_48 == -1) {
      return 0;
    }
    local_60 = local_48;
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      UNLOCK();
      if (*(int *)local_48 != 0) {
        return 0;
      }
      local_31 = 0;
    }
    goto LAB_100056478;
  }
  FUN_10018d980(&local_50,lVar8);
  QString::operator=((QString *)(param_1 + 0x38),&local_50);
  if (*(int *)local_50.field0_0x0 != -1) {
    if (*(int *)local_50.field0_0x0 != 0) {
      LOCK();
      *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
      local_31 = *(int *)local_50.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100055e36;
    }
    QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
  }
LAB_100055e36:
  FUN_1000f6620(&local_58,param_2,param_1 + 0x10);
  QString::operator=((QString *)(param_1 + 8),&local_58);
  if (*(int *)local_58.field0_0x0 != -1) {
    if (*(int *)local_58.field0_0x0 != 0) {
      LOCK();
      *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
      local_31 = *(int *)local_58.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100055e88;
    }
    QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
  }
LAB_100055e88:
  if (*(int *)(((QString *)(param_1 + 8))->field0_0x0 + 4) == 0) {
    QString::toUtf8();
    FUN_100df99c0("SGAC","prl_client_app",0,
                  "Failed to get Applications Menu folder info for vmUuid=\"%s\"",
                  local_60 + *(long *)(local_60 + 0x10));
    if (*(int *)local_60 == -1) {
      return 0;
    }
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      UNLOCK();
      if (*(int *)local_60 != 0) {
        return 0;
      }
      local_31 = 0;
    }
LAB_100056478:
    QArrayData::deallocate(local_60,1,8);
    return 0;
  }
  FUN_10018d860(&local_78,lVar8);
  QFileInfo::QFileInfo(local_70,&local_78);
  QFileInfo::path();
  QFileInfo::~QFileInfo(local_70);
  if (*(int *)local_78.field0_0x0 != -1) {
    if (*(int *)local_78.field0_0x0 != 0) {
      LOCK();
      *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + -1;
      local_31 = *(int *)local_78.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100055ef6;
    }
    QArrayData::deallocate((QArrayData *)local_78.field0_0x0,2,8);
  }
LAB_100055ef6:
  uVar6 = QDir::separator();
  local_88 = local_68;
  if (1 < *(uint *)local_68 + 1) {
    LOCK();
    *(uint *)local_68 = *(uint *)local_68 + 1;
    local_31 = *(uint *)local_68 != 0;
    UNLOCK();
  }
  uVar10 = *(uint *)(local_68 + 4);
  if ((1 < *(uint *)local_68) || ((*(uint *)(local_68 + 8) & 0x7fffffff) < uVar10 + 2)) {
    QString::reallocData((uint)&local_88,SUB41(uVar10 + 2,0));
    uVar10 = *(uint *)(local_88 + 4);
  }
  *(uint *)(local_88 + 4) = uVar10 + 1;
  *(undefined2 *)(local_88 + (long)(int)uVar10 * 2 + *(long *)(local_88 + 0x10)) = uVar6;
  *(undefined2 *)(local_88 + (long)(int)*(uint *)(local_88 + 4) * 2 + *(long *)(local_88 + 0x10)) =
       0;
  if (1 < *(uint *)local_88 + 1) {
    LOCK();
    *(uint *)local_88 = *(uint *)local_88 + 1;
    local_31 = *(uint *)local_88 != 0;
    UNLOCK();
  }
  local_80.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_88;
  QString::fromUtf8_helper((char *)&local_40,0x1db77da);
  QString::append(&local_80);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100055fd5;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100055fd5:
  QString::operator=((QString *)(param_1 + 0x18),&local_80);
  if (*(int *)local_80.field0_0x0 != -1) {
    if (*(int *)local_80.field0_0x0 != 0) {
      LOCK();
      *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + -1;
      local_31 = *(int *)local_80.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100056012;
    }
    QArrayData::deallocate((QArrayData *)local_80.field0_0x0,2,8);
  }
LAB_100056012:
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_31 = *(int *)local_88 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100056042;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_100056042:
  FUN_1000f69e0(&local_90,param_2);
  QString::operator=((QString *)(param_1 + 0x20),&local_90);
  if (*(int *)local_90.field0_0x0 != -1) {
    if (*(int *)local_90.field0_0x0 != 0) {
      LOCK();
      *(int *)local_90.field0_0x0 = *(int *)local_90.field0_0x0 + -1;
      local_31 = *(int *)local_90.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100056097;
    }
    QArrayData::deallocate((QArrayData *)local_90.field0_0x0,2,8);
  }
LAB_100056097:
  FUN_10018c2b0(lVar8);
  CVmConfiguration::getVmSettings();
  CVmSettings::getVmTools();
  CVmTools::getVmSharedApplications();
  uVar5 = CVmSharedApplications::isShowWindowsAppInDock();
  *(undefined1 *)(param_1 + 0x4d) = uVar5;
  QSettings::QSettings((QSettings *)&local_a0,(QObject *)0x0);
  local_a8 = (QArrayData *)QString::fromAscii_helper("Shared Applications",0x13);
  QSettings::beginGroup((QString *)&local_a0);
  if (*(int *)local_a8 != -1) {
    if (*(int *)local_a8 != 0) {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + -1;
      local_31 = *(int *)local_a8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10005613f;
    }
    QArrayData::deallocate(local_a8,2,8);
  }
LAB_10005613f:
  QSettings::beginGroup((QString *)&local_a0);
  local_c0 = (QArrayData *)QString::fromAscii_helper("Apps folder added to Dock",0x19);
  QVariant::QVariant(&local_d0,false);
  QSettings::value((QString *)&local_b8,&local_a0);
  uVar5 = QVariant::toBool();
  *(undefined1 *)(param_1 + 0x4e) = uVar5;
  QVariant::~QVariant(&local_b8);
  QVariant::~QVariant(&local_d0);
  if (*(int *)local_c0 != -1) {
    if (*(int *)local_c0 != 0) {
      LOCK();
      *(int *)local_c0 = *(int *)local_c0 + -1;
      local_31 = *(int *)local_c0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000561f3;
    }
    QArrayData::deallocate(local_c0,2,8);
  }
LAB_1000561f3:
  QString::operator=((QString *)(param_1 + 0x28),param_2);
  *(undefined1 *)(param_1 + 0x4c) = param_3;
  *(undefined4 *)(param_1 + 0x48) = param_4;
  FUN_10018d830(&local_d8,lVar8);
  QString::operator=((QString *)(param_1 + 0x30),&local_d8);
  if (*(int *)local_d8.field0_0x0 != -1) {
    if (*(int *)local_d8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_d8.field0_0x0 = *(int *)local_d8.field0_0x0 + -1;
      local_31 = *(int *)local_d8.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10005625f;
    }
    QArrayData::deallocate((QArrayData *)local_d8.field0_0x0,2,8);
  }
LAB_10005625f:
  FUN_10018c250(&local_e0,lVar8);
  plVar1 = (long *)(param_1 + 0x40);
  if (plVar1 != &local_e0) {
    if (*plVar1 != 0) {
      _PrlHandle_Free();
    }
    *plVar1 = local_e0;
    if (local_e0 != 0) {
      _PrlHandle_AddRef();
    }
  }
  if (local_e0 != 0) {
    _PrlHandle_Free();
  }
  if (1 < DAT_10230ffd0) {
    cVar2 = *(char *)(param_1 + 0x4c);
    cVar3 = *(char *)(param_1 + 0x4d);
    cVar4 = *(char *)(param_1 + 0x4e);
    QString::toUtf8();
    pcVar11 = "true";
    pcVar9 = "true";
    if (cVar4 == '\0') {
      pcVar9 = "false";
    }
    pcVar12 = "true";
    if (cVar2 == '\0') {
      pcVar12 = "false";
    }
    if (cVar3 == '\0') {
      pcVar11 = "false";
    }
    FUN_100df99c0("SGAC","prl_client_app",2,
                  "AppsMenuDockIcon: on=%s, enabled=%s, addedFlag=%s, vmName=\"%s\"",pcVar11,pcVar12
                  ,pcVar9,local_e8 + *(long *)(local_e8 + 0x10));
    if (*(int *)local_e8 != -1) {
      if (*(int *)local_e8 != 0) {
        LOCK();
        *(int *)local_e8 = *(int *)local_e8 + -1;
        local_31 = *(int *)local_e8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100056372;
      }
      QArrayData::deallocate(local_e8,1,8);
    }
  }
LAB_100056372:
  QSettings::~QSettings((QSettings *)&local_a0);
  if (*(int *)local_68 == -1) {
    return 1;
  }
  if (*(int *)local_68 != 0) {
    LOCK();
    *(int *)local_68 = *(int *)local_68 + -1;
    UNLOCK();
    if (*(int *)local_68 != 0) {
      return 1;
    }
    local_31 = 0;
  }
  QArrayData::deallocate(local_68,2,8);
  return 1;
}


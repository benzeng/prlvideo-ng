
void FUN_10021a2f0(long param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  QString *pQVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined4 local_58;
  undefined4 local_54;
  undefined1 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined1 local_44;
  QArrayData *local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  if (((*(long *)(param_1 + 0x18) == 0) || (*(int *)(*(long *)(param_1 + 0x18) + 4) == 0)) ||
     (*(long *)(param_1 + 0x20) == 0)) {
    QObject::deleteLater();
    return;
  }
  uVar6 = 0;
  FUN_10018bcf0(*(long *)(param_1 + 0x20),0);
  uVar4 = FUN_100370280();
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar6 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar6 = *(undefined8 *)(param_1 + 0x20);
  }
  FUN_100188480(&local_38,uVar6);
  pQVar5 = (QString *)FUN_1003704b0(uVar4,&local_38,DAT_100e152b8);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_29 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10021a3a2;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_10021a3a2:
  if (pQVar5 == (QString *)0x0) goto LAB_10021a56a;
  uVar6 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar6 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar6 = *(undefined8 *)(param_1 + 0x20);
  }
  FUN_10018d830(&local_40,uVar6);
  QWidget::setWindowTitle(pQVar5);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_29 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10021a409;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_10021a409:
  cVar1 = COsInstallationInfo::isUnattanded();
  if (((cVar1 != '\0') && (iVar2 = CAbstractTask::getResult(), -1 < iVar2)) ||
     (cVar1 = COsInstallationInfo::isUnattanded(), cVar1 == '\0')) {
    uVar6 = 0;
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (uVar6 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
      uVar6 = *(undefined8 *)(param_1 + 0x20);
    }
    uVar3 = FUN_10018f890(uVar6);
    cVar1 = FUN_1001248a0(uVar3);
    if (cVar1 != '\0') {
      uVar6 = 0;
      if ((*(long *)(param_1 + 0x18) != 0) &&
         (uVar6 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
        uVar6 = *(undefined8 *)(param_1 + 0x20);
      }
      iVar2 = FUN_10018a9d0(uVar6);
      if ((iVar2 == 0x30000004) && (cVar1 = COsInstallationInfo::isWindowsPreview(), cVar1 == '\0'))
      {
        uVar6 = 0;
        if ((*(long *)(param_1 + 0x18) != 0) &&
           (uVar6 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
          uVar6 = *(undefined8 *)(param_1 + 0x20);
        }
        FUN_10018c2b0(uVar6);
        CVmConfiguration::getVmSettings();
        CVmSettings::getVmCommonOptions();
        CVmCommonOptions::getProfile();
        uVar3 = CVmProfile::getType();
        iVar2 = FUN_100358a60(uVar3);
        uVar6 = 0;
        if ((*(long *)(param_1 + 0x18) != 0) &&
           (uVar6 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
          uVar6 = *(undefined8 *)(param_1 + 0x20);
        }
        uVar6 = FUN_10018c280(uVar6);
        if ((iVar2 == 2) || (iVar2 == 4)) {
          local_58 = 3;
          local_50 = 0;
          local_54 = 0;
          local_4c = 0xffff;
          local_48 = 0;
          local_44 = 0;
          FUN_10031bef0(uVar6,iVar2,&local_58);
        }
        else {
          uVar6 = FUN_100319960(uVar6);
          plVar7 = (long *)FUN_100325f60(uVar6);
          (**(code **)(*plVar7 + 0x70))(plVar7);
        }
      }
    }
  }
LAB_10021a56a:
  QObject::deleteLater();
  return;
}


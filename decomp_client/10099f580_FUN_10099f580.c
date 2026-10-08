
void FUN_10099f580(long param_1)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  QArrayData *local_38;
  QArrayData *local_30;
  QArrayData *local_28;
  undefined1 local_19;
  
  uVar4 = DAT_102310d90;
  local_28 = (QArrayData *)PTR_shared_null_1021e1288;
  lVar3 = FUN_1009983c0();
  iVar2 = FUN_10099dc60(uVar4,lVar3 + 0x30,&local_28);
  if (iVar2 < 0) {
    FUN_100df99c0("","TransporterWizardModel",0,
                  "PTA_CHECKED_CALL_ASSERT( %s %s ) occured in %s:%d [%s]","PrlPTA::GetQStr",
                  "(PrlPTAMigration_GetVmName, getPTLogic()->GetMigrationHandle(), sVmName)",
                  "Pages/WPDestinationPath.cpp",0x72,"InitVmName");
  }
  uVar4 = FUN_1009983a0(param_1);
  cVar1 = FUN_100990a70(uVar4);
  if (cVar1 == '\0') {
LAB_10099f650:
    FUN_1009a0a40(&local_30,param_1);
  }
  else {
    uVar4 = FUN_1009983c0(param_1);
    cVar1 = FUN_100991af0(uVar4);
    if (cVar1 == '\0') goto LAB_10099f650;
    local_30 = local_28;
    if (1 < *(int *)local_28 + 1U) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + 1;
      local_19 = *(int *)local_28 != 0;
      UNLOCK();
    }
  }
  if (1 < DAT_10230ffd0) {
    QString::toUtf8();
    FUN_100df99c0("","TransporterWizardModel",2,
                  "Default virtual machine/virtual disk name is \'%s\'",
                  local_38 + *(long *)(local_38 + 0x10));
    if (*(int *)local_38 != -1) {
      if (*(int *)local_38 != 0) {
        LOCK();
        *(int *)local_38 = *(int *)local_38 + -1;
        local_19 = *(int *)local_38 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_10099f6ce;
      }
      QArrayData::deallocate(local_38,1,8);
    }
  }
LAB_10099f6ce:
  QLineEdit::setText(*(QString **)(*(long *)(param_1 + 0x60) + 0x78));
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_19 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10099f70f;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_10099f70f:
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      UNLOCK();
      if (*(int *)local_28 != 0) {
        return;
      }
      local_19 = 0;
    }
    QArrayData::deallocate(local_28,2,8);
  }
  return;
}


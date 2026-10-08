
undefined1 FUN_1009b3a10(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined1 uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  QArrayData *local_68;
  QString local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  long local_48;
  QString local_40;
  undefined1 local_31;
  
  lVar4 = FUN_1009983c0();
  local_48 = 0;
  lVar4 = *(long *)(lVar4 + 0x30);
  lVar5 = 0;
  if (lVar4 != 0) {
    local_48 = lVar4;
    (*DAT_102310a48)(lVar4);
    lVar5 = lVar4;
  }
  puVar1 = PTR_shared_null_1021e1288;
  local_50 = (QArrayData *)PTR_shared_null_1021e1288;
  iVar3 = FUN_10099dc60(DAT_102310c88,&local_48,&local_50);
  if (iVar3 < 0) {
    FUN_100df99c0("","TransporterWizardModel",0,
                  "PTA_CHECKED_CALL_ASSERT( %s %s ) occured in %s:%d [%s]","PrlPTA::GetQStr",
                  "(PrlPTAMigration_GetComputerName, hMigration, computerName)",
                  "Pages/WPEnableAutoLogon.cpp",0x11d,"EnableAutologon");
  }
  local_58 = (QArrayData *)puVar1;
  local_60.field0_0x0 = (QTypedArrayData<unsigned_short> *)puVar1;
  local_68 = (QArrayData *)puVar1;
  iVar3 = FUN_10099dc60(DAT_102310ae0,param_2,&local_58);
  if (iVar3 < 0) {
    uVar2 = 0;
    FUN_100df99c0("","TransporterWizardModel",0,
                  "Error : Unable to get auth info user name error 0x%X",iVar3);
  }
  else {
    iVar3 = FUN_10099dc60(DAT_102310ad0,param_2,&local_60);
    if (iVar3 < 0) {
      uVar2 = 0;
      FUN_100df99c0("","TransporterWizardModel",0,
                    "Error : Unable to get auth info user domain error 0x%X",iVar3);
    }
    else {
      iVar3 = FUN_10099dc60(DAT_102310af0,param_2,&local_68);
      if (iVar3 < 0) {
        uVar2 = 0;
        FUN_100df99c0("","TransporterWizardModel",0,
                      "Error : Unable to get auth info user password error 0x%X",iVar3);
      }
      else {
        iVar3 = QString::compare(&local_60,&local_50,0);
        if ((iVar3 == 0) &&
           (local_60.field0_0x0 != (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288)) {
          local_40.field0_0x0 = (QTypedArrayData<unsigned_short> *)puVar1;
          QString::operator=(&local_60,&local_40);
          if (*(int *)local_40.field0_0x0 != -1) {
            if (*(int *)local_40.field0_0x0 != 0) {
              LOCK();
              *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
              local_31 = *(int *)local_40.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1009b3b94;
            }
            QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
          }
        }
LAB_1009b3b94:
        uVar2 = FUN_1009b42b0(param_1,&local_58,&local_60,&local_68);
      }
    }
  }
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_31 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1009b3c4d;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_1009b3c4d:
  if (*(int *)local_60.field0_0x0 != -1) {
    if (*(int *)local_60.field0_0x0 != 0) {
      LOCK();
      *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
      local_31 = *(int *)local_60.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1009b3c7d;
    }
    QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
  }
LAB_1009b3c7d:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1009b3cad;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1009b3cad:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1009b3cdd;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1009b3cdd:
  if (lVar5 != 0) {
    (*DAT_102310a50)(lVar5);
  }
  return uVar2;
}


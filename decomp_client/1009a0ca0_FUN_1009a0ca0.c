
undefined8 * FUN_1009a0ca0(undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  QArrayData *pQVar6;
  long lVar7;
  QArrayData *local_78;
  QArrayData *local_70;
  QString local_68;
  QArrayData *local_60;
  int local_58;
  char local_54;
  long local_50;
  long local_48;
  QString local_40;
  long local_38;
  undefined1 local_29;
  
  *param_1 = PTR_shared_null_1021e15e8;
  uVar4 = FUN_1009983a0(param_2);
  cVar2 = FUN_100990a60(uVar4);
  if (cVar2 != '\0') {
    return param_1;
  }
  lVar5 = FUN_1009983c0(param_2);
  local_38 = 0;
  lVar5 = *(long *)(lVar5 + 0x30);
  lVar7 = 0;
  if (lVar5 != 0) {
    local_38 = lVar5;
    (*DAT_102310a48)(lVar5);
    lVar7 = lVar5;
  }
  puVar1 = PTR_shared_null_1021e1288;
  local_40.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  iVar3 = FUN_10099dc60(DAT_102310c80,&local_38,&local_40);
  if (iVar3 < 0) {
    FUN_100df99c0("","TransporterWizardModel",0,
                  "PTA_CHECKED_CALL_ASSERT( %s %s ) occured in %s:%d [%s]","PrlPTA::GetQStr",
                  "(PrlPTAMigration_GetInitialVmDirectory, hMigration, vmDir)",
                  "Pages/WPDestinationPath.cpp",0xc2,"GetDefaultVmPathList");
  }
  uVar4 = FUN_1009983a0(param_2);
  cVar2 = FUN_100990a80(uVar4);
  if (cVar2 == '\0') {
    local_48 = 0;
    uVar4 = FUN_1009983c0(param_2);
    FUN_100991a40(uVar4,&local_48);
    FUN_1009a5830(&local_58,&local_48);
    if ((local_58 < 0) && (0 < DAT_10230ffd0)) {
      FUN_100df99c0("","TransporterWizardModel",1,
                    "Warning : Possibly no dispatcher connection available, error 0x%X");
    }
    local_60 = (QArrayData *)puVar1;
    iVar3 = FUN_100d41070(&local_48,&local_60,100000);
    if ((-1 < iVar3) && (*(int *)(local_60 + 4) != 0)) {
      pQVar6 = local_60 + *(long *)(local_60 + 0x10);
      if (pQVar6 != (QArrayData *)0x0) {
        _strlen((char *)pQVar6);
      }
      QString::fromUtf8_helper((char *)&local_70,(int)pQVar6);
      QString::normalized(&local_68,&local_70,1,0);
      QString::operator=(&local_40,&local_68);
      if (*(int *)local_68.field0_0x0 != -1) {
        if (*(int *)local_68.field0_0x0 != 0) {
          LOCK();
          *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
          local_29 = *(int *)local_68.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_1009a0e95;
        }
        QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
      }
LAB_1009a0e95:
      if (*(int *)local_70 != -1) {
        if (*(int *)local_70 != 0) {
          LOCK();
          *(int *)local_70 = *(int *)local_70 + -1;
          local_29 = *(int *)local_70 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_1009a0ec5;
        }
        QArrayData::deallocate(local_70,2,8);
      }
    }
LAB_1009a0ec5:
    if (*(int *)local_60 != -1) {
      if (*(int *)local_60 != 0) {
        LOCK();
        *(int *)local_60 = *(int *)local_60 + -1;
        local_29 = *(int *)local_60 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1009a0ef5;
      }
      QArrayData::deallocate(local_60,1,8);
    }
LAB_1009a0ef5:
    if (local_54 != '\0') {
      local_58 = FUN_100d444f0(&local_50,100000);
    }
    if (local_50 != 0) {
      _PrlHandle_Free();
    }
    if (local_48 != 0) {
      _PrlHandle_Free();
    }
  }
  FUN_1000341d0(param_1,&local_40);
  if (1 < DAT_10230ffd0) {
    QString::toUtf8();
    FUN_100df99c0("","TransporterWizardModel",2,"Default vm dir is \'%s\'",
                  local_78 + *(long *)(local_78 + 0x10));
    if (*(int *)local_78 != -1) {
      if (*(int *)local_78 != 0) {
        LOCK();
        *(int *)local_78 = *(int *)local_78 + -1;
        local_29 = *(int *)local_78 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1009a0fa6;
      }
      QArrayData::deallocate(local_78,1,8);
    }
  }
LAB_1009a0fa6:
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_29 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1009a0fd6;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_1009a0fd6:
  if (lVar7 != 0) {
    (*DAT_102310a50)(lVar7);
  }
  return param_1;
}


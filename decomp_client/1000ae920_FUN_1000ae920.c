
void FUN_1000ae920(long *param_1,undefined8 param_2)

{
  undefined *puVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  long lVar5;
  undefined8 uVar6;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  CVmConfiguration::getVmIdentification();
  CVmIdentification::getVmUuid();
  lVar5 = FUN_1000a9690(&local_40);
  if ((lVar5 != 0) && (cVar2 = FUN_1000b7b40(lVar5), cVar2 != '\0')) goto LAB_1000aeb7e;
  uVar6 = FUN_100152280();
  lVar5 = FUN_1001548f0(uVar6,&local_40);
  if (lVar5 == 0) {
    QString::toUtf8();
    FUN_100df99c0("SGAC","prl_client_app",0,"Failed to get vm for vmUuid=\"%s\"",
                  local_48 + *(long *)(local_48 + 0x10));
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        local_31 = *(int *)local_48 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1000aeb7e;
      }
      QArrayData::deallocate(local_48,1,8);
    }
    goto LAB_1000aeb7e;
  }
  CVmConfiguration::getVmSettings();
  CVmSettings::getVmTools();
  CVmTools::getVmSharedApplications();
  puVar1 = PTR_shared_null_1021e1288;
  local_50 = (QArrayData *)PTR_shared_null_1021e1288;
  (**(code **)(*param_1 + 0x60))(param_1,&local_40,&local_50);
  local_58 = (QArrayData *)puVar1;
  FUN_1000af090();
  cVar2 = FUN_1000a6380(&local_40);
  if (cVar2 == '\0') {
    bVar3 = 0;
  }
  else {
    FUN_100d752c0();
    cVar2 = FUN_100d75500(param_2,0);
    bVar3 = 1;
    if (cVar2 == '\0') {
      cVar2 = CVmSharedApplications::isWinToMac();
      if (cVar2 == '\0') {
        bVar3 = 0;
      }
      else {
        bVar3 = CVmTools::isIsolatedVm();
        bVar3 = bVar3 ^ 1;
      }
    }
  }
  cVar2 = CVmTools::isIsolatedVm();
  if (cVar2 == '\0' && bVar3 == 1) {
    cVar2 = CVmSharedApplications::isShowWindowsAppInDock();
    if (cVar2 == '\0') {
      bVar4 = 0;
    }
    else {
      bVar4 = FUN_10018c770(lVar5);
      bVar4 = bVar4 ^ 1;
    }
  }
  else {
    bVar4 = 0;
  }
  if (bVar3 == 0) {
    FUN_1000b7c90(&local_40,&local_50);
    FUN_100d9bbb0(&local_58);
  }
  else {
    FUN_1000b7bd0(&local_40,&local_50,1);
    FUN_1000b7cb0(&local_40,&local_58);
  }
  FUN_1000b7b90(&local_40,bVar4,0);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000aeb4e;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1000aeb4e:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000aeb7e;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1000aeb7e:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_40,2,8);
  }
  return;
}


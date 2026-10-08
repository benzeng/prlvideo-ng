
void FUN_100056930(long param_1)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  char cVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  char cVar9;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  int iVar10;
  QArrayData *local_40;
  
  if ((*(char *)(param_1 + 0x4f) != '\0') && (*(char *)(param_1 + 0x52) == '\0')) {
    return;
  }
  QMutex::lock();
  lVar8 = DAT_1023108a8;
  if (DAT_1023108a8 == 0) {
    QMutex::unlock();
    FUN_100df99c0("SGAC","prl_client_app",0,"Failed to get CSharedAppsDsp instance");
    return;
  }
  DAT_1023108b0 = DAT_1023108b0 + 1;
  QMutex::unlock();
  uVar6 = FUN_100152280();
  lVar7 = FUN_1001548f0(uVar6);
  if (lVar7 == 0) {
    QString::toUtf8();
    FUN_100df99c0("SGAC","prl_client_app",0,"Failed to get vm for vmUuid=\"%s\"",
                  local_40 + *(long *)(local_40 + 0x10));
    uVar5 = 8;
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        UNLOCK();
        if (*(int *)local_40 != 0) goto LAB_100056a4e;
      }
      QArrayData::deallocate(local_40,1,8);
    }
  }
  else {
    uVar5 = FUN_10018f860(lVar7);
  }
LAB_100056a4e:
  lVar7 = param_1 + 8;
  FUN_1000af8c0(lVar8,lVar7,uVar5);
  if ((((*(char *)(param_1 + 0x4e) == '\0') || (*(char *)(param_1 + 0x4f) != '\0')) ||
      (*(char *)(param_1 + 0x50) != '\0')) || (*(char *)(param_1 + 0x51) != '\0')) {
    iVar10 = *(int *)(param_1 + 0x48);
    if ((iVar10 == 0) &&
       (((*(char *)(param_1 + 0x4f) != '\0' || (*(char *)(param_1 + 0x50) != '\0')) ||
        (iVar10 = 0x3b15, *(char *)(param_1 + 0x51) != '\0')))) {
      iVar10 = 0x3b30;
    }
    if (2 < DAT_10230ffd0) {
      FUN_100df99c0("SGAC","prl_client_app",3,"Add Applications Folder to Dock, msgId=%#x",iVar10);
    }
    FUN_1000b13a0(lVar8,param_1 + 0x28,param_1 + 0x30,iVar10);
    if (*(char *)(param_1 + 0x50) == '\0') {
      bVar1 = 0;
    }
    else {
      bVar1 = FUN_100056d00(param_1 + 0x18);
    }
    if (*(char *)(param_1 + 0x51) == '\0') {
      bVar2 = 0;
    }
    else {
      bVar2 = FUN_100056d00(param_1 + 0x20);
    }
    if (*(char *)(param_1 + 0x4f) == '\0') {
      cVar4 = FUN_100057810(lVar7,param_1 + 0x10);
      uVar6 = extraout_RDX_00;
      cVar3 = cVar4;
    }
    else {
      cVar3 = FUN_100057220(lVar7);
      cVar4 = '\0';
      uVar6 = extraout_RDX;
    }
    cVar9 = '\x01';
    if ((bVar1 | bVar2) == 0) {
      cVar9 = cVar3;
    }
    FUN_1000b14d0(lVar8,cVar9,uVar6,cVar9);
    if (cVar4 != '\0') {
      if (1 < DAT_10230ffd0) {
        FUN_100df99c0("SGAC","prl_client_app",2,"Applications Folder was added to Dock");
      }
      FUN_1000b16c0(lVar8,param_1 + 0x28,1);
    }
    if ((1 < DAT_10230ffd0) && ((bVar1 | bVar2) == 1)) {
      FUN_100df99c0("SGAC","prl_client_app",2,"Compat Applications Folder was removed from Dock");
    }
  }
  else {
    if (2 < DAT_10230ffd0) {
      FUN_100df99c0("SGAC","prl_client_app",3,
                    "Flag \"%s\" is set, will not add folder to Dock once again",
                    "Apps folder added to Dock");
    }
    if (*(char *)(param_1 + 0x4d) != '\0') {
      if (2 < DAT_10230ffd0) {
        FUN_100df99c0("SGAC","prl_client_app",3,
                      "Turn off Applications Folder in Dock, looks like it was removed manually");
      }
      lVar8 = _PrlVm_StoreValueByKey
                        (*(undefined8 *)(param_1 + 0x40),"{9CA310E0-8C1A-4CBB-8538-991050CE3B85}",
                         "0",0);
      if (lVar8 == 0) {
        FUN_100df99c0("SGAC","prl_client_app",0,
                      "Failed to turn off Applications Folder in Dock, PrlVm_StoreValueByKey() err, key=\"%s\""
                      ,"{9CA310E0-8C1A-4CBB-8538-991050CE3B85}");
      }
      else {
        _PrlHandle_Free(lVar8);
      }
    }
  }
  FUN_100055290(&DAT_102310898);
  return;
}


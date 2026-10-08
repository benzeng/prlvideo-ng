
bool FUN_1000a8370(long param_1,undefined8 param_2,char param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  bool bVar5;
  char *pcVar6;
  QArrayData *local_38;
  
  if (1 < DAT_10230ffd0) {
    QString::toUtf8();
    pcVar6 = "false";
    if (param_3 != '\0') {
      pcVar6 = "true";
    }
    FUN_100df99c0("SGAD","prl_client_app",2,"vmStartByUuid(vmUuid=\"%s\", silent=%s)",
                  local_38 + *(long *)(local_38 + 0x10),pcVar6);
    if (*(int *)local_38 != -1) {
      if (*(int *)local_38 != 0) {
        LOCK();
        *(int *)local_38 = *(int *)local_38 + -1;
        UNLOCK();
        if (*(int *)local_38 != 0) goto LAB_1000a840e;
      }
      QArrayData::deallocate(local_38,1,8);
    }
  }
LAB_1000a840e:
  if (*(char *)(param_1 + 0x28) != '\0') {
    if (2 < DAT_10230ffd0) {
      FUN_100df99c0("SGAD","prl_client_app",3,"Was autoplay, vmStartByUuid return false");
    }
    *(undefined1 *)(param_1 + 0x28) = 0;
    return false;
  }
  uVar3 = FUN_100152280();
  lVar4 = FUN_1001548f0(uVar3,param_2);
  if (lVar4 == 0) {
    if (DAT_10230ffd0 < 2) {
      return false;
    }
    pcVar6 = "vmStartByUuid (SERVER_MNG->getVmByUuid) failed";
    bVar5 = false;
  }
  else {
    iVar2 = FUN_10018a9d0(lVar4);
    if (iVar2 != 0x3000000f) {
      iVar2 = FUN_10018a9d0(lVar4);
      if (iVar2 == 0x30000004) {
        if (1 < DAT_10230ffd0) {
          FUN_100df99c0("SGAD","prl_client_app",2,"VM is already running");
        }
        uVar3 = FUN_10018c280(lVar4);
        cVar1 = FUN_10031b620(uVar3,0,0);
        if (cVar1 != '\0') {
          return true;
        }
      }
      uVar3 = FUN_10018c280(lVar4);
      lVar4 = FUN_10031a440(uVar3,1);
      return lVar4 != 0;
    }
    bVar5 = true;
    if (DAT_10230ffd0 < 2) {
      return true;
    }
    pcVar6 = "VM in deleting state, vmStartByUuid return true";
  }
  FUN_100df99c0("SGAD","prl_client_app",2,pcVar6);
  return bVar5;
}


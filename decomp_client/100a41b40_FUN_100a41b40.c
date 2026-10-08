
void FUN_100a41b40(long param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *local_48;
  undefined8 *puStack_40;
  undefined8 *local_38;
  
  local_48 = (undefined8 *)0x0;
  puStack_40 = (undefined8 *)0x0;
  local_38 = (undefined8 *)0x0;
  puVar3 = operator_new(0x18);
  puStack_40 = puVar3 + 3;
  puVar3[2] = 0;
  puVar3[1] = 0;
  *puVar3 = 0;
  local_48 = puVar3;
  local_38 = puStack_40;
  CVmConfiguration::getVmSettings();
  lVar4 = CVmSettings::getVmTools();
  if (lVar4 != 0) {
    CVmTools::getVmSharedApplications();
    lVar4 = CVmSharedApplications::getWebApplications();
    if (lVar4 != 0) {
      lVar4 = FUN_100a39010();
      if (lVar4 != 0) {
        cVar1 = CVmTools::isIsolatedVm();
        if (cVar1 == '\0') {
          uVar2 = WebApplications::getWebBrowser();
          *(undefined4 *)local_48 = uVar2;
          uVar2 = WebApplications::getFtpClient();
          *(undefined4 *)((long)local_48 + 4) = uVar2;
          uVar2 = WebApplications::getEmailClient();
          *(undefined4 *)(local_48 + 1) = uVar2;
          uVar2 = WebApplications::getRemoteAccess();
          *(undefined4 *)((long)local_48 + 0xc) = uVar2;
          uVar2 = WebApplications::getRss();
          *(undefined4 *)(local_48 + 2) = uVar2;
          uVar2 = WebApplications::getNewsgroups();
          *(undefined4 *)((long)local_48 + 0x14) = uVar2;
        }
        else {
          puVar3[2] = 0;
          puVar3[1] = 0;
          *puVar3 = 0;
        }
        uVar5 = FUN_100a39010();
        FUN_100a3e550(uVar5,param_1 + 0x10,&local_48);
        puVar3 = local_48;
      }
    }
  }
  if (puVar3 != (undefined8 *)0x0) {
    if (puStack_40 != puVar3) {
      puStack_40 = (undefined8 *)
                   ((~((long)puStack_40 + (-4 - (long)puVar3)) & 0xfffffffffffffffcU) +
                   (long)puStack_40);
    }
    operator_delete(puVar3);
  }
  return;
}


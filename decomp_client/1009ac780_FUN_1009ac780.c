
void FUN_1009ac780(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long local_40;
  long local_38;
  
  lVar2 = FUN_1009983c0();
  lVar2 = *(long *)(lVar2 + 0x28);
  lVar3 = 0;
  if (lVar2 != 0) {
    (*DAT_102310a48)(lVar2);
    lVar3 = lVar2;
  }
  local_38 = 0;
  iVar1 = (*DAT_1023110d0)(lVar3,0,&local_38);
  if (iVar1 < 0) {
    FUN_100df99c0("","TransporterWizardModel",0,
                  "Error : Unable to get \'whoishere\' UDP plugin handle error 0x%X",iVar1);
  }
  if (*(char *)(param_1 + 0x62) == '\0') {
    FUN_1009b1030("PTA_UDP_PACKET_TYPE",0,0);
    FUN_1009b1030("const PTA_UDP_PACKET_TYPE",0,0);
    FUN_1009b1100("PtaHandleWrap",0,0);
    iVar1 = (*DAT_1023110e0)(local_38,FUN_1009aca00,param_1);
    if (iVar1 < 0) {
      FUN_100df99c0("","TransporterWizardModel",0,
                    "Error : Unable to reg event handler for \'whoishere\' UDP plugin error 0x%X",
                    iVar1);
    }
    local_40 = 0;
    iVar1 = (*DAT_1023110d0)(lVar3,1,&local_40);
    if (iVar1 < 0) {
      FUN_100df99c0("","TransporterWizardModel",0,
                    "Error : Unable to get \'passcode\' UDP plugin handle error 0x%X",iVar1);
    }
    iVar1 = (*DAT_1023110e0)(local_40,FUN_1009aca00,param_1);
    if (iVar1 < 0) {
      FUN_100df99c0("","TransporterWizardModel",0,
                    "Error : Unable to reg event handler for \'passcode\' UDP plugin error 0x%X",
                    iVar1);
    }
    if (local_40 != 0) {
      (*DAT_102310a50)();
    }
    local_40 = 0;
  }
  *(undefined1 *)(param_1 + 0x62) = 1;
  iVar1 = (*DAT_1023110f0)(local_38);
  if (iVar1 < 0) {
    FUN_100df99c0("","TransporterWizardModel",0,
                  "Error : Unable lookup agents using \'whoishere\' UDP plugin error 0x%X",iVar1);
  }
  FUN_1009ad2d0(param_1,1);
  if (local_38 != 0) {
    (*DAT_102310a50)();
  }
  local_38 = 0;
  if (lVar3 != 0) {
    (*DAT_102310a50)(lVar3);
  }
  return;
}


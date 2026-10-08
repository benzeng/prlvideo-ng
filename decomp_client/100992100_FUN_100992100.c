
undefined1 FUN_100992100(long param_1,uint *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  long local_30;
  long local_28;
  int local_20;
  uint local_1c;
  
  cVar2 = FUN_100990a70(*(undefined8 *)(param_1 + 0x10));
  if (cVar2 != '\0') {
    iVar3 = (*DAT_102310bf0)(*(undefined8 *)(param_1 + 0x30),&local_20);
    if (iVar3 < 0) {
      FUN_100df99c0("","TransporterWizardModel",0,"Error: Unable to get migration type. error 0x%X")
      ;
    }
    else if (local_20 == 3) {
      iVar3 = (*DAT_102310d78)(*(undefined8 *)(param_1 + 0x30),param_2);
      if (-1 < iVar3) {
        return 1;
      }
      FUN_100df99c0("","TransporterWizardModel",0,
                    "Error: Failed to get the vm guest operating system type. error 0x%X");
      return 0;
    }
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    local_28 = 0;
    iVar3 = (*DAT_102310ea8)(*(long *)(param_1 + 0x28),&local_28);
    if (iVar3 < 0) {
      bVar1 = true;
      FUN_100df99c0("","TransporterWizardModel",0,
                    "Error: Failed to get the vm guest operating system type. error 0x%X",iVar3);
    }
    else {
      local_30 = 0;
      iVar3 = (*DAT_102310eb8)(local_28,&local_30);
      if (iVar3 < 0) {
        bVar1 = true;
        FUN_100df99c0("","TransporterWizardModel",0,
                      "Error: Failed to get the vm guest operating system type. error 0x%X",iVar3);
      }
      else {
        local_1c = 0xffff;
        iVar3 = (*DAT_102310fc0)(local_30,&local_1c);
        if (iVar3 < 0) {
          FUN_100df99c0("","TransporterWizardModel",0,
                        "PTA_CHECKED_CALL_ASSERT( %s %s ) occured in %s:%d [%s]","pFunc",
                        "(hHandle, &val)","../Includes/AgentAPIWrap/PTACallUtils.h",0x61,"GetVal");
        }
        *param_2 = local_1c;
        bVar1 = false;
      }
      if (local_30 != 0) {
        (*DAT_102310a50)();
      }
      local_30 = 0;
    }
    if (local_28 != 0) {
      (*DAT_102310a50)();
    }
    if (!bVar1) {
      return 1;
    }
    return 0;
  }
  return 0;
}


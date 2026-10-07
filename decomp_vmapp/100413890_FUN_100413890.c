
undefined1 FUN_100413890(long param_1,long param_2)

{
  char cVar1;
  undefined1 uVar2;
  
  if (2 < DAT_1011b55f8) {
    FUN_1008e3970("[FCWatcher]","ParentalControlWatcher",3,
                  "[VMNET] Getting config: cfg=0x%p user=0x%p",param_1,param_2);
  }
  if (param_2 == 0) {
    if (2 < DAT_1011b55f8) {
      FUN_1008e3970("[FCWatcher]","ParentalControlWatcher",3,"[VMNET] tracking user is empty=%d",
                    *(int *)(DAT_1011cc738 + 4) == 0);
    }
    if (*(int *)(DAT_1011cc738 + 4) == 0) {
      uVar2 = 0;
    }
    else {
      if (2 < DAT_1011b55f8) {
        FUN_1008e3970("[FCWatcher]","ParentalControlWatcher",3,"[VMNET] enabledWebRestriction=%d",
                      DAT_1011cc740);
        if (2 < DAT_1011b55f8) {
          CVmConfiguration::getVmSecurity();
          uVar2 = CVmSecurity::isParentalControlEnabled();
          FUN_1008e3970("[FCWatcher]","ParentalControlWatcher",3,"[VMNET] setting in pvs=%d",uVar2);
        }
      }
      uVar2 = DAT_1011cc740 != '\0';
      if ((param_1 != 0) && (DAT_1011cc740 != '\0')) {
        CVmConfiguration::getVmSecurity();
        uVar2 = CVmSecurity::isParentalControlEnabled();
      }
    }
  }
  else {
    cVar1 = FUN_100413650(param_2);
    if ((param_1 != 0) && (cVar1 != '\0')) {
      CVmConfiguration::getVmSecurity();
      cVar1 = CVmSecurity::isParentalControlEnabled();
    }
    uVar2 = cVar1 != '\0';
  }
  return uVar2;
}


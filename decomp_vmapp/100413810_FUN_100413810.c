
undefined1 FUN_100413810(long param_1,long param_2)

{
  char cVar1;
  undefined1 uVar2;
  
  if (param_2 == 0) {
    if (*(int *)(DAT_1011cc738 + 4) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = DAT_1011cc741 != '\0';
      if ((param_1 != 0) && (DAT_1011cc741 != '\0')) {
        CVmConfiguration::getVmSecurity();
        uVar2 = CVmSecurity::isParentalControlEnabled();
      }
    }
  }
  else {
    cVar1 = FUN_100413740(param_2);
    if ((param_1 != 0) && (cVar1 != '\0')) {
      CVmConfiguration::getVmSecurity();
      cVar1 = CVmSecurity::isParentalControlEnabled();
    }
    uVar2 = cVar1 != '\0';
  }
  return uVar2;
}


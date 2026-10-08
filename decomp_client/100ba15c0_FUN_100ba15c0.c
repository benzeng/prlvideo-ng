
undefined8 FUN_100ba15c0(char *param_1)

{
  int iVar1;
  undefined **ppuVar2;
  char *pcVar3;
  
  if (PTR_s_disable_reporting_1022cff60 != (undefined *)0x0) {
    ppuVar2 = &PTR_s_update_password_1022cff68;
    pcVar3 = PTR_s_disable_reporting_1022cff60;
    do {
      iVar1 = _strcasecmp(param_1,pcVar3);
      if (iVar1 == 0) {
        return 1;
      }
      pcVar3 = *ppuVar2;
      ppuVar2 = ppuVar2 + 1;
    } while (pcVar3 != (char *)0x0);
  }
  return 0;
}


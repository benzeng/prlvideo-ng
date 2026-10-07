
undefined8 FUN_1007227e0(char *param_1)

{
  int iVar1;
  undefined **ppuVar2;
  char *pcVar3;
  
  if (PTR_s_disable_reporting_10116e590 != (undefined *)0x0) {
    ppuVar2 = &PTR_s_update_password_10116e598;
    pcVar3 = PTR_s_disable_reporting_10116e590;
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


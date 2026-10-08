
undefined8 FUN_100b70790(undefined8 param_1,char *param_2,char *param_3)

{
  undefined8 *****pppppuVar1;
  uint uVar2;
  int iVar3;
  size_t sVar4;
  undefined8 uVar5;
  char *pcVar6;
  undefined8 *****local_40;
  undefined8 *****local_38;
  char *local_30;
  
  local_30 = (char *)0x0;
  FUN_100b9d6c0();
  local_40 = &local_40;
  local_38 = local_40;
  if (param_3 == (char *)0x0) {
    if (*param_2 == '\0') {
      if (DAT_10230ffd0 < 3) {
        return 0xffffffff;
      }
      FUN_100df99c0("","License",3,"No file provided at all ... ");
      return 0xffffffff;
    }
    if (2 < DAT_10230ffd0) {
      FUN_100df99c0("","License",3,"Processing file \"%s\"...",param_2);
    }
    uVar2 = FUN_100b91370(param_2,&local_30);
    sVar4 = (size_t)uVar2;
    pcVar6 = local_30;
    if ((int)uVar2 < 0) {
      if (local_30 != (char *)0x0) {
        _free(local_30);
      }
      if (DAT_10230ffd0 < 3) {
        return 0xffffffff;
      }
      FUN_100df99c0("","License",3,"Wrong lic_size = %d",uVar2);
      return 0xffffffff;
    }
  }
  else {
    local_30 = param_3;
    sVar4 = _strlen(param_3);
    pcVar6 = param_3;
  }
  iVar3 = FUN_100b9b6a0(&local_40,pcVar6,sVar4 & 0xffffffff);
  pppppuVar1 = local_40;
  if (iVar3 != 0) {
    FUN_100b98100(&local_40);
    uVar5 = FUN_100b9d570();
    FUN_100df99c0("","License",0,"Can\'t install license: %s",uVar5);
    uVar5 = 0xffffffff;
    if (iVar3 == 1) {
      uVar5 = 1;
    }
    if (iVar3 != -0xc) {
      return uVar5;
    }
    return 0xfffffff4;
  }
  iVar3 = _strncmp((char *)(local_40 + 4),"VZAKEY",0x50);
  if (iVar3 == 0) {
    uVar5 = 0xffffffff;
    if (DAT_10230ffd0 < 3) goto LAB_100b709a9;
    pcVar6 = "Can\'t load activation code.";
  }
  else {
    if (*(int *)(pppppuVar1 + 0x3b) < 5) {
      uVar5 = 0;
      FUN_100df99c0("","License",0,
                    "License was installed, but can\'t be used at this moment,because it has status %s"
                    ,pppppuVar1[0x3c]);
      if (*(char *)(pppppuVar1 + 0x3d) != '\0') {
        uVar5 = 0;
        FUN_100df99c0("","License",0," (%s)",pppppuVar1 + 0x3d);
      }
      goto LAB_100b709a9;
    }
    uVar5 = 0;
    if (DAT_10230ffd0 < 3) goto LAB_100b709a9;
    pcVar6 = "License was installed successfully.";
    uVar5 = 0;
  }
  FUN_100df99c0("","License",3,pcVar6);
LAB_100b709a9:
  FUN_100b98100(&local_40);
  if ((local_30 != (char *)0x0) && (local_30 != param_3)) {
    _free(local_30);
  }
  return uVar5;
}


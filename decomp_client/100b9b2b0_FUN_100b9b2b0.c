
int FUN_100b9b2b0(undefined8 ******param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined8 ******ppppppuVar3;
  undefined8 ****local_50;
  undefined8 ****local_48;
  undefined8 *****local_40;
  undefined8 *****local_38;
  
  local_40 = &local_40;
  local_38 = local_40;
  if (7 < param_2) {
    iVar1 = FUN_100b9d470(0xfffffffd,0);
    return iVar1;
  }
  ppppppuVar3 = (undefined8 ******)local_40;
  if (param_1 != (undefined8 ******)0x0) {
    param_1[1] = param_1;
    *param_1 = param_1;
    ppppppuVar3 = param_1;
  }
  iVar1 = FUN_100bc1030(DAT_1022cf508);
  if (iVar1 != 0) {
    return iVar1;
  }
  if (param_2 != 0) {
    iVar1 = FUN_100b9d230(param_2,param_3,&local_50);
    if (iVar1 == 0) {
      local_50[1] = ppppppuVar3[1];
      *local_50 = ppppppuVar3;
      *ppppppuVar3[1] = local_50;
      ppppppuVar3[1] = (undefined8 *****)local_50;
      iVar1 = 0;
    }
    goto LAB_100b9b531;
  }
  iVar1 = FUN_100b9d230(1,param_3,&local_48);
  if (iVar1 == -7) {
LAB_100b9b39e:
    iVar1 = FUN_100b9d230(2,param_3,&local_48);
    if (iVar1 != -7) {
      if (iVar1 != 0) goto LAB_100b9b523;
      local_48[1] = ppppppuVar3[1];
      *local_48 = ppppppuVar3;
      *ppppppuVar3[1] = local_48;
      ppppppuVar3[1] = (undefined8 *****)local_48;
    }
    iVar1 = FUN_100b9d230(3,param_3,&local_48);
    if (iVar1 != -7) {
      if (iVar1 != 0) goto LAB_100b9b523;
      local_48[1] = ppppppuVar3[1];
      *local_48 = ppppppuVar3;
      *ppppppuVar3[1] = local_48;
      ppppppuVar3[1] = (undefined8 *****)local_48;
    }
    iVar1 = FUN_100b9d230(4,param_3,&local_48);
    if (iVar1 != -7) {
      if (iVar1 != 0) goto LAB_100b9b523;
      local_48[1] = ppppppuVar3[1];
      *local_48 = ppppppuVar3;
      *ppppppuVar3[1] = local_48;
      ppppppuVar3[1] = (undefined8 *****)local_48;
    }
    iVar1 = FUN_100b9d230(5,param_3,&local_48);
    if (iVar1 != -7) {
      if (iVar1 != 0) goto LAB_100b9b523;
      local_48[1] = ppppppuVar3[1];
      *local_48 = ppppppuVar3;
      *ppppppuVar3[1] = local_48;
      ppppppuVar3[1] = (undefined8 *****)local_48;
    }
    iVar1 = FUN_100b9d230(6,param_3,&local_48);
    if (iVar1 != -7) {
      if (iVar1 != 0) goto LAB_100b9b523;
      local_48[1] = ppppppuVar3[1];
      *local_48 = ppppppuVar3;
      *ppppppuVar3[1] = local_48;
      ppppppuVar3[1] = (undefined8 *****)local_48;
    }
    iVar2 = FUN_100b9d230(7,param_3,&local_48);
    iVar1 = 0;
    if (iVar2 == -7) goto LAB_100b9b531;
    iVar1 = iVar2;
    if (iVar2 == 0) {
      local_48[1] = ppppppuVar3[1];
      *local_48 = ppppppuVar3;
      *ppppppuVar3[1] = local_48;
      ppppppuVar3[1] = (undefined8 *****)local_48;
      iVar1 = 0;
      goto LAB_100b9b531;
    }
  }
  else if (iVar1 == 0) {
    local_48[1] = ppppppuVar3[1];
    *local_48 = ppppppuVar3;
    *ppppppuVar3[1] = local_48;
    ppppppuVar3[1] = (undefined8 *****)local_48;
    goto LAB_100b9b39e;
  }
LAB_100b9b523:
  FUN_100b98100(ppppppuVar3);
LAB_100b9b531:
  FUN_100bc10f0(DAT_1022cf508);
  if (ppppppuVar3 == &local_40) {
    FUN_100b98100(&local_40);
  }
  return iVar1;
}



uint FUN_100b92430(char *param_1,undefined8 *param_2)

{
  undefined8 **ppuVar1;
  int iVar2;
  size_t sVar3;
  uint uVar4;
  undefined8 **local_30;
  undefined8 **local_28;
  
  local_30 = &local_30;
  uVar4 = 0;
  if (param_1 != (char *)0x0) {
    local_28 = local_30;
    sVar3 = _strlen(param_1);
    uVar4 = 0;
    if ((int)sVar3 != 0) {
      iVar2 = FUN_100b9ad70(&local_30,param_1,sVar3 & 0xffffffff);
      if (iVar2 == 0) {
        uVar4 = *(uint *)((long)local_30 + 0x1d4);
        if (param_2 != (undefined8 *)0x0) {
          param_2[4] = local_30[0x51];
          param_2[3] = local_30[0x50];
          param_2[2] = local_30[0x4f];
          ppuVar1 = (undefined8 **)local_30[0x4d];
          param_2[1] = local_30[0x4e];
          *param_2 = ppuVar1;
        }
        uVar4 = uVar4 >> 4 & 1;
        FUN_100b98100(&local_30);
      }
    }
  }
  return uVar4;
}


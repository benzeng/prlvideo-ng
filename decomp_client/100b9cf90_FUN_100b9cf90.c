
int FUN_100b9cf90(long param_1,int param_2,undefined8 *param_3)

{
  undefined8 **ppuVar1;
  undefined8 **ppuVar2;
  int iVar3;
  undefined8 **local_30;
  undefined8 **local_28;
  
  local_30 = &local_30;
  local_28 = local_30;
  if ((param_1 == 0) || (param_2 == 0)) {
    iVar3 = FUN_100b9d470(0xfffffffd,0);
  }
  else {
    iVar3 = FUN_100b9ad80(&local_30,param_1,param_2);
    ppuVar2 = local_30;
    if (iVar3 == 0) {
      iVar3 = 0;
      if ((*(byte *)((long)local_30 + 0x1d4) & 0x10) == 0) {
        iVar3 = FUN_100b9d470(0xfffffff4,0);
      }
      if (param_3 != (undefined8 *)0x0) {
        param_3[4] = ppuVar2[0x51];
        param_3[3] = ppuVar2[0x50];
        param_3[2] = ppuVar2[0x4f];
        ppuVar1 = (undefined8 **)ppuVar2[0x4d];
        param_3[1] = ppuVar2[0x4e];
        *param_3 = ppuVar1;
      }
      FUN_100b98100(&local_30);
    }
  }
  return iVar3;
}


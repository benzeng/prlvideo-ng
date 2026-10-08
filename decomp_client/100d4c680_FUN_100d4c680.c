
int FUN_100d4c680(long param_1,uint param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  
  if ((param_3 != 0) && (param_3 <= param_2)) {
    param_2 = param_3;
  }
  if ((param_2 & 3) != 0) {
    if (1 < DAT_10230ffd0) {
      FUN_100df99c0("","PrlSdkUtils",2,"The memory size %u is not divisible by %u",param_2,4);
    }
    iVar2 = -(param_2 & 3);
    uVar1 = iVar2 + 4 + param_2;
    param_2 = iVar2 + param_2;
    if (uVar1 <= param_3) {
      param_2 = uVar1;
    }
    if (param_3 == 0) {
      param_2 = uVar1;
    }
    if (1 < DAT_10230ffd0) {
      FUN_100df99c0("","PrlSdkUtils",2,"The memory size is corrected to %u",param_2);
    }
  }
  iVar2 = _PrlVmCfg_SetRamSize(*(undefined8 *)(param_1 + 8),param_2);
  if (iVar2 < 0) {
    FUN_100df99c0("","PrlSdkUtils",0,"Failed to set the virtual machine memory size, 0x%x",iVar2);
  }
  return iVar2;
}


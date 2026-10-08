
int FUN_100d4aa40(long param_1)

{
  int iVar1;
  
  iVar1 = _PrlVmCfg_SetCpuCount(*(undefined8 *)(param_1 + 8));
  if (iVar1 < 0) {
    FUN_100df99c0("","PrlSdkUtils",0,"TR00055.43:\t0x%x",iVar1);
  }
  return iVar1;
}


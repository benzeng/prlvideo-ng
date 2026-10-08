
int FUN_100d4a9f0(long param_1,undefined1 param_2)

{
  int iVar1;
  
  iVar1 = _PrlVmCfg_SetCpuMode(*(undefined8 *)(param_1 + 8),param_2);
  if (iVar1 < 0) {
    FUN_100df99c0("","PrlSdkUtils",0,"TR00055.42:\t0x%x",iVar1);
  }
  return iVar1;
}


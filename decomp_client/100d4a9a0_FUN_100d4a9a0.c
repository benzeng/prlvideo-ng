
int FUN_100d4a9a0(long param_1)

{
  int iVar1;
  
  iVar1 = _PrlVmCfg_SetDisableAPICSign(*(undefined8 *)(param_1 + 8),1);
  if (iVar1 < 0) {
    FUN_100df99c0("","PrlSdkUtils",0,"TR00055.109:\t0x%x",iVar1);
  }
  return iVar1;
}


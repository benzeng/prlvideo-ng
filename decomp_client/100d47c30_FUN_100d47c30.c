
int FUN_100d47c30(long param_1)

{
  int iVar1;
  
  iVar1 = _PrlVmCfg_SetOsVersion(*(undefined8 *)(param_1 + 8));
  if (iVar1 < 0) {
    FUN_100df99c0("","PrlSdkUtils",0,"Failed to set the guest OS version, 0x%x",iVar1);
  }
  return iVar1;
}


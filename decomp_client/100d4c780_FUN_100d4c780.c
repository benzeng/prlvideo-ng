
int FUN_100d4c780(long param_1,undefined1 param_2)

{
  int iVar1;
  
  iVar1 = _PrlVmCfg_SetHostSharingEnabled(*(undefined8 *)(param_1 + 8),param_2);
  if (iVar1 < 0) {
    FUN_100df99c0("","PrlSdkUtils",0,"TR00055.116:\t0x%x",iVar1);
  }
  iVar1 = _PrlVmCfg_SetUserDefinedSharedFoldersEnabled(*(undefined8 *)(param_1 + 8),param_2);
  if (iVar1 < 0) {
    FUN_100df99c0("","PrlSdkUtils",0,"TR00055.116:\t0x%x",iVar1);
  }
  return iVar1;
}


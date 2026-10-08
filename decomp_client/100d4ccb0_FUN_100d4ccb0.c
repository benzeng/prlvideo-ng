
int FUN_100d4ccb0(long param_1,undefined1 param_2)

{
  int iVar1;
  
  iVar1 = _PrlVmCfg_SetUseMusic(*(undefined8 *)(param_1 + 8),param_2);
  if (iVar1 < 0) {
    FUN_100df99c0("","PrlSdkUtils",0,"Failed to set the used shared music, 0x%x",iVar1);
  }
  return iVar1;
}


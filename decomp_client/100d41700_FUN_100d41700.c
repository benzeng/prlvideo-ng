
int FUN_100d41700(undefined8 *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = _PrlSrvCfg_GetCpuCount(*param_1);
  iVar2 = 0;
  if (iVar1 < 0) {
    FUN_100df99c0("","PrlSdkUtils",0,"Failed to get the host CPU count, 0x%x",iVar1);
    iVar2 = iVar1;
  }
  return iVar2;
}


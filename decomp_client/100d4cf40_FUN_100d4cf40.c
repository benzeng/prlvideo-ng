
int FUN_100d4cf40(long param_1)

{
  int iVar1;
  undefined8 in_RAX;
  undefined8 local_18;
  
  local_18 = in_RAX;
  iVar1 = _PrlVmCfg_GetParallelPortsCount(*(undefined8 *)(param_1 + 8));
  if (iVar1 < 0) {
    _PrlDbg_PrlResultToString(iVar1,&local_18);
    FUN_100df99c0("","PrlSdkUtils",0,"Error getting parallel ports count 0x%x: \'%s\'",iVar1,
                  local_18);
  }
  return iVar1;
}


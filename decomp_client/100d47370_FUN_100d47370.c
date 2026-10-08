
int FUN_100d47370(long param_1,undefined8 param_2)

{
  int iVar1;
  int local_24;
  undefined8 local_20;
  
  local_24 = 0;
  iVar1 = _PrlVmCfg_IsEfiEnabled(*(undefined8 *)(param_1 + 8),&local_24);
  if (iVar1 < 0) {
    _PrlDbg_PrlResultToString(iVar1,&local_20);
    FUN_100df99c0("","PrlSdkUtils",0,"Error : Failed to get efi enabled value error 0x%X \'%s\'",
                  iVar1,local_20);
  }
  else {
    *(bool *)param_2 = local_24 != 0;
    iVar1 = 0;
  }
  return iVar1;
}



int FUN_100d473f0(long param_1,char param_2)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined8 local_28;
  
  iVar1 = _PrlVmCfg_SetEfiEnabled(*(undefined8 *)(param_1 + 8),param_2);
  iVar2 = 0;
  if (iVar1 < 0) {
    pcVar3 = "OFF";
    if (param_2 != '\0') {
      pcVar3 = "ON";
    }
    _PrlDbg_PrlResultToString(iVar1,&local_28);
    FUN_100df99c0("","PrlSdkUtils",0,"Error : Failed to set efi %s. error 0x%X \'%s\'",pcVar3,iVar1,
                  local_28);
    iVar2 = iVar1;
  }
  return iVar2;
}


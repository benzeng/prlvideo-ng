
int FUN_100d4cd40(long param_1,char param_2)

{
  int iVar1;
  char *pcVar2;
  
  if (1 < DAT_10230ffd0) {
    pcVar2 = "OFF";
    if (param_2 != '\0') {
      pcVar2 = "ON";
    }
    FUN_100df99c0("","PrlSdkUtils",2,"Set integrated mode %s",pcVar2);
  }
  iVar1 = _PrlVmCfg_SetSharedProfileEnabled(*(undefined8 *)(param_1 + 8),param_2);
  if (iVar1 < 0) {
    FUN_100df99c0("","PrlSdkUtils",0,"Failed to set the shared profiles enabled, 0x%x",iVar1);
  }
  return iVar1;
}


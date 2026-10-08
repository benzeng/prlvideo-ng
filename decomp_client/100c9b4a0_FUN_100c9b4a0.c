
bool FUN_100c9b4a0(undefined8 param_1,int param_2,undefined8 param_3,ulong param_4)

{
  int iVar1;
  char *pcVar2;
  bool bVar3;
  
  bVar3 = false;
  if (param_2 == 1) {
    if (param_4 == 1) {
      iVar1 = FUN_100c9b900(param_1,param_3,1);
    }
    else {
      if (param_4 == 3) {
        pcVar2 = (char *)FUN_100c91f50();
        pcVar2 = _getenv(pcVar2);
        if (pcVar2 == (char *)0x0) {
          pcVar2 = (char *)FUN_100c91f30();
        }
        iVar1 = FUN_100c9b900(param_1,pcVar2,1);
        if (iVar1 != 0) {
          return true;
        }
        FUN_100c62ee0(0xb,0x65,0x68,"by_file.c",0x6f);
        return false;
      }
      iVar1 = FUN_100c9b560(param_1,param_3,param_4 & 0xffffffff);
    }
    bVar3 = iVar1 != 0;
  }
  return bVar3;
}


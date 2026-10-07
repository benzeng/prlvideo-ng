
bool FUN_1008bff20(undefined8 param_1,int param_2,undefined8 param_3,ulong param_4)

{
  int iVar1;
  char *pcVar2;
  bool bVar3;
  
  bVar3 = false;
  if (param_2 == 1) {
    if (param_4 == 1) {
      iVar1 = FUN_1008c0380(param_1,param_3,1);
    }
    else {
      if (param_4 == 3) {
        pcVar2 = (char *)FUN_1008b69d0();
        pcVar2 = _getenv(pcVar2);
        if (pcVar2 == (char *)0x0) {
          pcVar2 = (char *)FUN_1008b69b0();
        }
        iVar1 = FUN_1008c0380(param_1,pcVar2,1);
        if (iVar1 != 0) {
          return true;
        }
        FUN_100887ce0(0xb,0x65,0x68,"by_file.c",0x6f);
        return false;
      }
      iVar1 = FUN_1008bffe0(param_1,param_3,param_4 & 0xffffffff);
    }
    bVar3 = iVar1 != 0;
  }
  return bVar3;
}


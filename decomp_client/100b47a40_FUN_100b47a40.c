
int FUN_100b47a40(undefined8 param_1,undefined8 param_2,uint param_3,undefined1 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = FUN_100b3d4d0();
  iVar3 = 0;
  if (iVar2 != 1) {
    param_3 = param_3 & 0xfffffff;
    iVar3 = FUN_100b49d10(param_3);
    if (-1 < iVar3) {
      cVar1 = FUN_100b49b40(param_2,param_3,param_4,param_5);
      iVar3 = -0x7fffbffb;
      if (cVar1 != '\0') {
        iVar3 = FUN_100b47680(param_3,param_6);
        if (iVar3 < 0) {
          FUN_100df99c0("","prl_net",0,
                        "[PrlNet]\tinstallPrlAdapter: findPrlAdapter() failed with 0x%08x",iVar3);
        }
      }
    }
  }
  return iVar3;
}


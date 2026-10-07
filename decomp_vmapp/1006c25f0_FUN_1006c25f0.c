
int FUN_1006c25f0(undefined8 param_1,undefined8 param_2,uint param_3,undefined1 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = FUN_1006b3dc0();
  iVar3 = 0;
  if (iVar2 != 1) {
    param_3 = param_3 & 0xfffffff;
    iVar3 = FUN_1006c48c0(param_3);
    if (-1 < iVar3) {
      cVar1 = FUN_1006c46f0(param_2,param_3,param_4,param_5);
      iVar3 = -0x7fffbffb;
      if (cVar1 != '\0') {
        iVar3 = FUN_1006c2230(param_3,param_6);
        if (iVar3 < 0) {
          FUN_1008e3970("","prl_net",0,
                        "[PrlNet]\tinstallPrlAdapter: findPrlAdapter() failed with 0x%08x",iVar3);
        }
      }
    }
  }
  return iVar3;
}


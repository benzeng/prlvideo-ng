
long FUN_100c53880(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if ((param_1 == 0) || (param_2 == 0)) {
    uVar3 = 0x43;
    uVar4 = 0xeb;
  }
  else {
    iVar1 = FUN_100c60800(*(undefined8 *)(param_1 + 8));
    if (iVar1 < 1) {
      uVar3 = 0x69;
      uVar4 = 0xef;
    }
    else {
      uVar3 = *(undefined8 *)(param_1 + 8);
      iVar1 = FUN_100c60800(uVar3);
      lVar2 = FUN_100c60820(uVar3,iVar1 + -1);
      if (lVar2 != 0) {
        lVar2 = _dlsym(lVar2,param_2);
        if (lVar2 != 0) {
          return lVar2;
        }
        FUN_100c62ee0(0x25,0x65,0x6a,"dso_dlfcn.c",0xf9);
        uVar3 = _dlerror();
        FUN_100c642a0(4,"symname(",param_2,"): ",uVar3);
        return 0;
      }
      uVar3 = 0x68;
      uVar4 = 0xf4;
    }
  }
  FUN_100c62ee0(0x25,0x65,uVar3,"dso_dlfcn.c",uVar4);
  return 0;
}


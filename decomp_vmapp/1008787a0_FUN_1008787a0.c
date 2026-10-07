
long FUN_1008787a0(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if ((param_1 == 0) || (param_2 == 0)) {
    uVar3 = 0x43;
    uVar4 = 0x109;
  }
  else {
    iVar1 = FUN_100885600(*(undefined8 *)(param_1 + 8));
    if (iVar1 < 1) {
      uVar3 = 0x69;
      uVar4 = 0x10d;
    }
    else {
      uVar3 = *(undefined8 *)(param_1 + 8);
      iVar1 = FUN_100885600(uVar3);
      lVar2 = FUN_100885620(uVar3,iVar1 + -1);
      if (lVar2 != 0) {
        lVar2 = _dlsym(lVar2,param_2);
        if (lVar2 != 0) {
          return lVar2;
        }
        FUN_100887ce0(0x25,100,0x6a,"dso_dlfcn.c",0x117);
        uVar3 = _dlerror();
        FUN_1008890a0(4,"symname(",param_2,"): ",uVar3);
        return 0;
      }
      uVar3 = 0x68;
      uVar4 = 0x112;
    }
  }
  FUN_100887ce0(0x25,100,uVar3,"dso_dlfcn.c",uVar4);
  return 0;
}


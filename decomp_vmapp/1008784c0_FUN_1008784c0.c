
undefined8 FUN_1008784c0(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar5 = 0;
  lVar2 = FUN_100879440(param_1,0);
  if (lVar2 == 0) {
    FUN_100887ce0(0x25,0x66,0x6f,"dso_dlfcn.c",0xb2);
  }
  else {
    lVar3 = _dlopen(lVar2,*(uint *)(param_1 + 0x14) >> 2 & 8 | 2);
    if (lVar3 == 0) {
      FUN_100887ce0(0x25,0x66,0x67,"dso_dlfcn.c",0xbb);
      uVar4 = _dlerror();
      uVar5 = 0;
      FUN_1008890a0(4,"filename(",lVar2,"): ",uVar4);
      FUN_10081e1a0(lVar2);
    }
    else {
      iVar1 = FUN_1008852e0(*(undefined8 *)(param_1 + 8),lVar3);
      if (iVar1 == 0) {
        FUN_100887ce0(0x25,0x66,0x69,"dso_dlfcn.c",0xc0);
        FUN_10081e1a0(lVar2);
        _dlclose(lVar3);
        uVar5 = 0;
      }
      else {
        *(long *)(param_1 + 0x40) = lVar2;
        uVar5 = 1;
      }
    }
  }
  return uVar5;
}


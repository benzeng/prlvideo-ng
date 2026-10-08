
undefined8 FUN_100cae3f0(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  
  iVar1 = FUN_100bf7220(*(undefined8 *)(param_1 + 0x18));
  if ((iVar1 == 0x18) || (iVar1 == 0x16)) {
    plVar3 = (long *)(*(long *)(param_1 + 0x20) + 0x18);
    if (*plVar3 == 0) {
      lVar2 = FUN_100c60010();
      *plVar3 = lVar2;
      if (lVar2 == 0) {
        FUN_100c62ee0(0x21,0x65,0x41,"pk7_lib.c",0x157);
        return 0;
      }
    }
    FUN_100bf2cf0(param_2 + 0x18,1,6,"pk7_lib.c",0x15b);
    iVar1 = FUN_100c604e0(*plVar3,param_2);
    if (iVar1 != 0) {
      return 1;
    }
    FUN_100c7d620(param_2);
  }
  else {
    FUN_100c62ee0(0x21,0x65,0x71,"pk7_lib.c",0x150);
  }
  return 0;
}



long FUN_1008792c0(long *param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if ((param_1 == (long *)0x0) || (param_2 == 0)) {
    uVar2 = 0x43;
    uVar3 = 0x10c;
  }
  else if (*(code **)(*param_1 + 0x20) == (code *)0x0) {
    uVar2 = 0x6c;
    uVar3 = 0x110;
  }
  else {
    lVar1 = (**(code **)(*param_1 + 0x20))();
    if (lVar1 != 0) {
      return lVar1;
    }
    uVar2 = 0x6a;
    uVar3 = 0x114;
  }
  FUN_100887ce0(0x25,0x6c,uVar2,"dso_lib.c",uVar3);
  return 0;
}


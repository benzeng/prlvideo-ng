
long FUN_100c54430(long *param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if ((param_1 == (long *)0x0) || (param_2 == 0)) {
    uVar2 = 0x43;
    uVar3 = 0xf8;
  }
  else if (*(code **)(*param_1 + 0x18) == (code *)0x0) {
    uVar2 = 0x6c;
    uVar3 = 0xfc;
  }
  else {
    lVar1 = (**(code **)(*param_1 + 0x18))();
    if (lVar1 != 0) {
      return lVar1;
    }
    uVar2 = 0x6a;
    uVar3 = 0x100;
  }
  FUN_100c62ee0(0x25,0x6d,uVar2,"dso_lib.c",uVar3);
  return 0;
}


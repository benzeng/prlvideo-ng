
undefined8 FUN_100be41d0(long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (param_1 == 0) {
    uVar2 = 0x43;
    uVar3 = 0x396;
  }
  else if (*(long **)(param_1 + 0x100) == (long *)0x0) {
    uVar2 = 0xb1;
    uVar3 = 0x39a;
  }
  else {
    plVar1 = (long *)**(long **)(param_1 + 0x100);
    if (*plVar1 == 0) {
      uVar2 = 0xb1;
      uVar3 = 0x39e;
    }
    else {
      if (plVar1[1] != 0) {
        uVar2 = FUN_100c929e0();
        return uVar2;
      }
      uVar2 = 0xbe;
      uVar3 = 0x3a2;
    }
  }
  FUN_100c62ee0(0x14,0xa3,uVar2,"ssl_lib.c",uVar3);
  return 0;
}


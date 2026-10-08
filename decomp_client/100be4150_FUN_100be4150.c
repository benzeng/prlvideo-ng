
undefined8 FUN_100be4150(long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if ((param_1 != 0) && (*(long **)(param_1 + 0x130) != (long *)0x0)) {
    plVar1 = (long *)**(long **)(param_1 + 0x130);
    if (*plVar1 != 0) {
      if (plVar1[1] != 0) {
        uVar2 = FUN_100c929e0();
        return uVar2;
      }
      uVar2 = 0xbe;
      uVar3 = 0x38b;
      goto LAB_100be419b;
    }
  }
  uVar2 = 0xb1;
  uVar3 = 0x386;
LAB_100be419b:
  FUN_100c62ee0(0x14,0xa8,uVar2,"ssl_lib.c",uVar3);
  return 0;
}


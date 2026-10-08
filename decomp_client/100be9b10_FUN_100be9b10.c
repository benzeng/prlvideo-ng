
undefined8 FUN_100be9b10(long param_1,undefined4 *param_2)

{
  int iVar1;
  long lVar2;
  
  if (param_2 == (undefined4 *)0x0) {
    if (*(long *)(param_1 + 0x130) != 0) {
      FUN_100be8ab0();
      *(undefined8 *)(param_1 + 0x130) = 0;
    }
    if ((**(long **)(param_1 + 0x170) != *(long *)(param_1 + 8)) &&
       (iVar1 = FUN_100be6450(param_1), iVar1 == 0)) {
      return 0;
    }
  }
  else {
    lVar2 = (**(code **)(**(long **)(param_1 + 0x170) + 0xb8))(*param_2);
    if ((lVar2 == 0) && (lVar2 = (**(code **)(*(long *)(param_1 + 8) + 0xb8))(*param_2), lVar2 == 0)
       ) {
      FUN_100c62ee0(0x14,0xc3,0xf0,"ssl_sess.c",0x3aa);
      return 0;
    }
    if ((lVar2 != *(long *)(param_1 + 8)) && (iVar1 = FUN_100be6450(param_1,lVar2), iVar1 == 0)) {
      return 0;
    }
    FUN_100bf2cf0(param_2 + 0x30,1,0xe,"ssl_sess.c",0x3be);
    if (*(long *)(param_1 + 0x130) != 0) {
      FUN_100be8ab0();
    }
    *(undefined4 **)(param_1 + 0x130) = param_2;
    *(undefined8 *)(param_1 + 0x180) = *(undefined8 *)(param_2 + 0x2e);
  }
  return 1;
}


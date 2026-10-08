
undefined8 FUN_100c86f10(undefined8 param_1,undefined8 *param_2,undefined4 *param_3,long *param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  if (param_4 != (long *)0x0) {
    lVar1 = *param_4;
    if (*(long *)(lVar1 + 0x28) != 0) {
      FUN_100bf3910();
    }
    *(undefined8 *)(lVar1 + 0x28) = 0;
    *param_2 = 0;
    *param_3 = 0;
    FUN_100bf3910(*param_4);
    *param_4 = 0;
    uVar2 = 1;
  }
  return uVar2;
}


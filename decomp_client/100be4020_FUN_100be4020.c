
undefined8 FUN_100be4020(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  if (param_1 != 0) {
    uVar2 = 0;
    if (*(long *)(param_1 + 0x130) != 0) {
      puVar1 = *(undefined8 **)(*(long *)(param_1 + 0x130) + 0xa8);
      uVar2 = 0;
      if (puVar1 != (undefined8 *)0x0) {
        uVar2 = *puVar1;
      }
    }
  }
  return uVar2;
}



undefined8 FUN_100811b10(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = 0;
    if (*(long *)(param_1 + 0x130) != 0) {
      uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x130) + 0x90);
    }
  }
  return uVar1;
}


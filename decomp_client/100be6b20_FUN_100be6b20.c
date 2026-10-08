
undefined8 FUN_100be6b20(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (*(undefined8 **)(param_1 + 0x100) != (undefined8 *)0x0) {
    uVar1 = *(undefined8 *)**(undefined8 **)(param_1 + 0x100);
  }
  return uVar1;
}


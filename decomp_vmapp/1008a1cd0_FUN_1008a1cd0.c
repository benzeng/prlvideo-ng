
undefined8 FUN_1008a1cd0(long param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  if (*(long *)(param_1 + 0xb0) != 0) {
    puVar1 = *(undefined4 **)(*(long *)(param_1 + 0xb0) + 0x10);
    uVar2 = 0;
    if (puVar1 != (undefined4 *)0x0) {
      if (param_2 != (undefined4 *)0x0) {
        *param_2 = *puVar1;
      }
      uVar2 = *(undefined8 *)(puVar1 + 2);
    }
  }
  return uVar2;
}


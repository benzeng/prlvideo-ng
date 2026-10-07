
void FUN_1005f4960(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x20);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_1007dade0(*puVar1);
    operator_delete(puVar1);
  }
  *(undefined8 *)(param_1 + 0x20) = 0;
  puVar1 = *(undefined8 **)(param_1 + 0x28);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_1007dade0(*puVar1);
    operator_delete(puVar1);
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  return;
}


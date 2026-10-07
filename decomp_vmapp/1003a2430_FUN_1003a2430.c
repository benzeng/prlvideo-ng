
void FUN_1003a2430(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  
  FUN_10038e8e0(param_3);
  FUN_10038e8e0(param_3," = ");
  FUN_1003a2100(param_1,param_3);
  FUN_10038e8e0(param_3,";\n");
  puVar1 = *(undefined1 **)(param_1 + 0x98);
  if (puVar1 == (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_1 + 0xa8);
  }
  *puVar1 = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  FUN_10038e8e0((undefined4 *)(param_1 + 0x90),param_2);
  return;
}


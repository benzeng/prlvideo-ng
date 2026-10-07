
void FUN_1003ba0d0(long param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  
  puVar1 = *(undefined1 **)(param_1 + 0xa8);
  if (puVar1 == (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_1 + 0xb8);
  }
  *puVar1 = 0;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  puVar1 = *(undefined1 **)(param_1 + 0x150);
  if (puVar1 == (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_1 + 0x160);
  }
  *puVar1 = 0;
  *(undefined4 *)(param_1 + 0x148) = 0;
  puVar1 = *(undefined1 **)(param_1 + 0x1f8);
  if (puVar1 == (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_1 + 0x208);
  }
  *puVar1 = 0;
  *(undefined4 *)(param_1 + 0x1f0) = 0;
  *(undefined4 *)(param_1 + 0x10) = param_2;
  *(undefined1 *)(param_1 + 0x218) = 1;
  return;
}



void FUN_1007ef6a0(long param_1)

{
  undefined1 *puVar1;
  
  if (*(int *)(param_1 + 0x48) == 0x2170) {
    puVar1 = *(undefined1 **)(*(long *)(param_1 + 0x50) + 8);
    *puVar1 = 0xe;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    *(undefined4 *)(param_1 + 0x48) = 0x2171;
    *(undefined4 *)(param_1 + 0x60) = 4;
    *(undefined4 *)(param_1 + 100) = 0;
  }
  FUN_1007fd930(param_1,0x16);
  return;
}


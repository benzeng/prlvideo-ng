
void FUN_1008df120(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  if ((*(long *)(puVar1[1] + 0x18) != 0) && (puVar1[2] != 0)) {
    *puVar1 = 2;
  }
  FUN_1008deab0();
  return;
}


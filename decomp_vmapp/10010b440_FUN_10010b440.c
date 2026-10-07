
void FUN_10010b440(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(0x18);
  *(undefined4 *)(puVar1 + 1) = 1;
  puVar1[2] = param_1;
  *puVar1 = &PTR_FUN_10110d128;
  return;
}


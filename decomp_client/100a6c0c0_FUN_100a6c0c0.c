
void FUN_100a6c0c0(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(0x20);
  *(undefined4 *)(puVar1 + 1) = 1;
  puVar1[2] = param_1;
  *puVar1 = &PTR_FUN_102281488;
  puVar1[3] = param_2;
  return;
}


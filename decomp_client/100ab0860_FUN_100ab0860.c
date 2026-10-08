
void FUN_100ab0860(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(0x30);
  *puVar1 = &PTR_FUN_102239c40;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[2] = 0;
  puVar1[1] = 0;
  *(undefined4 *)((long)puVar1 + 0x1c) = 0;
  *puVar1 = &PTR_FUN_102239c98;
  puVar1[4] = param_1;
  puVar1[5] = param_2;
  FUN_100ab0710(puVar1,0);
  return;
}



void FUN_10035fe90(undefined8 param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new(0x50);
  *puVar1 = param_3;
  *(undefined8 *)(puVar1 + 10) = 0;
  *(undefined8 *)(puVar1 + 8) = 0;
  *(undefined8 *)(puVar1 + 6) = 0;
  *(undefined8 *)(puVar1 + 4) = 0;
  *(undefined8 **)(puVar1 + 0xc) = param_2;
  *(undefined4 **)(puVar1 + 0xe) = puVar1;
  *(undefined4 **)(puVar1 + 0x10) = puVar1 + 0xe;
  *(undefined4 **)(puVar1 + 0x12) = puVar1 + 0xe;
  puVar1[2] = 0;
  puVar1[1] = 0;
  *param_2 = puVar1;
  return;
}



void FUN_1002fa390(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(0x28);
  puVar1[4] = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[1] = 0;
  *puVar1 = 0;
  *(undefined4 *)puVar1 = param_4;
  *(undefined4 *)((long)puVar1 + 4) = param_5;
  *(undefined4 *)(puVar1 + 1) = param_2;
  *(undefined4 *)((long)puVar1 + 0xc) = param_3;
  return;
}


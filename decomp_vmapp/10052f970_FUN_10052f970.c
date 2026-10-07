
void FUN_10052f970(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(0x28);
  *puVar1 = PTR_shared_null_100ba20d0;
  puVar1[4] = PTR_shared_null_100ba2188;
  puVar1[1] = param_2;
  puVar1[2] = param_3;
  *(undefined4 *)(puVar1 + 3) = 0;
  *(undefined4 *)((long)puVar1 + 0x1c) = param_4;
  FUN_10051afa0(puVar1 + 4,param_5);
  FUN_100041750(*(undefined8 *)(param_1 + 0x40),puVar1);
  return;
}


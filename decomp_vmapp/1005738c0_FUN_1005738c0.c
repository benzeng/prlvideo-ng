
void FUN_1005738c0(long param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  
  for (puVar1 = *(undefined8 **)(param_1 + 0x1200); puVar1 != (undefined8 *)(param_1 + 0x1200);
      puVar1 = (undefined8 *)*puVar1) {
    (**(code **)(puVar1[-1] + 0x10))(puVar1 + -1,param_2,param_3,param_4);
  }
  return;
}


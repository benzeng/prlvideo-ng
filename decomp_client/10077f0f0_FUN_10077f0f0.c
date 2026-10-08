
undefined8 FUN_10077f0f0(long param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 == 4) {
    puVar1 = (undefined8 *)(param_1 + 0x20);
  }
  else if (param_2 == 3) {
    puVar1 = (undefined8 *)(param_1 + 0x18);
  }
  else {
    puVar1 = (undefined8 *)(param_1 + 0x10);
  }
  return *puVar1;
}


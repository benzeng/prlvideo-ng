
undefined8 FUN_10037f4a0(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  
  if (*(int *)(param_2 + 0x8530) == 0) {
    puVar1 = &DAT_1011c5bc0;
  }
  else {
    puVar1 = &DAT_1011c5c78;
  }
  (*(code *)*puVar1)(0xb20);
  return 0;
}


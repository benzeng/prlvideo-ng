
undefined8 FUN_10037e670(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  
  if ((*(int *)(param_2 + 0x82ac) == 0) && (*(int *)(param_2 + 0x84d8) != 0x314d3241)) {
    puVar1 = &DAT_1011c5bc0;
  }
  else {
    puVar1 = &DAT_1011c5c78;
  }
  (*(code *)*puVar1)(0xbc0);
  return 0;
}



undefined8 * FUN_100542d10(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(0x30);
  FUN_1004c0650(puVar1,param_1);
  *puVar1 = &PTR_FUN_100bc5448;
  puVar1[5] = *(undefined8 *)(DAT_1011c3698 + 0x110);
  FUN_1004c0790(puVar1,0x9060,0x9060);
  return puVar1;
}


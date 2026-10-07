
undefined8 * FUN_1004c3cf0(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(0x50);
  FUN_1004c1f40(puVar1,param_1,0x8000,0x8001);
  *puVar1 = &PTR_FUN_100bc2f28;
  *(undefined1 *)(puVar1 + 9) = 0;
  DAT_100bf9994 = puVar1;
  DAT_100bf99ad = DAT_100bf99ad | 1;
  return puVar1;
}


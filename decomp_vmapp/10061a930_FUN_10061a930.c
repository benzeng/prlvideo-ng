
undefined8 * FUN_10061a930(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = operator_new(0xf0,(nothrow_t *)PTR_nothrow_100ba21c8);
  puVar2 = (undefined8 *)0x0;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_10061a350(puVar1);
    *puVar1 = &PTR_FUN_100bc83a0;
    puVar1[0x1b] = 0;
    *(undefined2 *)(puVar1 + 0x1a) = 0;
    puVar1[0x19] = 0;
    puVar1[0x18] = 0;
    puVar1[0x1c] = FUN_10061a650;
    puVar1[0x1d] = FUN_10061a780;
    puVar2 = puVar1;
  }
  return puVar2;
}


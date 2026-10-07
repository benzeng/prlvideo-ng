
void FUN_1008e4ed0(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = operator_new(8);
  *puVar1 = &PTR_FUN_1011a5ca8;
  puVar2 = operator_new(0x18,(nothrow_t *)PTR_nothrow_100ba21c8);
  if (puVar2 == (undefined8 *)0x0) {
    operator_delete(puVar1);
    puVar2 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar2 + 1) = 1;
    puVar2[2] = puVar1;
    *puVar2 = &PTR_FUN_1011b6068;
  }
  DAT_1011ccc20 = puVar2;
  ___cxa_atexit(FUN_1008e4b20,&DAT_1011ccc20,0x100000000);
  return;
}


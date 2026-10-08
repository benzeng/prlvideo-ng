
void FUN_100ab6630(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = operator_new(8);
  *puVar1 = &PTR_FUN_102281918;
  puVar2 = operator_new(0x18,(nothrow_t *)PTR_nothrow_1021e1620);
  if (puVar2 == (undefined8 *)0x0) {
    operator_delete(puVar1);
    puVar2 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar2 + 1) = 1;
    puVar2[2] = puVar1;
    *puVar2 = &PTR_FUN_1022824e8;
  }
  DAT_102311840 = puVar2;
  ___cxa_atexit(FUN_100ab6280,&DAT_102311840,0x100000000);
  return;
}


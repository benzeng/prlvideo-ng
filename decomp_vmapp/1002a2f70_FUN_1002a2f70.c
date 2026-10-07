
undefined8 * FUN_1002a2f70(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = operator_new(0x118,(nothrow_t *)PTR_nothrow_100ba21c8);
  puVar2 = (undefined8 *)0x0;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_100bb29c0;
    puVar1[1] = param_1;
    *(undefined1 *)(puVar1 + 2) = 0;
    puVar1[3] = 0;
    *(undefined4 *)(puVar1 + 4) = 3;
    FUN_10029c770(puVar1 + 5,1,2,48000);
    puVar1[0x1c] = puVar1 + 0x1e;
    puVar1[0x1d] = 0;
    *(undefined1 *)(puVar1 + 0x21) = 0;
    *(undefined8 *)((long)puVar1 + 0x10c) = 0x7d000000000;
    puVar2 = puVar1;
  }
  return puVar2;
}


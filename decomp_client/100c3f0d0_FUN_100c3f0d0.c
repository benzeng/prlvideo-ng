
undefined4 * FUN_100c3f0d0(undefined4 param_1)

{
  undefined4 *puVar1;
  long lVar2;
  
  puVar1 = (undefined4 *)FUN_100bf3540(0x38,"ec_key.c",0x4b);
  if (puVar1 == (undefined4 *)0x0) {
    FUN_100c62ee0(0x10,0xb6,0x41,"ec_key.c",0x4d);
  }
  else {
    *puVar1 = 1;
    puVar1[0xb] = 0;
    puVar1[8] = 0;
    *(undefined8 *)(puVar1 + 6) = 0;
    *(undefined8 *)(puVar1 + 4) = 0;
    *(undefined8 *)(puVar1 + 2) = 0;
    puVar1[9] = 4;
    puVar1[10] = 1;
    *(undefined8 *)(puVar1 + 0xc) = 0;
    lVar2 = FUN_100c3c2e0(param_1);
    *(long *)(puVar1 + 2) = lVar2;
    if (lVar2 != 0) {
      return puVar1;
    }
    FUN_100c3f180(puVar1);
  }
  return (undefined4 *)0x0;
}


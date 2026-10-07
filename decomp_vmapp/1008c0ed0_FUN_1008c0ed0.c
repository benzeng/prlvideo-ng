
undefined8 * FUN_1008c0ed0(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)FUN_10081ddd0(0x38,"x509_vpm.c",0x5d);
  puVar2 = (undefined8 *)0x0;
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[6] = 0;
    puVar1[5] = 0;
    puVar1[4] = 0;
    puVar1[3] = 0;
    puVar1[2] = 0;
    puVar1[1] = 0;
    *puVar1 = 0;
    *puVar1 = 0;
    puVar1[4] = 0;
    puVar1[3] = 0;
    puVar1[2] = 0;
    *(undefined4 *)(puVar1 + 5) = 0xffffffff;
    puVar2 = puVar1;
    if (puVar1[6] != 0) {
      FUN_100885590(puVar1[6],FUN_100899890);
      puVar1[6] = 0;
    }
  }
  return puVar2;
}


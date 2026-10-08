
undefined8 * FUN_100c9c450(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)FUN_100bf3540(0x38,"x509_vpm.c",0x5d);
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
      FUN_100c60790(puVar1[6],FUN_100c74e10);
      puVar1[6] = 0;
    }
  }
  return puVar2;
}


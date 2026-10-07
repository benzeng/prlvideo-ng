
undefined4 * FUN_100857ed0(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)FUN_10081ddd0(0x68,"bn_mont.c",0x155);
  puVar2 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
    FUN_10084b500(puVar1 + 2);
    FUN_10084b500(puVar1 + 8);
    FUN_10084b500(puVar1 + 0xe);
    *(undefined8 *)(puVar1 + 0x16) = 0;
    *(undefined8 *)(puVar1 + 0x14) = 0;
    puVar1[0x18] = 1;
    puVar2 = puVar1;
  }
  return puVar2;
}


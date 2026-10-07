
undefined8 * FUN_10072d4c0(void)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = (undefined8 *)FUN_10081ddd0(0x10,"../src/snlic/sn_crypto_helper.c",0x36);
  if (puVar2 != (undefined8 *)0x0) {
    puVar3 = (undefined8 *)FUN_10081ddd0(0x18,"../src/snlic/sn_crypto_helper_13.c",0x136);
    if (puVar3 == (undefined8 *)0x0) {
      *puVar2 = 0;
    }
    else {
      *(undefined4 *)((long)puVar3 + 0x14) = 1;
      *(undefined4 *)(puVar3 + 2) = 0;
      puVar3[1] = 0;
      *puVar3 = 0;
      *puVar2 = puVar3;
      puVar3 = (undefined8 *)FUN_10081ddd0(0x18,"../src/snlic/sn_crypto_helper_13.c",0x136);
      if (puVar3 != (undefined8 *)0x0) {
        *(undefined4 *)((long)puVar3 + 0x14) = 1;
        *(undefined4 *)(puVar3 + 2) = 0;
        puVar3[1] = 0;
        *puVar3 = 0;
        puVar2[1] = puVar3;
        return puVar2;
      }
      puVar2[1] = 0;
      plVar1 = (long *)*puVar2;
      if (plVar1 != (long *)0x0) {
        if ((*plVar1 != 0) && ((*(byte *)((long)plVar1 + 0x14) & 2) == 0)) {
          FUN_10081e1a0();
        }
        if ((*(byte *)((long)plVar1 + 0x14) & 1) == 0) {
          *plVar1 = 0;
        }
        else {
          FUN_10081e1a0(plVar1);
        }
      }
    }
    FUN_10081e1a0(puVar2);
  }
  return (undefined8 *)0x0;
}


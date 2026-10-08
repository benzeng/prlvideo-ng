
undefined4 * FUN_100c86130(void)

{
  undefined4 *puVar1;
  long lVar2;
  undefined4 *puVar3;
  
  puVar1 = (undefined4 *)FUN_100bf3540(0x58,"x_pkey.c",0x6d);
  if (puVar1 == (undefined4 *)0x0) {
    FUN_100c62ee0(0xd,0xad,0x41,"x_pkey.c",0x6d);
    puVar3 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = 0;
    lVar2 = FUN_100c7ae20();
    *(long *)(puVar1 + 2) = lVar2;
    puVar3 = (undefined4 *)0x0;
    if (lVar2 != 0) {
      lVar2 = FUN_100c8b370(4);
      *(long *)(puVar1 + 4) = lVar2;
      puVar3 = (undefined4 *)0x0;
      if (lVar2 != 0) {
        *(undefined8 *)(puVar1 + 6) = 0;
        puVar1[8] = 0;
        *(undefined8 *)(puVar1 + 10) = 0;
        puVar1[0xc] = 0;
        *(undefined8 *)(puVar1 + 0xe) = 0;
        *(undefined8 *)(puVar1 + 0x12) = 0;
        *(undefined8 *)(puVar1 + 0x10) = 0;
        puVar1[0x14] = 1;
        puVar3 = puVar1;
      }
    }
  }
  return puVar3;
}


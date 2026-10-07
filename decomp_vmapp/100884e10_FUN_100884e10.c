
undefined4 * FUN_100884e10(void)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  
  puVar1 = (undefined4 *)FUN_10081ddd0(0x20,"stack.c",0x80);
  puVar3 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined8 *)FUN_10081ddd0(0x20,"stack.c",0x82);
    *(undefined8 **)(puVar1 + 2) = puVar2;
    if (puVar2 == (undefined8 *)0x0) {
      FUN_10081e1a0(puVar1);
      puVar3 = (undefined4 *)0x0;
    }
    else {
      *puVar2 = 0;
      *(undefined8 *)(*(long *)(puVar1 + 2) + 8) = 0;
      *(undefined8 *)(*(long *)(puVar1 + 2) + 0x10) = 0;
      *(undefined8 *)(*(long *)(puVar1 + 2) + 0x18) = 0;
      *(undefined8 *)(puVar1 + 6) = 0;
      puVar1[5] = 4;
      *puVar1 = 0;
      puVar1[4] = 0;
      puVar3 = puVar1;
    }
  }
  return puVar3;
}


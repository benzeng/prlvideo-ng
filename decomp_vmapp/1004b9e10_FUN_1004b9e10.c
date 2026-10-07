
undefined1 FUN_1004b9e10(long param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined1 uVar4;
  
  lVar3 = 0;
  uVar4 = 0;
  do {
    puVar1 = *(undefined8 **)(param_2 + lVar3 * 8);
    *(undefined8 *)(param_2 + lVar3 * 8) = 0;
    while (puVar1 != (undefined8 *)0x0) {
      puVar2 = (undefined8 *)*puVar1;
      if (puVar1[3] != 0) {
        FUN_1004ba310(param_1,puVar1 + 3);
        puVar1[3] = 0;
        uVar4 = 1;
      }
      FUN_1004bd1b0(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x30),puVar1);
      _free((void *)puVar1[0xe]);
      puVar1[0xe] = 0;
      *(undefined4 *)(puVar1 + 0xf) = 0;
      *(undefined1 *)((long)puVar1 + 0x7c) = 0;
      _free((void *)puVar1[0xd]);
      _free(puVar1);
      puVar1 = puVar2;
    }
    lVar3 = lVar3 + 1;
  } while (lVar3 != 0x100);
  ___bzero(param_2,0x800);
  return uVar4;
}


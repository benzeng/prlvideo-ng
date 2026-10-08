
undefined8 FUN_100c5bf60(long param_1)

{
  undefined4 *puVar1;
  long lVar2;
  
  puVar1 = (undefined4 *)FUN_100bf3540(0x28,"bf_buff.c",0x60);
  if (puVar1 != (undefined4 *)0x0) {
    lVar2 = FUN_100bf3540(0x1000,"bf_buff.c",99);
    *(long *)(puVar1 + 2) = lVar2;
    if (lVar2 != 0) {
      lVar2 = FUN_100bf3540(0x1000,"bf_buff.c",0x68);
      *(long *)(puVar1 + 6) = lVar2;
      if (lVar2 != 0) {
        *puVar1 = 0x1000;
        puVar1[1] = 0x1000;
        puVar1[4] = 0;
        puVar1[5] = 0;
        puVar1[8] = 0;
        puVar1[9] = 0;
        *(undefined4 *)(param_1 + 0x18) = 1;
        *(undefined4 **)(param_1 + 0x30) = puVar1;
        *(undefined4 *)(param_1 + 0x20) = 0;
        return 1;
      }
      FUN_100bf3910(*(undefined8 *)(puVar1 + 2));
    }
    FUN_100bf3910(puVar1);
  }
  return 0;
}


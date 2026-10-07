
uint FUN_100386a60(long param_1)

{
  uint *puVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  
  puVar1 = *(uint **)(param_1 + 0x28);
  uVar3 = *puVar1;
  do {
    uVar4 = uVar3;
    uVar3 = uVar4 - 1;
    if ((int)uVar3 < 0) {
      lVar2 = *(long *)(puVar1 + 4);
      (*DAT_1011c56a0)(0x84c0);
      (*DAT_1011c5768)(*(undefined4 *)
                        (*(long *)(*(long *)(*(long *)(lVar2 + 8) + 0x40) +
                                  (ulong)*(uint *)(lVar2 + 0x10) * 8) + 0x14),0);
      *(undefined8 *)(lVar2 + 8) = 0;
      return 0;
    }
  } while (*(long *)(*(long *)(puVar1 + 4) + 8 + (ulong)uVar3 * 0x18) != 0);
  (*DAT_1011c56a0)(uVar4 + 0x84bf);
  return uVar3;
}


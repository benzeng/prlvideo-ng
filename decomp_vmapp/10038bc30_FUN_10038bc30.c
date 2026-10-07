
uint FUN_10038bc30(long param_1)

{
  uint *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  
  puVar1 = *(uint **)(param_1 + 0xd0);
  uVar3 = *puVar1;
  do {
    uVar4 = uVar3;
    uVar3 = uVar4 - 1;
    if ((int)uVar3 < 0) {
      puVar2 = *(undefined4 **)(puVar1 + 4);
      (*DAT_1011c56a0)(0x84c0);
      (*DAT_1011c5768)(*(undefined4 *)
                        (*(long *)(*(long *)(*(long *)(puVar2 + 2) + 0x40) +
                                  (ulong)(uint)puVar2[4] * 8) + 0x14),0);
      *(undefined8 *)(puVar2 + 2) = 0;
      *puVar2 = 0;
      return 0;
    }
  } while (*(long *)(*(long *)(puVar1 + 4) + 8 + (ulong)uVar3 * 0x18) != 0);
  (*DAT_1011c56a0)(uVar4 + 0x84bf);
  return uVar3;
}


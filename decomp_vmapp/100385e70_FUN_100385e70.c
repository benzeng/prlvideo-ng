
uint FUN_100385e70(long param_1)

{
  uint *puVar1;
  ulong *puVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  uint uVar6;
  uint uVar7;
  
  puVar1 = *(uint **)(param_1 + 0x28);
  uVar6 = *puVar1;
  do {
    uVar7 = uVar6;
    uVar6 = uVar7 - 1;
    if ((int)uVar6 < 0) {
      puVar2 = *(ulong **)(param_1 + 0x30);
      lVar3 = *(long *)puVar2[1];
      uVar5 = *puVar2 | *(ulong *)(lVar3 + 0x3058);
      *puVar2 = uVar5;
      *puVar2 = uVar5 | *(ulong *)(lVar3 + 0x3070);
      puVar4 = *(undefined8 **)(puVar1 + 2);
      (*DAT_1011c56a0)(0x84c0);
      (*DAT_1011c5768)(*(undefined4 *)((long)puVar4 + 0xc),0);
      *(undefined4 *)(puVar4 + 1) = 0;
      *puVar4 = 0;
      return 0;
    }
  } while (*(int *)(*(long *)(puVar1 + 2) + 8 + (ulong)uVar6 * 0x10) != 0);
  (*DAT_1011c56a0)(uVar7 + 0x84bf);
  return uVar6;
}


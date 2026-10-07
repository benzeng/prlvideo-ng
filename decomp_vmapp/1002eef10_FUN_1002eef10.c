
undefined8 FUN_1002eef10(short param_1,short param_2)

{
  uint uVar1;
  uint *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  short *psVar5;
  uint uVar6;
  
  puVar2 = (uint *)FUN_1000e99d0(*(undefined8 *)(DAT_1011c3698 + 0x1158),0x25b,0);
  uVar1 = *puVar2;
  uVar6 = 0xffffffff;
  if (uVar1 - 1 < 0xa8) {
    psVar5 = (short *)((long)puVar2 + 0x12);
    uVar3 = 0;
    do {
      if ((psVar5[-1] == param_1) && (*psVar5 == param_2)) {
        uVar6 = (uint)uVar3;
        break;
      }
      uVar3 = uVar3 + 1;
      psVar5 = psVar5 + 0xc;
    } while (uVar3 < uVar1);
  }
  uVar4 = 0;
  if (uVar6 < uVar1) {
    uVar4 = *(undefined8 *)(puVar2 + (ulong)uVar6 * 6 + 2);
  }
  return uVar4;
}



ushort * FUN_1002f0000(ushort param_1,ushort param_2,ushort param_3)

{
  ushort uVar1;
  ushort *puVar2;
  ulong uVar3;
  ushort *puVar4;
  ulong uVar5;
  
  puVar2 = (ushort *)FUN_1000e99d0(*(undefined8 *)(DAT_1011c3698 + 0x1158),0x261,0);
  uVar1 = *puVar2;
  uVar5 = (ulong)uVar1;
  if ((ushort)(uVar1 - 1) < 0xff) {
    puVar4 = puVar2 + 8;
    uVar3 = 0;
    do {
      if (((puVar4[-2] == param_1) && (puVar4[-1] == param_2)) && (*puVar4 == param_3)) {
        return puVar2 + uVar3 * 0xc + 4;
      }
      uVar3 = uVar3 + 1;
      puVar4 = puVar4 + 0xc;
    } while (uVar3 < uVar5);
  }
  puVar4 = (ushort *)0x0;
  if (uVar1 < 0x100) {
    puVar4 = puVar2 + uVar5 * 0xc + 4;
    puVar2[uVar5 * 0xc + 9] = uVar1;
    *puVar2 = uVar1 + 1;
    puVar2[uVar5 * 0xc + 6] = param_1;
    puVar2[uVar5 * 0xc + 7] = param_2;
    puVar2[uVar5 * 0xc + 8] = param_3;
    (puVar2 + uVar5 * 0xc + 10)[0] = 0xffff;
    (puVar2 + uVar5 * 0xc + 10)[1] = 0xffff;
  }
  return puVar4;
}


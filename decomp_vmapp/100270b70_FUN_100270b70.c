
undefined8 FUN_100270b70(long param_1,uint param_2,uint param_3)

{
  ushort uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  
  uVar6 = *(uint *)(param_1 + 0x1fc);
  lVar2 = FUN_100257d80();
  if (param_2 == 0) {
    uVar6 = *(uint *)(param_1 + 0x1fc);
    lVar2 = FUN_100257d80(param_1);
    lVar4 = (ulong)uVar6 * 0x538;
    *(byte *)(lVar2 + 0x2de90 + lVar4) = *(byte *)(lVar2 + 0x2de90 + lVar4) & 0xc0 | 0x10;
    *(undefined4 *)(lVar2 + 0x2de9c + lVar4) = 3;
  }
  else {
    lVar3 = (ulong)uVar6 * 0x538;
    lVar4 = lVar2 + 0x2de94 + lVar3;
    uVar1 = *(ushort *)(lVar2 + 0x2de95 + lVar3);
    uVar6 = (uint)uVar1;
    if (uVar1 == 0xffff) {
      *(undefined2 *)(lVar4 + 1) = 0xfffe;
      uVar6 = 0xfffe;
    }
    if ((uVar6 < param_3) && ((uVar6 & 1) != 0)) {
      uVar6 = uVar6 - 1;
      *(short *)(lVar4 + 1) = (short)uVar6;
    }
    if (param_3 == 0) {
      param_3 = uVar6 & 0xffff;
    }
    bVar5 = *(byte *)(lVar2 + 0x2de90 + lVar3) & 0xc0;
    *(byte *)(lVar2 + 0x2de90 + lVar3) = bVar5;
    uVar7 = *(uint *)(param_1 + 0x228) & 1;
    bVar5 = (char)uVar7 << 3 | bVar5 | 0x10;
    *(byte *)(lVar2 + 0x2de90 + lVar3) = bVar5;
    *(uint *)(lVar2 + 0x2de9c + lVar3) = uVar7 ^ 3;
    *(undefined4 *)(lVar2 + 0x2de68 + lVar3) = 0;
    if ((short)uVar6 == 0) {
      *(short *)(lVar4 + 1) = (short)param_2;
      uVar6 = param_2 & 0xffff;
    }
    if (param_2 < (uVar6 & 0xffff)) {
      *(short *)(lVar4 + 1) = (short)param_2;
      uVar6 = param_2 & 0xffff;
    }
    if (param_3 < (uVar6 & 0xffff)) {
      *(short *)(lVar4 + 1) = (short)param_3;
      uVar6 = param_3 & 0xffff;
    }
    *(byte *)(lVar2 + 0x2de90 + lVar3) = bVar5;
    *(uint *)(lVar2 + 0x2de6c + lVar3) = uVar6 & 0xffff;
    if (param_2 < param_3) {
      param_3 = param_2;
    }
    *(uint *)(lVar2 + 0x2de70 + lVar3) = param_3;
  }
  return 0;
}


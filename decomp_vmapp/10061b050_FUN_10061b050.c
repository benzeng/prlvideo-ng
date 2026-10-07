
undefined8 FUN_10061b050(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  int iVar2;
  ulong uVar3;
  byte bVar4;
  byte bVar5;
  ulong uVar6;
  byte bVar7;
  byte bVar8;
  
  if (*(long *)(param_1 + 0xd8) == 0) {
    ___bzero(param_1 + 0x10,0xb0);
    uVar1 = *param_2;
    *(undefined8 *)(param_1 + 0x18) = param_2[1];
    *(undefined8 *)(param_1 + 0x10) = uVar1;
    uVar3 = 4;
    do {
      bVar4 = *(byte *)(param_1 + 0xc + uVar3 * 4);
      bVar8 = *(byte *)(param_1 + 0xd + uVar3 * 4);
      bVar5 = *(byte *)(param_1 + 0xe + uVar3 * 4);
      bVar7 = *(byte *)(param_1 + 0xf + uVar3 * 4);
      uVar6 = (ulong)bVar7;
      if ((uVar3 & 3) == 0) {
        bVar7 = (&DAT_100b47cc0)[bVar4];
        bVar4 = (&DAT_100b47dc0)[uVar3 >> 2 & 0x3fffffff] ^ (&DAT_100b47cc0)[bVar8];
        bVar8 = (&DAT_100b47cc0)[bVar5];
        bVar5 = (&DAT_100b47cc0)[uVar6];
      }
      *(byte *)(param_1 + 0x10 + uVar3 * 4) = bVar4 ^ *(byte *)(param_1 + uVar3 * 4);
      *(byte *)(param_1 + 0x11 + uVar3 * 4) = bVar8 ^ *(byte *)(param_1 + 1 + uVar3 * 4);
      *(byte *)(param_1 + 0x12 + uVar3 * 4) = bVar5 ^ *(byte *)(param_1 + 2 + uVar3 * 4);
      *(byte *)(param_1 + 0x13 + uVar3 * 4) = bVar7 ^ *(byte *)(param_1 + 3 + uVar3 * 4);
      uVar3 = uVar3 + 1;
    } while (uVar3 != 0x2c);
  }
  else {
    iVar2 = _aesni_set_key(*(long *)(param_1 + 0xd8),param_2,0x10);
    if (iVar2 < 0) {
      return 0x80000003;
    }
  }
  *(undefined1 *)(param_1 + 0xc0) = 1;
  return 0;
}


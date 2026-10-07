
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000dc9d0(void)

{
  char cVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  _DAT_1011b6b60 = DAT_100b2df20;
  _DAT_1011b6b50 = _DAT_100b2df10;
  uRam00000001011b6b58 = _UNK_100b2df18;
  _DAT_1011b6b74 = DAT_100b2df34;
  _DAT_1011b6b6c = DAT_100b2df2c;
  _DAT_1011b6b64 = DAT_100b2df24;
  _DAT_1011b6b88 = DAT_100b2df48;
  _DAT_1011b6b80 = DAT_100b2df40;
  _DAT_1011b6b78 = DAT_100b2df38;
  _DAT_1011b6b9c = DAT_100b2df5c;
  _DAT_1011b6b8c = DAT_100b2df4c;
  _DAT_1011b6bb0 = DAT_100b2df70;
  lRam00000001011b6ba8 = _UNK_100b2df68;
  _DAT_1011b6bc4 = DAT_100b2df84;
  _DAT_1011b6bbc = DAT_100b2df7c;
  _DAT_1011b6bd8 = DAT_100b2df98;
  _DAT_1011b6bd0 = DAT_100b2df90;
  _DAT_1011b6bec = DAT_100b2dfac;
  _DAT_1011b6c00 = DAT_100b2dfc0;
  _DAT_1011b6bf0 = _DAT_100b2dfb0;
  uRam00000001011b6bf8 = _UNK_100b2dfb8;
  _DAT_1011b6c14 = DAT_100b2dfd4;
  _DAT_1011b6c0c = DAT_100b2dfcc;
  _DAT_1011b6c04 = DAT_100b2dfc4;
  _DAT_1011b6c28 = DAT_100b2dfe8;
  _DAT_1011b6c20 = DAT_100b2dfe0;
  _DAT_1011b6c18 = DAT_100b2dfd8;
  _DAT_1011b6c3c = DAT_100b2dffc;
  _DAT_1011b6c34 = DAT_100b2dff4;
  _DAT_1011b6c2c = DAT_100b2dfec;
  _DAT_1011b6c50 = DAT_100b2e010;
  _DAT_1011b6c40 = _DAT_100b2e000;
  uRam00000001011b6c48 = _UNK_100b2e008;
  _DAT_1011b6c64 = DAT_100b2e024;
  _DAT_1011b6c5c = DAT_100b2e01c;
  _DAT_1011b6c54 = DAT_100b2e014;
  _DAT_1011b6c78 = DAT_100b2e038;
  _DAT_1011b6c70 = DAT_100b2e030;
  _DAT_1011b6c68 = DAT_100b2e028;
  uVar4 = (ulong)*(uint *)(DAT_1011c3698 + 0x5ac) * 0x100000;
  uVar5 = (ulong)*(uint *)(DAT_1011c3698 + 0xb68);
  _DAT_1011b6be4 = *(uint *)(DAT_1011c3698 + 0xb74) + uVar5;
  uVar3 = 0xb0000000;
  if (*(uint *)(DAT_1011c3698 + 0x5ac) >> 8 < 0xb) {
    uVar3 = uVar4;
  }
  _DAT_1011b6bdc = uVar3 - _DAT_1011b6be4;
  _DAT_1011b6bc8 = _DAT_1011b6bdc + -0xd000;
  _DAT_1011b6bb4 = _DAT_1011b6bdc + -0xe000;
  _DAT_1011b6ba0 = _DAT_1011b6bdc + -0xf000;
  if (uVar4 < 0xb0000001) {
    _DAT_1011b6b94 = uVar4 - 0x100000;
  }
  else {
    _DAT_1011b6c54 = 0x100000000;
    _DAT_1011b6c64 = 1;
    _DAT_1011b6c5c = uVar4 - 0xb0000000;
    _DAT_1011b6b94 = 0xaff00000 - uVar5;
  }
  _DAT_1011b6b94 = _DAT_1011b6b94 - ((ulong)*(uint *)(DAT_1011c3698 + 0xb74) + 0xf000 + uVar5);
  iVar2 = FUN_100088be0(DAT_1011c3698 + 0x140);
  if (iVar2 != 0) {
    _DAT_1011b6b94 = _DAT_1011b6b94 + -0x1000;
    _DAT_1011b6ba0 = _DAT_1011b6ba0 + _DAT_100b2def0;
    lRam00000001011b6ba8 = lRam00000001011b6ba8 + _UNK_100b2def8;
  }
  cVar1 = FUN_1006d81f0(1);
  if (cVar1 != '\0') {
    _DAT_1011b6b94 = _DAT_1011b6b94 + -0x2000;
    _DAT_1011b6ba0 = _DAT_1011b6ba0 + _DAT_100b2df00;
    lRam00000001011b6ba8 = lRam00000001011b6ba8 + _UNK_100b2df08;
  }
  return;
}


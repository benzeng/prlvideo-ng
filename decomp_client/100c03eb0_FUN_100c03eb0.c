
bool FUN_100c03eb0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  
  uVar2 = *(uint *)(param_2 + 0x10) >> 3;
  uVar3 = *(uint *)(param_2 + 0x10) & 7;
  if (uVar3 == 0) {
    *(undefined1 *)((long)param_2 + (ulong)uVar2 + 0x40) = 0x80;
  }
  else {
    *(byte *)((long)param_2 + (ulong)uVar2 + 0x40) =
         *(byte *)((long)param_2 + (ulong)uVar2 + 0x40) | (byte)(0x80 >> (sbyte)uVar3);
  }
  uVar3 = uVar2 + 1;
  uVar4 = (ulong)uVar3;
  if (uVar3 < 0x21) {
    if (0x1f < uVar3) goto LAB_100c03f38;
  }
  else {
    if (uVar3 < 0x40) {
      ___bzero((long)param_2 + (ulong)uVar3 + 0x40,0x3f - uVar2);
    }
    _whirlpool_block(param_2,param_2 + 8,1);
    uVar4 = 0;
  }
  ___bzero((long)param_2 + uVar4 + 0x40,0x20 - (int)uVar4);
LAB_100c03f38:
  uVar1 = param_2[0x11];
  *(char *)((long)param_2 + 0x7f) = (char)uVar1;
  *(char *)((long)param_2 + 0x7e) = (char)((ulong)uVar1 >> 8);
  *(char *)((long)param_2 + 0x7d) = (char)((ulong)uVar1 >> 0x10);
  *(char *)((long)param_2 + 0x7c) = (char)((ulong)uVar1 >> 0x18);
  *(char *)((long)param_2 + 0x7b) = (char)((ulong)uVar1 >> 0x20);
  *(char *)((long)param_2 + 0x7a) = (char)((ulong)uVar1 >> 0x28);
  *(char *)((long)param_2 + 0x79) = (char)((ulong)uVar1 >> 0x30);
  *(char *)(param_2 + 0xf) = (char)((ulong)uVar1 >> 0x38);
  uVar1 = param_2[0x12];
  *(char *)((long)param_2 + 0x77) = (char)uVar1;
  *(char *)((long)param_2 + 0x76) = (char)((ulong)uVar1 >> 8);
  *(char *)((long)param_2 + 0x75) = (char)((ulong)uVar1 >> 0x10);
  *(char *)((long)param_2 + 0x74) = (char)((ulong)uVar1 >> 0x18);
  *(char *)((long)param_2 + 0x73) = (char)((ulong)uVar1 >> 0x20);
  *(char *)((long)param_2 + 0x72) = (char)((ulong)uVar1 >> 0x28);
  *(char *)((long)param_2 + 0x71) = (char)((ulong)uVar1 >> 0x30);
  *(char *)(param_2 + 0xe) = (char)((ulong)uVar1 >> 0x38);
  uVar1 = param_2[0x13];
  *(char *)((long)param_2 + 0x6f) = (char)uVar1;
  *(char *)((long)param_2 + 0x6e) = (char)((ulong)uVar1 >> 8);
  *(char *)((long)param_2 + 0x6d) = (char)((ulong)uVar1 >> 0x10);
  *(char *)((long)param_2 + 0x6c) = (char)((ulong)uVar1 >> 0x18);
  *(char *)((long)param_2 + 0x6b) = (char)((ulong)uVar1 >> 0x20);
  *(char *)((long)param_2 + 0x6a) = (char)((ulong)uVar1 >> 0x28);
  *(char *)((long)param_2 + 0x69) = (char)((ulong)uVar1 >> 0x30);
  *(char *)(param_2 + 0xd) = (char)((ulong)uVar1 >> 0x38);
  uVar1 = param_2[0x14];
  *(char *)((long)param_2 + 0x67) = (char)uVar1;
  *(char *)((long)param_2 + 0x66) = (char)((ulong)uVar1 >> 8);
  *(char *)((long)param_2 + 0x65) = (char)((ulong)uVar1 >> 0x10);
  *(char *)((long)param_2 + 100) = (char)((ulong)uVar1 >> 0x18);
  *(char *)((long)param_2 + 99) = (char)((ulong)uVar1 >> 0x20);
  *(char *)((long)param_2 + 0x62) = (char)((ulong)uVar1 >> 0x28);
  *(char *)((long)param_2 + 0x61) = (char)((ulong)uVar1 >> 0x30);
  *(char *)(param_2 + 0xc) = (char)((ulong)uVar1 >> 0x38);
  _whirlpool_block(param_2,param_2 + 8,1);
  if (param_1 != (undefined8 *)0x0) {
    param_1[7] = param_2[7];
    param_1[6] = param_2[6];
    param_1[5] = param_2[5];
    param_1[4] = param_2[4];
    param_1[3] = param_2[3];
    param_1[2] = param_2[2];
    uVar1 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar1;
    ___bzero(param_2,0xa8);
  }
  return param_1 != (undefined8 *)0x0;
}


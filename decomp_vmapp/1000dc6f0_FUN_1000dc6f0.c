
void FUN_1000dc6f0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,int param_6)

{
  long lVar1;
  char cVar2;
  uint uVar3;
  
  FUN_1000da550();
  *(undefined1 *)(param_1 + 0x74) = 1;
  *(undefined1 *)(param_1 + 0x75) = 8;
  *(undefined1 *)(param_1 + 0x76) = 0;
  *(undefined1 *)(param_1 + 0x77) = 0;
  *(undefined8 *)(param_1 + 0x78) = 100;
  *(undefined1 *)(param_1 + 0x80) = 0xfe;
  *(undefined8 *)(param_1 + 0x84) = param_4;
  *(undefined8 *)(param_1 + 0x8c) = param_5;
  *(undefined1 *)(param_1 + 0x94) = 1;
  *(undefined1 *)(param_1 + 0x95) = 0x20;
  *(undefined1 *)(param_1 + 0x96) = 0;
  *(undefined1 *)(param_1 + 0x97) = 0;
  *(ulong *)(param_1 + 0x98) = (ulong)*(uint *)(param_1 + 0x38);
  *(undefined4 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined1 *)(param_1 + 0xac) = 1;
  *(undefined1 *)(param_1 + 0xad) = 0x10;
  *(undefined1 *)(param_1 + 0xae) = 0;
  *(undefined1 *)(param_1 + 0xaf) = 0;
  *(ulong *)(param_1 + 0xb0) = (ulong)*(uint *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined1 *)(param_1 + 0xd0) = 1;
  *(undefined1 *)(param_1 + 0xd1) = 0x20;
  *(undefined1 *)(param_1 + 0xd2) = 0;
  *(undefined1 *)(param_1 + 0xd3) = 0;
  *(ulong *)(param_1 + 0xd4) = (ulong)*(uint *)(param_1 + 0x4c);
  *(undefined1 *)(param_1 + 0xdc) = 1;
  *(undefined1 *)(param_1 + 0xdd) = 0x20;
  *(undefined1 *)(param_1 + 0xde) = 0;
  *(undefined1 *)(param_1 + 0xdf) = 0;
  *(ulong *)(param_1 + 0xe0) = (ulong)*(uint *)(param_1 + 0x50);
  *(undefined4 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined1 *)(param_1 + 0x83) = 0;
  *(undefined2 *)(param_1 + 0x81) = 0;
  *(undefined4 *)(param_1 + 4) = 0xf4;
  *(undefined2 *)(param_1 + 0x6d) = 3;
  uVar3 = 0x40400;
  if (param_6 == 0) {
    uVar3 = 0x400;
  }
  *(uint *)(param_1 + 0x70) = *(uint *)(param_1 + 0x70) | uVar3;
  *(undefined1 *)(param_1 + 9) = 0;
  cVar2 = '\0';
  lVar1 = 3;
  do {
    cVar2 = *(char *)(param_1 + lVar1) +
            *(char *)(param_1 + -1 + lVar1) +
            *(char *)(param_1 + -2 + lVar1) + *(char *)(param_1 + -3 + lVar1) + cVar2;
    lVar1 = lVar1 + 4;
  } while (lVar1 != 0xf7);
  *(char *)(param_1 + 9) = -cVar2;
  return;
}


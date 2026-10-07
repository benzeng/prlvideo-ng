
/* WARNING: Removing unreachable block (ram,0x0001000da941) */

void FUN_1000da690(undefined4 *param_1,ulong param_2)

{
  long lVar1;
  char cVar2;
  
  lVar1 = 0x100000000;
  param_1[1] = 0xd0;
  *(undefined1 *)(param_1 + 2) = 2;
  *(undefined1 *)((long)param_1 + 9) = 0;
  *param_1 = 0x54415253;
  *(undefined2 *)((long)param_1 + 0xe) = 0x2020;
  *(undefined4 *)((long)param_1 + 10) = 0x534c5250;
  *(undefined8 *)(param_1 + 4) = 0x4d454f5f534c5250;
  param_1[6] = 1;
  param_1[7] = 0x4c544e49;
  param_1[8] = 0x20051216;
  param_1[9] = 1;
  *(undefined2 *)(param_1 + 0x2a) = 0x2801;
  *(undefined2 *)((long)param_1 + 0xc2) = 0;
  *(undefined8 *)((long)param_1 + 0xba) = 0;
  *(undefined8 *)((long)param_1 + 0xb2) = 0;
  *(undefined8 *)((long)param_1 + 0xaa) = 0;
  param_1[0x31] = 1;
  *(undefined8 *)(param_1 + 0x32) = 0;
  *(undefined8 *)(param_1 + 0x26) = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x24) = *(undefined8 *)(param_1 + 0x2e);
  *(undefined8 *)(param_1 + 0x22) = *(undefined8 *)(param_1 + 0x2c);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_1 + 0x2a);
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x1e) = *(undefined8 *)(param_1 + 0x32);
  *(undefined8 *)(param_1 + 0x1c) = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x1a) = *(undefined8 *)(param_1 + 0x2e);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 0x2c);
  *(undefined8 *)(param_1 + 0x16) = *(undefined8 *)(param_1 + 0x2a);
  *(undefined8 *)(param_1 + 0x14) = *(undefined8 *)(param_1 + 0x32);
  *(undefined8 *)(param_1 + 0x12) = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_1 + 0x2e);
  *(undefined8 *)(param_1 + 0xe) = *(undefined8 *)(param_1 + 0x2c);
  *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_1 + 0x2a);
  param_1[0x13] = 1;
  *(undefined8 *)(param_1 + 0x10) = 0xa0000;
  param_1[0x1d] = 1;
  *(undefined8 *)(param_1 + 0x18) = 0x100000;
  if (param_2 < 0xb0000001) {
    if (param_2 == 0xb0000000) {
      *(undefined8 *)(param_1 + 0x1a) = 0xaff00000;
      *(undefined8 *)(param_1 + 0x22) = 0x100000000;
      lVar1 = 0x2050000000;
      param_1[0x27] = 3;
      *(undefined8 *)(param_1 + 0x24) = 0x1f50000000;
    }
    else {
      *(ulong *)(param_1 + 0x1a) = param_2 - 0x100000;
      *(ulong *)(param_1 + 0x22) = param_2;
      param_1[0x27] = 3;
      *(ulong *)(param_1 + 0x24) = 0xb0000000 - param_2;
    }
    *(long *)(param_1 + 0x2c) = lVar1;
  }
  else {
    *(undefined8 *)(param_1 + 0x1a) = 0xaff00000;
    *(undefined8 *)(param_1 + 0x22) = 0x100000000;
    *(ulong *)(param_1 + 0x24) = param_2 - 0xb0000000;
    lVar1 = param_2 + 0x50000000;
    *(long *)(param_1 + 0x2c) = lVar1;
  }
  param_1[0x31] = 3;
  *(long *)(param_1 + 0x2e) = 0x2100000000 - lVar1;
  cVar2 = '\0';
  lVar1 = 3;
  do {
    cVar2 = *(char *)((long)param_1 + lVar1) +
            *(char *)((long)param_1 + lVar1 + -1) +
            *(char *)((long)param_1 + lVar1 + -2) + *(char *)((long)param_1 + lVar1 + -3) + cVar2;
    lVar1 = lVar1 + 4;
  } while (lVar1 != 0xd3);
  *(char *)((long)param_1 + 9) = -cVar2;
  return;
}


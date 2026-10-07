
void FUN_1000da550(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4,
                  undefined1 param_5)

{
  long lVar1;
  char cVar2;
  
  param_1[1] = 0x74;
  *(undefined1 *)(param_1 + 2) = param_5;
  *(undefined1 *)((long)param_1 + 9) = 0;
  *param_1 = 0x50434146;
  *(undefined2 *)((long)param_1 + 0xe) = 0x2020;
  *(undefined4 *)((long)param_1 + 10) = 0x534c5250;
  *(undefined8 *)(param_1 + 4) = 0x4d454f5f534c5250;
  param_1[6] = 1;
  param_1[7] = 0x4c544e49;
  param_1[8] = 0x20051216;
  param_1[9] = param_2;
  param_1[10] = param_3;
  *(undefined1 *)(param_1 + 0xb) = 0;
  *(undefined1 *)((long)param_1 + 0x2d) = param_4;
  *(undefined2 *)((long)param_1 + 0x2e) = 9;
  param_1[0xc] = 0xb2;
  *(undefined1 *)(param_1 + 0xd) = 0xf1;
  *(undefined1 *)((long)param_1 + 0x35) = 0xf0;
  *(undefined1 *)((long)param_1 + 0x36) = 0;
  *(undefined1 *)((long)param_1 + 0x37) = 0;
  param_1[0xe] = 0x4000;
  param_1[0xf] = 0;
  param_1[0x10] = 0x4004;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0x4008;
  param_1[0x14] = 0x4028;
  param_1[0x15] = 0;
  *(undefined1 *)(param_1 + 0x16) = 4;
  *(undefined1 *)((long)param_1 + 0x59) = 2;
  *(undefined1 *)((long)param_1 + 0x5a) = 0;
  *(undefined1 *)((long)param_1 + 0x5b) = 4;
  *(undefined1 *)(param_1 + 0x17) = 4;
  *(undefined1 *)((long)param_1 + 0x5d) = 0;
  *(undefined1 *)((long)param_1 + 0x5e) = 0;
  *(undefined1 *)((long)param_1 + 0x5f) = 0;
  *(undefined2 *)(param_1 + 0x18) = 0xffff;
  *(undefined2 *)((long)param_1 + 0x62) = 0xffff;
  *(undefined8 *)(param_1 + 0x19) = 0;
  *(undefined1 *)(param_1 + 0x1b) = 0x32;
  *(undefined2 *)((long)param_1 + 0x6d) = 0;
  *(undefined1 *)((long)param_1 + 0x6f) = 0;
  param_1[0x1c] = 0x105;
  cVar2 = '\0';
  lVar1 = 3;
  do {
    cVar2 = *(char *)((long)param_1 + lVar1) +
            *(char *)((long)param_1 + lVar1 + -1) +
            *(char *)((long)param_1 + lVar1 + -2) + *(char *)((long)param_1 + lVar1 + -3) + cVar2;
    lVar1 = lVar1 + 4;
  } while (lVar1 != 0x77);
  *(char *)((long)param_1 + 9) = -cVar2;
  return;
}


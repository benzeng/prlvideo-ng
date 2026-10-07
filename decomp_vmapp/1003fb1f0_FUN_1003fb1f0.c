
void FUN_1003fb1f0(undefined8 *param_1,char param_2,int param_3)

{
  *param_1 = 0x1000000cd;
  *(undefined4 *)(param_1 + 0xf) = 0x200;
  if (param_3 == 0) {
    *(undefined4 *)((long)param_1 + 0xc) = 0x7c0;
    param_2 = '\x01';
  }
  *(undefined8 *)((long)param_1 + 0x34) = 0x3330303031525746;
  *(undefined8 *)((long)param_1 + 0x44) = 0x204d4f522d445644;
  *(undefined8 *)((long)param_1 + 0x3c) = 0x206c617574726956;
  *(undefined1 *)((long)param_1 + 0x4c) = 0x5b;
  *(char *)((long)param_1 + 0x4d) = param_2 + '0';
  *(undefined8 *)((long)param_1 + 0x56) = 0x2020202020202020;
  *(undefined8 *)((long)param_1 + 0x4e) = 0x202020202020205d;
  *(undefined2 *)((long)param_1 + 0x62) = 0;
  *(undefined4 *)((long)param_1 + 0x5e) = 0x2020;
  param_1[4] = 0x31343133202d2020;
  *(undefined1 *)(param_1 + 5) = 0x35;
  *(char *)((long)param_1 + 0x29) = param_2 + 'A';
  *(undefined8 *)((long)param_1 + 0x2a) = 0x2020202020353632;
  *(undefined2 *)((long)param_1 + 0x32) = 0x2020;
  return;
}


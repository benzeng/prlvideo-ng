
void FUN_10036d8e0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  
  *param_1 = 0;
  FUN_100394ba0(param_1 + 1);
  param_1[0x18] = param_2;
  param_1[0x1d] = 0;
  param_1[0x1c] = 0;
  param_1[0x1b] = 0;
  param_1[0x21] = 0;
  param_1[0x20] = 0;
  param_1[0x1f] = 0;
  FUN_10038e870(param_1 + 0xa2,param_1 + 0x22,0x400);
  param_1[0xa7] = param_2;
  param_1[0xa8] = param_3;
  param_1[0xb2] = 0;
  param_1[0xb1] = 0;
  param_1[0xb0] = 0;
  param_1[0xaf] = 0;
  param_1[0xae] = 0;
  param_1[0xad] = 0;
  param_1[0xac] = 0;
  param_1[0xab] = 0;
  param_1[0xaa] = 0;
  param_1[0xa9] = 0;
  FUN_10038dac0(param_1 + 0xb3);
  FUN_10038dac0(param_1 + 0xbb);
  FUN_10038dac0(param_1 + 0xc3);
  FUN_10038dac0(param_1 + 0xcb);
  FUN_10038dac0(param_1 + 0xd3);
  FUN_10038dac0(param_1 + 0xdb);
  FUN_10038dac0(param_1 + 0xe3);
  FUN_10038dac0(param_1 + 0xeb);
  FUN_10038dac0(param_1 + 0xf3);
  FUN_10038dac0(param_1 + 0xfb);
  FUN_10038dac0(param_1 + 0x103);
  FUN_10038dac0(param_1 + 0x10b);
  ___bzero(param_1 + 0x113,0x3a0);
  FUN_10038dac0(param_1 + 0x187);
  FUN_10038dac0(param_1 + 399);
  FUN_10038dac0(param_1 + 0x197);
  FUN_10038dac0(param_1 + 0x19f);
  FUN_10038dac0(param_1 + 0x1a7);
  FUN_10038dac0(param_1 + 0x1af);
  FUN_10038dac0(param_1 + 0x1b7);
  FUN_10038dac0(param_1 + 0x1bf);
  ___bzero(param_1 + 0x1c7,0x220);
  param_1[0x20d] = 0;
  param_1[0x20c] = 0;
  param_1[0x20b] = param_1 + 0x20c;
  FUN_100373530(param_1 + 0x20e);
  param_1[0x255] = 0;
  param_1[0x254] = 0;
  param_1[0x253] = param_1 + 0x254;
  puVar1 = param_1 + 0x259;
  *(undefined4 *)((long)param_1 + 0x13cc) = 0;
  *(undefined4 *)(param_1 + 0x29a) = 0;
  *(undefined4 *)(param_1 + 0x29d) = 0;
  param_1[0x29c] = 0;
  param_1[0x29b] = 0;
  *(undefined4 *)(param_1 + 0x259) = 0;
  param_1[600] = 0;
  param_1[599] = 0;
  param_1[0x256] = 0;
  param_1[0x29e] = param_4;
  if (*(char *)(DAT_1011c8478 + 0x4b) != '\0') {
    (*DAT_1011c5e38)(1,puVar1);
    (*DAT_1011c5708)(0x8dee,*(undefined4 *)puVar1);
  }
  if (*(char *)(DAT_1011c8478 + 100) != '\0') {
    (*DAT_1011c5e38)(1,puVar1);
    (*DAT_1011c5e38)(1,(long)param_1 + 0x13cc);
    (*DAT_1011c5e38)(1,param_1 + 0x29a);
  }
  param_1[0x29f] = 0;
  return;
}



undefined8 FUN_100801c80(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    *(undefined2 *)((long)param_2 + 0x1c) = DAT_1011a91dc;
    *(undefined4 *)(param_2 + 3) = DAT_1011a91d8;
    param_2[2] = DAT_1011a91d0;
    param_2[1] = DAT_1011a91c8;
    *param_2 = DAT_1011a91c0;
  }
  return 0x1e;
}



void FUN_100380e80(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = &PTR_FUN_100bbcf90;
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 2) = 0;
  param_1[3] = param_3;
  *(undefined4 *)(param_1 + 4) = 0;
  if (*(uint *)(DAT_1011c8478 + 4) < 0x140) {
    DAT_1011c5738 = DAT_1011c5740;
    DAT_1011c75b0 = DAT_1011c5e08;
    DAT_1011c5de8 = DAT_1011c5df0;
    DAT_1011c5ea0 = DAT_1011c5ea8;
    DAT_1011c5e48 = DAT_1011c5e50;
    DAT_1011c5b20 = DAT_1011c5b28;
    DAT_1011c5808 = DAT_1011c5810;
    DAT_1011c5e18 = DAT_1011c5e20;
    DAT_1011c6360 = DAT_1011c6368;
    DAT_1011c57c8 = DAT_1011c57d0;
  }
                    /* WARNING: Could not recover jumptable at 0x000100380f99. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_1011c5e48)(1,param_1 + 2);
  return;
}


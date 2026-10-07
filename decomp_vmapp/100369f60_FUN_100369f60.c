
void FUN_100369f60(undefined4 *param_1,undefined8 param_2)

{
  param_1[2] = 0;
  ___bzero(param_1 + 6,0x25c);
  *(undefined8 *)(param_1 + 0x9e) = param_2;
  (*DAT_1011c5e98)(1,param_1);
  (*DAT_1011c5770)(*param_1);
  (*DAT_1011c5e38)(1,param_1 + 1);
  (*DAT_1011c5708)(0x8892,param_1[1]);
  (*DAT_1011c57d8)(0x8892,4,0,0x88e4);
  if (0x199 < *(uint *)(DAT_1011c8478 + 4)) {
                    /* WARNING: Could not recover jumptable at 0x00010036a012. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_1011c7a60)(1,param_1 + 0x89);
    return;
  }
  return;
}


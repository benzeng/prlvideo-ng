
void FUN_10033cfe0(undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  long lVar1;
  
  *param_1 = &PTR_FUN_100bbbb00;
  FUN_10033fcc0(param_1 + 1);
  *(undefined4 *)(param_1 + 0x2c) = param_2;
  *(undefined4 *)((long)param_1 + 0x18c) = 0;
  *(undefined8 *)((long)param_1 + 0x184) = 0;
  *(undefined8 *)((long)param_1 + 0x17c) = 0;
  *(undefined8 *)((long)param_1 + 0x174) = 0;
  *(undefined8 *)((long)param_1 + 0x16c) = 0;
  *(undefined8 *)((long)param_1 + 0x164) = 0;
  param_1[0x32] = param_3;
  param_1[0x41] = 0;
  param_1[0x40] = 0;
  param_1[0x3e] = 0;
  param_1[0x3d] = 0;
  param_1[0x3c] = 0;
  param_1[0x3b] = 0;
  param_1[0x3a] = 0;
  param_1[0x39] = 0;
  param_1[0x38] = 0;
  param_1[0x37] = 0;
  param_1[0x36] = 0;
  param_1[0x35] = 0;
  param_1[0x34] = 0;
  param_1[0x33] = 0;
  param_1[0x3f] = param_1 + 0x40;
  param_1[0x4d] = 0;
  param_1[0x4c] = 0;
  param_1[0x4b] = 0;
  param_1[0x4a] = 0;
  param_1[0x49] = 0;
  param_1[0x48] = 0;
  param_1[0x47] = 0;
  param_1[0x46] = 0;
  param_1[0x45] = 0;
  param_1[0x44] = 0;
  param_1[0x43] = 0;
  param_1[0x42] = 0;
  lVar1 = 0;
  do {
    FUN_10038dac0((long)param_1 + lVar1 + 0x270);
    lVar1 = lVar1 + 0x40;
  } while (lVar1 != 0x8000);
  FUN_10036cfb0(param_1 + 0x104e);
  param_1[0x1763] = 0;
  param_1[0x1762] = 0;
  param_1[0x1761] = param_1 + 0x1762;
  param_1[0x1766] = 0;
  param_1[0x1765] = 0;
  param_1[0x1764] = param_1 + 0x1765;
  param_1[0x1769] = 0;
  param_1[0x1768] = 0;
  param_1[0x1767] = param_1 + 0x1768;
  param_1[0x176d] = 0;
  *(undefined4 *)(param_1 + 0x176e) = 0;
  ___bzero(param_1 + 0x134e,0x2094);
  return;
}


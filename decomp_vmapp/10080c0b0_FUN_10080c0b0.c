
void FUN_10080c0b0(undefined1 *param_1,undefined8 *param_2)

{
  param_2[10] = 0;
  param_2[9] = 0;
  param_2[8] = 0;
  param_2[7] = 0;
  param_2[6] = 0;
  param_2[5] = 0;
  param_2[4] = 0;
  param_2[3] = 0;
  param_2[2] = 0;
  param_2[1] = 0;
  *param_2 = 0;
  *(undefined1 *)param_2 = *param_1;
  param_2[1] = (ulong)(byte)param_1[3] |
               (ulong)(byte)param_1[2] << 8 | (ulong)(byte)param_1[1] << 0x10;
  *(ushort *)(param_2 + 2) = CONCAT11(param_1[4],param_1[5]);
  param_2[3] = (ulong)(byte)param_1[8] |
               (ulong)(byte)param_1[7] << 8 | (ulong)(byte)param_1[6] << 0x10;
  param_2[4] = (ulong)(byte)param_1[0xb] |
               (ulong)(byte)param_1[10] << 8 | (ulong)(byte)param_1[9] << 0x10;
  return;
}


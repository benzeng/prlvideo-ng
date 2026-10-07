
void FUN_10061b420(byte *param_1)

{
  byte bVar1;
  
  *param_1 = (&DAT_100b47cc0)[*param_1];
  param_1[4] = (&DAT_100b47cc0)[param_1[4]];
  param_1[8] = (&DAT_100b47cc0)[param_1[8]];
  param_1[0xc] = (&DAT_100b47cc0)[param_1[0xc]];
  bVar1 = (&DAT_100b47cc0)[param_1[1]];
  param_1[1] = (&DAT_100b47cc0)[param_1[5]];
  param_1[5] = (&DAT_100b47cc0)[param_1[9]];
  param_1[9] = (&DAT_100b47cc0)[param_1[0xd]];
  param_1[0xd] = bVar1;
  bVar1 = (&DAT_100b47cc0)[param_1[2]];
  param_1[2] = (&DAT_100b47cc0)[param_1[10]];
  param_1[10] = bVar1;
  bVar1 = (&DAT_100b47cc0)[param_1[6]];
  param_1[6] = (&DAT_100b47cc0)[param_1[0xe]];
  param_1[0xe] = bVar1;
  bVar1 = (&DAT_100b47cc0)[param_1[0xf]];
  param_1[0xf] = (&DAT_100b47cc0)[param_1[0xb]];
  param_1[0xb] = (&DAT_100b47cc0)[param_1[7]];
  param_1[7] = (&DAT_100b47cc0)[param_1[3]];
  param_1[3] = bVar1;
  return;
}


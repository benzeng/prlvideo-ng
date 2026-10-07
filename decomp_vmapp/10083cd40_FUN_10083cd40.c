
void FUN_10083cd40(byte *param_1,uint *param_2)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = *param_1;
  *param_2 = (uint)bVar1 << 8;
  *param_2 = (uint)CONCAT11(bVar1,param_1[1]);
  bVar1 = param_1[2];
  param_2[1] = (uint)bVar1 << 8;
  param_2[1] = (uint)CONCAT11(bVar1,param_1[3]);
  bVar1 = param_1[4];
  param_2[2] = (uint)bVar1 << 8;
  param_2[2] = (uint)CONCAT11(bVar1,param_1[5]);
  bVar1 = param_1[6];
  param_2[3] = (uint)bVar1 << 8;
  param_2[3] = (uint)CONCAT11(bVar1,param_1[7]);
  bVar1 = param_1[8];
  param_2[4] = (uint)bVar1 << 8;
  param_2[4] = (uint)CONCAT11(bVar1,param_1[9]);
  bVar1 = param_1[10];
  param_2[5] = (uint)bVar1 << 8;
  param_2[5] = (uint)CONCAT11(bVar1,param_1[0xb]);
  bVar1 = param_1[0xc];
  param_2[6] = (uint)bVar1 << 8;
  param_2[6] = (uint)CONCAT11(bVar1,param_1[0xd]);
  bVar1 = param_1[0xe];
  param_2[7] = (uint)bVar1 << 8;
  param_2[7] = (uint)CONCAT11(bVar1,param_1[0xf]);
  param_2 = param_2 + 0xf;
  iVar2 = 0;
  do {
    param_2[-7] = (param_2[-0xd] >> 7 | param_2[-0xe] << 9) & 0xffff;
    param_2[-6] = (param_2[-0xc] >> 7 | param_2[-0xd] << 9) & 0xffff;
    param_2[-5] = (param_2[-0xb] >> 7 | param_2[-0xc] << 9) & 0xffff;
    param_2[-4] = (param_2[-10] >> 7 | param_2[-0xb] << 9) & 0xffff;
    param_2[-3] = (param_2[-9] >> 7 | param_2[-10] << 9) & 0xffff;
    param_2[-2] = (param_2[-8] >> 7 | param_2[-9] << 9) & 0xffff;
    if (4 < iVar2) {
      return;
    }
    param_2[-1] = (param_2[-0xf] >> 7 | param_2[-8] << 9) & 0xffff;
    *param_2 = (param_2[-0xe] >> 7 | param_2[-0xf] << 9) & 0xffff;
    iVar2 = iVar2 + 1;
    param_2 = param_2 + 8;
  } while (iVar2 < 6);
  return;
}


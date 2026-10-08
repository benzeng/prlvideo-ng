
void FUN_100d311f0(uint *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  if ((param_2 < 0x65) && ((int)*param_1 < (int)param_2)) {
    uVar2 = QTime::elapsed();
    param_1[2] = uVar2;
    if (4999 < (int)(uVar2 - param_1[3])) {
      uVar1 = param_1[0x12];
      if (uVar1 == 2) {
        FUN_100d312b0(param_1,param_2);
        uVar2 = param_1[2];
      }
      else if (uVar1 == 1) {
        param_1[4] = (int)(uVar2 * 100) / (int)param_2 - uVar2;
      }
      else if (uVar1 == 0) {
        param_1[4] = (int)((uVar2 - param_1[3]) * (100 - param_2)) / (int)(param_2 - *param_1);
      }
      *param_1 = param_2;
      param_1[3] = uVar2;
    }
  }
  return;
}


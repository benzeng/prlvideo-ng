
int FUN_1003916b0(int param_1,uint param_2)

{
  int iVar1;
  
  switch(param_1) {
  case 0:
  case 9:
    param_1 = 0xf;
    if (param_2 != 1) {
      param_1 = 0;
    }
    if (param_2 == 0) {
      param_1 = 0;
    }
    break;
  case 1:
  case 2:
  case 4:
    break;
  case 3:
    param_1 = 3;
    if (param_2 != 0) {
      param_1 = (uint)(param_2 == 1) << 4;
    }
    break;
  case 5:
    iVar1 = 0;
    if (param_2 < 8) {
      iVar1 = param_2 + 7;
    }
    return iVar1;
  default:
    param_1 = -1;
    break;
  case 10:
    iVar1 = 6;
    if (param_2 != 1) {
      iVar1 = 0;
    }
    param_1 = 5;
    if (param_2 != 0) {
      param_1 = iVar1;
    }
  }
  return param_1;
}


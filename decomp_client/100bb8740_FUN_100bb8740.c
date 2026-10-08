
uint FUN_100bb8740(long *param_1,ulong *param_2,ulong *param_3,int param_4)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (0 < param_4) {
    while( true ) {
      uVar1 = *param_2;
      uVar2 = *param_3;
      *param_1 = (uVar1 - (long)(int)uVar3) - uVar2;
      if (uVar1 != uVar2) {
        uVar3 = -(uint)(uVar1 < uVar2) & 1;
      }
      if (param_4 < 2) break;
      uVar1 = param_2[1];
      uVar2 = param_3[1];
      param_1[1] = (uVar1 - (long)(int)uVar3) - uVar2;
      if (uVar1 != uVar2) {
        uVar3 = -(uint)(uVar1 < uVar2) & 1;
      }
      if (param_4 < 3) {
        return uVar3;
      }
      uVar1 = param_2[2];
      uVar2 = param_3[2];
      param_1[2] = (uVar1 - (long)(int)uVar3) - uVar2;
      if (uVar1 != uVar2) {
        uVar3 = -(uint)(uVar1 < uVar2) & 1;
      }
      if (param_4 + -3 < 1) {
        return uVar3;
      }
      uVar1 = param_2[3];
      uVar2 = param_3[3];
      param_1[3] = (uVar1 - (long)(int)uVar3) - uVar2;
      if (uVar1 != uVar2) {
        uVar3 = -(uint)(uVar1 < uVar2) & 1;
      }
      param_4 = param_4 + -4;
      if (param_4 < 1) {
        return uVar3;
      }
      param_2 = param_2 + 4;
      param_3 = param_3 + 4;
      param_1 = param_1 + 4;
    }
  }
  return uVar3;
}


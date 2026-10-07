
bool FUN_100469d10(int param_1,uint *param_2,uint param_3)

{
  ulong uVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_1 == 1) {
    bVar2 = false;
  }
  else {
    uVar3 = (ulong)param_3;
    if (param_3 < 4) {
      bVar2 = false;
    }
    else {
      uVar1 = (ulong)*param_2 + 4;
      if (uVar3 < uVar1) {
        bVar2 = false;
      }
      else {
        uVar4 = (ulong)*param_2 + 8;
        if (uVar3 < uVar4) {
          bVar2 = false;
        }
        else {
          uVar4 = *(uint *)((long)param_2 + uVar1) + uVar4;
          if (uVar3 < uVar4) {
            bVar2 = false;
          }
          else if (uVar3 < uVar4 + 4) {
            bVar2 = false;
          }
          else if (uVar3 < uVar4 + 8) {
            bVar2 = false;
          }
          else {
            bVar2 = (ulong)*(uint *)((long)param_2 + uVar4 + 4) + uVar4 + 8 <= uVar3;
          }
        }
      }
    }
  }
  return bVar2;
}


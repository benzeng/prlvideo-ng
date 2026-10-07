
void FUN_10006a5d0(undefined8 *param_1,long *param_2)

{
  long lVar1;
  ulong uVar2;
  
  param_1[2] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  lVar1 = *param_2;
  uVar2 = 0;
  if (param_2[1] != lVar1) {
    do {
      lVar1 = lVar1 + uVar2 * 8;
      if ((uint)uVar2 < 5) {
        FUN_10006a120(param_1,lVar1,uVar2);
      }
      else {
        FUN_10006a120(param_1,lVar1,5);
      }
      uVar2 = (ulong)((uint)uVar2 + 1);
      lVar1 = *param_2;
    } while (uVar2 < (ulong)(param_2[1] - lVar1 >> 3));
  }
  return;
}


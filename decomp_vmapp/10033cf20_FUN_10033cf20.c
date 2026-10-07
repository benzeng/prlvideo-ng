
byte FUN_10033cf20(int *param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  
  bVar3 = *param_1 != 0;
  bVar1 = param_1[1] != 0;
  bVar2 = bVar1 || bVar3;
  if (((param_1[1] == 0) || (!bVar3)) && ((param_1[2] == 0 || (bVar2 = true, !bVar1 && !bVar3)))) {
    return param_1[3] != 0 & bVar2;
  }
  return 1;
}



undefined8 FUN_100c58c20(undefined8 param_1,uint param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (-1 < (int)param_2) {
    uVar3 = param_2;
  }
  uVar1 = ~uVar3;
  if ((int)~uVar3 <= (int)~param_3) {
    uVar1 = ~param_3;
  }
  do {
    if (uVar1 + 1 == 0) {
      return 1;
    }
    iVar2 = FUN_100c58a70(param_1," ");
    uVar1 = uVar1 + 1;
  } while (iVar2 == 1);
  return 0;
}


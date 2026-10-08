
undefined8 FUN_100c01560(undefined8 *param_1,uint *param_2)

{
  uint uVar1;
  ulong uVar2;
  
  uVar1 = *param_2;
  uVar2 = (ulong)uVar1;
  if ((uVar2 != 0) || (param_2[7] == 2)) {
    if (param_2[7] == 2) {
      *(undefined1 *)((long)param_2 + uVar2 + 4) = 0x80;
      uVar2 = (ulong)(uVar1 + 1);
    }
    ___bzero((long)param_2 + uVar2 + 4,8 - (int)uVar2);
    FUN_100c01340(param_2,param_2 + 1,8);
  }
  *param_1 = *(undefined8 *)(param_2 + 3);
  param_1[1] = *(undefined8 *)(param_2 + 5);
  return 1;
}


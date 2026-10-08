
undefined8 FUN_100c6c230(long *param_1,long param_2,long param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = (ulong)*(int *)(*param_1 + 4);
  if (uVar1 <= param_4) {
    uVar2 = 0;
    do {
      FUN_100c1d930(param_3 + uVar2,param_2 + uVar2,param_1[0xf],(int)param_1[2]);
      uVar2 = uVar2 + uVar1;
    } while (uVar2 <= param_4 - uVar1);
  }
  return 1;
}


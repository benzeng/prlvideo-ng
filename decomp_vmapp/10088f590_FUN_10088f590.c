
undefined8 FUN_10088f590(long *param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = (ulong)*(int *)(*param_1 + 4);
  if (uVar2 <= param_4) {
    lVar1 = param_1[0xf];
    uVar3 = 0;
    do {
      (**(code **)(lVar1 + 0xf8))(param_3 + uVar3,param_2 + uVar3,lVar1);
      uVar3 = uVar3 + uVar2;
    } while (uVar3 <= param_4 - uVar2);
  }
  return 1;
}


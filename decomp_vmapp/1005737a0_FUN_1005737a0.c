
undefined8 FUN_1005737a0(long *param_1,long param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar2 = 0x80000011;
  if ((param_1[0x23f] == 0) && (uVar2 = 0x80000003, param_2 != 0)) {
    uVar2 = (**(code **)(*param_1 + 0x328))(param_1);
    uVar1 = (**(code **)(*param_1 + 0x300))(param_1);
    uVar2 = FUN_1005aa2f0(param_2,uVar2,uVar1,(int)param_1[0x22b]);
    if (-1 < (int)uVar2) {
      param_1[0x23f] = param_2;
      uVar2 = 0;
    }
  }
  return uVar2;
}


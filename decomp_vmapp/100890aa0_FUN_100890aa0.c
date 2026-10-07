
undefined8 FUN_100890aa0(int *param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  FUN_100820a30();
  uVar2 = FUN_100821930(*param_1);
  iVar1 = FUN_100821050(uVar2,1,param_1);
  if (iVar1 == 0) {
    uVar3 = 0;
  }
  else {
    FUN_100821480(*param_1);
    uVar3 = FUN_1008219f0(*param_1);
    uVar3 = FUN_100821050(uVar3,1,param_1);
    if ((int)uVar3 == 0) {
      uVar3 = 0;
    }
    else if ((param_1[1] != 0) && (*param_1 != param_1[1])) {
      uVar3 = FUN_100821930();
      iVar1 = FUN_100821050(uVar3,0x8001,uVar2);
      uVar3 = 0;
      if (iVar1 != 0) {
        FUN_100821480(param_1[1]);
        uVar3 = FUN_1008219f0(param_1[1]);
        uVar2 = FUN_100821050(uVar3,0x8001,uVar2);
        return uVar2;
      }
    }
  }
  return uVar3;
}



undefined2 FUN_100288be0(uint *param_1,long *param_2)

{
  undefined2 uVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  
  uVar2 = *param_1 >> 0x18;
  if ((uVar2 & 0x30) == 0x10) {
    uVar3 = *param_1 & 0xffffff;
    if ((uVar2 & 2) == 0) {
      uVar4 = (ulong)param_1[1];
    }
    else {
      uVar4 = *(ulong *)(param_1 + 1);
    }
    if (uVar3 == 0) {
      *(undefined4 *)(param_2 + 1) = 0;
      *param_2 = 0;
    }
    else {
      FUN_10008d2d0(param_2 + 2,uVar4,uVar3);
      *param_2 = param_2[2];
      if (param_2[2] == 0) {
        FUN_1008e3970("","LocalDevices",0,"LSI: couldn\'t map buffer: 0x%08llX",uVar4);
        return 4;
      }
      *(uint *)(param_2 + 1) = uVar3;
    }
    uVar1 = 0;
  }
  else {
    FUN_1008e3970("","LocalDevices",0,"LSI: invalid sgl");
    uVar1 = 3;
  }
  return uVar1;
}


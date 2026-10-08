
ulong FUN_100ddc9c0(uint *param_1,ulong param_2,uint param_3,uint param_4,code *param_5)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  ulong uVar4;
  
  uVar1 = 0xffffffea;
  if (((param_1 != (uint *)0x0) && (param_4 < *param_1)) && (param_3 <= *param_1)) {
    if (param_3 == 0) {
      uVar1 = 0;
    }
    else if (((param_4 | param_3) & 7) == 0) {
      uVar3 = param_3 - param_4 >> 3;
      uVar1 = 0;
      if (uVar3 != 0) {
        uVar1 = (ulong)(param_4 >> 3) & 0xfff;
        uVar4 = uVar3 + param_2;
        param_4 = param_4 >> 0xf;
        uVar2 = 0x1000 - uVar1;
        do {
          if (uVar4 < param_2 + uVar2) {
            uVar2 = uVar4 - param_2;
          }
          uVar1 = (*param_5)(param_1,param_4,uVar1,uVar2 & 0xffffffff,param_2);
          if ((int)uVar1 != 0) {
            return uVar1;
          }
          param_2 = param_2 + uVar2;
          param_4 = param_4 + 1;
          uVar1 = 0;
          uVar2 = 0x1000;
        } while (param_2 < uVar4);
      }
    }
  }
  return uVar1;
}


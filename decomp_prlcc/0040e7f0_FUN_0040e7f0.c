
undefined4 FUN_0040e7f0(uint *param_1,long param_2,long param_3,uint param_4,uint param_5)

{
  undefined4 uVar1;
  
  if ((((param_1 != (uint *)0x0) && (param_2 != 0)) && (param_3 != 0)) &&
     ((param_4 != 0 || (param_5 == 0)))) {
    if (param_4 <= param_5) {
      param_4 = param_5;
    }
    if (param_4 <= *param_1) {
      uVar1 = FUN_0040ef90(param_2);
      param_1[1] = *(uint *)(param_2 + 0xc);
      return uVar1;
    }
  }
  return 0xffffffff;
}


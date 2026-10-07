
undefined8 FUN_1003804c0(double param_1,double param_2,double param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = (undefined4)((ulong)param_2 >> 0x20);
  uVar1 = SUB84(param_2,0);
  if (param_2 <= param_1) {
    if (param_1 <= param_3) {
      param_3 = param_1;
    }
    uVar1 = SUB84(param_3,0);
    uVar2 = (undefined4)((ulong)param_3 >> 0x20);
  }
  return CONCAT44(uVar2,uVar1);
}



void FUN_10046b7e0(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_100458c00();
  if (lVar1 != 0) {
    lVar1 = ___dynamic_cast(lVar1,PTR_typeinfo_1021e1740,PTR_typeinfo_1021e1648,0);
    if (lVar1 != 0) {
      uVar2 = FUN_10044b340(param_1);
      uVar2 = FUN_1003b0b00(uVar2);
      FUN_1003ad9c0(uVar2,lVar1);
      return;
    }
  }
  return;
}


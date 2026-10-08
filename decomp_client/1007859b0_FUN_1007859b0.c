
undefined8 FUN_1007859b0(undefined8 param_1,long param_2,int param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  if ((param_2 != 0) && (param_3 != 0)) {
    lVar1 = FUN_1007857f0();
    if (lVar1 != 0) {
      uVar2 = FUN_1007878c0(lVar1);
      uVar2 = FUN_100787280(uVar2,param_3);
      return uVar2;
    }
  }
  return 0;
}


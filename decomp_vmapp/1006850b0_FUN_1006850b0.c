
undefined8 FUN_1006850b0(uint param_1,long *param_2,long *param_3)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  if ((long *)*param_2 != (long *)0x0) {
    (**(code **)(*(long *)*param_2 + 0x10))();
  }
  uVar1 = 0xfffffffe;
  if (((param_1 & 0x4000) == 0) && (param_3 != (long *)0x0)) {
    uVar1 = (**(code **)(*param_3 + 0x10))(param_3);
  }
  lVar2 = FUN_100707430(uVar1,0);
  *param_2 = lVar2;
  uVar3 = 0x80000002;
  if (lVar2 != 0) {
    uVar3 = 0;
  }
  return uVar3;
}


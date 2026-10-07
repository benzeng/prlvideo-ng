
undefined8
FUN_1008bf430(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  undefined8 uVar2;
  
  piVar1 = (int *)FUN_1008b7440();
  if (piVar1 != (int *)0x0) {
    uVar2 = FUN_10088ad10(*(undefined8 *)(piVar1 + 2),(long)*piVar1,param_3,param_4,param_2,0);
    return uVar2;
  }
  return 0;
}



undefined8 FUN_1008c6a60(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 local_20;
  
  piVar1 = (int *)*param_2;
  local_20 = param_3;
  if (piVar1 != (int *)0x0) {
    uVar2 = FUN_1008c4630(*(undefined8 *)(piVar1 + 2),(long)*piVar1);
    FUN_1008c39e0("keyid",uVar2,&local_20);
    FUN_10081e1a0(uVar2);
  }
  if (param_2[1] != 0) {
    local_20 = FUN_1008c5710(0,param_2[1],local_20);
  }
  piVar1 = (int *)param_2[2];
  if (piVar1 != (int *)0x0) {
    uVar2 = FUN_1008c4630(*(undefined8 *)(piVar1 + 2),(long)*piVar1);
    FUN_1008c39e0("serial",uVar2,&local_20);
    FUN_10081e1a0(uVar2);
  }
  return local_20;
}



undefined8 FUN_100ca1fe0(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 local_20;
  
  piVar1 = (int *)*param_2;
  local_20 = param_3;
  if (piVar1 != (int *)0x0) {
    uVar2 = FUN_100c9fbb0(*(undefined8 *)(piVar1 + 2),(long)*piVar1);
    FUN_100c9ef60("keyid",uVar2,&local_20);
    FUN_100bf3910(uVar2);
  }
  if (param_2[1] != 0) {
    local_20 = FUN_100ca0c90(0,param_2[1],local_20);
  }
  piVar1 = (int *)param_2[2];
  if (piVar1 != (int *)0x0) {
    uVar2 = FUN_100c9fbb0(*(undefined8 *)(piVar1 + 2),(long)*piVar1);
    FUN_100c9ef60("serial",uVar2,&local_20);
    FUN_100bf3910(uVar2);
  }
  return local_20;
}


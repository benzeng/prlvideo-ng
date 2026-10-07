
undefined4
FUN_100476370(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 local_40 [2];
  int *local_38;
  undefined1 local_2a;
  
  FUN_100473c40(&local_38);
  piVar3 = (int *)0x0;
  if ((local_38 != (int *)0x0) && (piVar3 = local_38, *local_38 != 1)) {
    FUN_100031c40(&local_38);
    piVar3 = local_38;
  }
  *(undefined8 *)(piVar3 + 0xe) = param_3[4];
  *(undefined8 *)(piVar3 + 0xc) = param_3[3];
  *(undefined8 *)(piVar3 + 10) = param_3[2];
  uVar1 = *param_3;
  *(undefined8 *)(piVar3 + 8) = param_3[1];
  *(undefined8 *)(piVar3 + 6) = uVar1;
  local_40[0] = 4;
  uVar2 = FUN_1004761a0(param_1,&local_38,local_40,param_4);
  if (piVar3 != (int *)0x0) {
    LOCK();
    *piVar3 = *piVar3 + -1;
    local_2a = *piVar3 != 0;
    UNLOCK();
    if (!(bool)local_2a) {
      FUN_100031ed0(piVar3);
      operator_delete(piVar3);
    }
  }
  return uVar2;
}


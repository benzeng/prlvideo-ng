
undefined4 FUN_100476740(undefined8 param_1,undefined8 param_2,int *param_3,undefined8 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 local_40 [2];
  int *local_38;
  undefined1 local_2a;
  
  FUN_100473c40(&local_38);
  iVar1 = *param_3;
  piVar3 = local_38;
  if (*local_38 != 1) {
    FUN_100031c40(&local_38);
    piVar3 = local_38;
  }
  piVar3[0x16] = iVar1;
  local_40[0] = 0x20;
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


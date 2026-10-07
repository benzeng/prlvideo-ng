
undefined4
FUN_100476570(undefined8 param_1,undefined8 param_2,QByteArray *param_3,undefined8 param_4)

{
  undefined4 uVar1;
  int *piVar2;
  undefined4 local_40 [2];
  int *local_38;
  undefined1 local_2a;
  
  FUN_100473c40(&local_38);
  piVar2 = (int *)0x0;
  if ((local_38 != (int *)0x0) && (piVar2 = local_38, *local_38 != 1)) {
    FUN_100031c40(&local_38);
    piVar2 = local_38;
  }
  QByteArray::operator=((QByteArray *)(piVar2 + 0x12),param_3);
  local_40[0] = 0x10;
  uVar1 = FUN_1004761a0(param_1,&local_38,local_40,param_4);
  if (piVar2 != (int *)0x0) {
    LOCK();
    *piVar2 = *piVar2 + -1;
    local_2a = *piVar2 != 0;
    UNLOCK();
    if (!(bool)local_2a) {
      FUN_100031ed0(piVar2);
      operator_delete(piVar2);
    }
  }
  return uVar1;
}


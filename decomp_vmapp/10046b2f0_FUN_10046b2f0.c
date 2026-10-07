
void FUN_10046b2f0(undefined8 param_1,long *param_2,undefined4 *param_3)

{
  int *piVar1;
  int iVar2;
  long lVar3;
  int *local_38;
  undefined1 local_2b;
  undefined1 local_2a;
  
  lVar3 = *param_2 + 8;
  iVar2 = QString::compare(lVar3,&DAT_1011bbf80,1);
  if (((iVar2 != 0) && (iVar2 = QString::compare(lVar3,&DAT_1011bbf88,1), iVar2 != 0)) &&
     (iVar2 = QString::compare(lVar3,&DAT_1011bbf90,1), iVar2 != 0)) {
    return;
  }
  local_38 = (int *)*param_2;
  if (local_38 != (int *)0x0) {
    LOCK();
    *local_38 = *local_38 + 1;
    local_2b = *local_38 != 0;
    UNLOCK();
  }
  FUN_10047c290(param_1,&local_38,*param_3);
  piVar1 = local_38;
  if (local_38 != (int *)0x0) {
    LOCK();
    *local_38 = *local_38 + -1;
    local_2a = *local_38 != 0;
    UNLOCK();
    if ((!(bool)local_2a) && (local_38 != (int *)0x0)) {
      FUN_100031ed0(local_38);
      operator_delete(piVar1);
    }
  }
  return;
}


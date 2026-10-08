
void FUN_100a64e00(undefined8 *param_1)

{
  int *piVar1;
  void *pvVar2;
  void *pvVar3;
  
  *param_1 = &PTR_FUN_102238dc0;
  FUN_100a64f50();
  piVar1 = (int *)param_1[9];
  if (piVar1 != (int *)0x0) {
    if ((-1 < *piVar1) && (-1 < piVar1[1])) {
      _close(*piVar1);
      _close(piVar1[1]);
    }
    operator_delete(piVar1);
  }
  std::string::~string((string *)(param_1 + 6));
  pvVar2 = (void *)param_1[3];
  if (pvVar2 != (void *)0x0) {
    pvVar3 = (void *)param_1[4];
    if (pvVar3 != pvVar2) {
      param_1[4] = (~((long)pvVar3 + (-8 - (long)pvVar2)) & 0xfffffffffffffff8U) + (long)pvVar3;
    }
    operator_delete(pvVar2);
  }
  if ((long *)param_1[2] != (long *)0x0) {
    (**(code **)(*(long *)param_1[2] + 8))();
  }
  return;
}


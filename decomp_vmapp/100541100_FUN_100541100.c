
void FUN_100541100(undefined8 *param_1)

{
  int iVar1;
  int *piVar2;
  
  *param_1 = &PTR_FUN_100bc5280;
  if (*(int *)(param_1 + 1) != -1) {
    iVar1 = _shutdown(*(int *)(param_1 + 1),2);
    if ((iVar1 == 0) || (piVar2 = ___error(), *piVar2 != 9)) {
      _close(*(int *)(param_1 + 1));
    }
    *(undefined4 *)(param_1 + 1) = 0xffffffff;
    return;
  }
  return;
}


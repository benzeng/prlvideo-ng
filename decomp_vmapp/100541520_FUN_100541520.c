
void FUN_100541520(undefined8 *param_1)

{
  int iVar1;
  int *piVar2;
  
  *param_1 = &PTR_FUN_100bc5280;
  if (*(int *)(param_1 + 1) != -1) {
    iVar1 = _shutdown(*(int *)(param_1 + 1),2);
    if (iVar1 != 0) {
      piVar2 = ___error();
      if (*piVar2 == 9) goto LAB_10054155c;
    }
    _close(*(int *)(param_1 + 1));
  }
LAB_10054155c:
  operator_delete(param_1);
  return;
}


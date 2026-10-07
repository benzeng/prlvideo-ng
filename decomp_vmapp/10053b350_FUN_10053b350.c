
void FUN_10053b350(long param_1)

{
  int iVar1;
  int *piVar2;
  
  if (*(int *)(param_1 + 8) != -1) {
    iVar1 = _shutdown(*(int *)(param_1 + 8),2);
    if ((iVar1 == 0) || (piVar2 = ___error(), *piVar2 != 9)) {
      _close(*(int *)(param_1 + 8));
    }
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    return;
  }
  return;
}


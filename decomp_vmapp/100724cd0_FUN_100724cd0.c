
void FUN_100724cd0(int *param_1)

{
  int *piVar1;
  int *piVar2;
  
  if (*param_1 == 7) {
    piVar2 = *(int **)(param_1 + 8);
    while (piVar2 != param_1 + 8) {
      piVar1 = *(int **)piVar2;
      FUN_100724b70(*(undefined8 *)(piVar2 + 6));
      _free(*(void **)(piVar2 + 4));
      _free(piVar2);
      piVar2 = piVar1;
    }
    _free(param_1);
    return;
  }
  return;
}


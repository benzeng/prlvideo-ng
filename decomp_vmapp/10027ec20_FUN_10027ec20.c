
bool FUN_10027ec20(char *param_1,char *param_2)

{
  bool bVar1;
  int *piVar2;
  int *piVar3;
  
  bVar1 = *param_1 != '\0' || *param_2 == '\0';
  if ((*param_1 != '\0') && (*param_2 != '\0')) {
    piVar2 = *(int **)(param_1 + 8);
    piVar3 = *(int **)(param_2 + 8);
    if ((long)*(int **)(param_1 + 0x10) - (long)piVar2 == *(long *)(param_2 + 0x10) - (long)piVar3)
    {
      bVar1 = true;
      for (; piVar2 != *(int **)(param_1 + 0x10); piVar2 = piVar2 + 1) {
        if (*piVar2 != *piVar3) {
          return false;
        }
        piVar3 = piVar3 + 1;
      }
    }
    else {
      bVar1 = false;
    }
  }
  return bVar1;
}


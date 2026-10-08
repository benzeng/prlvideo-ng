
undefined8 FUN_100ba3b20(int *param_1,char *param_2)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  
  uVar3 = 0;
  if (*param_1 == 7) {
    piVar2 = param_1 + 8;
    do {
      piVar2 = *(int **)piVar2;
      if (piVar2 == param_1 + 8) {
        return 0;
      }
      iVar1 = _strcmp(*(char **)(piVar2 + 4),param_2);
    } while (iVar1 != 0);
    uVar3 = *(undefined8 *)(piVar2 + 6);
  }
  return uVar3;
}


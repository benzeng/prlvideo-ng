
void FUN_100914604(long param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *(undefined4 *)(param_1 + 0x14);
  while( true ) {
    while( true ) {
      if ((**(char **)(param_1 + 8) == ']') || (*(int *)(param_1 + 0x10) != 0)) goto LAB_10091476b;
      if (**(char **)(param_1 + 8) != '^') break;
      uVar2 = *(undefined4 *)(param_1 + 0x14);
      *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 1;
      *(uint *)(param_1 + 0x14) = (uint)(*(int *)(param_1 + 0x14) == 0);
      FUN_10091458c(param_1);
      *(undefined4 *)(param_1 + 0x14) = uVar2;
    }
    if ((**(char **)(param_1 + 8) == '-') && (*(char *)(*(long *)(param_1 + 8) + 1) == '[')) break;
    if (**(char **)(param_1 + 8) != ']') {
      FUN_10091458c(param_1);
    }
  }
  uVar2 = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(param_1 + 0x14) = 2;
  *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 1;
  *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 1;
  FUN_100914604(param_1);
  if (**(char **)(param_1 + 8) == ']') {
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 1;
    *(undefined4 *)(param_1 + 0x14) = uVar2;
  }
  else {
    *(undefined4 *)(param_1 + 0x10) = 0x5aa;
    FUN_10090b6dd(param_1,"charClassExpr: \']\' expected");
  }
LAB_10091476b:
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  return;
}


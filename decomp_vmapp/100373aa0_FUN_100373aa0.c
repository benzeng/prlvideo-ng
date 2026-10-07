
void FUN_100373aa0(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  *param_1 = &PTR_FUN_1011187b8;
  plVar2 = (long *)param_1[3];
  if ((undefined8 *)*plVar2 == param_1) {
    *plVar2 = param_1[2];
  }
  plVar1 = param_1 + 1;
  if ((undefined8 *)plVar2[1] == param_1) {
    lVar3 = *plVar1;
    plVar2[1] = lVar3;
  }
  else {
    lVar3 = *plVar1;
  }
  if (lVar3 != 0) {
    *(undefined8 *)(lVar3 + 0x10) = param_1[2];
  }
  if (param_1[2] != 0) {
    *(long *)(param_1[2] + 8) = lVar3;
  }
  param_1[2] = 0;
  *plVar1 = 0;
  *(int *)(plVar2 + 2) = (int)plVar2[2] + -1;
  param_1[3] = 0;
  return;
}


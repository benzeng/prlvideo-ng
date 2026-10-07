
void FUN_10036d800(long param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = *(long **)(param_1 + 0x18);
  if (*plVar1 == param_1) {
    *plVar1 = *(long *)(param_1 + 0x10);
  }
  if (plVar1[1] == param_1) {
    lVar2 = *(long *)(param_1 + 8);
    plVar1[1] = lVar2;
  }
  else {
    lVar2 = *(long *)(param_1 + 8);
  }
  if (lVar2 != 0) {
    *(undefined8 *)(lVar2 + 0x10) = *(undefined8 *)(param_1 + 0x10);
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    *(long *)(*(long *)(param_1 + 0x10) + 8) = lVar2;
  }
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(int *)(plVar1 + 2) = (int)plVar1[2] + -1;
  *(undefined8 *)(param_1 + 0x18) = 0;
  return;
}


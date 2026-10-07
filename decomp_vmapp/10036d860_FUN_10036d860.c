
void FUN_10036d860(long param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  plVar2 = *(long **)(param_1 + 0x18);
  lVar3 = *plVar2;
  if (lVar3 != param_1) {
    plVar1 = (long *)(param_1 + 8);
    if (plVar2[1] == param_1) {
      lVar4 = *plVar1;
      plVar2[1] = lVar4;
    }
    else {
      lVar4 = *plVar1;
    }
    if (lVar4 != 0) {
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(param_1 + 0x10);
    }
    if (*(long *)(param_1 + 0x10) != 0) {
      *(long *)(*(long *)(param_1 + 0x10) + 8) = lVar4;
    }
    *(undefined8 *)(param_1 + 0x10) = 0;
    *plVar1 = 0;
    lVar4 = plVar2[2];
    *(int *)(plVar2 + 2) = (int)lVar4 + -1;
    *(long **)(param_1 + 0x18) = plVar2;
    if (lVar3 == 0) {
      plVar2[1] = param_1;
    }
    else {
      *(long *)(param_1 + 0x10) = lVar3;
      *(long *)(lVar3 + 8) = param_1;
    }
    *plVar2 = param_1;
    *(int *)(plVar2 + 2) = (int)lVar4;
  }
  return;
}


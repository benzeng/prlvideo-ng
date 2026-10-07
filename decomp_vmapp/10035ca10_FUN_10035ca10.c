
void FUN_10035ca10(long param_1,long param_2)

{
  int *piVar1;
  long lVar2;
  
  piVar1 = (int *)(param_2 + 0x24);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    if (*(long *)(param_1 + 0x20) == param_2) {
      *(undefined8 *)(param_1 + 0x20) = 0;
    }
    if (*(long *)(param_1 + 0x18) == param_2) {
      lVar2 = *(long *)(param_2 + 0x30);
      *(long *)(param_1 + 0x18) = lVar2;
    }
    else {
      lVar2 = *(long *)(param_2 + 0x30);
    }
    if (lVar2 != 0) {
      *(undefined8 *)(lVar2 + 0x38) = *(undefined8 *)(param_2 + 0x38);
    }
    if (*(long *)(param_2 + 0x38) != 0) {
      *(long *)(*(long *)(param_2 + 0x38) + 0x30) = lVar2;
    }
    *(undefined8 *)(param_2 + 0x30) = 0;
    *(undefined8 *)(param_2 + 0x38) = 0;
    *(undefined4 *)(param_2 + 0x28) = 0;
    lVar2 = *(long *)(param_1 + 8);
    if (lVar2 != 0) {
      *(long *)(lVar2 + 0x38) = param_2;
      *(long *)(param_2 + 0x30) = lVar2;
    }
    *(long *)(param_1 + 8) = param_2;
  }
  return;
}


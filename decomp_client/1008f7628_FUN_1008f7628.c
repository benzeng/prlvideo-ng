
void FUN_1008f7628(long param_1)

{
  long lVar1;
  
  if (0 < *(int *)(param_1 + 0x40)) {
    *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + -1;
    if (*(int *)(param_1 + 0x40) < 1) {
      *(undefined8 *)(param_1 + 0x38) = 0;
    }
    else {
      *(undefined8 *)(param_1 + 0x38) =
           *(undefined8 *)(*(long *)(param_1 + 0x48) + (long)*(int *)(param_1 + 0x40) * 8 + -8);
    }
    lVar1 = *(long *)(*(long *)(param_1 + 0x48) + (long)*(int *)(param_1 + 0x40) * 8);
    *(undefined8 *)(*(long *)(param_1 + 0x48) + (long)*(int *)(param_1 + 0x40) * 8) = 0;
    if (lVar1 != 0) {
      (*(code *)_xmlFree)(lVar1);
    }
  }
  return;
}


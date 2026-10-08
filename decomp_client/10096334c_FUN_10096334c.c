
void FUN_10096334c(long param_1)

{
  long lVar1;
  
  if (*(int *)(param_1 + 0x50) < 1) {
    *(undefined8 *)(param_1 + 0x48) = 0;
  }
  else {
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + -1;
    if (*(int *)(param_1 + 0x50) < 1) {
      *(undefined8 *)(param_1 + 0x48) = 0;
    }
    else {
      *(long *)(param_1 + 0x48) =
           *(long *)(param_1 + 0x58) + (long)*(int *)(param_1 + 0x50) * 0x28 + -0x28;
    }
    lVar1 = *(long *)(param_1 + 0x58) + (long)*(int *)(param_1 + 0x50) * 0x28;
    if ((*(uint *)(lVar1 + 4) & 1) != 0) {
      if (*(long *)(lVar1 + 0x18) != 0) {
        (*(code *)_xmlFree)(*(undefined8 *)(lVar1 + 0x18));
      }
      *(undefined8 *)(lVar1 + 0x18) = 0;
      if (*(long *)(lVar1 + 0x20) != 0) {
        (*(code *)_xmlFree)(*(undefined8 *)(lVar1 + 0x20));
      }
      *(undefined8 *)(lVar1 + 0x20) = 0;
      *(undefined4 *)(lVar1 + 4) = 0;
    }
  }
  return;
}


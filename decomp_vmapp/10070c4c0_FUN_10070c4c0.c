
void FUN_10070c4c0(long param_1)

{
  int *piVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar2 = *(long *)(param_1 + 0x10);
  lVar3 = *(long *)(lVar2 + 0x10);
  while (lVar3 != 0) {
    lVar4 = *(long *)(lVar3 + 0x20);
    *(long *)(lVar2 + 0x10) = lVar4;
    if (lVar4 == 0) {
      *(undefined8 *)(lVar2 + 0x18) = 0;
    }
    *(undefined8 *)(lVar3 + 0x20) = 0;
    (**(code **)(**(long **)(lVar3 + 0x40) + 0x18))();
    piVar1 = (int *)(*(long *)(param_1 + 0x10) + 0xa0);
    *piVar1 = *piVar1 + -1;
    FUN_10070aed0(lVar3);
    lVar2 = *(long *)(param_1 + 0x10);
    lVar3 = *(long *)(lVar2 + 0x10);
  }
  return;
}


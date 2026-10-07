
void FUN_10070d900(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = *(long *)(param_1 + 0x10);
  lVar2 = *(long *)(lVar1 + 0x10);
  while (lVar2 != 0) {
    lVar3 = *(long *)(lVar2 + 0x20);
    *(long *)(lVar1 + 0x10) = lVar3;
    if (lVar3 == 0) {
      *(undefined8 *)(lVar1 + 0x18) = 0;
    }
    *(undefined8 *)(lVar2 + 0x20) = 0;
    *(int *)(lVar1 + 0x20) = *(int *)(lVar1 + 0x20) + -1;
    (**(code **)(**(long **)(lVar2 + 0x40) + 0x18))();
    FUN_10070aed0(lVar2);
    lVar1 = *(long *)(param_1 + 0x10);
    lVar2 = *(long *)(lVar1 + 0x10);
  }
  return;
}


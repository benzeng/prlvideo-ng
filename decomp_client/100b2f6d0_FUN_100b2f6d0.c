
void FUN_100b2f6d0(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  
  for (plVar4 = *(long **)(param_1 + 0x10); plVar4 != (long *)(param_1 + 8);
      plVar4 = (long *)plVar4[1]) {
    if ((long *)plVar4[2] != (long *)0x0) {
      (**(code **)(*(long *)plVar4[2] + 0x20))();
    }
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    lVar1 = *(long *)(param_1 + 8);
    plVar4 = *(long **)(param_1 + 0x10);
    lVar2 = *plVar4;
    *(undefined8 *)(lVar2 + 8) = *(undefined8 *)(lVar1 + 8);
    **(long **)(lVar1 + 8) = lVar2;
    *(undefined8 *)(param_1 + 0x18) = 0;
    while (plVar4 != (long *)(param_1 + 8)) {
      plVar3 = (long *)plVar4[1];
      operator_delete(plVar4);
      plVar4 = plVar3;
    }
  }
  return;
}



void FUN_10058b0e0(long *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  
  for (plVar4 = (long *)param_1[1]; plVar4 != param_1; plVar4 = (long *)plVar4[1]) {
    if (((int)plVar4[3] == -1) && ((long *)plVar4[2] != (long *)0x0)) {
      (**(code **)(*(long *)plVar4[2] + 0x28))();
      (**(code **)(*(long *)plVar4[2] + 0x20))();
      plVar4[2] = 0;
    }
  }
  if (param_1[2] != 0) {
    lVar1 = *param_1;
    plVar4 = (long *)param_1[1];
    lVar2 = *plVar4;
    *(undefined8 *)(lVar2 + 8) = *(undefined8 *)(lVar1 + 8);
    **(long **)(lVar1 + 8) = lVar2;
    param_1[2] = 0;
    while (plVar4 != param_1) {
      plVar3 = (long *)plVar4[1];
      operator_delete(plVar4);
      plVar4 = plVar3;
    }
  }
  return;
}


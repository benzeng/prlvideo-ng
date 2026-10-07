
void FUN_1003feda0(long param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  
  *(undefined4 *)(param_1 + -0x10) = 0;
  *(undefined1 *)(param_1 + 0x28) = 0;
  plVar3 = *(long **)(param_1 + -0x20);
  while (plVar3 != (long *)(param_1 + -0x28)) {
    FUN_1003fee10(plVar3[2]);
    lVar1 = *plVar3;
    plVar2 = (long *)plVar3[1];
    *(long **)(lVar1 + 8) = plVar2;
    *(long *)plVar3[1] = lVar1;
    *(long *)(param_1 + -0x18) = *(long *)(param_1 + -0x18) + -1;
    operator_delete(plVar3);
    plVar3 = plVar2;
  }
  return;
}


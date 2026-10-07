
void FUN_10056e020(long param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  
  plVar3 = *(long **)(param_1 + 0x1238);
  while (plVar3 != (long *)(param_1 + 0x1238)) {
    lVar1 = *plVar3;
    plVar2 = (long *)plVar3[1];
    *(long **)(lVar1 + 8) = plVar2;
    *plVar2 = lVar1;
    *plVar3 = (long)plVar3;
    plVar3[1] = (long)plVar3;
    (*(code *)plVar3[3])(plVar3[2]);
    plVar3 = *(long **)(param_1 + 0x1238);
  }
  return;
}



void FUN_100288260(long param_1,long param_2)

{
  void *pvVar1;
  long lVar2;
  long *plVar3;
  
  if (param_2 != 0) {
    pvVar1 = *(void **)(param_2 + 0x90);
    if (pvVar1 != (void *)0x0) {
      FUN_10008d3f0(pvVar1);
      operator_delete(pvVar1);
    }
    lVar2 = *(long *)(param_2 + 0x98);
    plVar3 = *(long **)(param_2 + 0xa0);
    *(long **)(lVar2 + 8) = plVar3;
    *plVar3 = lVar2;
    lVar2 = *(long *)(param_1 + 0x3a0b0);
    *(long *)(lVar2 + 8) = param_2 + 0x98;
    *(long *)(param_2 + 0x98) = lVar2;
    *(long *)(param_2 + 0xa0) = param_1 + 0x3a0b0;
    *(long *)(param_1 + 0x3a0b0) = param_2 + 0x98;
  }
  return;
}


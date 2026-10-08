
long * FUN_100a32ed0(long param_1,long *param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  
  plVar4 = param_2;
  if (param_3 != param_4) {
    plVar4 = operator_new(0x18);
    *plVar4 = 0;
    lVar1 = *(long *)(param_3 + 0x10);
    plVar4[2] = lVar1;
    if (lVar1 != 0) {
      _CFRetain();
    }
    lVar6 = 1;
    plVar3 = plVar4;
    for (lVar1 = *(long *)(param_3 + 8); lVar1 != param_4; lVar1 = *(long *)(lVar1 + 8)) {
      plVar5 = operator_new(0x18);
      lVar2 = *(long *)(lVar1 + 0x10);
      plVar5[2] = lVar2;
      if (lVar2 != 0) {
        _CFRetain();
      }
      plVar3[1] = (long)plVar5;
      *plVar5 = (long)plVar3;
      lVar6 = lVar6 + 1;
      plVar3 = plVar5;
    }
    lVar1 = *param_2;
    *(long **)(lVar1 + 8) = plVar4;
    *plVar4 = lVar1;
    *param_2 = (long)plVar3;
    plVar3[1] = (long)param_2;
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + lVar6;
  }
  return plVar4;
}


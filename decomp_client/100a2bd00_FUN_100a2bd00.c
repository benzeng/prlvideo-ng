
long * FUN_100a2bd00(long param_1,long *param_2,long param_3,long param_4)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  
  plVar3 = param_2;
  if (param_3 != param_4) {
    plVar3 = operator_new(0x28);
    *plVar3 = 0;
    std::string::string((string *)(plVar3 + 2),(string *)(param_3 + 0x10));
    lVar5 = 1;
    plVar2 = plVar3;
    for (lVar1 = *(long *)(param_3 + 8); lVar1 != param_4; lVar1 = *(long *)(lVar1 + 8)) {
      plVar4 = operator_new(0x28);
      std::string::string((string *)(plVar4 + 2),(string *)(lVar1 + 0x10));
      plVar2[1] = (long)plVar4;
      *plVar4 = (long)plVar2;
      lVar5 = lVar5 + 1;
      plVar2 = plVar4;
    }
    lVar1 = *param_2;
    *(long **)(lVar1 + 8) = plVar3;
    *plVar3 = lVar1;
    *param_2 = (long)plVar2;
    plVar2[1] = (long)param_2;
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + lVar5;
  }
  return plVar3;
}


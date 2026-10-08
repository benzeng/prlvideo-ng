
void FUN_100a2ac20(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  
  *param_1 = (long)param_1;
  param_1[1] = (long)param_1;
  param_1[2] = 0;
  for (lVar1 = *(long *)(param_2 + 8); lVar1 != param_2; lVar1 = *(long *)(lVar1 + 8)) {
    plVar3 = operator_new(0x28);
    std::string::string((string *)(plVar3 + 2),(string *)(lVar1 + 0x10));
    plVar3[1] = (long)param_1;
    lVar2 = *param_1;
    *plVar3 = lVar2;
    *(long **)(lVar2 + 8) = plVar3;
    *param_1 = (long)plVar3;
    param_1[2] = param_1[2] + 1;
  }
  return;
}


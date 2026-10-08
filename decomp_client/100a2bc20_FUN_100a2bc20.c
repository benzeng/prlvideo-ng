
void FUN_100a2bc20(long *param_1,long param_2,long param_3)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  
  lVar3 = param_2;
  for (plVar4 = (long *)param_1[1]; (param_2 != param_3 && (lVar3 = param_2, plVar4 != param_1));
      plVar4 = (long *)plVar4[1]) {
    std::string::operator=((string *)(plVar4 + 2),(string *)(param_2 + 0x10));
    param_2 = *(long *)(param_2 + 8);
    lVar3 = param_3;
  }
  if (plVar4 != param_1) {
    lVar3 = *param_1;
    lVar1 = *plVar4;
    *(undefined8 *)(lVar1 + 8) = *(undefined8 *)(lVar3 + 8);
    **(long **)(lVar3 + 8) = lVar1;
    do {
      plVar2 = (long *)plVar4[1];
      param_1[2] = param_1[2] + -1;
      std::string::~string((string *)(plVar4 + 2));
      operator_delete(plVar4);
      plVar4 = plVar2;
    } while (plVar2 != param_1);
    return;
  }
  FUN_100a2bd00(param_1,param_1,lVar3,param_3,0);
  return;
}


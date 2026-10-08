
void FUN_100cd9ad0(long *param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  
  plVar3 = (long *)param_1[0x87];
  while (plVar3 != param_1 + 0x86) {
    (**(code **)(*param_1 + 0xf8))(param_1,plVar3[2]);
    (**(code **)(*(long *)plVar3[2] + 0x60))();
    lVar1 = *plVar3;
    plVar2 = (long *)plVar3[1];
    *(long **)(lVar1 + 8) = plVar2;
    *(long *)plVar3[1] = lVar1;
    param_1[0x88] = param_1[0x88] + -1;
    operator_delete(plVar3);
    plVar3 = plVar2;
  }
  return;
}


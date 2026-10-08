
void FUN_100a32de0(long *param_1,long param_2,long param_3)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  
  lVar4 = param_2;
  for (plVar3 = (long *)param_1[1]; (param_2 != param_3 && (lVar4 = param_2, plVar3 != param_1));
      plVar3 = (long *)plVar3[1]) {
    lVar4 = *(long *)(param_2 + 0x10);
    if (plVar3[2] != 0) {
      _CFRelease();
    }
    plVar3[2] = lVar4;
    if (lVar4 != 0) {
      _CFRetain(lVar4);
    }
    param_2 = *(long *)(param_2 + 8);
    lVar4 = param_3;
  }
  if (plVar3 != param_1) {
    lVar4 = *param_1;
    lVar1 = *plVar3;
    *(undefined8 *)(lVar1 + 8) = *(undefined8 *)(lVar4 + 8);
    **(long **)(lVar4 + 8) = lVar1;
    do {
      plVar2 = (long *)plVar3[1];
      param_1[2] = param_1[2] + -1;
      if (plVar3[2] != 0) {
        _CFRelease();
      }
      operator_delete(plVar3);
      plVar3 = plVar2;
    } while (plVar2 != param_1);
    return;
  }
  FUN_100a32ed0(param_1,param_1,lVar4,param_3,0);
  return;
}


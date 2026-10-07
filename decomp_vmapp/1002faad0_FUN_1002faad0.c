
void FUN_1002faad0(undefined8 param_1,long param_2,long param_3,undefined1 param_4,
                  undefined1 param_5)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  
  if (param_3 != 0) {
    *(long *)(param_2 + 0x10) = param_3;
    plVar2 = (long *)(param_3 + 0x20);
    do {
      plVar3 = plVar2;
      lVar1 = *plVar3;
      if (lVar1 == 0) break;
      plVar2 = (long *)(lVar1 + 0x38);
    } while (lVar1 != param_2);
    if (lVar1 == 0) {
      *plVar3 = param_2;
    }
    for (lVar1 = *(long *)(param_3 + 0x20); lVar1 != 0; lVar1 = *(long *)(lVar1 + 0x38)) {
      FUN_1002fa430(param_1,lVar1,param_4,param_5);
    }
  }
  return;
}


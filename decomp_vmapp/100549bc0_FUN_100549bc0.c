
void FUN_100549bc0(long *param_1)

{
  void *pvVar1;
  char cVar2;
  
  cVar2 = (**(code **)(*param_1 + 0x88))();
  if (cVar2 != '\0') {
    if (param_1[0x18] == 0) {
      _free((void *)param_1[0x19]);
      param_1[0x19] = 0;
    }
    else {
      FUN_10054e440();
      pvVar1 = (void *)param_1[0x18];
      if (pvVar1 != (void *)0x0) {
        FUN_100546d50(pvVar1);
        operator_delete(pvVar1);
      }
      param_1[0x18] = 0;
    }
    FUN_100549720(param_1);
    return;
  }
  FUN_1008e3970("","TransMem",0,"Anonymous guest memory: not active");
  return;
}


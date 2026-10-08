
void FUN_10014a880(undefined8 param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  if (param_2 - param_3 != 0) {
    lVar3 = 0;
    do {
      plVar2 = operator_new(8);
      lVar1 = **(long **)(param_4 + lVar3);
      *plVar2 = lVar1;
      if (lVar1 != 0) {
        _PrlHandle_AddRef();
      }
      *(long **)(param_2 + lVar3) = plVar2;
      lVar3 = lVar3 + 8;
    } while ((param_2 - param_3) + lVar3 != 0);
  }
  return;
}


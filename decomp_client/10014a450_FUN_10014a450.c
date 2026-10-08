
void FUN_10014a450(undefined8 *param_1,long *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  long *plVar3;
  
  if (*(uint *)*param_1 < 2) {
    puVar2 = (undefined8 *)QListData::append();
    plVar3 = operator_new(8);
    lVar1 = *param_2;
    *plVar3 = lVar1;
    if (lVar1 != 0) {
      _PrlHandle_AddRef();
    }
  }
  else {
    puVar2 = (undefined8 *)FUN_10014a6a0(param_1,0x7fffffff,1);
    plVar3 = operator_new(8);
    lVar1 = *param_2;
    *plVar3 = lVar1;
    if (lVar1 != 0) {
      _PrlHandle_AddRef();
    }
  }
  *puVar2 = plVar3;
  return;
}


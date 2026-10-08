
void _xmlXPtrLocationSetAdd(int *param_1,xmlXPathObjectPtr param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  int local_14;
  
  if ((param_1 != (int *)0x0) && (param_2 != (xmlXPathObjectPtr)0x0)) {
    for (local_14 = 0; local_14 < *param_1; local_14 = local_14 + 1) {
      iVar1 = FUN_1008f27db(*(undefined8 *)(*(long *)(param_1 + 2) + (long)local_14 * 8),param_2);
      if (iVar1 != 0) {
        _xmlXPathFreeObject(param_2);
        return;
      }
    }
    if (param_1[1] == 0) {
      uVar2 = (*(code *)_xmlMalloc)(0x50);
      *(undefined8 *)(param_1 + 2) = uVar2;
      if (*(long *)(param_1 + 2) == 0) {
        FUN_1008f21a1("adding location to set");
        return;
      }
      _memset(*(void **)(param_1 + 2),0,0x50);
      param_1[1] = 10;
    }
    else if (*param_1 == param_1[1]) {
      param_1[1] = param_1[1] * 2;
      lVar3 = (*(code *)_xmlRealloc)(*(undefined8 *)(param_1 + 2),(long)param_1[1] * 8);
      if (lVar3 == 0) {
        FUN_1008f21a1("adding location to set");
        return;
      }
      *(long *)(param_1 + 2) = lVar3;
    }
    iVar1 = *param_1;
    *(xmlXPathObjectPtr *)(*(long *)(param_1 + 2) + (long)iVar1 * 8) = param_2;
    *param_1 = iVar1 + 1;
  }
  return;
}



void _xmlXPtrRangeInsideFunction(long param_1,int param_2)

{
  int *piVar1;
  xmlXPathObjectPtr obj;
  undefined8 uVar2;
  undefined8 uVar3;
  int local_2c;
  xmlXPathObjectPtr local_28;
  
  if (param_1 != 0) {
    if (param_2 == 1) {
      if ((*(long *)(param_1 + 0x20) == 0) ||
         ((**(int **)(param_1 + 0x20) != 7 && (**(int **)(param_1 + 0x20) != 1)))) {
        _xmlXPathErr(param_1,0xb);
      }
      else {
        obj = (xmlXPathObjectPtr)_valuePop(param_1);
        local_28 = obj;
        if (obj->type == XPATH_NODESET) {
          local_28 = (xmlXPathObjectPtr)_xmlXPtrNewLocationSetNodeSet(obj->nodesetval);
          _xmlXPathFreeObject(obj);
        }
        piVar1 = local_28->user;
        uVar2 = _xmlXPtrLocationSetCreate(0);
        for (local_2c = 0; local_2c < *piVar1; local_2c = local_2c + 1) {
          uVar3 = FUN_1008f56c4(param_1,*(undefined8 *)(*(long *)(piVar1 + 2) + (long)local_2c * 8))
          ;
          _xmlXPtrLocationSetAdd(uVar2,uVar3);
        }
        uVar2 = _xmlXPtrWrapLocationSet(uVar2);
        _valuePush(param_1,uVar2);
        _xmlXPathFreeObject(local_28);
      }
    }
    else {
      _xmlXPathErr(param_1,0xc);
    }
  }
  return;
}


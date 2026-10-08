
undefined4 * _xmlXPtrNewLocationSetNodes(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined4 *local_30;
  
  local_30 = (undefined4 *)(*(code *)_xmlMalloc)(0x48);
  if (local_30 == (undefined4 *)0x0) {
    FUN_1008f21a1("allocating locationset");
    local_30 = (undefined4 *)0x0;
  }
  else {
    _memset(local_30,0,0x48);
    *local_30 = 7;
    if (param_2 == 0) {
      uVar1 = _xmlXPtrNewCollapsedRange(param_1);
      uVar1 = _xmlXPtrLocationSetCreate(uVar1);
      *(undefined8 *)(local_30 + 10) = uVar1;
    }
    else {
      uVar1 = _xmlXPtrNewRangeNodes(param_1,param_2);
      uVar1 = _xmlXPtrLocationSetCreate(uVar1);
      *(undefined8 *)(local_30 + 10) = uVar1;
    }
  }
  return local_30;
}


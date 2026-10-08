
undefined4 * _xmlXPtrNewLocationSetNodeSet(int *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 *local_38;
  int local_14;
  
  local_38 = (undefined4 *)(*(code *)_xmlMalloc)(0x48);
  if (local_38 == (undefined4 *)0x0) {
    FUN_1008f21a1("allocating locationset");
    local_38 = (undefined4 *)0x0;
  }
  else {
    _memset(local_38,0,0x48);
    *local_38 = 7;
    if ((param_1 != (int *)0x0) && (lVar1 = _xmlXPtrLocationSetCreate(0), lVar1 != 0)) {
      for (local_14 = 0; local_14 < *param_1; local_14 = local_14 + 1) {
        uVar2 = _xmlXPtrNewCollapsedRange
                          (*(undefined8 *)(*(long *)(param_1 + 2) + (long)local_14 * 8));
        _xmlXPtrLocationSetAdd(lVar1,uVar2);
      }
      *(long *)(local_38 + 10) = lVar1;
    }
  }
  return local_38;
}


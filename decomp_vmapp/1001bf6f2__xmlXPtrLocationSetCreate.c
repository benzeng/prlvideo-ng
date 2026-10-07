
int * _xmlXPtrLocationSetCreate(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  int *local_28;
  
  local_28 = (int *)(*(code *)_xmlMalloc)(0x10);
  if (local_28 == (int *)0x0) {
    FUN_1001be879("allocating locationset");
    local_28 = (int *)0x0;
  }
  else {
    local_28[0] = 0;
    local_28[1] = 0;
    local_28[2] = 0;
    local_28[3] = 0;
    if (param_1 != 0) {
      uVar2 = (*(code *)_xmlMalloc)(0x50);
      *(undefined8 *)(local_28 + 2) = uVar2;
      if (*(long *)(local_28 + 2) == 0) {
        FUN_1001be879("allocating locationset");
        (*(code *)_xmlFree)(local_28);
        local_28 = (int *)0x0;
      }
      else {
        _memset(*(void **)(local_28 + 2),0,0x50);
        local_28[1] = 10;
        iVar1 = *local_28;
        *(long *)(*(long *)(local_28 + 2) + (long)iVar1 * 8) = param_1;
        *local_28 = iVar1 + 1;
      }
    }
  }
  return local_28;
}


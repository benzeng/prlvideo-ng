
undefined4 * FUN_10020c916(long param_1)

{
  undefined8 uVar1;
  undefined4 *local_28;
  undefined4 *local_18;
  int local_c;
  
  local_18 = (undefined4 *)0x0;
  if (*(int *)(param_1 + 0xb0) < *(int *)(param_1 + 0xa4)) {
    FUN_1001e8d2a(param_1,"xmlSchemaGetFreshElemInfo","inconsistent depth encountered");
    local_28 = (undefined4 *)0x0;
  }
  else {
    if (*(long *)(param_1 + 0xa8) == 0) {
      uVar1 = (*(code *)_xmlMalloc)(0x50);
      *(undefined8 *)(param_1 + 0xa8) = uVar1;
      if (*(long *)(param_1 + 0xa8) == 0) {
        FUN_1001e835c(param_1,"allocating the element info array",0);
        return (undefined4 *)0x0;
      }
      _memset(*(void **)(param_1 + 0xa8),0,0x50);
      *(undefined4 *)(param_1 + 0xb0) = 10;
    }
    else if (*(int *)(param_1 + 0xa4) < *(int *)(param_1 + 0xb0)) {
      local_18 = *(undefined4 **)(*(long *)(param_1 + 0xa8) + (long)*(int *)(param_1 + 0xa4) * 8);
    }
    else {
      local_c = *(int *)(param_1 + 0xb0);
      *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) * 2;
      uVar1 = (*(code *)_xmlRealloc)
                        (*(undefined8 *)(param_1 + 0xa8),(long)*(int *)(param_1 + 0xb0) * 8);
      *(undefined8 *)(param_1 + 0xa8) = uVar1;
      if (*(long *)(param_1 + 0xa8) == 0) {
        FUN_1001e835c(param_1,"re-allocating the element info array",0);
        return (undefined4 *)0x0;
      }
      for (; local_c < *(int *)(param_1 + 0xb0); local_c = local_c + 1) {
        *(undefined8 *)(*(long *)(param_1 + 0xa8) + (long)local_c * 8) = 0;
      }
    }
    if (local_18 == (undefined4 *)0x0) {
      local_18 = (undefined4 *)(*(code *)_xmlMalloc)(0x88);
      if (local_18 == (undefined4 *)0x0) {
        FUN_1001e835c(param_1,"allocating an element info",0);
        return (undefined4 *)0x0;
      }
      *(undefined4 **)(*(long *)(param_1 + 0xa8) + (long)*(int *)(param_1 + 0xa4) * 8) = local_18;
    }
    else if (*(long *)(local_18 + 6) != 0) {
      FUN_1001e8d2a(param_1,"xmlSchemaGetFreshElemInfo","elem info has not been cleared");
      return (undefined4 *)0x0;
    }
    _memset(local_18,0,0x88);
    *local_18 = 1;
    local_18[0x16] = *(undefined4 *)(param_1 + 0xa4);
    local_28 = local_18;
  }
  return local_28;
}


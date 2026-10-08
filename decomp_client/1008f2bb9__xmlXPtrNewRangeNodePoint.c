
undefined4 * _xmlXPtrNewRangeNodePoint(long param_1,int *param_2)

{
  undefined4 *local_30;
  
  if (param_1 == 0) {
    local_30 = (undefined4 *)0x0;
  }
  else if (param_2 == (int *)0x0) {
    local_30 = (undefined4 *)0x0;
  }
  else if (*(int *)(param_1 + 8) == 5) {
    if (*param_2 == 5) {
      local_30 = (undefined4 *)(*(code *)_xmlMalloc)(0x48);
      if (local_30 == (undefined4 *)0x0) {
        FUN_1008f21a1("allocating range");
        local_30 = (undefined4 *)0x0;
      }
      else {
        _memset(local_30,0,0x48);
        *local_30 = 6;
        *(long *)(local_30 + 10) = param_1;
        local_30[0xc] = 0xffffffff;
        *(undefined8 *)(local_30 + 0xe) = *(undefined8 *)(param_2 + 10);
        local_30[0x10] = param_2[0xc];
        FUN_1008f272a(local_30);
      }
    }
    else {
      local_30 = (undefined4 *)0x0;
    }
  }
  else {
    local_30 = (undefined4 *)0x0;
  }
  return local_30;
}


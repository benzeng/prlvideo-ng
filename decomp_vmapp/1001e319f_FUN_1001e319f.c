
undefined8 * FUN_1001e319f(long param_1,undefined1 param_2)

{
  undefined8 *local_30;
  
  if (*(int *)(param_1 + 0x18) < 10000) {
    local_30 = (undefined8 *)(*(code *)_xmlMalloc)(0x28);
    if (local_30 == (undefined8 *)0x0) {
      local_30 = (undefined8 *)0x0;
    }
    else {
      *local_30 = 0;
      local_30[1] = 0;
      local_30[2] = 0;
      local_30[3] = 0;
      local_30[4] = 0;
      *(undefined1 *)local_30 = param_2;
      local_30[3] = 0;
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
      *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
    }
  }
  else {
    local_30 = (undefined8 *)0x0;
  }
  return local_30;
}


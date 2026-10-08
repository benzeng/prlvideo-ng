
undefined8 * FUN_10091e7b6(undefined8 param_1,undefined8 param_2)

{
  undefined8 *local_30;
  
  local_30 = (undefined8 *)(*(code *)_xmlMalloc)(0x10);
  if (local_30 == (undefined8 *)0x0) {
    FUN_10091b97e(param_1,"allocating annotation",param_2);
    local_30 = (undefined8 *)0x0;
  }
  else {
    *local_30 = 0;
    local_30[1] = 0;
    local_30[1] = param_2;
  }
  return local_30;
}


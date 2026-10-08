
undefined8 * FUN_1009222de(undefined8 param_1)

{
  undefined8 *local_28;
  
  local_28 = (undefined8 *)(*(code *)_xmlMalloc)(0x10);
  if (local_28 == (undefined8 *)0x0) {
    FUN_10091b97e(param_1,"creating wildcard namespace constraint",0);
    local_28 = (undefined8 *)0x0;
  }
  else {
    local_28[1] = 0;
    *local_28 = 0;
  }
  return local_28;
}


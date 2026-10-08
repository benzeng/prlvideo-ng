
undefined8 * FUN_10093d419(undefined8 param_1)

{
  undefined8 *local_28;
  
  local_28 = (undefined8 *)(*(code *)_xmlMalloc)(0x28);
  if (local_28 == (undefined8 *)0x0) {
    FUN_10091bc84(0,"allocating a PSVI IDC binding item",0);
    local_28 = (undefined8 *)0x0;
  }
  else {
    *local_28 = 0;
    local_28[1] = 0;
    local_28[2] = 0;
    local_28[3] = 0;
    local_28[4] = 0;
    local_28[1] = param_1;
  }
  return local_28;
}


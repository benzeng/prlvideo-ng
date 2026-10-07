
undefined4 *
FUN_1001d894c(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
             undefined4 param_5)

{
  undefined4 *local_38;
  
  local_38 = (undefined4 *)(*(code *)_xmlMalloc)(0x18);
  if (local_38 == (undefined4 *)0x0) {
    FUN_1001d7cf4(param_1,"allocating range");
    local_38 = (undefined4 *)0x0;
  }
  else {
    *local_38 = param_2;
    local_38[1] = param_3;
    local_38[2] = param_4;
    local_38[3] = param_5;
  }
  return local_38;
}


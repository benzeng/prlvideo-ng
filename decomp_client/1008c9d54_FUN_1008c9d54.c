
long FUN_1008c9d54(long param_1,undefined8 *param_2)

{
  long local_30;
  undefined8 local_10;
  
  local_10 = 0;
  *param_2 = 0;
  local_30 = FUN_1008c621c(param_1);
  if (local_30 == 0) {
    FUN_1008c3ec0(param_1,0x44,"error parsing attribute name\n",0,0);
    local_30 = 0;
  }
  else {
    FUN_1008c47ba(param_1);
    if (**(char **)(*(long *)(param_1 + 0x38) + 0x20) == '=') {
      _xmlNextChar(param_1);
      FUN_1008c47ba(param_1);
      local_10 = FUN_1008c748c(param_1);
    }
    *param_2 = local_10;
  }
  return local_30;
}


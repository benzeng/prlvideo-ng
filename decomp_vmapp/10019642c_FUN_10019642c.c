
long FUN_10019642c(long param_1,undefined8 *param_2)

{
  long local_30;
  undefined8 local_10;
  
  local_10 = 0;
  *param_2 = 0;
  local_30 = FUN_1001928f4(param_1);
  if (local_30 == 0) {
    FUN_100190598(param_1,0x44,"error parsing attribute name\n",0,0);
    local_30 = 0;
  }
  else {
    FUN_100190e92(param_1);
    if (**(char **)(*(long *)(param_1 + 0x38) + 0x20) == '=') {
      _xmlNextChar(param_1);
      FUN_100190e92(param_1);
      local_10 = FUN_100193b64(param_1);
    }
    *param_2 = local_10;
  }
  return local_30;
}



long FUN_100193b64(long param_1)

{
  long local_10;
  
  if (**(char **)(*(long *)(param_1 + 0x38) + 0x20) == '\"') {
    _xmlNextChar(param_1);
    local_10 = FUN_100193144(param_1,0x22);
    if (**(char **)(*(long *)(param_1 + 0x38) + 0x20) == '\"') {
      _xmlNextChar(param_1);
    }
    else {
      FUN_100190598(param_1,0x28,"AttValue: \" expected\n",0,0);
    }
  }
  else if (**(char **)(*(long *)(param_1 + 0x38) + 0x20) == '\'') {
    _xmlNextChar(param_1);
    local_10 = FUN_100193144(param_1,0x27);
    if (**(char **)(*(long *)(param_1 + 0x38) + 0x20) == '\'') {
      _xmlNextChar(param_1);
    }
    else {
      FUN_100190598(param_1,0x28,"AttValue: \' expected\n",0,0);
    }
  }
  else {
    local_10 = FUN_100193144(param_1,0);
    if (local_10 == 0) {
      FUN_100190598(param_1,0x29,"AttValue: no value found\n",0,0);
    }
  }
  return local_10;
}



void FUN_100981ab6(int param_1,undefined8 param_2,undefined8 param_3)

{
  char *local_10;
  
  if (param_1 == 0x579) {
    local_10 = "invalid character value";
    goto LAB_100981b47;
  }
  if (param_1 < 0x57a) {
    if (param_1 == 0x578) {
      local_10 = "string is not in UTF-8";
      goto LAB_100981b47;
    }
  }
  else {
    if (param_1 == 0x57a) {
      local_10 = "document has no DOCTYPE";
      goto LAB_100981b47;
    }
    if (param_1 == 0x57b) {
      local_10 = "unknown encoding %s";
      goto LAB_100981b47;
    }
  }
  local_10 = "unexpected error number";
LAB_100981b47:
  ___xmlSimpleError(7,param_1,param_2,local_10,param_3);
  return;
}


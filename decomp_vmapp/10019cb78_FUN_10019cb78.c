
void FUN_10019cb78(int param_1,undefined8 param_2,undefined8 param_3)

{
  char *local_10;
  
  if (param_1 == 0x579) {
    local_10 = "invalid character value";
    goto LAB_10019cc09;
  }
  if (param_1 < 0x57a) {
    if (param_1 == 0x578) {
      local_10 = "string is not in UTF-8";
      goto LAB_10019cc09;
    }
  }
  else {
    if (param_1 == 0x57a) {
      local_10 = "HTML has no DOCTYPE";
      goto LAB_10019cc09;
    }
    if (param_1 == 0x57b) {
      local_10 = "unknown encoding %s";
      goto LAB_10019cc09;
    }
  }
  local_10 = "unexpected error number";
LAB_10019cc09:
  ___xmlSimpleError(7,param_1,param_2,local_10,param_3);
  return;
}


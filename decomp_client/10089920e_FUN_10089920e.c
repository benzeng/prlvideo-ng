
void FUN_10089920e(int param_1,undefined8 param_2,undefined8 param_3)

{
  char *local_10;
  
  if (param_1 == 0x515) {
    local_10 = "invalid decimal character value\n";
  }
  else if (param_1 == 0x516) {
    local_10 = "unterminated entity reference %15s\n";
  }
  else if (param_1 == 0x514) {
    local_10 = "invalid hexadecimal character value\n";
  }
  else {
    local_10 = "unexpected error number\n";
  }
  ___xmlSimpleError(2,param_1,param_2,local_10,param_3);
  return;
}


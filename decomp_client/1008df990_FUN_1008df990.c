
int FUN_1008df990(byte *param_1)

{
  int local_14;
  
  if (param_1 == (byte *)0x0) {
    local_14 = 0;
  }
  else if (*param_1 == 0) {
    local_14 = 0;
  }
  else {
    local_14 = (uint)*param_1 + (uint)param_1[1] * 0x100;
  }
  return local_14;
}


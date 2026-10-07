
long FUN_1002429ff(byte *param_1,int param_2)

{
  long local_30;
  int local_24;
  long local_10;
  
  if (param_1 == (byte *)0x0) {
    local_30 = 0;
  }
  else {
    local_10 = (ulong)*param_1 * 0x20;
    local_24 = param_2;
    if (10 < param_2) {
      local_10 = local_10 + (ulong)param_1[(long)param_2 + -1];
      local_24 = 10;
    }
    switch(local_24) {
    case 10:
      local_10 = local_10 + (ulong)param_1[9];
    case 9:
      local_10 = local_10 + (ulong)param_1[8];
    case 8:
      local_10 = local_10 + (ulong)param_1[7];
    case 7:
      local_10 = local_10 + (ulong)param_1[6];
    case 6:
      local_10 = local_10 + (ulong)param_1[5];
    case 5:
      local_10 = local_10 + (ulong)param_1[4];
    case 4:
      local_10 = local_10 + (ulong)param_1[3];
    case 3:
      local_10 = local_10 + (ulong)param_1[2];
    case 2:
      local_10 = local_10 + (ulong)param_1[1];
    default:
      local_30 = local_10;
    }
  }
  return local_30;
}


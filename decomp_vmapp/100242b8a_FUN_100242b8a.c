
long FUN_100242b8a(byte *param_1,byte *param_2,int param_3)

{
  long local_38;
  int local_2c;
  long local_18;
  int local_c;
  
  if (param_1 == (byte *)0x0) {
    local_38 = FUN_1002429ff(param_2,param_3);
  }
  else {
    local_c = _xmlStrlen(param_1);
    if (local_c == 0) {
      local_18 = 0x6cc;
    }
    else {
      local_18 = (long)(int)(((uint)*param_1 + (uint)*param_1) * 0xf);
    }
    local_2c = param_3;
    if (10 < param_3) {
      local_18 = local_18 + (ulong)param_2[(long)(param_3 - local_c) + -2];
      local_2c = 10;
      if (10 < local_c) {
        local_c = 10;
      }
    }
    switch(local_c) {
    case 10:
      local_18 = local_18 + (ulong)param_1[9];
    case 9:
      local_18 = local_18 + (ulong)param_1[8];
    case 8:
      local_18 = local_18 + (ulong)param_1[7];
    case 7:
      local_18 = local_18 + (ulong)param_1[6];
    case 6:
      local_18 = local_18 + (ulong)param_1[5];
    case 5:
      local_18 = local_18 + (ulong)param_1[4];
    case 4:
      local_18 = local_18 + (ulong)param_1[3];
    case 3:
      local_18 = local_18 + (ulong)param_1[2];
    case 2:
      local_18 = local_18 + (ulong)param_1[1];
    case 1:
      local_18 = local_18 + (ulong)*param_1;
    default:
      local_2c = local_2c - local_c;
      if (0 < local_2c) {
        local_18 = local_18 + 0x3a;
        local_2c = local_2c + -1;
      }
    }
    switch(local_2c) {
    case 10:
      local_18 = local_18 + (ulong)param_2[9];
    case 9:
      local_18 = local_18 + (ulong)param_2[8];
    case 8:
      local_18 = local_18 + (ulong)param_2[7];
    case 7:
      local_18 = local_18 + (ulong)param_2[6];
    case 6:
      local_18 = local_18 + (ulong)param_2[5];
    case 5:
      local_18 = local_18 + (ulong)param_2[4];
    case 4:
      local_18 = local_18 + (ulong)param_2[3];
    case 3:
      local_18 = local_18 + (ulong)param_2[2];
    case 2:
      local_18 = local_18 + (ulong)param_2[1];
    case 1:
      local_18 = local_18 + (ulong)*param_2;
    default:
      local_38 = local_18;
    }
  }
  return local_38;
}


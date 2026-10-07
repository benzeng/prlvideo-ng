
int _xmlCopyCharMultiByte(byte *param_1,int param_2)

{
  int local_28;
  byte *local_20;
  int local_c;
  
  if (param_1 == (byte *)0x0) {
    local_28 = 0;
  }
  else if (param_2 < 0x80) {
    *param_1 = (byte)param_2;
    local_28 = 1;
  }
  else {
    if (param_2 < 0x800) {
      *param_1 = (byte)(param_2 >> 6) | 0xc0;
      local_20 = param_1 + 1;
      local_c = 0;
    }
    else if (param_2 < 0x10000) {
      *param_1 = (byte)(param_2 >> 0xc) | 0xe0;
      local_20 = param_1 + 1;
      local_c = 6;
    }
    else {
      if (0x10ffff < param_2) {
        FUN_10013fcde(0,9,"Internal error, xmlCopyCharMultiByte 0x%X out of bound\n",param_2);
        return 0;
      }
      *param_1 = (byte)(param_2 >> 0x12) | 0xf0;
      local_20 = param_1 + 1;
      local_c = 0xc;
    }
    for (; -1 < local_c; local_c = local_c + -6) {
      *local_20 = (byte)(param_2 >> ((byte)local_c & 0x1f)) & 0x3f | 0x80;
      local_20 = local_20 + 1;
    }
    local_28 = (int)local_20 - (int)param_1;
  }
  return local_28;
}


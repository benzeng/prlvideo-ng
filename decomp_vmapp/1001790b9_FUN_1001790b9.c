
int FUN_1001790b9(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  int local_21c;
  xmlChar local_208 [504];
  int local_10;
  uint local_c;
  
  local_10 = -1;
  if ((param_1 == (undefined8 *)0x0) || (param_2 == (undefined8 *)0x0)) {
    local_21c = -1;
  }
  else {
    do {
      local_c = _deflate((z_streamp)(param_1 + 3),4);
      if ((local_c == 0) && (iVar1 = FUN_100178dca(param_1,*param_1), iVar1 == -1)) {
        return -1;
      }
    } while (local_c == 0);
    if (local_c == 1) {
      if ((*(uint *)(param_1 + 7) < 0x10) && (iVar1 = FUN_100178dca(param_1,0x10), iVar1 == -1)) {
        return -1;
      }
      FUN_100178adb(param_1,param_1[1]);
      FUN_100178adb(param_1,param_1[5]);
      local_10 = (int)param_1[6] - (int)param_1[2];
      *param_2 = param_1[2];
    }
    else {
      _xmlStrPrintf(local_208,500,(xmlChar *)"xmlZMemBuffGetContent:  %s - %d\n",
                    "Error flushing zlib buffers.  Error code",(ulong)local_c);
      FUN_100177e16(0x60a,local_208);
    }
    local_21c = local_10;
  }
  return local_21c;
}


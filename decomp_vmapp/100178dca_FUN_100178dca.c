
undefined4 FUN_100178dca(long *param_1,long param_2)

{
  undefined4 local_22c;
  xmlChar local_218 [500];
  undefined4 local_24;
  long local_20;
  long local_18;
  long local_10;
  
  local_24 = 0xffffffff;
  local_10 = 0;
  if (param_1 == (long *)0x0) {
    local_22c = 0xffffffff;
  }
  else if (param_2 == 0) {
    local_22c = 0;
  }
  else {
    local_18 = param_1[6] - param_1[2];
    local_20 = *param_1 + param_2;
    local_10 = (*(code *)_xmlRealloc)(param_1[2],local_20);
    if (local_10 == 0) {
      _xmlStrPrintf(local_218,500,(xmlChar *)"xmlZMemBuffExtend:  %s %lu bytes.\n",
                    "Allocation failure extending output buffer to",local_20);
      FUN_100177e16(0x60a,local_218);
    }
    else {
      local_24 = 0;
      *param_1 = local_20;
      param_1[2] = local_10;
      param_1[6] = local_18 + local_10;
      *(int *)(param_1 + 7) = (int)local_20 - (int)local_18;
    }
    local_22c = local_24;
  }
  return local_22c;
}


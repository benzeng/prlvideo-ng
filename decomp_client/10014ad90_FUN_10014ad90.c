
uint * FUN_10014ad90(uint *param_1)

{
  _sprintf((char *)(param_1 + 3),"uIpStart: %08x\nuIpEnd: %08x\nuIpMask: %08x",(ulong)*param_1,
           (ulong)param_1[1],(ulong)param_1[2]);
  return param_1 + 3;
}


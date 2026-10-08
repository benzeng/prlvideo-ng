
void FUN_1008f6f28(long param_1,undefined8 param_2,undefined8 param_3)

{
  if (param_1 != 0) {
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 1;
  }
  ___xmlRaiseError(0,0,0,param_1,param_2,0xb,2,2,0,0,param_3,0,0,0,0,
                   "Memory allocation failed : %s\n",param_3);
  return;
}


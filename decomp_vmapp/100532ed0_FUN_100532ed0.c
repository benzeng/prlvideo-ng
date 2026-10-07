
void FUN_100532ed0(long param_1,void *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0xa8);
  if (2 < DAT_1011b55f8) {
    FUN_1008e3970("","VmCliPathResolverHost",3,"CVMCPathResolver::processRequest");
  }
  if (*(int *)((long)param_2 + 0x1c) == 2) {
    FUN_100531950(uVar1,param_2);
  }
  else if (*(int *)((long)param_2 + 0x1c) == 1) {
    FUN_1005305b0(uVar1,param_2);
  }
  _free(param_2);
  return;
}


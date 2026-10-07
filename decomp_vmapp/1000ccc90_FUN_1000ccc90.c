
bool FUN_1000ccc90(long param_1)

{
  bool bVar1;
  
  FUN_1008e3970("","vm",0,"Waiting for disk...");
  FUN_1005a7950(param_1 + 0x370);
  bVar1 = *(int *)(param_1 + 500) == 0;
  if (bVar1) {
    FUN_1008e3970("","vm",0,"Waiting for disk...Completed.");
  }
  else {
    FUN_1008e3970("","vm",0,"Waiting for disk...Failed.");
  }
  return bVar1;
}


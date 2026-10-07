
void FUN_1007884d0(undefined8 *param_1,undefined4 param_2)

{
  int iVar1;
  
  *param_1 = &PTR_FUN_100bcf0e0;
  *(undefined4 *)(param_1 + 1) = 0;
  iVar1 = _IORegistryEntryGetChildIterator(param_2,"IOService",param_1 + 1);
  if (iVar1 != 0) {
    FUN_1008e3970("","HostUtils",0,"Can\'t create iterator %d");
    return;
  }
  return;
}


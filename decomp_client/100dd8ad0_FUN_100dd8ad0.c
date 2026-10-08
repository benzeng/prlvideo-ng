
void FUN_100dd8ad0(undefined8 *param_1,undefined4 param_2)

{
  int iVar1;
  
  *param_1 = &PTR_FUN_10225c3f8;
  *(undefined4 *)(param_1 + 1) = 0;
  iVar1 = _IORegistryEntryGetChildIterator(param_2,"IOService",param_1 + 1);
  if (iVar1 != 0) {
    FUN_100df99c0("","HostUtils",0,"Can\'t create iterator %d");
    return;
  }
  return;
}


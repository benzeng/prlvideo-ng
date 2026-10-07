
void FUN_1000d5ae0(long param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x40))();
  if (cVar1 != '\0') {
    return;
  }
  FUN_1008e3970("","vm",0,"CSwapMem::DiscardPages() failed");
  return;
}


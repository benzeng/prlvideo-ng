
void FUN_10052f7f0(void)

{
  void *pvVar1;
  
  if (DAT_1011cc990 == (void *)0x0) {
    pvVar1 = operator_new(0x48);
    FUN_10052f9f0(pvVar1);
    DAT_1011cc990 = pvVar1;
  }
  else if (0 < DAT_1011b55f8) {
    FUN_1008e3970("","VmCliPathResolverHost",1,"PathResolver tool instance already exists");
    return;
  }
  return;
}


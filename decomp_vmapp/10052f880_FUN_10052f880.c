
void FUN_10052f880(void)

{
  if (DAT_1011cc990 != (long *)0x0) {
    (**(code **)(*DAT_1011cc990 + 8))();
    DAT_1011cc990 = (long *)0x0;
    return;
  }
  if (0 < DAT_1011b55f8) {
    FUN_1008e3970("","VmCliPathResolverHost",1,"PathResolver tool instance doesn\'t exist");
    return;
  }
  return;
}


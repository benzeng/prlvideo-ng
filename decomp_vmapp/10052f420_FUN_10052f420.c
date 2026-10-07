
void FUN_10052f420(void)

{
  if (DAT_1011cc988 != (long *)0x0) {
    (**(code **)(*DAT_1011cc988 + 8))();
    DAT_1011cc988 = (long *)0x0;
    return;
  }
  if (0 < DAT_1011b55f8) {
    FUN_1008e3970("","VmCliPresentationHost",1,"Presentation tool instance doesn\'t exist");
    return;
  }
  return;
}


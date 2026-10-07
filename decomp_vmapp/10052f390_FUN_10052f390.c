
void FUN_10052f390(void)

{
  void *pvVar1;
  
  if (DAT_1011cc988 == (void *)0x0) {
    pvVar1 = operator_new(0x50);
    FUN_10052f480(pvVar1);
    DAT_1011cc988 = pvVar1;
  }
  else if (0 < DAT_1011b55f8) {
    FUN_1008e3970("","VmCliPresentationHost",1,"Presentation tool instance already exists");
    return;
  }
  return;
}


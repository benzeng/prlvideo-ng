
void FUN_1002f7310(long param_1,undefined4 param_2)

{
  char cVar1;
  void *pvVar2;
  
  cVar1 = CAbstractTask::isFinished();
  if (cVar1 != '\0') {
    return;
  }
  if (*(char *)(param_1 + 0x58) != '\0') {
    if (DAT_102310a08 == (void *)0x0) {
      pvVar2 = operator_new(0x220);
      FUN_1007cc3f0(pvVar2);
      DAT_102273890 = 1;
      DAT_102310a08 = pvVar2;
    }
    FUN_1007d7860(DAT_102310a08,param_2);
  }
  CAbstractTask::finish((int)param_1);
  return;
}



void FUN_100699e60(long param_1)

{
  char cVar1;
  void *pvVar2;
  
  cVar1 = FUN_1001b7c80(*(undefined8 *)(param_1 + 0x28));
  if (cVar1 != '\0') {
    FUN_100699ec0(param_1);
    return;
  }
  pvVar2 = operator_new(0x28);
  FUN_100266e50(pvVar2,*(undefined8 *)(param_1 + 0x28));
  CAbstractTask::execute();
  return;
}


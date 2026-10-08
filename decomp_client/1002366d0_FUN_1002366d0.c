
void FUN_1002366d0(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = CAbstractTask::getCurrentSubTask();
  if (iVar1 == 10) {
    FUN_100237700(param_1);
    return;
  }
  if (iVar1 == 9) {
    FUN_100236990();
    return;
  }
  if (iVar1 == 8) {
    FUN_100236710();
    return;
  }
  FUN_100230a60();
  return;
}


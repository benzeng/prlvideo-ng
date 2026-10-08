
bool FUN_100244f90(void)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  
  cVar1 = CAbstractTask::isFinished();
  if (cVar1 == '\0') {
    iVar3 = CAbstractTask::getCurrentSubTask();
    bVar2 = iVar3 < 5;
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}


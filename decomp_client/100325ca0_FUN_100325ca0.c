
bool FUN_100325ca0(long param_1)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  
  if (*(long *)(param_1 + 0x80) == 0) {
    bVar3 = false;
  }
  else if (*(int *)(*(long *)(param_1 + 0x80) + 4) == 0) {
    bVar3 = false;
  }
  else if (*(long *)(param_1 + 0x88) == 0) {
    bVar3 = false;
  }
  else {
    cVar1 = CAbstractTask::isFinished();
    if (cVar1 == '\0') {
      if (*(long *)(param_1 + 0x80) == 0) {
        bVar3 = false;
      }
      else if (*(int *)(*(long *)(param_1 + 0x80) + 4) == 0) {
        bVar3 = false;
      }
      else if (*(long *)(param_1 + 0x88) == 0) {
        bVar3 = false;
      }
      else {
        iVar2 = FUN_10023aaf0();
        bVar3 = iVar2 == 0;
      }
    }
    else {
      bVar3 = false;
    }
  }
  return bVar3;
}


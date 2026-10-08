
undefined8 FUN_10018ff50(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  if (*(long *)(param_1 + 0xb8) == 0) {
    uVar2 = 0;
  }
  else if (*(int *)(*(long *)(param_1 + 0xb8) + 4) == 0) {
    uVar2 = 0;
  }
  else if (*(long *)(param_1 + 0xc0) == 0) {
    uVar2 = 0;
  }
  else {
    cVar1 = CAbstractTask::isFinished();
    if (cVar1 == '\0') {
      uVar2 = 0;
      if ((*(long *)(param_1 + 0xb8) != 0) &&
         (uVar2 = 0, *(int *)(*(long *)(param_1 + 0xb8) + 4) != 0)) {
        uVar2 = *(undefined8 *)(param_1 + 0xc0);
      }
      uVar2 = FUN_100244f90(uVar2);
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}


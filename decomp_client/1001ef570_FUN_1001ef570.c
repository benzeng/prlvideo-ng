
undefined8 FUN_1001ef570(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar2 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
  }
  cVar1 = FUN_10011cdc0(uVar2);
  if (cVar1 != '\0') {
    uVar2 = 0;
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (uVar2 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
      uVar2 = *(undefined8 *)(param_1 + 0x20);
    }
    cVar1 = FUN_10018d240(uVar2);
    if (cVar1 == '\0') {
      return 0;
    }
  }
  CAbstractTask::clearSubTaskList();
  return 0;
}


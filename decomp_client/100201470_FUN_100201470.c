
void FUN_100201470(long param_1)

{
  if (((*(long *)(param_1 + 0x28) != 0) && (*(int *)(*(long *)(param_1 + 0x28) + 4) != 0)) &&
     (*(long *)(param_1 + 0x30) != 0)) {
    FUN_10018ff30(*(long *)(param_1 + 0x30),0);
  }
  CAbstractTask::finish((int)param_1);
  return;
}



void FUN_100230f30(long param_1,int param_2)

{
  if ((((*(long *)(param_1 + 0x18) != 0) && (*(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) &&
      (param_2 != -0x7ffffd8b)) && (*(long *)(param_1 + 0x20) != 0)) {
    FUN_10031c890();
  }
  CAbstractTask::finish((int)param_1);
  return;
}


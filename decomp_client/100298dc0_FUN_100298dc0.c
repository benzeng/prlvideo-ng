
void FUN_100298dc0(long param_1)

{
  undefined8 uVar1;
  
  if (((*(long *)(param_1 + 0x18) != 0) && (*(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) &&
     (*(long *)(param_1 + 0x20) != 0)) {
    uVar1 = FUN_10018c280();
    uVar1 = FUN_100319cb0(uVar1);
    FUN_100334ca0(uVar1,0);
  }
  CAbstractTask::finish((int)param_1);
  return;
}


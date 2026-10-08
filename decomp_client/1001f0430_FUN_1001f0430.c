
void FUN_1001f0430(long param_1,int param_2)

{
  undefined8 uVar1;
  undefined4 local_30;
  undefined4 local_2c;
  undefined1 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c;
  
  if ((((param_2 < 0) && (*(int *)(param_1 + 0x48) == 0)) && (*(long *)(param_1 + 0x18) != 0)) &&
     ((*(int *)(*(long *)(param_1 + 0x18) + 4) != 0 && (*(long *)(param_1 + 0x20) != 0)))) {
    uVar1 = FUN_10018c280();
    local_30 = 3;
    local_28 = 0;
    local_2c = 0;
    local_24 = 0xffff;
    local_20 = 0;
    local_1c = 0;
    FUN_10031bef0(uVar1,0,&local_30);
  }
  CAbstractTask::finish((int)param_1);
  return;
}


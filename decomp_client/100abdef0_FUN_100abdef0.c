
void FUN_100abdef0(long param_1)

{
  undefined8 uVar1;
  undefined8 local_20;
  undefined4 local_18;
  undefined2 local_14;
  undefined2 local_12;
  
  local_18 = 0xd;
  local_20 = QCursor::pos();
  if (((*(long *)(param_1 + 0x20) == 0) || (*(int *)(*(long *)(param_1 + 0x20) + 4) == 0)) ||
     (*(long *)(param_1 + 0x28) == 0)) {
    local_14 = 0xffff;
    local_12 = 0xffff;
  }
  else {
    uVar1 = FUN_100319c50();
    uVar1 = FUN_100331080(uVar1,&local_20);
    local_14 = (undefined2)uVar1;
    local_12 = (undefined2)((ulong)uVar1 >> 0x20);
  }
  FUN_100a4a170(param_1 + 0x10,&local_18,8);
  return;
}


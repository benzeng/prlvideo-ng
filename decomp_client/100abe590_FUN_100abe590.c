
void FUN_100abe590(long param_1,long param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined8 local_28;
  
  local_28 = QCursor::pos();
  local_38 = 0xffffffff;
  if (*(long *)(param_1 + 0x20) == 0) {
    uVar1 = 0xffffffff;
  }
  else if (*(int *)(*(long *)(param_1 + 0x20) + 4) == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = 0xffffffff;
    if (*(long *)(param_1 + 0x28) != 0) {
      uVar1 = FUN_100319c50();
      uVar1 = FUN_100331080(uVar1,&local_28);
      local_38 = (undefined4)((ulong)uVar1 >> 0x20);
    }
  }
  local_58 = 7;
  uStack_54 = (undefined4)*(undefined8 *)(param_2 + 0x28);
  uStack_50 = (undefined4)((ulong)*(undefined8 *)(param_2 + 0x28) >> 0x20);
  uStack_4c = *(undefined4 *)(param_2 + 0x30);
  _local_48 = CONCAT44(param_3,*(undefined4 *)(param_2 + 0x3c));
  _uStack_40 = CONCAT44((int)uVar1,*(undefined4 *)(param_2 + 0x40));
  FUN_100a4a170(param_1 + 0x10,&local_58,0x24);
  return;
}


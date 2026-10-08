
undefined4 FUN_100b311c0(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  QArrayData *local_48;
  undefined1 local_40 [31];
  undefined1 local_21;
  
  if (*(int *)(*(long *)(param_1 + 8) + 4) == 0) {
    return 0x80000003;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    return 0x80000003;
  }
  FUN_100b34200(local_40);
  local_48 = (QArrayData *)QString::fromAscii_helper("",0);
  FUN_100b34460(local_40,&local_48);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_21 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100b31245;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100b31245:
  uVar1 = FUN_100b35100(local_40,param_1 + 8,*(undefined4 *)(param_1 + 0x10),param_2);
  FUN_100b34450(local_40);
  return uVar1;
}



undefined4 FUN_1006a8cf0(long param_1,undefined8 param_2)

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
  FUN_10042d5e0(local_40);
  local_48 = (QArrayData *)QString::fromAscii_helper("",0);
  FUN_10042d840(local_40,&local_48);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_21 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1006a8d75;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1006a8d75:
  uVar1 = FUN_10042e4e0(local_40,param_1 + 8,*(undefined4 *)(param_1 + 0x10),param_2);
  FUN_10042d830(local_40);
  return uVar1;
}


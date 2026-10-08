
void FUN_100d3e1d0(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  QArrayData *local_28;
  undefined1 local_1b;
  undefined1 local_1a;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  local_28 = (QArrayData *)*param_2;
  if (1 < *(int *)local_28 + 1U) {
    LOCK();
    *(int *)local_28 = *(int *)local_28 + 1;
    local_1b = *(int *)local_28 != 0;
    UNLOCK();
  }
  uVar1 = FUN_100d38a90(uVar1,&local_28);
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      local_1a = *(int *)local_28 != 0;
      UNLOCK();
      if ((bool)local_1a) goto LAB_100d3e236;
    }
    QArrayData::deallocate(local_28,2,8);
  }
LAB_100d3e236:
  FUN_100d3df80(param_1,uVar1);
  return;
}


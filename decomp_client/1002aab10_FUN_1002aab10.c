
void FUN_1002aab10(long param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  QArrayData *local_20;
  undefined1 local_13;
  undefined1 local_12;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  local_20 = *(QArrayData **)(param_1 + 0x28);
  if (1 < *(int *)local_20 + 1U) {
    LOCK();
    *(int *)local_20 = *(int *)local_20 + 1;
    local_13 = *(int *)local_20 != 0;
    UNLOCK();
  }
  uVar2 = (*pcVar1)(&local_20);
  *(undefined4 *)(param_1 + 0x1c) = uVar2;
  if (*(int *)local_20 != -1) {
    if (*(int *)local_20 != 0) {
      LOCK();
      *(int *)local_20 = *(int *)local_20 + -1;
      UNLOCK();
      if (*(int *)local_20 != 0) {
        return;
      }
      local_12 = 0;
    }
    QArrayData::deallocate(local_20,2,8);
  }
  return;
}


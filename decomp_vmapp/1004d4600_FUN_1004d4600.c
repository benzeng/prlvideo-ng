
void FUN_1004d4600(long param_1)

{
  code *pcVar1;
  long *plVar2;
  QArrayData *local_20;
  undefined1 local_13;
  undefined1 local_12;
  
  pcVar1 = *(code **)(param_1 + 0x28);
  plVar2 = (long *)(*(long *)(param_1 + 0x38) + *(long *)(param_1 + 0x30));
  if (((ulong)pcVar1 & 1) != 0) {
    pcVar1 = *(code **)(pcVar1 + *plVar2 + -1);
  }
  local_20 = *(QArrayData **)(param_1 + 0x40);
  if (1 < *(int *)local_20 + 1U) {
    LOCK();
    *(int *)local_20 = *(int *)local_20 + 1;
    local_13 = *(int *)local_20 != 0;
    UNLOCK();
  }
  (*pcVar1)(plVar2,&local_20,*(undefined8 *)(param_1 + 0x48));
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


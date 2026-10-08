
void FUN_10047fbe0(long param_1)

{
  undefined8 local_30;
  undefined8 local_28;
  Data *local_20;
  undefined1 local_11;
  
  local_20 = (Data *)PTR_shared_null_1021e15e8;
  local_28 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x18);
  FUN_100359270(&local_20,&local_28);
  local_30 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x58);
  FUN_100359270(&local_20,&local_30);
  WidgetUtils::Adjuster::adjustWidgetsByMaxWidth((QList *)&local_20);
  if (*(int *)local_20 != -1) {
    if (*(int *)local_20 != 0) {
      LOCK();
      *(int *)local_20 = *(int *)local_20 + -1;
      UNLOCK();
      if (*(int *)local_20 != 0) {
        return;
      }
      local_11 = 0;
    }
    QListData::dispose(local_20);
  }
  return;
}


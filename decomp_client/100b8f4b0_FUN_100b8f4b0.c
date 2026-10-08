
undefined8 * FUN_100b8f4b0(undefined8 *param_1,byte *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  QArrayData *local_20;
  undefined1 local_13;
  undefined1 local_12;
  
  local_20 = (QArrayData *)PTR_shared_null_1021e1288;
  puVar2 = (undefined8 *)
           QString::sprintf((char *)&local_20,"%.2X%.2X%.2X%.2X%.2X%.2X",(ulong)*param_2,
                            (ulong)param_2[1],(ulong)param_2[2],(ulong)param_2[3],(uint)param_2[4],
                            (uint)param_2[5]);
  piVar1 = (int *)*puVar2;
  *param_1 = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    local_13 = *piVar1 != 0;
    UNLOCK();
  }
  if (*(int *)local_20 != -1) {
    if (*(int *)local_20 != 0) {
      LOCK();
      *(int *)local_20 = *(int *)local_20 + -1;
      UNLOCK();
      if (*(int *)local_20 != 0) {
        return param_1;
      }
      local_12 = 0;
    }
    QArrayData::deallocate(local_20,2,8);
  }
  return param_1;
}


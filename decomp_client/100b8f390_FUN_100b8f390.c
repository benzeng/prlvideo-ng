
undefined8 * FUN_100b8f390(undefined8 *param_1,byte *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  QArrayData *local_30;
  undefined1 local_23;
  undefined1 local_22;
  
  local_30 = (QArrayData *)PTR_shared_null_1021e1288;
  puVar2 = (undefined8 *)
           QString::sprintf((char *)&local_30,"%.2X%.2X%.2X%.2X%.2X%.2X%.2X%.2X%.2X%.2X%.2X",
                            (ulong)*param_2,(ulong)param_2[1],(ulong)param_2[2],(ulong)param_2[3],
                            (uint)param_2[4],(uint)param_2[5],(uint)param_2[6],(uint)param_2[7],
                            (uint)param_2[8],(uint)param_2[9],(uint)param_2[10]);
  piVar1 = (int *)*puVar2;
  *param_1 = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    local_23 = *piVar1 != 0;
    UNLOCK();
  }
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      UNLOCK();
      if (*(int *)local_30 != 0) {
        return param_1;
      }
      local_22 = 0;
    }
    QArrayData::deallocate(local_30,2,8);
  }
  return param_1;
}


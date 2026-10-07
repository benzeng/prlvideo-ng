
undefined8 * FUN_100129b30(undefined8 *param_1,undefined8 param_2)

{
  int *piVar1;
  QArrayData *pQVar2;
  undefined8 *puVar3;
  QArrayData *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  pQVar2 = (QArrayData *)
           QString::fromAscii_helper("fs_generate_entry_name_cmd_index_delimiter",0x2a);
  local_38 = pQVar2;
  FUN_10011cdb0(&local_30,param_2,&local_38);
  puVar3 = (undefined8 *)QString::remove((int)&local_30,0);
  piVar1 = (int *)*puVar3;
  *param_1 = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    local_21 = *piVar1 != 0;
    UNLOCK();
  }
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100129bc2;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_100129bc2:
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      local_21 = *(int *)pQVar2 != 0;
      UNLOCK();
      if ((bool)local_21) {
        return param_1;
      }
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
  return param_1;
}


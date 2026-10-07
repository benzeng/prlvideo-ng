
void FUN_100128b60(undefined8 *param_1,undefined8 param_2)

{
  QArrayData *local_30;
  undefined1 local_22;
  
  FUN_10011c900(param_1,0,0);
  *(undefined4 *)(param_1 + 2) = 0x828;
  *param_1 = &PTR_FUN_100baabe8;
  local_30 = (QArrayData *)QString::fromAscii_helper("convert_old_hdd_paths_list",0x1a);
  FUN_10011dbc0(param_1,param_2,&local_30);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      UNLOCK();
      if (*(int *)local_30 != 0) {
        return;
      }
      local_22 = 0;
    }
    QArrayData::deallocate(local_30,2,8);
  }
  return;
}


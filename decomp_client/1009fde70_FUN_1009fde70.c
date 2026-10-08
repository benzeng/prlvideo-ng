
void FUN_1009fde70(undefined8 param_1)

{
  QArrayData *local_20;
  undefined1 local_12;
  
  local_20 = (QArrayData *)QString::fromAscii_helper("PrlProblemReportScreen",0x16);
  FUN_1009fdf20(param_1,&local_20);
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


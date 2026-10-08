
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100475f10(undefined8 param_1,uint param_2)

{
  QArrayData *local_28;
  undefined1 local_1a;
  
  QString::number((double)((float)param_2 * _DAT_100e1ed20),(char)&local_28,0x67);
  FUN_100472f90(param_1,&local_28);
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      UNLOCK();
      if (*(int *)local_28 != 0) {
        return param_1;
      }
      local_1a = 0;
    }
    QArrayData::deallocate(local_28,2,8);
  }
  return param_1;
}


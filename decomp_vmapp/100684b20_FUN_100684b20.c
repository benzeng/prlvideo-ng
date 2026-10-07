
undefined1 FUN_100684b20(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  QArrayData *local_30;
  
  uVar1 = FUN_100769600();
  if (param_2 < uVar1) {
    return 1;
  }
  QString::toUtf8();
  FUN_1008e3970("","dimg",0,"File %s creation canceled. No space left. Req: %llu Free: %llu",
                local_30 + *(long *)(local_30 + 0x10),param_2,uVar1);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      UNLOCK();
      if (*(int *)local_30 != 0) {
        return 0;
      }
    }
    QArrayData::deallocate(local_30,1,8);
  }
  return 0;
}


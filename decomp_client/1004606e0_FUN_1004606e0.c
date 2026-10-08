
void FUN_1004606e0(undefined8 param_1)

{
  QMapNodeBase *local_28;
  undefined1 local_1a;
  
  QVariant::toMap();
  FUN_10045fe30(param_1,&local_28);
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      UNLOCK();
      if (*(int *)local_28 != 0) {
        return;
      }
      local_1a = 0;
    }
    if (*(long *)(local_28 + 0x10) != 0) {
      FUN_100037d60();
      QMapDataBase::freeTree(local_28,(int)*(undefined8 *)(local_28 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)local_28);
  }
  return;
}


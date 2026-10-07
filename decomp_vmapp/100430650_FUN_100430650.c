
void FUN_100430650(long param_1,undefined8 param_2)

{
  long lVar1;
  bool bVar2;
  QArrayData *local_40;
  undefined1 local_31;
  
  QMutex::lock();
  bVar2 = true;
  if (*(long *)(param_1 + 0x42e8) == 0) goto LAB_100430771;
  local_40 = (QArrayData *)PTR_shared_null_100ba20d0;
  lVar1 = FUN_1000d7790();
  if (lVar1 != 0) {
    QByteArray::append((char *)&local_40,(int)lVar1);
  }
  QMutex::unlock();
  QMutex::unlock();
  if (lVar1 == 0) {
    FUN_100434990(param_1,param_2,0x18966,0,0,&DAT_1011ccb98,0);
  }
  else {
    FUN_100434990(param_1,param_2,0x18967,local_40 + *(long *)(local_40 + 0x10),
                  *(undefined4 *)(local_40 + 4),&DAT_1011ccb98,0);
  }
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10043076e;
    }
    QArrayData::deallocate(local_40,1,8);
  }
LAB_10043076e:
  bVar2 = false;
LAB_100430771:
  if (bVar2) {
    QMutex::unlock();
  }
  return;
}


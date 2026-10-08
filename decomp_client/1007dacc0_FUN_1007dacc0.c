
void FUN_1007dacc0(long param_1,undefined8 param_2)

{
  QArrayData *local_30;
  undefined1 local_21;
  
  QUuid::createUuid();
  QUuid::toString();
  FUN_1007db070(param_1 + 0x18,&local_30,param_2);
  FUN_1007dbab0(param_1 + 0x2c,&local_30,param_2);
  FUN_1007dab10(param_1);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      UNLOCK();
      if (*(int *)local_30 != 0) {
        return;
      }
      local_21 = 0;
    }
    QArrayData::deallocate(local_30,2,8);
  }
  return;
}


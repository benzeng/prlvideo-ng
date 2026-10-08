
undefined8 FUN_100225580(long param_1)

{
  undefined8 uVar1;
  QArrayData *local_28;
  undefined1 local_1a;
  
  uVar1 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar1 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
  }
  QMetaObject::tr((char *)&local_28,PTR_staticMetaObject_1021e1520,(int)PTR_s_Starting____102270ad0)
  ;
  FUN_10031c280(uVar1,&local_28);
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      UNLOCK();
      if (*(int *)local_28 != 0) {
        return 0;
      }
      local_1a = 0;
    }
    QArrayData::deallocate(local_28,2,8);
  }
  return 0;
}


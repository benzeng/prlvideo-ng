
void FUN_10037f7a0(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  QArrayData *local_28;
  undefined1 local_19;
  
  uVar2 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar2 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
  }
  cVar1 = FUN_10018c850(uVar2);
  if (cVar1 == '\0') {
    local_28 = (QArrayData *)PTR_shared_null_1021e1288;
  }
  else {
    QMetaObject::tr((char *)&local_28,PTR_staticMetaObject_1021e1520,
                    (int)PTR_s_Data_synchronization____10226ffa0);
  }
  FUN_10037efc0(param_1,0,&local_28,cVar1);
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      UNLOCK();
      if (*(int *)local_28 != 0) {
        return;
      }
      local_19 = 0;
    }
    QArrayData::deallocate(local_28,2,8);
  }
  return;
}


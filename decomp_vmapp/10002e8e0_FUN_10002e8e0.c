
undefined8 FUN_10002e8e0(long param_1,QString *param_2)

{
  char cVar1;
  int iVar2;
  long *plVar3;
  undefined8 uVar4;
  QString local_28;
  undefined1 local_19;
  
  uVar4 = 0;
  if (((param_1 != 0) &&
      (plVar3 = (long *)___dynamic_cast(param_1,&PTR_vtable_100baea70,&PTR_vtable_100bef130,
                                        0xfffffffffffffffe), plVar3 != (long *)0x0)) &&
     (plVar3 = (long *)(**(code **)(*plVar3 + 0x10))(plVar3), plVar3 != (long *)0x0)) {
    local_28.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
    iVar2 = (**(code **)(*plVar3 + 0x140))(plVar3,&DAT_1011b6230,&local_28);
    uVar4 = 0;
    if (((-1 < iVar2) && (*(int *)(local_28.field0_0x0 + 4) != 0)) &&
       (cVar1 = operator==((QString *)&DAT_1011b6238,&local_28), cVar1 == '\0')) {
      uVar4 = 1;
      QString::operator=(param_2,&local_28);
    }
    if (*(int *)local_28.field0_0x0 != -1) {
      if (*(int *)local_28.field0_0x0 != 0) {
        LOCK();
        *(int *)local_28.field0_0x0 = *(int *)local_28.field0_0x0 + -1;
        UNLOCK();
        if (*(int *)local_28.field0_0x0 != 0) {
          return uVar4;
        }
        local_19 = 0;
      }
      QArrayData::deallocate((QArrayData *)local_28.field0_0x0,2,8);
    }
  }
  return uVar4;
}


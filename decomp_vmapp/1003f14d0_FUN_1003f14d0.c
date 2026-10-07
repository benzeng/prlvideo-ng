
ulong FUN_1003f14d0(long *param_1,QString *param_2)

{
  byte bVar1;
  char *pcVar2;
  ulong uVar3;
  undefined8 *puVar4;
  QString local_40;
  QString local_38;
  undefined1 local_29;
  
  pcVar2 = _malloc(0x802);
  if (pcVar2 == (char *)0x0) {
    puVar4 = (undefined8 *)___cxa_allocate_exception(8);
    *puVar4 = PTR_vtable_100ba2308 + 0x10;
                    /* WARNING: Subroutine does not return */
    ___cxa_throw(puVar4,PTR_typeinfo_100ba22c8,PTR__exception_100ba21c0);
  }
  uVar3 = QIODevice::readLine((char *)param_1,(longlong)pcVar2);
  if (param_2->field0_0x0 != (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0) {
    local_38.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
    QString::operator=(param_2,&local_38);
    if (*(int *)local_38.field0_0x0 != -1) {
      if (*(int *)local_38.field0_0x0 != 0) {
        LOCK();
        *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
        local_29 = *(int *)local_38.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1003f1562;
      }
      QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
    }
  }
LAB_1003f1562:
  if ((int)uVar3 == -1) {
    _strlen(pcVar2);
  }
  QString::fromLocal8Bit_helper((char *)&local_40,(int)pcVar2);
  QString::operator=(param_2,&local_40);
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_29 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1003f15bc;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_1003f15bc:
  if ((long)uVar3 < 1) {
    bVar1 = (**(code **)(*param_1 + 0x90))(param_1);
    uVar3 = (ulong)(uint)((int)((uint)(byte)~bVar1 << 0x1f) >> 0x1f);
  }
  _free(pcVar2);
  return uVar3 & 0xffffffff;
}


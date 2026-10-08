
/* Function Stack Size: 0x18 bytes */

ID CMacDragSource::namesOfPromisedFilesDroppedAtDestination_(ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  undefined *self;
  undefined8 uVar2;
  ID IVar3;
  QString local_28;
  undefined1 local_1a;
  
  self = PTR__OBJC_CLASS___NSString_10226a7c8;
  lVar1 = *(long *)(param_1 + m_manager);
  uVar2 = (*(code *)PTR__objc_msgSend_1021e1c68)(param_3,PTR_s_path_102269938);
  if (self == (undefined *)0x0) {
    local_28.field0_0x0 = (QTypedArrayData<unsigned_short> *)0x0;
  }
  else {
    _objc_msgSend_stret((undefined *)&local_28,(ID)self,PTR_s_QStringWithString__1022696d0,uVar2);
  }
  QString::operator=((QString *)(lVar1 + 0x50),&local_28);
  if (*(int *)local_28.field0_0x0 != -1) {
    if (*(int *)local_28.field0_0x0 != 0) {
      LOCK();
      *(int *)local_28.field0_0x0 = *(int *)local_28.field0_0x0 + -1;
      local_1a = *(int *)local_28.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_1a) goto LAB_10003a182;
    }
    QArrayData::deallocate((QArrayData *)local_28.field0_0x0,2,8);
  }
LAB_10003a182:
  IVar3 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (PTR__OBJC_CLASS___NSArray_10226a818,PTR_s_array_1022698b0);
  return IVar3;
}


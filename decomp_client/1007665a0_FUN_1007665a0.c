
void FUN_1007665a0(long param_1,int param_2)

{
  long lVar1;
  undefined8 uVar2;
  QArrayData *local_140;
  QArrayData *local_138;
  QArrayData *local_130;
  CVmEvent local_128 [224];
  QEvent local_48 [39];
  undefined1 local_21;
  
  *(undefined1 *)(param_1 + 0x28) = 0;
  if (param_2 != 0) goto LAB_10076670a;
  QObject::sender();
  QMetaObject::cast((QObject *)PTR_staticMetaObject_1021e12a0);
  CSdkRequest::getResultAsString((int)(QTypedArrayData<unsigned_short> *)&local_130);
  CVmEvent::CVmEvent(local_128,(QTypedArrayData<unsigned_short> *)&local_130);
  if (*(int *)local_130 != -1) {
    if (*(int *)local_130 != 0) {
      LOCK();
      *(int *)local_130 = *(int *)local_130 + -1;
      local_21 = *(int *)local_130 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100766630;
    }
    QArrayData::deallocate(local_130,2,8);
  }
LAB_100766630:
  local_138 = (QArrayData *)QString::fromAscii_helper("garbage_files_size",0x12);
  lVar1 = CVmEvent::getEventParameter((QTypedArrayData<unsigned_short> *)local_128);
  if (*(int *)local_138 != -1) {
    if (*(int *)local_138 != 0) {
      LOCK();
      *(int *)local_138 = *(int *)local_138 + -1;
      local_21 = *(int *)local_138 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100766694;
    }
    QArrayData::deallocate(local_138,2,8);
  }
LAB_100766694:
  if (lVar1 != 0) {
    CVmEventParameter::getParamValue();
    uVar2 = QString::toLongLong((bool *)&local_140,0);
    *(undefined8 *)(param_1 + 0x20) = uVar2;
    if (*(int *)local_140 != -1) {
      if (*(int *)local_140 != 0) {
        LOCK();
        *(int *)local_140 = *(int *)local_140 + -1;
        local_21 = *(int *)local_140 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1007666f5;
      }
      QArrayData::deallocate(local_140,2,8);
    }
  }
LAB_1007666f5:
  QEvent::~QEvent(local_48);
  CVmEventBase::~CVmEventBase((CVmEventBase *)local_128);
LAB_10076670a:
  FUN_10085bca0(param_1);
  return;
}


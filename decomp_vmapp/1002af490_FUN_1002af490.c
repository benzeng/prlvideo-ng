
void FUN_1002af490(long param_1,QString *param_2)

{
  QString *this;
  char cVar1;
  QString local_38;
  undefined1 local_29;
  
  QMutex::lock();
  this = (QString *)(param_1 + 0x8b8);
  cVar1 = operator==(param_2,this);
  if (cVar1 == '\0') goto LAB_1002af7fa;
  if (this->field0_0x0 != (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0) {
    local_38.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
    QString::operator=(this,&local_38);
    if (*(int *)local_38.field0_0x0 != -1) {
      if (*(int *)local_38.field0_0x0 != 0) {
        LOCK();
        *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
        local_29 = *(int *)local_38.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1002af521;
      }
      QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
    }
  }
LAB_1002af521:
  *(undefined8 *)(param_1 + 0x9ac) = 0;
  *(undefined8 *)(param_1 + 0x9a4) = 0;
  *(undefined8 *)(param_1 + 0x99c) = 0;
  *(undefined8 *)(param_1 + 0x994) = 0;
  *(undefined8 *)(param_1 + 0x129c) = 0;
  *(undefined8 *)(param_1 + 0x1294) = 0;
  *(undefined8 *)(param_1 + 0x128c) = 0;
  *(undefined8 *)(param_1 + 0x1284) = 0;
  *(undefined8 *)(param_1 + 0x1b8c) = 0;
  *(undefined8 *)(param_1 + 0x1b84) = 0;
  *(undefined8 *)(param_1 + 0x1b7c) = 0;
  *(undefined8 *)(param_1 + 0x1b74) = 0;
  *(undefined8 *)(param_1 + 0x247c) = 0;
  *(undefined8 *)(param_1 + 0x2474) = 0;
  *(undefined8 *)(param_1 + 0x246c) = 0;
  *(undefined8 *)(param_1 + 0x2464) = 0;
  *(undefined8 *)(param_1 + 0x2d6c) = 0;
  *(undefined8 *)(param_1 + 0x2d64) = 0;
  *(undefined8 *)(param_1 + 0x2d5c) = 0;
  *(undefined8 *)(param_1 + 0x2d54) = 0;
  *(undefined8 *)(param_1 + 0x365c) = 0;
  *(undefined8 *)(param_1 + 0x3654) = 0;
  *(undefined8 *)(param_1 + 0x364c) = 0;
  *(undefined8 *)(param_1 + 0x3644) = 0;
  *(undefined8 *)(param_1 + 0x3f4c) = 0;
  *(undefined8 *)(param_1 + 0x3f44) = 0;
  *(undefined8 *)(param_1 + 0x3f3c) = 0;
  *(undefined8 *)(param_1 + 0x3f34) = 0;
  *(undefined8 *)(param_1 + 0x483c) = 0;
  *(undefined8 *)(param_1 + 0x4834) = 0;
  *(undefined8 *)(param_1 + 0x482c) = 0;
  *(undefined8 *)(param_1 + 0x4824) = 0;
  *(undefined8 *)(param_1 + 0x512c) = 0;
  *(undefined8 *)(param_1 + 0x5124) = 0;
  *(undefined8 *)(param_1 + 0x511c) = 0;
  *(undefined8 *)(param_1 + 0x5114) = 0;
  *(undefined8 *)(param_1 + 0x5a1c) = 0;
  *(undefined8 *)(param_1 + 0x5a14) = 0;
  *(undefined8 *)(param_1 + 0x5a0c) = 0;
  *(undefined8 *)(param_1 + 0x5a04) = 0;
  *(undefined8 *)(param_1 + 0x630c) = 0;
  *(undefined8 *)(param_1 + 0x6304) = 0;
  *(undefined8 *)(param_1 + 0x62fc) = 0;
  *(undefined8 *)(param_1 + 0x62f4) = 0;
  *(undefined8 *)(param_1 + 0x6bfc) = 0;
  *(undefined8 *)(param_1 + 0x6bf4) = 0;
  *(undefined8 *)(param_1 + 0x6bec) = 0;
  *(undefined8 *)(param_1 + 0x6be4) = 0;
  *(undefined8 *)(param_1 + 0x74ec) = 0;
  *(undefined8 *)(param_1 + 0x74e4) = 0;
  *(undefined8 *)(param_1 + 0x74dc) = 0;
  *(undefined8 *)(param_1 + 0x74d4) = 0;
  *(undefined8 *)(param_1 + 0x7ddc) = 0;
  *(undefined8 *)(param_1 + 0x7dd4) = 0;
  *(undefined8 *)(param_1 + 0x7dcc) = 0;
  *(undefined8 *)(param_1 + 0x7dc4) = 0;
  *(undefined8 *)(param_1 + 0x86cc) = 0;
  *(undefined8 *)(param_1 + 0x86c4) = 0;
  *(undefined8 *)(param_1 + 0x86bc) = 0;
  *(undefined8 *)(param_1 + 0x86b4) = 0;
  *(undefined8 *)(param_1 + 0x8fbc) = 0;
  *(undefined8 *)(param_1 + 0x8fb4) = 0;
  *(undefined8 *)(param_1 + 0x8fac) = 0;
  *(undefined8 *)(param_1 + 0x8fa4) = 0;
  *(undefined4 *)(param_1 + 0x8c8) = 0xffff;
  QWaitCondition::wakeOne();
LAB_1002af7fa:
  QMutex::unlock();
  return;
}


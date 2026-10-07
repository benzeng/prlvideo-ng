
void FUN_100128240(long param_1,CVmEvent *param_2)

{
  long lVar1;
  CVmEvent *this;
  QString QVar2;
  QArrayData *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  QVar2.field0_0x0 = (QTypedArrayData<unsigned_short> *)0x0;
  if (*(long *)(param_1 + 8) != 0) {
    QVar2.field0_0x0 = *(QTypedArrayData<unsigned_short> **)(*(long *)(param_1 + 8) + 0x10);
  }
  local_30 = (QArrayData *)QString::fromAscii_helper("ws_response_cmd_error",0x15);
  lVar1 = CVmEvent::getEventParameter(QVar2);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1001282b3;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_1001282b3:
  if (lVar1 != 0) {
    this = operator_new(0x100);
    CVmEventParameter::getParamValue();
    CVmEvent::CVmEvent(this,(QTypedArrayData<unsigned_short> *)&local_38);
    CResult::setError(param_2);
    if (*(int *)local_38 != -1) {
      if (*(int *)local_38 != 0) {
        LOCK();
        *(int *)local_38 = *(int *)local_38 + -1;
        UNLOCK();
        if (*(int *)local_38 != 0) {
          return;
        }
        local_21 = 0;
      }
      QArrayData::deallocate(local_38,2,8);
    }
  }
  return;
}


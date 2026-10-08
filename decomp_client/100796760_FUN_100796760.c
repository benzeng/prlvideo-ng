
void FUN_100796760(long param_1,undefined8 param_2,QString param_3)

{
  long lVar1;
  QArrayData *local_40;
  QArrayData *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  local_30 = (QArrayData *)QString::fromAscii_helper("appliance_id",0xc);
  lVar1 = CVmEvent::getEventParameter(param_3);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1007967c7;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_1007967c7:
  if (lVar1 == 0) {
    return;
  }
  CVmEventParameter::getParamValue();
  CVmEventBase::getEventIssuerId();
  FUN_10002bf90(param_1 + 0x18,&local_40,&local_38);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_21 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10079682c;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_10079682c:
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
  return;
}



void FUN_100127000(long param_1,long param_2)

{
  long lVar1;
  QArrayData *pQVar2;
  QString *this;
  QString QVar3;
  QString local_58;
  int local_4c;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  QVar3.field0_0x0 = (QTypedArrayData<unsigned_short> *)0x0;
  if (*(long *)(param_1 + 8) != 0) {
    QVar3.field0_0x0 = *(QTypedArrayData<unsigned_short> **)(*(long *)(param_1 + 8) + 0x10);
  }
  local_40 = (QArrayData *)QString::fromAscii_helper("ws_response_cmd_hw_file_system_info",0x23);
  lVar1 = CVmEvent::getEventParameter(QVar3);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10012707b;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_10012707b:
  if (lVar1 == 0) {
    return;
  }
  pQVar2 = (QArrayData *)QString::fromAscii_helper("proto_request_op_code",0x15);
  local_48 = pQVar2;
  local_4c = FUN_10011d510(param_1,&local_48);
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      local_31 = *(int *)pQVar2 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1001270d9;
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_1001270d9:
  if (local_4c - 0x806U < 7) {
    local_4c = local_4c + -0x804;
    this = (QString *)FUN_1001340c0(param_2 + 0x18,&local_4c);
    CVmEventParameter::getParamValue();
    QString::operator=(this,&local_58);
    if (*(int *)local_58.field0_0x0 != -1) {
      if (*(int *)local_58.field0_0x0 != 0) {
        LOCK();
        *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
        UNLOCK();
        if (*(int *)local_58.field0_0x0 != 0) {
          return;
        }
        local_31 = 0;
      }
      QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
    }
  }
  else {
    FUN_1008e3970("","prl_proto_serializer",0,
                  "Hw file system info received for non FS command type: %d",local_4c);
  }
  return;
}


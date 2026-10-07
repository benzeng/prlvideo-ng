
void FUN_100128020(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  QArrayData *pQVar3;
  QString *this;
  QString QVar4;
  QString local_50;
  undefined4 local_44;
  QArrayData *local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  QVar4.field0_0x0 = (QTypedArrayData<unsigned_short> *)0x0;
  if (*(long *)(param_1 + 8) != 0) {
    QVar4.field0_0x0 = *(QTypedArrayData<unsigned_short> **)(*(long *)(param_1 + 8) + 0x10);
  }
  local_38 = (QArrayData *)QString::fromAscii_helper("ws_response_cmd_vm_device",0x19);
  lVar2 = CVmEvent::getEventParameter(QVar4);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_29 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100128099;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_100128099:
  if (lVar2 == 0) {
    return;
  }
  pQVar3 = (QArrayData *)QString::fromAscii_helper("proto_request_op_code",0x15);
  local_40 = pQVar3;
  iVar1 = FUN_10011d510(param_1,&local_40);
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      local_29 = *(int *)pQVar3 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1001280f4;
    }
    QArrayData::deallocate(pQVar3,2,8);
  }
LAB_1001280f4:
  if (iVar1 == 0x829) {
    local_44 = 0x16;
    this = (QString *)FUN_1001340c0(param_2 + 0x18,&local_44);
    CVmEventParameter::getParamValue();
    QString::operator=(this,&local_50);
    if (*(int *)local_50.field0_0x0 != -1) {
      if (*(int *)local_50.field0_0x0 != 0) {
        LOCK();
        *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
        UNLOCK();
        if (*(int *)local_50.field0_0x0 != 0) {
          return;
        }
        local_29 = 0;
      }
      QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
    }
  }
  else {
    FUN_1008e3970("","prl_proto_serializer",0,"VM config received for non known command type: %d",
                  iVar1);
  }
  return;
}


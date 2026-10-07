
void FUN_1001277a0(long param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  QArrayData *pQVar4;
  QString *this;
  QString QVar5;
  QString local_50;
  undefined4 local_44;
  QArrayData *local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  QVar5.field0_0x0 = (QTypedArrayData<unsigned_short> *)0x0;
  if (*(long *)(param_1 + 8) != 0) {
    QVar5.field0_0x0 = *(QTypedArrayData<unsigned_short> **)(*(long *)(param_1 + 8) + 0x10);
  }
  local_38 = (QArrayData *)QString::fromAscii_helper("ws_response_cmd_vm_event",0x18);
  lVar3 = CVmEvent::getEventParameter(QVar5);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_29 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100127819;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_100127819:
  if (lVar3 == 0) {
    return;
  }
  pQVar4 = (QArrayData *)QString::fromAscii_helper("proto_request_op_code",0x15);
  local_40 = pQVar4;
  iVar1 = FUN_10011d510(param_1,&local_40);
  if (*(int *)pQVar4 != -1) {
    if (*(int *)pQVar4 != 0) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + -1;
      local_29 = *(int *)pQVar4 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100127874;
    }
    QArrayData::deallocate(pQVar4,2,8);
  }
LAB_100127874:
  uVar2 = iVar1 - 0x80e;
  if ((0x37 < uVar2) || ((0x800040000c000fU >> ((ulong)uVar2 & 0x3f) & 1) == 0)) {
    FUN_1008e3970("","prl_proto_serializer",0,"VM event received for non known command type: %d",
                  iVar1);
    return;
  }
  if (iVar1 < 0x81e) {
    switch((ulong)uVar2) {
    case 0:
      local_44 = 0xe;
      break;
    case 1:
      local_44 = 0xf;
      break;
    case 2:
      local_44 = 0x10;
      break;
    case 3:
      local_44 = 0x11;
      break;
    default:
      goto switchD_1001278b5_default;
    }
  }
  else {
    if (iVar1 < 0x829) {
      if (iVar1 - 0x820U < 2) {
        local_44 = 0x15;
        goto LAB_1001279e8;
      }
      if (iVar1 == 0x81e) {
        local_44 = 0x12;
        goto LAB_1001279e8;
      }
      if (iVar1 == 0x81f) {
        local_44 = 0x13;
        goto LAB_1001279e8;
      }
    }
    else if (iVar1 < 0x83a) {
      if (iVar1 < 0x834) {
        if (iVar1 == 0x829) {
          local_44 = 0x16;
          goto LAB_1001279e8;
        }
        if (iVar1 == 0x82b) {
          local_44 = 0x19;
          goto LAB_1001279e8;
        }
      }
      else {
        if (iVar1 == 0x834) {
          local_44 = 0x1a;
          goto LAB_1001279e8;
        }
        if (iVar1 == 0x837) {
          local_44 = 0x1b;
          goto LAB_1001279e8;
        }
      }
    }
    else if (iVar1 < 0x83d) {
      local_44 = 0x1c;
      if (iVar1 == 0x83a) goto LAB_1001279e8;
      if (iVar1 == 0x83b) {
        local_44 = 0x1e;
        goto LAB_1001279e8;
      }
    }
    else {
      if (iVar1 == 0x83d) {
        local_44 = 0x14;
        goto LAB_1001279e8;
      }
      if (iVar1 == 0x845) {
        local_44 = 0x20;
        goto LAB_1001279e8;
      }
    }
switchD_1001278b5_default:
    local_44 = 10000;
  }
LAB_1001279e8:
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
  return;
}


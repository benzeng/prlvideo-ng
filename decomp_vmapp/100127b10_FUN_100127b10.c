
void FUN_100127b10(long param_1,long param_2)

{
  uint uVar1;
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
  local_38 = (QArrayData *)QString::fromAscii_helper("ws_response_cmd_system_statistics",0x21);
  lVar2 = CVmEvent::getEventParameter(QVar4);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_29 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100127b89;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_100127b89:
  if (lVar2 == 0) {
    return;
  }
  pQVar3 = (QArrayData *)QString::fromAscii_helper("proto_request_op_code",0x15);
  local_40 = pQVar3;
  uVar1 = FUN_10011d510(param_1,&local_40);
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      local_29 = *(int *)pQVar3 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100127be4;
    }
    QArrayData::deallocate(pQVar3,2,8);
  }
LAB_100127be4:
  if ((uVar1 & 0xfffffffe) != 0x81e) {
    FUN_1008e3970("","prl_proto_serializer",0,
                  "System statistics received for non known command type: %d",uVar1);
    return;
  }
  if ((int)uVar1 < 0x7e7) {
    if ((int)uVar1 < 0x40b) {
      if (uVar1 == 0x3ec) {
LAB_100127d3b:
        local_44 = 0xd;
        goto switchD_100127c79_caseD_803;
      }
      if (uVar1 != 0x3ed) goto switchD_100127c79_caseD_7e8;
    }
    else {
      if (uVar1 == 0x40b) {
        local_44 = 0x1f;
        goto switchD_100127c79_caseD_803;
      }
      if (uVar1 != 0x41e) goto switchD_100127c79_caseD_7e8;
    }
    local_44 = 0xb;
    goto switchD_100127c79_caseD_803;
  }
  if ((int)uVar1 < 0x81e) {
    local_44 = 1;
    switch(uVar1) {
    case 0x7e7:
    case 0x7e9:
    case 0x7ea:
    case 0x7f1:
switchD_100127c79_caseD_7e7:
      local_44 = 0x14;
      break;
    default:
      goto switchD_100127c79_caseD_7e8;
    case 0x7f7:
      local_44 = 0x17;
      break;
    case 0x7f9:
      local_44 = 0x18;
      break;
    case 0x7fd:
      local_44 = 9;
      break;
    case 0x800:
      local_44 = 10;
      break;
    case 0x803:
      break;
    case 0x806:
      local_44 = 2;
      break;
    case 0x807:
      local_44 = 3;
      break;
    case 0x808:
      local_44 = 4;
      break;
    case 0x809:
      local_44 = 5;
      break;
    case 0x80a:
      local_44 = 6;
      break;
    case 0x80b:
      local_44 = 7;
      break;
    case 0x80c:
      local_44 = 8;
      break;
    case 0x80e:
      local_44 = 0xe;
      break;
    case 0x80f:
      local_44 = 0xf;
      break;
    case 0x810:
      local_44 = 0x10;
      break;
    case 0x811:
      local_44 = 0x11;
    }
  }
  else {
    if ((int)uVar1 < 0x829) {
      if (uVar1 - 0x820 < 2) {
        local_44 = 0x15;
        goto switchD_100127c79_caseD_803;
      }
      if (uVar1 == 0x81e) {
        local_44 = 0x12;
        goto switchD_100127c79_caseD_803;
      }
      if (uVar1 == 0x81f) {
        local_44 = 0x13;
        goto switchD_100127c79_caseD_803;
      }
    }
    else if ((int)uVar1 < 0x856) {
      if ((int)uVar1 < 0x83a) {
        if ((int)uVar1 < 0x834) {
          if (uVar1 == 0x829) {
            local_44 = 0x16;
            goto switchD_100127c79_caseD_803;
          }
          if (uVar1 == 0x82b) {
            local_44 = 0x19;
            goto switchD_100127c79_caseD_803;
          }
        }
        else {
          if (uVar1 == 0x834) {
            local_44 = 0x1a;
            goto switchD_100127c79_caseD_803;
          }
          if (uVar1 == 0x837) {
            local_44 = 0x1b;
            goto switchD_100127c79_caseD_803;
          }
        }
      }
      else if ((int)uVar1 < 0x83d) {
        if (uVar1 == 0x83a) {
          local_44 = 0x1c;
          goto switchD_100127c79_caseD_803;
        }
        if (uVar1 == 0x83b) {
          local_44 = 0x1e;
          goto switchD_100127c79_caseD_803;
        }
      }
      else {
        if (uVar1 == 0x83d) goto switchD_100127c79_caseD_7e7;
        if (uVar1 == 0x845) {
          local_44 = 0x20;
          goto switchD_100127c79_caseD_803;
        }
      }
    }
    else {
      if ((uVar1 - 0x856 < 2) || (uVar1 == 0x86c)) goto switchD_100127c79_caseD_7e7;
      if (uVar1 == 0x87d) goto LAB_100127d3b;
    }
switchD_100127c79_caseD_7e8:
    local_44 = 10000;
  }
switchD_100127c79_caseD_803:
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


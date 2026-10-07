
undefined8 FUN_1004e4c00(long param_1,undefined8 param_2,char param_3)

{
  long lVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  undefined8 uVar6;
  QString local_40;
  QString local_38;
  undefined4 local_30 [2];
  
  if (param_3 == '\0') {
    QString::toUtf8_helper(&local_38);
    local_30[0] = 0;
    cVar3 = FUN_100761b20((QArrayData *)
                          (local_38.field0_0x0 + *(long *)(local_38.field0_0x0 + 0x10)),local_30,0,0
                         );
    if (*(int *)local_38.field0_0x0 != -1) {
      if (*(int *)local_38.field0_0x0 != 0) {
        LOCK();
        *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
        UNLOCK();
        local_30[0] = CONCAT31(local_30[0]._1_3_,*(int *)local_38.field0_0x0 != 0);
        if (*(int *)local_38.field0_0x0 != 0) goto LAB_1004e4c74;
      }
      QArrayData::deallocate((QArrayData *)local_38.field0_0x0,1,8);
    }
LAB_1004e4c74:
    if (cVar3 != '\0') {
      return 0xf0000017;
    }
  }
  lVar1 = *(long *)(param_1 + 8);
  lVar2 = *(long *)(lVar1 + 0x10);
  QString::toUtf8_helper(&local_40);
  iVar4 = _rename((char *)(lVar1 + lVar2),
                  (char *)(local_40.field0_0x0 + *(long *)(local_40.field0_0x0 + 0x10)));
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      UNLOCK();
      local_30[0] = CONCAT31(local_30[0]._1_3_,*(int *)local_40.field0_0x0 != 0);
      if (*(int *)local_40.field0_0x0 != 0) goto LAB_1004e4cd8;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,1,8);
  }
LAB_1004e4cd8:
  if (iVar4 != -1) {
    return 0;
  }
  piVar5 = ___error();
  iVar4 = *piVar5;
  if (iVar4 < 0x3f) {
    uVar6 = 0xf0000019;
    switch(iVar4) {
    case 1:
      uVar6 = 0xf0000007;
      break;
    case 2:
      break;
    default:
      goto switchD_1004e4d05_caseD_3;
    case 9:
      uVar6 = 0xf0000012;
      break;
    case 0xd:
    case 0x1e:
      uVar6 = 0xf0000007;
      break;
    case 0xe:
      uVar6 = 0xf0000006;
      break;
    case 0x11:
      uVar6 = 0xf0000017;
      break;
    case 0x14:
      uVar6 = 0xf0000015;
      break;
    case 0x16:
    case 0x1d:
      uVar6 = 0xf0000003;
      break;
    case 0x17:
    case 0x18:
      uVar6 = 0xf000001b;
      break;
    case 0x1c:
      uVar6 = 0xf000000c;
    }
  }
  else {
    if (iVar4 == 0x3f) {
      return 0xf0000018;
    }
    if (iVar4 == 0x42) {
      return 0xf000000b;
    }
switchD_1004e4d05_caseD_3:
    uVar6 = 0xf000001c;
  }
  return uVar6;
}


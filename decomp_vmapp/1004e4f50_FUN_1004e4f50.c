
undefined8 FUN_1004e4f50(long *param_1,char param_2)

{
  long lVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  undefined8 uVar5;
  QString local_40;
  QString local_38;
  QString local_30;
  undefined1 local_21;
  
  local_38.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
  QDir::QDir((QDir *)&local_30,&local_38);
  if (*(int *)local_38.field0_0x0 != -1) {
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      local_21 = *(int *)local_38.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1004e4fab;
    }
    QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
  }
LAB_1004e4fab:
  cVar2 = QDir::mkpath(&local_30);
  if (cVar2 != '\0') {
    uVar5 = 0;
    if (param_2 != '\0') {
      iVar3 = QString::lastIndexOf(param_1,0x2f,0xffffffff,1);
      lVar1 = *param_1;
      if ((*(int *)(lVar1 + 4) <= iVar3 + 1) ||
         (*(short *)(lVar1 + *(long *)(lVar1 + 0x10) + (long)(iVar3 + 1) * 2) != 0x2e)) {
        QString::toUtf8_helper(&local_40);
        _chflags((char *)(local_40.field0_0x0 + *(long *)(local_40.field0_0x0 + 0x10)),0x8000);
        if (*(int *)local_40.field0_0x0 != -1) {
          uVar5 = 0;
          if (*(int *)local_40.field0_0x0 != 0) {
            LOCK();
            *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
            local_21 = *(int *)local_40.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_21) goto switchD_1004e5076_caseD_2;
          }
          QArrayData::deallocate((QArrayData *)local_40.field0_0x0,1,8);
        }
      }
    }
    goto switchD_1004e5076_caseD_2;
  }
  piVar4 = ___error();
  iVar3 = *piVar4;
  if (iVar3 < 0x3f) {
    uVar5 = 0xf0000019;
    switch(iVar3) {
    case 1:
    case 0xd:
    case 0x1e:
      uVar5 = 0xf0000007;
      break;
    case 2:
      break;
    default:
      goto switchD_1004e5076_caseD_3;
    case 5:
      uVar5 = 0xf000001c;
      break;
    case 9:
      uVar5 = 0xf0000012;
      break;
    case 0xe:
      uVar5 = 0xf0000006;
      break;
    case 0x11:
      uVar5 = 0xf0000017;
      break;
    case 0x14:
      uVar5 = 0xf0000015;
      break;
    case 0x16:
    case 0x1d:
      uVar5 = 0xf0000003;
      break;
    case 0x17:
    case 0x18:
      uVar5 = 0xf000001b;
      break;
    case 0x1c:
      uVar5 = 0xf000000c;
    }
  }
  else {
    if (iVar3 == 0x3f) {
      uVar5 = 0xf0000018;
      goto switchD_1004e5076_caseD_2;
    }
    if (iVar3 == 0x42) {
      uVar5 = 0xf000000b;
      goto switchD_1004e5076_caseD_2;
    }
switchD_1004e5076_caseD_3:
    uVar5 = 0xf000001c;
  }
switchD_1004e5076_caseD_2:
  QDir::~QDir((QDir *)&local_30);
  return uVar5;
}


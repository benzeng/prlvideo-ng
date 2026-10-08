
undefined1 FUN_100b575c0(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  QArrayData *local_b0;
  char local_a8 [24];
  char *local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QString local_70;
  QArrayData *local_68;
  QString local_60;
  QString local_58;
  QString local_50;
  QArrayData *local_48;
  QRegExp local_40 [8];
  QArrayData *local_38;
  QRegExp local_30 [15];
  undefined1 local_21;
  
  local_38 = (QArrayData *)QString::fromAscii_helper("(\\[)([}{a-zA-Z0-9\\\\_- ]+)(\\])",0x1d);
  QRegExp::QRegExp(local_30,&local_38,1,0);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100b5762f;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_100b5762f:
  local_48 = (QArrayData *)QString::fromAscii_helper("([a-zA-Z0-9 :]+)=([a-zA-Z0-9 /\\-]+)",0x23);
  QRegExp::QRegExp(local_40,&local_48,1,0);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_21 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100b57688;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100b57688:
  iVar1 = QRegExp::indexIn(local_40,param_2,0,0);
  if (iVar1 == -1) {
    iVar1 = QRegExp::indexIn(local_30,param_2,0,0);
    if (iVar1 == -1) {
      local_a8[0] = '\x02';
      local_a8[1] = '\0';
      local_a8[2] = '\0';
      local_a8[3] = '\0';
      local_a8[0x14] = '\0';
      local_a8[0x15] = '\0';
      local_a8[0x16] = '\0';
      local_a8[0x17] = '\0';
      local_a8[0xc] = '\0';
      local_a8[0xd] = '\0';
      local_a8[0xe] = '\0';
      local_a8[0xf] = '\0';
      local_a8[0x10] = '\0';
      local_a8[0x11] = '\0';
      local_a8[0x12] = '\0';
      local_a8[0x13] = '\0';
      local_a8[4] = '\0';
      local_a8[5] = '\0';
      local_a8[6] = '\0';
      local_a8[7] = '\0';
      local_a8[8] = '\0';
      local_a8[9] = '\0';
      local_a8[10] = '\0';
      local_a8[0xb] = '\0';
      local_90 = "default";
      QString::toUtf8();
      if ((1 < *(uint *)local_b0) || (*(long *)(local_b0 + 0x10) != 0x18)) {
        QByteArray::reallocData
                  (&local_b0,*(uint *)(local_b0 + 4) + 1,*(uint *)(local_b0 + 8) >> 0x1f);
      }
      QMessageLogger::warning
                (local_a8,"Unknown config line: %s",local_b0 + *(long *)(local_b0 + 0x10));
      if (*(int *)local_b0 == -1) {
        uVar3 = 0;
      }
      else {
        if (*(int *)local_b0 != 0) {
          LOCK();
          *(int *)local_b0 = *(int *)local_b0 + -1;
          local_21 = *(int *)local_b0 != 0;
          UNLOCK();
          if ((bool)local_21) {
            uVar3 = 0;
            goto LAB_100b579e7;
          }
        }
        QArrayData::deallocate(local_b0,1,8);
        uVar3 = 0;
      }
      goto LAB_100b579e7;
    }
    QRegExp::cap((int)&local_88);
    QString::trimmed();
    if (*(int *)local_88 != -1) {
      if (*(int *)local_88 != 0) {
        LOCK();
        *(int *)local_88 = *(int *)local_88 + -1;
        local_21 = *(int *)local_88 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_100b578c7;
      }
      QArrayData::deallocate(local_88,2,8);
    }
LAB_100b578c7:
    uVar2 = FUN_100b57070(param_1,&local_80);
    *(undefined8 *)(param_1 + 0x18) = uVar2;
    uVar3 = 1;
    if (*(int *)local_80 != -1) {
      if (*(int *)local_80 != 0) {
        LOCK();
        *(int *)local_80 = *(int *)local_80 + -1;
        local_21 = *(int *)local_80 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_100b579e7;
      }
      QArrayData::deallocate(local_80,2,8);
    }
    goto LAB_100b579e7;
  }
  QString::indexOf(param_2,0x3d,0,1);
  local_50.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  local_58.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  QString::mid((int)&local_68,(int)param_2);
  QString::trimmed();
  QString::operator=(&local_50,&local_60);
  if (*(int *)local_60.field0_0x0 != -1) {
    if (*(int *)local_60.field0_0x0 != 0) {
      LOCK();
      *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
      local_21 = *(int *)local_60.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100b57720;
    }
    QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
  }
LAB_100b57720:
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_21 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100b57750;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_100b57750:
  QString::mid((int)&local_78,(int)param_2);
  QString::trimmed();
  QString::operator=(&local_58,&local_70);
  if (*(int *)local_70.field0_0x0 != -1) {
    if (*(int *)local_70.field0_0x0 != 0) {
      LOCK();
      *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
      local_21 = *(int *)local_70.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100b577af;
    }
    QArrayData::deallocate((QArrayData *)local_70.field0_0x0,2,8);
  }
LAB_100b577af:
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_21 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100b577df;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_100b577df:
  FUN_100b58060(*(undefined8 *)(param_1 + 0x18),&local_50,&local_58);
  if (*(int *)local_58.field0_0x0 != -1) {
    if (*(int *)local_58.field0_0x0 != 0) {
      LOCK();
      *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
      local_21 = *(int *)local_58.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100b57820;
    }
    QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
  }
LAB_100b57820:
  uVar3 = 1;
  if (*(int *)local_50.field0_0x0 != -1) {
    if (*(int *)local_50.field0_0x0 != 0) {
      LOCK();
      *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
      local_21 = *(int *)local_50.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100b579e7;
    }
    QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
  }
LAB_100b579e7:
  QRegExp::~QRegExp(local_40);
  QRegExp::~QRegExp(local_30);
  return uVar3;
}



void FUN_1007ec820(void)

{
  QString *pQVar1;
  char cVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  QArrayData *pQVar6;
  QArrayData *pQVar7;
  QArrayData *local_d0;
  QArrayData *local_c8;
  QArrayData *local_c0;
  QArrayData *local_b8;
  QArrayData *local_b0;
  QArrayData *local_a8;
  QArrayData *local_a0;
  Data *local_98;
  Data *local_90;
  Data *local_88;
  Data *local_80;
  int local_78;
  Data_conflict local_70;
  undefined4 local_68;
  QArrayData *local_60;
  QVariant local_58;
  QVariant local_48;
  undefined1 local_31;
  
  QSettings::QSettings((QSettings *)&local_58,(QObject *)0x0);
  local_60 = (QArrayData *)QString::fromAscii_helper("debugAntiviruses",0x10);
  local_68 = 0x80000000;
  local_70.field7 = 0;
  QSettings::value((QString *)&local_48,&local_58);
  cVar2 = QVariant::toBool();
  QVariant::~QVariant(&local_48);
  QVariant::~QVariant((QVariant *)&local_70);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007ec8cc;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_1007ec8cc:
  QSettings::~QSettings((QSettings *)&local_58);
  if (cVar2 == '\0') {
    return;
  }
  CAntivirusInfo::availableAntiviruses(&local_98,1);
  local_90 = local_98;
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 == 0) {
      QListData::detach((int)&local_90);
      lVar4 = (long)*(int *)(local_90 + 8);
      if ((local_98 + (long)*(int *)(local_98 + 8) * 8 != local_90 + lVar4 * 8) &&
         (lVar5 = *(int *)(local_90 + 0xc) - lVar4, lVar5 != 0 && lVar4 <= *(int *)(local_90 + 0xc))
         ) {
        _memcpy(local_90 + lVar4 * 8 + 0x10,local_98 + (long)*(int *)(local_98 + 8) * 8 + 0x10,
                lVar5 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + 1;
      local_31 = *(int *)local_98 != 0;
      UNLOCK();
    }
  }
  local_88 = local_90 + (long)*(int *)(local_90 + 8) * 8 + 0x10;
  local_80 = local_90 + (long)*(int *)(local_90 + 0xc) * 8 + 0x10;
  local_78 = 1;
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 == 0) {
LAB_1007ec9ae:
      QListData::dispose(local_98);
    }
    else {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_31 = *(int *)local_98 != 0;
      UNLOCK();
      if (!(bool)local_31) goto LAB_1007ec9ae;
    }
    if (local_78 == 0) goto LAB_1007ecc53;
  }
  if (local_88 != local_80) {
    do {
      pQVar1 = *(QString **)local_88;
      uVar3 = CAntivirusInfo::installationType();
      CAntivirusInfo::enumToString(&local_a8,uVar3);
      QString::toUtf8();
      pQVar7 = local_a0 + *(long *)(local_a0 + 0x10);
      local_c0 = (QArrayData *)PTR_shared_null_1021e1288;
      uVar3 = CAntivirusInfo::developer(pQVar1);
      CAntivirusInfo::enumToString(&local_b8,uVar3);
      QString::toUtf8();
      pQVar6 = local_b0 + *(long *)(local_b0 + 0x10);
      uVar3 = CAntivirusInfo::developer(pQVar1);
      CAntivirusInfo::enumToString(&local_d0,uVar3);
      QString::toUtf8();
      FUN_100df99c0("","prl_client_app",0,
                    "An antivirus with type %s\nhas a common developer type %s\nand has an entry for guest developer type %s"
                    ,pQVar7,pQVar6,local_c8 + *(long *)(local_c8 + 0x10));
      if (*(int *)local_c8 != -1) {
        if (*(int *)local_c8 != 0) {
          LOCK();
          *(int *)local_c8 = *(int *)local_c8 + -1;
          local_31 = *(int *)local_c8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1007ecaeb;
        }
        QArrayData::deallocate(local_c8,1,8);
      }
LAB_1007ecaeb:
      if (*(int *)local_d0 != -1) {
        if (*(int *)local_d0 != 0) {
          LOCK();
          *(int *)local_d0 = *(int *)local_d0 + -1;
          local_31 = *(int *)local_d0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1007ecb21;
        }
        QArrayData::deallocate(local_d0,2,8);
      }
LAB_1007ecb21:
      if (*(int *)local_b0 != -1) {
        if (*(int *)local_b0 != 0) {
          LOCK();
          *(int *)local_b0 = *(int *)local_b0 + -1;
          local_31 = *(int *)local_b0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1007ecb5e;
        }
        QArrayData::deallocate(local_b0,1,8);
      }
LAB_1007ecb5e:
      if (*(int *)local_b8 != -1) {
        if (*(int *)local_b8 != 0) {
          LOCK();
          *(int *)local_b8 = *(int *)local_b8 + -1;
          local_31 = *(int *)local_b8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1007ecb94;
        }
        QArrayData::deallocate(local_b8,2,8);
      }
LAB_1007ecb94:
      if (*(int *)local_c0 != -1) {
        if (*(int *)local_c0 != 0) {
          LOCK();
          *(int *)local_c0 = *(int *)local_c0 + -1;
          local_31 = *(int *)local_c0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1007ecbca;
        }
        QArrayData::deallocate(local_c0,2,8);
      }
LAB_1007ecbca:
      if (*(int *)local_a0 != -1) {
        if (*(int *)local_a0 != 0) {
          LOCK();
          *(int *)local_a0 = *(int *)local_a0 + -1;
          local_31 = *(int *)local_a0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1007ecc00;
        }
        QArrayData::deallocate(local_a0,1,8);
      }
LAB_1007ecc00:
      if (*(int *)local_a8 != -1) {
        if (*(int *)local_a8 != 0) {
          LOCK();
          *(int *)local_a8 = *(int *)local_a8 + -1;
          local_31 = *(int *)local_a8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1007ecc36;
        }
        QArrayData::deallocate(local_a8,2,8);
      }
LAB_1007ecc36:
      local_88 = local_88 + 8;
      local_78 = 1;
    } while (local_88 != local_80);
  }
LAB_1007ecc53:
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      UNLOCK();
      if (*(int *)local_90 != 0) {
        return;
      }
      local_31 = 0;
    }
    QListData::dispose(local_90);
  }
  return;
}


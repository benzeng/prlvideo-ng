
void FUN_100668be0(long param_1,CDownloadedKeyInfo *param_2)

{
  QString QVar1;
  char cVar2;
  int iVar3;
  QArrayData *local_168;
  QArrayData *local_160;
  QArrayData *local_158;
  QString local_150;
  QString local_148;
  QString local_140;
  QArrayData *local_138;
  QArrayData *local_130;
  QArrayData *local_128;
  QArrayData *local_120;
  QString local_118;
  CDownloadedKeyInfo local_110 [247];
  undefined1 local_19;
  
  CDownloadedKeyInfo::CDownloadedKeyInfo(local_110,param_2);
  CDownloadedKeyInfo::operator=((CDownloadedKeyInfo *)(param_1 + 0x10),local_110);
  CDownloadedKeyInfo::~CDownloadedKeyInfo(local_110);
  FUN_1001c72e0(&local_118);
  iVar3 = CDownloadedKeyInfo::getLicenseVersion();
  if (iVar3 != 0) {
    QString::number((int)&local_128,0xc);
    local_120 = local_128;
    if (1 < *(int *)local_128 + 1U) {
      LOCK();
      *(int *)local_128 = *(int *)local_128 + 1;
      local_19 = *(int *)local_128 != 0;
      UNLOCK();
    }
    QString::insert(&local_120,0,0x20);
    QString::append(&local_118);
    if (*(int *)local_120 != -1) {
      if (*(int *)local_120 != 0) {
        LOCK();
        *(int *)local_120 = *(int *)local_120 + -1;
        local_19 = *(int *)local_120 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_100668cc8;
      }
      QArrayData::deallocate(local_120,2,8);
    }
LAB_100668cc8:
    if (*(int *)local_128 != -1) {
      if (*(int *)local_128 != 0) {
        LOCK();
        *(int *)local_128 = *(int *)local_128 + -1;
        local_19 = *(int *)local_128 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_100668cfe;
      }
      QArrayData::deallocate(local_128,2,8);
    }
  }
LAB_100668cfe:
  QMetaObject::tr((char *)&local_138,PTR_staticMetaObject_1021e1520,0x1dd2c37);
  local_130 = local_138;
  if (1 < *(int *)local_138 + 1U) {
    LOCK();
    *(int *)local_138 = *(int *)local_138 + 1;
    local_19 = *(int *)local_138 != 0;
    UNLOCK();
  }
  QString::insert(&local_130,0,0x20);
  QString::append(&local_118);
  if (*(int *)local_130 != -1) {
    if (*(int *)local_130 != 0) {
      LOCK();
      *(int *)local_130 = *(int *)local_130 + -1;
      local_19 = *(int *)local_130 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100668d9b;
    }
    QArrayData::deallocate(local_130,2,8);
  }
LAB_100668d9b:
  if (*(int *)local_138 != -1) {
    if (*(int *)local_138 != 0) {
      LOCK();
      *(int *)local_138 = *(int *)local_138 + -1;
      local_19 = *(int *)local_138 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100668dd1;
    }
    QArrayData::deallocate(local_138,2,8);
  }
LAB_100668dd1:
  local_140.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  iVar3 = CDownloadedKeyInfo::getLicenseEdition();
  if (iVar3 == 2) {
    QMetaObject::tr((char *)&local_148,PTR_staticMetaObject_1021e1520,
                    (int)PTR_s_Business_Edition_102270a40);
    QString::operator=(&local_140,&local_148);
    if (*(int *)local_148.field0_0x0 != -1) {
      if (*(int *)local_148.field0_0x0 != 0) {
        LOCK();
        *(int *)local_148.field0_0x0 = *(int *)local_148.field0_0x0 + -1;
        local_19 = *(int *)local_148.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_100668edf;
      }
      QArrayData::deallocate((QArrayData *)local_148.field0_0x0,2,8);
    }
  }
  else {
    iVar3 = CDownloadedKeyInfo::getLicenseEdition();
    if (iVar3 == 3) {
      QMetaObject::tr((char *)&local_150,PTR_staticMetaObject_1021e1520,
                      (int)PTR_s_Pro_Edition_102270a48);
      QString::operator=(&local_140,&local_150);
      if (*(int *)local_150.field0_0x0 != -1) {
        if (*(int *)local_150.field0_0x0 != 0) {
          LOCK();
          *(int *)local_150.field0_0x0 = *(int *)local_150.field0_0x0 + -1;
          local_19 = *(int *)local_150.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_19) goto LAB_100668edf;
        }
        QArrayData::deallocate((QArrayData *)local_150.field0_0x0,2,8);
      }
    }
  }
LAB_100668edf:
  if (*(int *)(local_140.field0_0x0 + 4) != 0) {
    local_158 = (QArrayData *)local_140.field0_0x0;
    if (1 < *(int *)local_140.field0_0x0 + 1U) {
      LOCK();
      *(int *)local_140.field0_0x0 = *(int *)local_140.field0_0x0 + 1;
      local_19 = *(int *)local_140.field0_0x0 != 0;
      UNLOCK();
    }
    QString::insert(&local_158,0,0x20);
    QString::append(&local_118);
    if (*(int *)local_158 != -1) {
      if (*(int *)local_158 != 0) {
        LOCK();
        *(int *)local_158 = *(int *)local_158 + -1;
        local_19 = *(int *)local_158 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_100668f60;
      }
      QArrayData::deallocate(local_158,2,8);
    }
  }
LAB_100668f60:
  cVar2 = CDownloadedKeyInfo::isTrial();
  if (cVar2 != '\0') {
    QMetaObject::tr((char *)&local_168,PTR_staticMetaObject_1021e1520,0x1e0c4d0);
    local_160 = local_168;
    if (1 < *(int *)local_168 + 1U) {
      LOCK();
      *(int *)local_168 = *(int *)local_168 + 1;
      local_19 = *(int *)local_168 != 0;
      UNLOCK();
    }
    QString::insert(&local_160,0,0x20);
    QString::append(&local_118);
    if (*(int *)local_160 != -1) {
      if (*(int *)local_160 != 0) {
        LOCK();
        *(int *)local_160 = *(int *)local_160 + -1;
        local_19 = *(int *)local_160 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_10066900d;
      }
      QArrayData::deallocate(local_160,2,8);
    }
LAB_10066900d:
    if (*(int *)local_168 != -1) {
      if (*(int *)local_168 != 0) {
        LOCK();
        *(int *)local_168 = *(int *)local_168 + -1;
        local_19 = *(int *)local_168 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_100669043;
      }
      QArrayData::deallocate(local_168,2,8);
    }
  }
LAB_100669043:
  QVar1.field0_0x0 = local_118.field0_0x0;
  if (1 < *(int *)local_118.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_118.field0_0x0 = *(int *)local_118.field0_0x0 + 1;
    local_19 = *(int *)local_118.field0_0x0 != 0;
    UNLOCK();
  }
  CDownloadedKeyInfo::setProductName((QTypedArrayData<unsigned_short> *)(param_1 + 0x10));
  if (*(int *)QVar1.field0_0x0 != -1) {
    if (*(int *)QVar1.field0_0x0 != 0) {
      LOCK();
      *(int *)QVar1.field0_0x0 = *(int *)QVar1.field0_0x0 + -1;
      local_19 = *(int *)QVar1.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1006690a7;
    }
    QArrayData::deallocate((QArrayData *)QVar1.field0_0x0,2,8);
  }
LAB_1006690a7:
  if (*(int *)local_140.field0_0x0 != -1) {
    if (*(int *)local_140.field0_0x0 != 0) {
      LOCK();
      *(int *)local_140.field0_0x0 = *(int *)local_140.field0_0x0 + -1;
      local_19 = *(int *)local_140.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1006690dd;
    }
    QArrayData::deallocate((QArrayData *)local_140.field0_0x0,2,8);
  }
LAB_1006690dd:
  if (*(int *)local_118.field0_0x0 != -1) {
    if (*(int *)local_118.field0_0x0 != 0) {
      LOCK();
      *(int *)local_118.field0_0x0 = *(int *)local_118.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_118.field0_0x0 != 0) {
        return;
      }
      local_19 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_118.field0_0x0,2,8);
  }
  return;
}


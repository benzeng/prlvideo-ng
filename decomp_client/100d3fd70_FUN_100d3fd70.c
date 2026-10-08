
QString * FUN_100d3fd70(QString *param_1,undefined8 *param_2)

{
  QArrayData *pQVar1;
  int *piVar2;
  char cVar3;
  long lVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  QString local_a0;
  int *local_98;
  int *local_90;
  int *local_88;
  undefined4 local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QLocale local_60 [8];
  int *local_58;
  QString local_50;
  QString local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  pQVar1 = (QArrayData *)*param_2;
  if (*(int *)(pQVar1 + 4) == 0) {
    FUN_100d8c310(&local_48);
  }
  else {
    local_48.field0_0x0 = (QTypedArrayData<unsigned_short> *)pQVar1;
    if (1 < *(int *)pQVar1 + 1U) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + 1;
      local_31 = *(int *)pQVar1 != 0;
      UNLOCK();
    }
  }
  QDir::QDir((QDir *)&local_50,&local_48);
  cVar3 = QDir::exists();
  if (cVar3 == '\0') {
    param_1->field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
    goto LAB_100d400dd;
  }
  local_58 = (int *)PTR_shared_null_1021e15e8;
  QLocale::QLocale(local_60);
  QLocale::name();
  FUN_1000341d0(&local_58,&local_68);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_31 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100d3fe2d;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_100d3fe2d:
  QLocale::name();
  QString::left((int)&local_70);
  FUN_1000341d0(&local_58,&local_70);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_31 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100d3fe89;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_100d3fe89:
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_31 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100d3feb9;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_100d3feb9:
  local_98 = local_58;
  if (*local_58 != -1) {
    if (*local_58 == 0) {
      QListData::detach((int)&local_98);
      iVar7 = local_98[2];
      if (iVar7 != local_98[3]) {
        piVar5 = local_58 + (long)local_58[2] * 2 + 4;
        piVar6 = local_98 + (long)iVar7 * 2 + 4;
        lVar4 = (long)local_98[3] * 8 + (long)iVar7 * -8;
        do {
          piVar2 = *(int **)piVar5;
          *(int **)piVar6 = piVar2;
          if (1 < *piVar2 + 1U) {
            LOCK();
            *piVar2 = *piVar2 + 1;
            local_31 = *piVar2 != 0;
            UNLOCK();
          }
          piVar6 = piVar6 + 2;
          piVar5 = piVar5 + 2;
          lVar4 = lVar4 + -8;
        } while (lVar4 != 0);
      }
    }
    else {
      LOCK();
      *local_58 = *local_58 + 1;
      local_31 = *local_58 != 0;
      UNLOCK();
    }
  }
  local_90 = local_98 + (long)local_98[2] * 2 + 4;
  local_88 = local_98 + (long)local_98[3] * 2 + 4;
  if (local_98[2] != local_98[3]) {
    iVar7 = 1;
    do {
      local_80 = 1;
      local_a0.field0_0x0 = *(QTypedArrayData<unsigned_short> **)local_90;
      if (1 < *(int *)local_a0.field0_0x0 + 1U) {
        LOCK();
        *(int *)local_a0.field0_0x0 = *(int *)local_a0.field0_0x0 + 1;
        local_31 = *(int *)local_a0.field0_0x0 != 0;
        UNLOCK();
      }
      QString::fromUtf8_helper((char *)&local_40,0x1ef7743);
      QString::append(&local_a0);
      if (*(int *)local_40 != -1) {
        if (*(int *)local_40 != 0) {
          LOCK();
          *(int *)local_40 = *(int *)local_40 + -1;
          local_31 = *(int *)local_40 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100d4001a;
        }
        QArrayData::deallocate(local_40,2,8);
      }
LAB_100d4001a:
      cVar3 = QDir::exists(&local_50);
      if (cVar3 != '\0') {
        QDir::absoluteFilePath(param_1);
      }
      if (*(int *)local_a0.field0_0x0 != -1) {
        if (*(int *)local_a0.field0_0x0 != 0) {
          LOCK();
          *(int *)local_a0.field0_0x0 = *(int *)local_a0.field0_0x0 + -1;
          local_31 = *(int *)local_a0.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100d4007a;
        }
        QArrayData::deallocate((QArrayData *)local_a0.field0_0x0,2,8);
      }
LAB_100d4007a:
      if (cVar3 != '\0') goto LAB_100d400a8;
      local_90 = local_90 + 2;
    } while (local_90 != local_88);
  }
  local_80 = 1;
  iVar7 = 2;
LAB_100d400a8:
  FUN_100039a80(&local_98);
  if (iVar7 == 2) {
    param_1->field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  }
  QLocale::~QLocale(local_60);
  FUN_100039a80(&local_58);
LAB_100d400dd:
  QDir::~QDir((QDir *)&local_50);
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_48.field0_0x0 != 0) {
        return param_1;
      }
      local_31 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
  return param_1;
}


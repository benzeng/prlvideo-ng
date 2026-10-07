
QString * FUN_100673f20(QString *param_1,undefined8 *param_2,long *param_3)

{
  int *piVar1;
  char cVar2;
  long lVar3;
  uint uVar4;
  undefined8 *puVar5;
  int *piVar6;
  QTypedArrayData<unsigned_short> *pQVar7;
  int iVar8;
  bool bVar9;
  QFile local_80 [16];
  QString local_70;
  QArrayData *local_68;
  int *local_60;
  int *local_58;
  int *local_50;
  uint local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  local_60 = (int *)*param_3;
  if (*local_60 != -1) {
    if (*local_60 == 0) {
      QListData::detach((int)&local_60);
      iVar8 = local_60[2];
      if (iVar8 != local_60[3]) {
        puVar5 = (undefined8 *)(*param_3 + 0x10 + (long)*(int *)(*param_3 + 8) * 8);
        piVar6 = local_60 + (long)iVar8 * 2 + 4;
        lVar3 = (long)local_60[3] * 8 + (long)iVar8 * -8;
        do {
          piVar1 = (int *)*puVar5;
          *(int **)piVar6 = piVar1;
          if (1 < *piVar1 + 1U) {
            LOCK();
            *piVar1 = *piVar1 + 1;
            local_31 = *piVar1 != 0;
            UNLOCK();
          }
          piVar6 = piVar6 + 2;
          puVar5 = puVar5 + 1;
          lVar3 = lVar3 + -8;
        } while (lVar3 != 0);
      }
    }
    else {
      LOCK();
      *local_60 = *local_60 + 1;
      local_31 = *local_60 != 0;
      UNLOCK();
    }
  }
  local_58 = local_60 + (long)local_60[2] * 2 + 4;
  local_50 = local_60 + (long)local_60[3] * 2 + 4;
  local_48 = 1;
  if (local_60[2] != local_60[3]) {
    do {
      local_68 = *(QArrayData **)local_58;
      if (1 < *(int *)local_68 + 1U) {
        LOCK();
        *(int *)local_68 = *(int *)local_68 + 1;
        local_31 = *(int *)local_68 != 0;
        UNLOCK();
      }
      iVar8 = 5;
      if (local_48 != 0) {
        local_70.field0_0x0 = (QTypedArrayData<unsigned_short> *)*param_2;
        if (1 < *(int *)local_70.field0_0x0 + 1U) {
          LOCK();
          *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + 1;
          local_31 = *(int *)local_70.field0_0x0 != 0;
          UNLOCK();
        }
        QString::fromUtf8_helper((char *)&local_40,0xa02eac);
        QString::append(&local_70);
        if (*(int *)local_40 != -1) {
          if (*(int *)local_40 != 0) {
            LOCK();
            *(int *)local_40 = *(int *)local_40 + -1;
            local_31 = *(int *)local_40 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100674095;
          }
          QArrayData::deallocate(local_40,2,8);
        }
LAB_100674095:
        param_1->field0_0x0 = local_70.field0_0x0;
        if (1 < *(int *)local_70.field0_0x0 + 1U) {
          LOCK();
          *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + 1;
          local_31 = *(int *)local_70.field0_0x0 != 0;
          UNLOCK();
        }
        QString::append(param_1);
        if (*(int *)local_70.field0_0x0 != -1) {
          if (*(int *)local_70.field0_0x0 != 0) {
            LOCK();
            *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
            local_31 = *(int *)local_70.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1006740e9;
          }
          QArrayData::deallocate((QArrayData *)local_70.field0_0x0,2,8);
        }
LAB_1006740e9:
        QFile::QFile(local_80,param_1);
        cVar2 = QFile::exists();
        QFile::~QFile(local_80);
        iVar8 = 1;
        if (cVar2 == '\0') {
          pQVar7 = param_1->field0_0x0;
          if (*(int *)pQVar7 != -1) {
            if (*(int *)pQVar7 != 0) {
              LOCK();
              *(int *)pQVar7 = *(int *)pQVar7 + -1;
              local_31 = *(int *)pQVar7 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_10067413e;
              pQVar7 = param_1->field0_0x0;
            }
            QArrayData::deallocate((QArrayData *)pQVar7,2,8);
          }
LAB_10067413e:
          local_48 = 0;
          iVar8 = 5;
        }
      }
      if (*(int *)local_68 != -1) {
        if (*(int *)local_68 != 0) {
          LOCK();
          *(int *)local_68 = *(int *)local_68 + -1;
          local_31 = *(int *)local_68 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10067417b;
        }
        QArrayData::deallocate(local_68,2,8);
      }
LAB_10067417b:
      if (iVar8 != 5) {
        FUN_100013180(&local_60);
        return param_1;
      }
      local_58 = local_58 + 2;
      uVar4 = local_48 ^ 1;
      bVar9 = local_48 != 1;
      local_48 = uVar4;
    } while ((bVar9) && (local_58 != local_50));
  }
  FUN_100013180(&local_60);
  param_1->field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
  return param_1;
}


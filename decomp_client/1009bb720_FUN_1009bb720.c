
void FUN_1009bb720(undefined8 param_1,long *param_2)

{
  int iVar1;
  int *piVar2;
  char cVar3;
  long lVar4;
  uint uVar5;
  undefined8 *puVar6;
  Data *pDVar7;
  Data *pDVar8;
  QArrayData *pQVar9;
  bool bVar10;
  QString local_88;
  QDateTime local_80;
  QDateTime local_78;
  QFileInfo local_70 [8];
  QString local_68;
  Data *local_60;
  Data *local_58;
  Data *local_50;
  uint local_48;
  QDateTime local_40;
  undefined1 local_31;
  
  local_88.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  QDateTime::QDateTime(&local_40);
  local_60 = (Data *)*param_2;
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 == 0) {
      QListData::detach((int)&local_60);
      iVar1 = *(int *)(local_60 + 8);
      if (iVar1 != *(int *)(local_60 + 0xc)) {
        puVar6 = (undefined8 *)(*param_2 + 0x10 + (long)*(int *)(*param_2 + 8) * 8);
        pDVar7 = local_60 + (long)iVar1 * 8 + 0x10;
        lVar4 = (long)*(int *)(local_60 + 0xc) * 8 + (long)iVar1 * -8;
        do {
          piVar2 = (int *)*puVar6;
          *(int **)pDVar7 = piVar2;
          if (1 < *piVar2 + 1U) {
            LOCK();
            *piVar2 = *piVar2 + 1;
            local_31 = *piVar2 != 0;
            UNLOCK();
          }
          pDVar7 = pDVar7 + 8;
          puVar6 = puVar6 + 1;
          lVar4 = lVar4 + -8;
        } while (lVar4 != 0);
      }
    }
    else {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + 1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
    }
  }
  local_58 = local_60 + (long)*(int *)(local_60 + 8) * 8 + 0x10;
  local_50 = local_60 + (long)*(int *)(local_60 + 0xc) * 8 + 0x10;
  local_48 = 1;
  if (*(int *)(local_60 + 8) != *(int *)(local_60 + 0xc)) {
    do {
      local_68.field0_0x0 = *(QTypedArrayData<unsigned_short> **)local_58;
      if (1 < *(int *)local_68.field0_0x0 + 1U) {
        LOCK();
        *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + 1;
        local_31 = *(int *)local_68.field0_0x0 != 0;
        UNLOCK();
      }
      if (local_48 != 0) {
        QFileInfo::QFileInfo(local_70,&local_68);
        cVar3 = QDateTime::isValid();
        if (cVar3 == '\0') {
LAB_1009bb873:
          QString::operator=(&local_88,&local_68);
          QFileInfo::lastModified();
          QDateTime::operator=(&local_40,&local_80);
          QDateTime::~QDateTime(&local_80);
        }
        else {
          QFileInfo::lastModified();
          cVar3 = QDateTime::operator<(&local_40,&local_78);
          QDateTime::~QDateTime(&local_78);
          if (cVar3 != '\0') goto LAB_1009bb873;
        }
        QFileInfo::~QFileInfo(local_70);
        local_48 = 0;
      }
      if (*(int *)local_68.field0_0x0 != -1) {
        if (*(int *)local_68.field0_0x0 != 0) {
          LOCK();
          *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
          local_31 = *(int *)local_68.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1009bb8de;
        }
        QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
      }
LAB_1009bb8de:
      local_58 = local_58 + 8;
      uVar5 = local_48 ^ 1;
      bVar10 = local_48 != 1;
      local_48 = uVar5;
    } while ((bVar10) && (local_58 != local_50));
  }
  pDVar7 = local_60;
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1009bb991;
    }
    iVar1 = *(int *)(local_60 + 0xc);
    if (iVar1 != *(int *)(local_60 + 8)) {
      lVar4 = (long)*(int *)(local_60 + 8) * 8 + (long)iVar1 * -8;
      pDVar8 = local_60 + (long)iVar1 * 8 + 8;
      do {
        pQVar9 = *(QArrayData **)pDVar8;
        if (*(int *)pQVar9 == 0) {
LAB_1009bb970:
          QArrayData::deallocate(pQVar9,2,8);
        }
        else if (*(int *)pQVar9 != -1) {
          LOCK();
          *(int *)pQVar9 = *(int *)pQVar9 + -1;
          local_31 = *(int *)pQVar9 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar9 = *(QArrayData **)pDVar8;
            goto LAB_1009bb970;
          }
        }
        pDVar8 = pDVar8 + -8;
        lVar4 = lVar4 + 8;
      } while (lVar4 != 0);
    }
    QListData::dispose(pDVar7);
  }
LAB_1009bb991:
  QDateTime::~QDateTime(&local_40);
  FUN_1009bbe20(param_1,&local_88);
  if (*(int *)local_88.field0_0x0 != -1) {
    if (*(int *)local_88.field0_0x0 != 0) {
      LOCK();
      *(int *)local_88.field0_0x0 = *(int *)local_88.field0_0x0 + -1;
      UNLOCK();
      local_60 = (Data *)CONCAT71(local_60._1_7_,*(int *)local_88.field0_0x0 != 0);
      if (*(int *)local_88.field0_0x0 != 0) {
        return;
      }
    }
    QArrayData::deallocate((QArrayData *)local_88.field0_0x0,2,8);
  }
  return;
}


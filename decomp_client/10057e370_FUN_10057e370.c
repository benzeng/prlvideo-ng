
void FUN_10057e370(long param_1)

{
  uint uVar1;
  QString *pQVar2;
  Data *pDVar3;
  char cVar4;
  Data *pDVar5;
  long lVar6;
  long lVar7;
  QString local_a0;
  QString local_98;
  QTypedArrayData<unsigned_short> *local_90;
  undefined1 local_88 [8];
  QString local_80;
  long local_78;
  undefined8 *local_70;
  undefined8 *local_68;
  undefined4 local_60;
  QString local_58;
  Data *local_50;
  QVariant local_48;
  undefined1 local_31;
  
  QTreeWidget::selectedItems();
  if (*(uint *)(local_50 + 0xc) != *(uint *)(local_50 + 8)) {
    local_58.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
    FUN_10055a620(&local_78);
    local_70 = (undefined8 *)(local_78 + 0x10 + (long)*(int *)(local_78 + 8) * 8);
    local_68 = (undefined8 *)(local_78 + 0x10 + (long)*(int *)(local_78 + 0xc) * 8);
    if (*(int *)(local_78 + 8) != *(int *)(local_78 + 0xc)) {
      do {
        pDVar3 = local_50;
        local_60 = 1;
        pQVar2 = (QString *)*local_70;
        if (1 < *(uint *)local_50) {
          uVar1 = *(uint *)(local_50 + 8);
          pDVar5 = (Data *)QListData::detach((int)&local_50);
          lVar6 = (long)(int)*(uint *)(local_50 + 8);
          if ((pDVar3 + (long)(int)uVar1 * 8 + 0x10 != local_50 + lVar6 * 8 + 0x10) &&
             (lVar7 = (int)*(uint *)(local_50 + 0xc) - lVar6,
             lVar7 != 0 && lVar6 <= (int)*(uint *)(local_50 + 0xc))) {
            _memcpy(local_50 + lVar6 * 8 + 0x10,pDVar3 + (long)(int)uVar1 * 8 + 0x10,lVar7 * 8);
          }
          if (*(int *)pDVar5 != -1) {
            if (*(int *)pDVar5 != 0) {
              LOCK();
              *(int *)pDVar5 = *(int *)pDVar5 + -1;
              local_31 = *(int *)pDVar5 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_10057e470;
            }
            QListData::dispose(pDVar5);
          }
        }
LAB_10057e470:
        (**(code **)(**(long **)(local_50 + (long)(int)*(uint *)(local_50 + 8) * 8 + 0x10) + 0x18))
                  (&local_48,*(long **)(local_50 + (long)(int)*(uint *)(local_50 + 8) * 8 + 0x10),0,
                   0);
        QVariant::toString();
        QVariant::~QVariant(&local_48);
        cVar4 = operator==(pQVar2,&local_80);
        if (*(int *)local_80.field0_0x0 != -1) {
          if (*(int *)local_80.field0_0x0 != 0) {
            LOCK();
            *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + -1;
            local_31 = *(int *)local_80.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10057e4df;
          }
          QArrayData::deallocate((QArrayData *)local_80.field0_0x0,2,8);
        }
LAB_10057e4df:
        if (cVar4 != '\0') {
          local_98.field0_0x0 = pQVar2->field0_0x0;
          if (1 < *(int *)local_98.field0_0x0 + 1U) {
            LOCK();
            *(int *)local_98.field0_0x0 = *(int *)local_98.field0_0x0 + 1;
            local_31 = *(int *)local_98.field0_0x0 != 0;
            UNLOCK();
          }
          local_90 = pQVar2[1].field0_0x0;
          if (1 < *(int *)local_90 + 1U) {
            LOCK();
            *(int *)local_90 = *(int *)local_90 + 1;
            local_31 = *(int *)local_90 != 0;
            UNLOCK();
          }
          FUN_1000ff290(local_88,pQVar2 + 2);
          FUN_10071a2e0(&local_a0,param_1 + 0x28,pQVar2);
          QString::operator=(&local_98,&local_a0);
          if (*(int *)local_a0.field0_0x0 != -1) {
            if (*(int *)local_a0.field0_0x0 != 0) {
              LOCK();
              *(int *)local_a0.field0_0x0 = *(int *)local_a0.field0_0x0 + -1;
              local_31 = *(int *)local_a0.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_10057e595;
            }
            QArrayData::deallocate((QArrayData *)local_a0.field0_0x0,2,8);
          }
LAB_10057e595:
          FUN_100581a70(param_1 + 0x28,&local_98);
          QString::operator=(&local_58,&local_98);
          FUN_1000fec30(&local_98);
        }
        local_70 = local_70 + 1;
      } while (local_70 != local_68);
    }
    local_60 = 1;
    FUN_1000fe670(&local_78);
    FUN_10057c480(param_1,&local_58);
    if (*(int *)local_58.field0_0x0 != -1) {
      if (*(int *)local_58.field0_0x0 != 0) {
        LOCK();
        *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
        local_31 = *(int *)local_58.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10057e61a;
      }
      QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
    }
  }
LAB_10057e61a:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      UNLOCK();
      if (*(int *)local_50 != 0) {
        return;
      }
      local_31 = 0;
    }
    QListData::dispose(local_50);
  }
  return;
}


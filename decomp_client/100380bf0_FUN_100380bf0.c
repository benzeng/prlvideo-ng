
void FUN_100380bf0(long param_1)

{
  QString *pQVar1;
  undefined *puVar2;
  undefined *puVar3;
  size_t sVar4;
  QArrayData *pQVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  QVariant local_78;
  Data *local_68;
  Data *local_60;
  Data *local_58;
  undefined4 local_50;
  QArrayData *local_48;
  Data *local_40;
  undefined1 local_31;
  
  local_48 = (QArrayData *)PTR_shared_null_1021e1288;
  local_40 = (Data *)PTR_shared_null_1021e15e8;
  qt_qFindChildren_helper
            (*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x48),&local_48,
             PTR_staticMetaObject_1021e1350,&local_40,1);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100380c69;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100380c69:
  local_68 = local_40;
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 == 0) {
      QListData::detach((int)&local_68);
      lVar6 = (long)*(int *)(local_68 + 8);
      if ((local_40 + (long)*(int *)(local_40 + 8) * 8 != local_68 + lVar6 * 8) &&
         (lVar7 = *(int *)(local_68 + 0xc) - lVar6, lVar7 != 0 && lVar6 <= *(int *)(local_68 + 0xc))
         ) {
        _memcpy(local_68 + lVar6 * 8 + 0x10,local_40 + (long)*(int *)(local_40 + 8) * 8 + 0x10,
                lVar7 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + 1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
    }
  }
  puVar2 = PTR_typeinfo_1021e1638;
  local_60 = local_68 + (long)*(int *)(local_68 + 8) * 8 + 0x10;
  local_58 = local_68 + (long)*(int *)(local_68 + 0xc) * 8 + 0x10;
  if (*(int *)(local_68 + 8) != *(int *)(local_68 + 0xc)) {
    do {
      local_50 = 1;
      pQVar1 = *(QString **)local_60;
      if ((pQVar1 == (QString *)0x0) ||
         (lVar6 = ___dynamic_cast(pQVar1,PTR_typeinfo_1021e16c8,puVar2,0), lVar6 == 0)) {
        QVariant::QVariant(&local_78,0xb);
        QObject::setProperty((char *)pQVar1,(QVariant *)"NSBezelStyle");
        QVariant::~QVariant(&local_78);
      }
      else {
        CHelpButton::setStyle(lVar6,1);
      }
      lVar6 = (**(code **)(pQVar1->field0_0x0 + 8))(pQVar1,"QCheckBox");
      puVar3 = PTR_s_QCheckBox___spacing__4px___QChec_102271010;
      if (lVar6 != 0) {
        iVar8 = -1;
        if (PTR_s_QCheckBox___spacing__4px___QChec_102271010 != (undefined *)0x0) {
          sVar4 = _strlen(PTR_s_QCheckBox___spacing__4px___QChec_102271010);
          iVar8 = (int)sVar4;
        }
        pQVar5 = (QArrayData *)QString::fromAscii_helper(puVar3,iVar8);
        QWidget::setStyleSheet(pQVar1);
        if (*(int *)pQVar5 != -1) {
          if (*(int *)pQVar5 != 0) {
            LOCK();
            *(int *)pQVar5 = *(int *)pQVar5 + -1;
            local_31 = *(int *)pQVar5 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100380de3;
          }
          QArrayData::deallocate(pQVar5,2,8);
        }
      }
LAB_100380de3:
      local_60 = local_60 + 8;
    } while (local_60 != local_58);
  }
  local_50 = 1;
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_31 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100380e26;
    }
    QListData::dispose(local_68);
  }
LAB_100380e26:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return;
      }
      local_31 = 0;
    }
    QListData::dispose(local_40);
  }
  return;
}


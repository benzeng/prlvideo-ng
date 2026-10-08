
void FUN_10007dee0(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  QArrayData *pQVar5;
  long lVar6;
  undefined8 uVar7;
  int iVar8;
  Data_conflict local_a0;
  undefined4 local_98;
  QArrayData *local_90;
  QVariant local_88;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QVariant local_60;
  undefined1 local_49;
  undefined8 local_48;
  undefined8 local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_1021e1840;
  uVar2 = (*(code *)PTR__objc_msgSend_1021e1c68)(PTR__OBJC_CLASS___NSMutableDictionary_10226a878);
  QSettings::QSettings((QSettings *)&local_60,(QObject *)0x0);
  local_68 = (QArrayData *)QString::fromAscii_helper("VM List window",0xe);
  QSettings::beginGroup((QString *)&local_60);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_49 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_49) goto LAB_10007df7a;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_10007df7a:
  local_70 = (QArrayData *)QString::fromAscii_helper("Items",5);
  iVar1 = QSettings::beginReadArray((QString *)&local_60);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_49 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_49) goto LAB_10007dfd2;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_10007dfd2:
  if (0 < iVar1) {
    uVar7 = *(undefined8 *)PTR__kDefaultsVmItemPosKey_1021e19b0;
    iVar8 = 0;
    do {
      QSettings::setArrayIndex((int)&local_60);
      local_90 = (QArrayData *)QString::fromAscii_helper("UUID",4);
      local_98 = 0x80000000;
      local_a0.field7 = 0;
      QSettings::value((QString *)&local_88,&local_60);
      QVariant::toString();
      QVariant::~QVariant(&local_88);
      QVariant::~QVariant((QVariant *)&local_a0);
      if (*(int *)local_90 != -1) {
        if (*(int *)local_90 != 0) {
          LOCK();
          *(int *)local_90 = *(int *)local_90 + -1;
          local_49 = *(int *)local_90 != 0;
          UNLOCK();
          if ((bool)local_49) goto LAB_10007e0ae;
        }
        QArrayData::deallocate(local_90,2,8);
      }
LAB_10007e0ae:
      if (*(int *)(local_78 + 4) != 0) {
        uVar3 = (*(code *)PTR__objc_msgSend_1021e1c68)
                          (PTR__OBJC_CLASS___NSString_10226a7c8,PTR_s_stringWithQString__102268d00,
                           &local_78);
        local_48 = uVar7;
        local_40 = (*(code *)PTR__objc_msgSend_1021e1c68)
                             (PTR__OBJC_CLASS___NSNumber_10226a848,PTR_s_numberWithInt__1022698b8,
                              iVar8);
        uVar4 = (*(code *)PTR__objc_msgSend_1021e1c68)
                          (PTR__OBJC_CLASS___NSDictionary_10226a900,
                           PTR_s_dictionaryWithObjects_forKeys_co_1022698c8,&local_40,&local_48,1);
        (*(code *)PTR__objc_msgSend_1021e1c68)
                  (uVar2,PTR_s_setObject_forKeyedSubscript__1022698f8,uVar4,uVar3);
      }
      if (*(int *)local_78 != -1) {
        if (*(int *)local_78 != 0) {
          LOCK();
          *(int *)local_78 = *(int *)local_78 + -1;
          local_49 = *(int *)local_78 != 0;
          UNLOCK();
          if ((bool)local_49) goto LAB_10007e16c;
        }
        QArrayData::deallocate(local_78,2,8);
      }
LAB_10007e16c:
      iVar8 = iVar8 + 1;
    } while (iVar8 < iVar1);
  }
  QSettings::endArray();
  QSettings::endGroup();
  pQVar5 = (QArrayData *)QString::fromAscii_helper("VM List window",0xe);
  QSettings::beginGroup((QString *)&local_60);
  if (*(int *)pQVar5 != -1) {
    if (*(int *)pQVar5 != 0) {
      LOCK();
      *(int *)pQVar5 = *(int *)pQVar5 + -1;
      local_49 = *(int *)pQVar5 != 0;
      UNLOCK();
      if ((bool)local_49) goto LAB_10007e1ec;
    }
    QArrayData::deallocate(pQVar5,2,8);
  }
LAB_10007e1ec:
  pQVar5 = (QArrayData *)QString::fromAscii_helper("",0);
  QSettings::remove((QString *)&local_60);
  if (*(int *)pQVar5 != -1) {
    if (*(int *)pQVar5 != 0) {
      LOCK();
      *(int *)pQVar5 = *(int *)pQVar5 + -1;
      local_49 = *(int *)pQVar5 != 0;
      UNLOCK();
      if ((bool)local_49) goto LAB_10007e247;
    }
    QArrayData::deallocate(pQVar5,2,8);
  }
LAB_10007e247:
  QSettings::endGroup();
  lVar6 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar2,PTR_s_count_102268e68);
  if (lVar6 != 0) {
    uVar7 = (*(code *)PTR__objc_msgSend_1021e1c68)
                      (PTR__OBJC_CLASS___NSUserDefaults_10226a908,
                       PTR_s_standardUserDefaults_102269ab0);
    (*(code *)PTR__objc_msgSend_1021e1c68)
              (uVar7,PTR_s_setObject_forKey__102269208,uVar2,
               *(undefined8 *)PTR__kDefaultsVmItemsKey_1021e19b8);
    (*(code *)PTR__objc_msgSend_1021e1c68)(uVar7,PTR_s_synchronize_1022698e8);
  }
  QSettings::~QSettings((QSettings *)&local_60);
  if (*(long *)PTR____stack_chk_guard_1021e1840 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}


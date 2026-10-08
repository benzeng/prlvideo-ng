
void FUN_100034a10(long *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  QVariant local_70;
  QArrayData *local_60;
  Data *local_58;
  Data *local_50;
  Data *local_48;
  undefined4 local_40;
  undefined1 local_31;
  
  uVar2 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (PTR__OBJC_CLASS___NSMutableDictionary_10226a878,PTR_s_dictionary_1022698f0);
  uVar2 = _objc_retainAutoreleasedReturnValue(uVar2);
  local_58 = (Data *)*param_1;
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 == 0) {
      QListData::detach((int)&local_58);
      lVar6 = (long)*(int *)(local_58 + 8);
      lVar3 = *param_1;
      if (((Data *)(lVar3 + (long)*(int *)(lVar3 + 8) * 8) != local_58 + lVar6 * 8) &&
         (lVar7 = *(int *)(local_58 + 0xc) - lVar6, lVar7 != 0 && lVar6 <= *(int *)(local_58 + 0xc))
         ) {
        _memcpy(local_58 + lVar6 * 8 + 0x10,(void *)(lVar3 + 0x10 + (long)*(int *)(lVar3 + 8) * 8),
                lVar7 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + 1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
    }
  }
  puVar1 = PTR__objc_release_1021e1c70;
  local_50 = local_58 + (long)*(int *)(local_58 + 8) * 8 + 0x10;
  local_48 = local_58 + (long)*(int *)(local_58 + 0xc) * 8 + 0x10;
  if (*(int *)(local_58 + 8) != *(int *)(local_58 + 0xc)) {
    do {
      local_40 = 1;
      uVar5 = *(undefined8 *)local_50;
      lVar3 = FUN_100037390(uVar5);
      if (lVar3 != 0) {
        FUN_100037390(uVar5);
        QObject::property((char *)&local_70);
        QVariant::toString();
        QVariant::~QVariant(&local_70);
        uVar4 = (*(code *)PTR__objc_msgSend_1021e1c68)
                          (PTR__OBJC_CLASS___NSString_10226a7c8,PTR_s_stringWithQString__102268d00,
                           &local_60);
        uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
        uVar5 = FUN_1000345a0(uVar5);
        uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
        (*(code *)PTR__objc_msgSend_1021e1c68)
                  (uVar2,PTR_s_setObject_forKeyedSubscript__1022698f8,uVar5,uVar4);
        (*(code *)puVar1)(uVar5);
        (*(code *)puVar1)(uVar4);
        if (*(int *)local_60 != -1) {
          if (*(int *)local_60 != 0) {
            LOCK();
            *(int *)local_60 = *(int *)local_60 + -1;
            local_31 = *(int *)local_60 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100034bad;
          }
          QArrayData::deallocate(local_60,2,8);
        }
      }
LAB_100034bad:
      local_50 = local_50 + 8;
    } while (local_50 != local_48);
  }
  local_40 = 1;
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100034bf0;
    }
    QListData::dispose(local_58);
  }
LAB_100034bf0:
  uVar5 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (PTR__OBJC_CLASS___NSUserDefaults_10226a908,PTR_s_alloc_102268b58);
  uVar5 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (uVar5,PTR_s_initWithSuiteName__1022698d0,&cf_4C6364ACXT_com_parallels_Desktop);
  (*(code *)PTR__objc_msgSend_1021e1c68)
            (uVar5,PTR_s_setObject_forKey__102269208,uVar2,&cf_PDRunningVms);
  (*(code *)PTR__objc_msgSend_1021e1c68)(uVar5,PTR_s_synchronize_1022698e8);
  puVar1 = PTR__objc_release_1021e1c70;
  (*(code *)PTR__objc_release_1021e1c70)(uVar5);
  (*(code *)puVar1)(uVar2);
  return;
}


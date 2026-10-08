
void FUN_1000345a0(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  QArrayData *local_98;
  QArrayData *local_90;
  QArrayData *local_88;
  undefined1 local_79;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  long local_38;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_38 = lVar1;
  FUN_100037390();
  uVar4 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_1021fd420);
  puVar2 = PTR__OBJC_CLASS___NSString_10226a7c8;
  local_78 = &cf_PDVmName;
  FUN_10018d830(&local_88,uVar4);
  uVar5 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (puVar2,PTR_s_stringWithQString__102268d00,&local_88);
  uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
  puVar2 = PTR__OBJC_CLASS___NSNumber_10226a848;
  local_70 = &cf_PDVmOsVersion;
  local_58 = uVar5;
  uVar3 = FUN_10018f890(uVar4);
  uVar4 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (puVar2,PTR_s_numberWithUnsignedInt__102269200,uVar3);
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  local_68 = &cf_PDVmCpuUsage;
  local_50 = uVar4;
  local_90 = (QArrayData *)QString::fromAscii_helper("cpu",3);
  uVar6 = FUN_1000373b0(param_1,&local_90);
  uVar6 = FUN_100034420(uVar6);
  uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
  local_60 = &cf_PDVmRamUsage;
  local_48 = uVar6;
  local_98 = (QArrayData *)QString::fromAscii_helper("ram",3);
  uVar7 = FUN_1000373b0(param_1,&local_98);
  uVar7 = FUN_100034420(uVar7);
  uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
  local_40 = uVar7;
  uVar8 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (PTR__OBJC_CLASS___NSDictionary_10226a900,
                     PTR_s_dictionaryWithObjects_forKeys_co_1022698c8,&local_58,&local_78,4);
  uVar8 = _objc_retainAutoreleasedReturnValue(uVar8);
  (*(code *)PTR__objc_release_1021e1c70)(uVar7);
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_79 = *(int *)local_98 != 0;
      UNLOCK();
      if ((bool)local_79) goto LAB_10003475d;
    }
    QArrayData::deallocate(local_98,2,8);
  }
LAB_10003475d:
  (*(code *)PTR__objc_release_1021e1c70)(uVar6);
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_79 = *(int *)local_90 != 0;
      UNLOCK();
      if ((bool)local_79) goto LAB_10003479f;
    }
    QArrayData::deallocate(local_90,2,8);
  }
LAB_10003479f:
  puVar2 = PTR__objc_release_1021e1c70;
  (*(code *)PTR__objc_release_1021e1c70)(uVar4);
  (*(code *)puVar2)(uVar5);
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_79 = *(int *)local_88 != 0;
      UNLOCK();
      if ((bool)local_79) goto LAB_1000347e4;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_1000347e4:
  if (lVar1 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(uVar8);
  return;
}


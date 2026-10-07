
QString * FUN_1006d6200(QString *param_1,long *param_2)

{
  long lVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  QString local_40;
  undefined1 local_33;
  
  puVar2 = PTR_shared_null_100ba20d0;
  param_1->field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
  uVar4 = (*(code *)PTR__objc_msgSend_100ba25e8)
                    (PTR__OBJC_CLASS___NSAutoreleasePool_100bedb20,PTR_s_alloc_100bed228);
  uVar4 = (*(code *)PTR__objc_msgSend_100ba25e8)(uVar4,PTR_s_init_100bed248);
  uVar5 = (*(code *)PTR__objc_msgSend_100ba25e8)
                    (PTR__OBJC_CLASS___NSFileManager_100bedc68,PTR_s_defaultManager_100bedaa0);
  uVar6 = (*(code *)PTR__objc_msgSend_100ba25e8)
                    (PTR__OBJC_CLASS___NSString_100bedb00,PTR_s_alloc_100bed228);
  lVar1 = *param_2;
  uVar6 = (*(code *)PTR__objc_msgSend_100ba25e8)
                    (uVar6,PTR_s_initWithCharacters_length__100beda30,
                     *(long *)(lVar1 + 0x10) + lVar1,(long)*(int *)(lVar1 + 4));
  uVar6 = (*(code *)PTR__objc_msgSend_100ba25e8)(uVar6,PTR_s_autorelease_100bed238);
  uVar5 = (*(code *)PTR__objc_msgSend_100ba25e8)
                    (uVar5,PTR_s_containerURLForSecurityApplicati_100bedae8,uVar6);
  uVar5 = (*(code *)PTR__objc_msgSend_100ba25e8)(uVar5,PTR_s_path_100bedaf0);
  iVar3 = (*(code *)PTR__objc_msgSend_100ba25e8)(uVar5,PTR_s_length_100bed478);
  if (iVar3 == 0) {
    local_40.field0_0x0 = (QTypedArrayData<unsigned_short> *)puVar2;
  }
  else {
    QString::QString(&local_40,iVar3,0);
    (*(code *)PTR__objc_msgSend_100ba25e8)
              (uVar5,PTR_s_getCharacters_range__100beda38,
               (QArrayData *)(local_40.field0_0x0 + *(long *)(local_40.field0_0x0 + 0x10)),0,
               (long)iVar3);
  }
  QString::operator=(param_1,&local_40);
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_33 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_33) goto LAB_1006d6390;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_1006d6390:
  (*(code *)PTR__objc_msgSend_100ba25e8)(uVar4,PTR_s_release_100bed2a0);
  return param_1;
}



QString * FUN_100d7e640(QString *param_1,long *param_2)

{
  long lVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  QString local_40;
  undefined1 local_33;
  
  puVar2 = PTR_shared_null_1021e1288;
  param_1->field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  uVar4 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (PTR__OBJC_CLASS___NSAutoreleasePool_10226a970,PTR_s_alloc_102268b58);
  uVar4 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar4,PTR_s_init_102268ca8);
  uVar5 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (PTR__OBJC_CLASS___NSFileManager_10226aa58,PTR_s_defaultManager_102269fe8);
  uVar6 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (PTR__OBJC_CLASS___NSString_10226a7c8,PTR_s_alloc_102268b58);
  lVar1 = *param_2;
  uVar6 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (uVar6,PTR_s_initWithCharacters_length__10226a770,
                     *(long *)(lVar1 + 0x10) + lVar1,(long)*(int *)(lVar1 + 4));
  uVar6 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar6,PTR_s_autorelease_102269a10);
  uVar5 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (uVar5,PTR_s_containerURLForSecurityApplicati_10226a798,uVar6);
  uVar5 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar5,PTR_s_path_102269938);
  iVar3 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar5,PTR_s_length_102269050);
  if (iVar3 == 0) {
    local_40.field0_0x0 = (QTypedArrayData<unsigned_short> *)puVar2;
  }
  else {
    QString::QString(&local_40,iVar3,0);
    (*(code *)PTR__objc_msgSend_1021e1c68)
              (uVar5,PTR_s_getCharacters_range__10226a778,
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
      if ((bool)local_33) goto LAB_100d7e7d0;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_100d7e7d0:
  (*(code *)PTR__objc_msgSend_1021e1c68)(uVar4,PTR_s_release_1022699b8);
  return param_1;
}


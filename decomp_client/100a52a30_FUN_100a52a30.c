
bool FUN_100a52a30(QString *param_1)

{
  int iVar1;
  undefined *puVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  QArrayData *local_40;
  QString local_38;
  undefined1 local_29;
  
  puVar2 = PTR__objc_msgSend_1021e1c68;
  uVar4 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (PTR__OBJC_CLASS___NSAutoreleasePool_10226a970,PTR_s_alloc_102268b58);
  uVar4 = (*(code *)puVar2)(uVar4,PTR_s_init_102268ca8);
  uVar5 = (*(code *)puVar2)(PTR__OBJC_CLASS___NSNumberFormatter_10226aa98,PTR_s_alloc_102268b58);
  uVar5 = (*(code *)puVar2)(uVar5,PTR_s_init_102268ca8);
  uVar5 = (*(code *)puVar2)(uVar5,PTR_s_autorelease_102269a10);
  (*(code *)puVar2)(uVar5,PTR_s_setNumberStyle__10226a2d0,1);
  cVar3 = (*(code *)puVar2)(uVar5,PTR_s_usesGroupingSeparator_10226a2e0);
  puVar2 = PTR__OBJC_CLASS___NSString_10226a7c8;
  if (cVar3 != '\0') {
    uVar5 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar5,PTR_s_groupingSeparator_10226a2e8);
    if (puVar2 == (undefined *)0x0) {
      local_38.field0_0x0 = (QTypedArrayData<unsigned_short> *)0x0;
    }
    else {
      _objc_msgSend_stret((undefined *)&local_38,(ID)puVar2,PTR_s_QStringWithString__1022696d0,uVar5
                         );
    }
    QString::operator=(param_1,&local_38);
    if (*(int *)local_38.field0_0x0 != -1) {
      if (*(int *)local_38.field0_0x0 != 0) {
        LOCK();
        *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
        local_29 = *(int *)local_38.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100a52b33;
      }
      QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
    }
  }
LAB_100a52b33:
  (*(code *)PTR__objc_msgSend_1021e1c68)(uVar4,PTR_s_release_1022699b8);
  QString::trimmed();
  iVar1 = *(int *)(local_40 + 4);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) goto LAB_100a52b82;
      local_29 = 0;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100a52b82:
  return iVar1 != 0;
}


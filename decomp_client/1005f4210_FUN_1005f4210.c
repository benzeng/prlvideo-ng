
void FUN_1005f4210(long param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  QArrayData *pQVar6;
  undefined8 uVar7;
  QArrayData *local_b0;
  int local_a8;
  QArrayData *local_a0;
  QString local_98;
  QString local_90;
  QString local_88;
  QString local_80;
  QString local_78;
  QString local_70;
  QVariant local_68;
  QArrayData *local_58;
  QArrayData *local_50;
  undefined1 local_48 [12];
  undefined1 local_31;
  
  lVar5 = CDeclarativeWizardPage::pageContentItem();
  if (lVar5 == 0) {
    return;
  }
  CDeclarativeWizardPage::pageContentItem();
  QObject::property((char *)&local_68);
  QVariant::toString();
  QVariant::~QVariant(&local_68);
  if (*(int *)(local_58 + 4) == 0) goto LAB_1005f46f0;
  QMetaObject::indexOfEnumerator((char *)&PTR_staticMetaObject_102206250);
  local_48 = QMetaObject::enumerator(0x2206250);
  QString::toLatin1();
  iVar3 = QMetaEnum::keyToValue(local_48,(bool *)(local_50 + *(long *)(local_50 + 0x10)));
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005f42f8;
    }
    QArrayData::deallocate(local_50,1,8);
  }
LAB_1005f42f8:
  local_70.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("/Volumes",8);
  local_78.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("[VMSD]",6);
  local_80.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  bVar1 = SandboxFileAccessHelpers::checkAvailability(&local_70,&local_78,false,&local_80);
  if (*(int *)local_80.field0_0x0 != -1) {
    if (*(int *)local_80.field0_0x0 != 0) {
      LOCK();
      *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + -1;
      local_31 = *(int *)local_80.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005f437b;
    }
    QArrayData::deallocate((QArrayData *)local_80.field0_0x0,2,8);
  }
LAB_1005f437b:
  if (*(int *)local_78.field0_0x0 != -1) {
    if (*(int *)local_78.field0_0x0 != 0) {
      LOCK();
      *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + -1;
      local_31 = *(int *)local_78.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005f43ab;
    }
    QArrayData::deallocate((QArrayData *)local_78.field0_0x0,2,8);
  }
LAB_1005f43ab:
  if (*(int *)local_70.field0_0x0 != -1) {
    if (*(int *)local_70.field0_0x0 != 0) {
      LOCK();
      *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
      local_31 = *(int *)local_70.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005f43db;
    }
    QArrayData::deallocate((QArrayData *)local_70.field0_0x0,2,8);
  }
LAB_1005f43db:
  cVar2 = FUN_100d80630(1);
  if (cVar2 != '\0') {
    iVar4 = QString::compare_helper
                      (local_58 + *(long *)(local_58 + 0x10),*(undefined4 *)(local_58 + 4),"RealDvd"
                       ,0xffffffff,1);
    if (iVar4 != 0) {
      iVar4 = QString::compare_helper
                        (local_58 + *(long *)(local_58 + 0x10),*(undefined4 *)(local_58 + 4),
                         "UsbDevice",0xffffffff,1);
      if (iVar4 != 0) goto LAB_1005f4554;
    }
    local_88.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("/Volumes",8)
    ;
    local_90.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("[VMSD]",6);
    QMetaObject::tr((char *)&local_98,"",0x1e060b3);
    cVar2 = SandboxFileAccessHelpers::checkAvailability(&local_88,&local_90,true,&local_98);
    if (*(int *)local_98.field0_0x0 != -1) {
      if (*(int *)local_98.field0_0x0 != 0) {
        LOCK();
        *(int *)local_98.field0_0x0 = *(int *)local_98.field0_0x0 + -1;
        local_31 = *(int *)local_98.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1005f44e6;
      }
      QArrayData::deallocate((QArrayData *)local_98.field0_0x0,2,8);
    }
LAB_1005f44e6:
    if (*(int *)local_90.field0_0x0 != -1) {
      if (*(int *)local_90.field0_0x0 != 0) {
        LOCK();
        *(int *)local_90.field0_0x0 = *(int *)local_90.field0_0x0 + -1;
        local_31 = *(int *)local_90.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1005f451c;
      }
      QArrayData::deallocate((QArrayData *)local_90.field0_0x0,2,8);
    }
LAB_1005f451c:
    if (*(int *)local_88.field0_0x0 != -1) {
      if (*(int *)local_88.field0_0x0 != 0) {
        LOCK();
        *(int *)local_88.field0_0x0 = *(int *)local_88.field0_0x0 + -1;
        local_31 = *(int *)local_88.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1005f454c;
      }
      QArrayData::deallocate((QArrayData *)local_88.field0_0x0,2,8);
    }
LAB_1005f454c:
    if (cVar2 == '\0') {
      FUN_1005f4a80(&local_a0,2);
      FUN_1005f49f0(param_1,&local_a0);
      if (*(int *)local_a0 != -1) {
        if (*(int *)local_a0 != 0) {
          LOCK();
          *(int *)local_a0 = *(int *)local_a0 + -1;
          local_31 = *(int *)local_a0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1005f46f0;
        }
        QArrayData::deallocate(local_a0,2,8);
      }
      goto LAB_1005f46f0;
    }
  }
LAB_1005f4554:
  if (iVar3 == 2) {
    pQVar6 = *(QArrayData **)(param_1 + 0x28);
    if (1 < *(int *)pQVar6 + 1U) {
      LOCK();
      *(int *)pQVar6 = *(int *)pQVar6 + 1;
      local_31 = *(int *)pQVar6 != 0;
      UNLOCK();
    }
  }
  else {
    pQVar6 = (QArrayData *)QString::fromAscii_helper("",0);
  }
  iVar4 = *(int *)pQVar6;
  if (1 < iVar4 + 1U) {
    LOCK();
    *(int *)pQVar6 = *(int *)pQVar6 + 1;
    local_31 = *(int *)pQVar6 != 0;
    UNLOCK();
    iVar4 = *(int *)pQVar6;
  }
  if (iVar4 != -1) {
    if (iVar4 != 0) {
      LOCK();
      *(int *)pQVar6 = *(int *)pQVar6 + -1;
      local_31 = *(int *)pQVar6 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005f45c0;
    }
    QArrayData::deallocate(pQVar6,2,8);
  }
LAB_1005f45c0:
  if ((iVar3 != 2 & (bVar1 ^ 1)) != 0) {
    uVar7 = FUN_1005ec980(*(long *)(param_1 + 0x10) + 0x38);
    FUN_1005af5b0(uVar7);
  }
  uVar7 = FUN_1005ec980(*(long *)(param_1 + 0x10) + 0x38);
  if (1 < *(int *)pQVar6 + 1U) {
    LOCK();
    *(int *)pQVar6 = *(int *)pQVar6 + 1;
    local_31 = *(int *)pQVar6 != 0;
    UNLOCK();
  }
  local_b0 = pQVar6;
  local_a8 = iVar3;
  FUN_1005b3a80(uVar7,&local_b0,0);
  if (*(int *)local_b0 != -1) {
    if (*(int *)local_b0 != 0) {
      LOCK();
      *(int *)local_b0 = *(int *)local_b0 + -1;
      local_31 = *(int *)local_b0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005f4653;
    }
    QArrayData::deallocate(local_b0,2,8);
  }
LAB_1005f4653:
  FUN_1005f4b00(param_1);
  CAbstractWizardPage::wizardCtrl();
  CWizardController::updateWizardActions();
  if (*(int *)pQVar6 != -1) {
    if (*(int *)pQVar6 != 0) {
      LOCK();
      *(int *)pQVar6 = *(int *)pQVar6 + -1;
      local_31 = *(int *)pQVar6 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005f46f0;
    }
    QArrayData::deallocate(pQVar6,2,8);
  }
LAB_1005f46f0:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      UNLOCK();
      if (*(int *)local_58 != 0) {
        return;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_58,2,8);
  }
  return;
}


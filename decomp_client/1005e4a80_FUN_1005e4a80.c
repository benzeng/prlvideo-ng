
void FUN_1005e4a80(void)

{
  int iVar1;
  Data *pDVar2;
  long lVar3;
  undefined8 uVar4;
  QMapNodeBase *pQVar5;
  char *pcVar6;
  QArrayData *pQVar7;
  Data *pDVar8;
  AnonymousUnion0 local_60;
  QVariant local_58;
  Data *local_48;
  QArrayData *local_40;
  QMapNodeBase *local_38;
  undefined1 local_29;
  
  lVar3 = CDeclarativeWizardPage::pageContentItem();
  if (lVar3 == 0) goto LAB_1005e4d99;
  uVar4 = FUN_100748240();
  local_40 = (QArrayData *)QString::fromAscii_helper("os_win10",8);
  uVar4 = FUN_100748290(uVar4,&local_40);
  FUN_100746c20(&local_38,uVar4);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_29 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1005e4b09;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1005e4b09:
  local_48 = (Data *)PTR_shared_null_1021e15e8;
  if (1 < *(uint *)local_38) {
    FUN_100283ba0(&local_38);
  }
  if (*(long *)(local_38 + 0x10) == 0) {
    pQVar5 = local_38 + 8;
  }
  else {
    pQVar5 = *(QMapNodeBase **)(local_38 + 0x20);
  }
  while( true ) {
    if (1 < *(uint *)local_38) {
      FUN_100283ba0(&local_38);
    }
    if (pQVar5 == local_38 + 8) break;
    FUN_1000341d0(&local_48,pQVar5 + 0x20);
    pQVar5 = (QMapNodeBase *)QMapNodeBase::nextNode();
  }
  pcVar6 = (char *)CDeclarativeWizardPage::pageContentItem();
  pQVar7 = (QArrayData *)QString::fromAscii_helper(";",1);
  QtPrivate::QStringList_join
            ((QStringList *)&local_60.field0,(QChar *)&local_48,
             (int)*(undefined8 *)(pQVar7 + 0x10) + (int)pQVar7);
  QVariant::QVariant(&local_58,(QString *)&local_60.field0);
  QObject::setProperty(pcVar6,(QVariant *)"availableVersions");
  QVariant::~QVariant(&local_58);
  if (*(int *)local_60.field1 != -1) {
    if (*(int *)local_60.field1 != 0) {
      LOCK();
      *(int *)local_60.field1 = *(int *)local_60.field1 + -1;
      local_29 = *(int *)local_60.field1 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1005e4c97;
    }
    QArrayData::deallocate((QArrayData *)local_60.field1,2,8);
  }
LAB_1005e4c97:
  if (*(int *)pQVar7 != -1) {
    if (*(int *)pQVar7 != 0) {
      LOCK();
      *(int *)pQVar7 = *(int *)pQVar7 + -1;
      local_29 = *(int *)pQVar7 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1005e4cc4;
    }
    QArrayData::deallocate(pQVar7,2,8);
  }
LAB_1005e4cc4:
  pDVar2 = local_48;
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_29 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1005e4d51;
    }
    iVar1 = *(int *)(local_48 + 0xc);
    if (iVar1 != *(int *)(local_48 + 8)) {
      lVar3 = (long)*(int *)(local_48 + 8) * 8 + (long)iVar1 * -8;
      pDVar8 = local_48 + (long)iVar1 * 8 + 8;
      do {
        pQVar7 = *(QArrayData **)pDVar8;
        if (*(int *)pQVar7 == 0) {
LAB_1005e4d30:
          QArrayData::deallocate(pQVar7,2,8);
        }
        else if (*(int *)pQVar7 != -1) {
          LOCK();
          *(int *)pQVar7 = *(int *)pQVar7 + -1;
          local_29 = *(int *)pQVar7 != 0;
          UNLOCK();
          if (!(bool)local_29) {
            pQVar7 = *(QArrayData **)pDVar8;
            goto LAB_1005e4d30;
          }
        }
        pDVar8 = pDVar8 + -8;
        lVar3 = lVar3 + 8;
      } while (lVar3 != 0);
    }
    QListData::dispose(pDVar2);
  }
LAB_1005e4d51:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_29 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1005e4d99;
    }
    if (*(long *)(local_38 + 0x10) != 0) {
      FUN_100283b30();
      QMapDataBase::freeTree(local_38,(int)*(undefined8 *)(local_38 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)local_38);
  }
LAB_1005e4d99:
  CAbstractWizardPage::wizardCtrl();
  CWizardController::updateWizardActions();
  return;
}


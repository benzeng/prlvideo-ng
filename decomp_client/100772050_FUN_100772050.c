
void FUN_100772050(void)

{
  int iVar1;
  AnonymousUnion0 AVar2;
  char cVar3;
  long lVar4;
  undefined8 uVar5;
  QArrayData *pQVar6;
  Data *pDVar7;
  QArrayData *local_48;
  AnonymousUnion0 local_40;
  QString local_38;
  undefined1 local_29;
  
  lVar4 = CAbstractWizardActionHandler::wizardModel();
  if ((*(int *)(lVar4 + 0x24) != 0) ||
     (lVar4 = CAbstractWizardActionHandler::wizardModel(), *(int *)(lVar4 + 0x20) != 1)) {
    uVar5 = CAbstractWizardActionHandler::wizardModel();
    FUN_100770bb0(uVar5);
    return;
  }
  cVar3 = FUN_10076d460();
  uVar5 = CAbstractWizardActionHandler::wizardModel();
  if (cVar3 == '\0') {
    uVar5 = FUN_10076f180(uVar5);
    FUN_10076ed20(uVar5,2,1);
    return;
  }
  FUN_100770bb0();
  local_38.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("open",4);
  local_40.field1 = (Data *)PTR_shared_null_1021e15e8;
  pQVar6 = (QArrayData *)QString::fromAscii_helper("/Applications/Acronis True Image.app",0x24);
  local_48 = pQVar6;
  FUN_1000341d0(&local_40,&local_48);
  cVar3 = QProcess::startDetached(&local_38,(QStringList *)&local_40.field0);
  if (*(int *)pQVar6 != -1) {
    if (*(int *)pQVar6 != 0) {
      LOCK();
      *(int *)pQVar6 = *(int *)pQVar6 + -1;
      local_29 = *(int *)pQVar6 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100772124;
    }
    QArrayData::deallocate(pQVar6,2,8);
  }
LAB_100772124:
  AVar2 = local_40;
  if (*(int *)local_40.field1 != -1) {
    if (*(int *)local_40.field1 != 0) {
      LOCK();
      *(int *)local_40.field1 = *(int *)local_40.field1 + -1;
      local_29 = *(int *)local_40.field1 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1007721b1;
    }
    iVar1 = *(int *)(local_40.field1 + 0xc);
    if (iVar1 != *(int *)(local_40.field1 + 8)) {
      lVar4 = (long)*(int *)(local_40.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar7 = (Data *)(local_40.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar6 = *(QArrayData **)pDVar7;
        if (*(int *)pQVar6 == 0) {
LAB_100772190:
          QArrayData::deallocate(pQVar6,2,8);
        }
        else if (*(int *)pQVar6 != -1) {
          LOCK();
          *(int *)pQVar6 = *(int *)pQVar6 + -1;
          local_29 = *(int *)pQVar6 != 0;
          UNLOCK();
          if (!(bool)local_29) {
            pQVar6 = *(QArrayData **)pDVar7;
            goto LAB_100772190;
          }
        }
        pDVar7 = pDVar7 + -8;
        lVar4 = lVar4 + 8;
      } while (lVar4 != 0);
    }
    QListData::dispose((Data *)AVar2.field1);
  }
LAB_1007721b1:
  if (*(int *)local_38.field0_0x0 != -1) {
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      local_29 = *(int *)local_38.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1007721e1;
    }
    QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
  }
LAB_1007721e1:
  if (cVar3 == '\0') {
    FUN_100df99c0("","prl_client_app",0,"Failed to start Acronis True Image for Mac");
  }
  return;
}


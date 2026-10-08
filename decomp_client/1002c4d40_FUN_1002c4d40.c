
undefined8 FUN_1002c4d40(long param_1)

{
  int iVar1;
  AnonymousUnion0 AVar2;
  char cVar3;
  QArrayData *pQVar4;
  undefined4 uVar5;
  Data *pDVar6;
  long lVar7;
  QArrayData *local_50;
  AnonymousUnion0 local_48;
  QString local_40;
  undefined1 local_31;
  
  local_40.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("open",4);
  local_48.field1 = (Data *)PTR_shared_null_1021e15e8;
  pQVar4 = (QArrayData *)QString::fromAscii_helper("/Applications/Acronis True Image.app",0x24);
  local_50 = pQVar4;
  FUN_1000341d0(&local_48,&local_50);
  cVar3 = QProcess::startDetached(&local_40,(QStringList *)&local_48.field0);
  if (*(int *)pQVar4 != -1) {
    if (*(int *)pQVar4 != 0) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + -1;
      local_31 = *(int *)pQVar4 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002c4dd4;
    }
    QArrayData::deallocate(pQVar4,2,8);
  }
LAB_1002c4dd4:
  AVar2 = local_48;
  if (*(int *)local_48.field1 != -1) {
    if (*(int *)local_48.field1 != 0) {
      LOCK();
      *(int *)local_48.field1 = *(int *)local_48.field1 + -1;
      local_31 = *(int *)local_48.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002c4e61;
    }
    iVar1 = *(int *)(local_48.field1 + 0xc);
    if (iVar1 != *(int *)(local_48.field1 + 8)) {
      lVar7 = (long)*(int *)(local_48.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar6 = (Data *)(local_48.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar4 = *(QArrayData **)pDVar6;
        if (*(int *)pQVar4 == 0) {
LAB_1002c4e40:
          QArrayData::deallocate(pQVar4,2,8);
        }
        else if (*(int *)pQVar4 != -1) {
          LOCK();
          *(int *)pQVar4 = *(int *)pQVar4 + -1;
          local_31 = *(int *)pQVar4 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar4 = *(QArrayData **)pDVar6;
            goto LAB_1002c4e40;
          }
        }
        pDVar6 = pDVar6 + -8;
        lVar7 = lVar7 + 8;
      } while (lVar7 != 0);
    }
    QListData::dispose((Data *)AVar2.field1);
  }
LAB_1002c4e61:
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_31 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002c4e91;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_1002c4e91:
  if (cVar3 == '\0') {
    FUN_100df99c0("","prl_client_app",0,"Failed to start application");
  }
  uVar5 = 0x80000009;
  if (cVar3 != '\0') {
    uVar5 = 0;
  }
  *(undefined4 *)(param_1 + 0x70) = uVar5;
  return 0;
}


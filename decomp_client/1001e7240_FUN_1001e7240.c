
undefined8 FUN_1001e7240(void)

{
  int iVar1;
  int *piVar2;
  AnonymousUnion0 AVar3;
  char cVar4;
  long lVar5;
  undefined8 uVar6;
  Data *pDVar7;
  Data *pDVar8;
  QArrayData *pQVar9;
  undefined8 uVar10;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  Data *local_48;
  AnonymousUnion0 local_40;
  QString local_38;
  undefined1 local_29;
  
  FUN_100df99c0("[BOOTSTRAP]","prl_client_app",0,"Direct::start() is starting...");
  FUN_100d93280(&local_38);
  local_48 = (Data *)PTR_shared_null_1021e15e8;
  local_50 = (QArrayData *)QString::fromAscii_helper("-e",2);
  FUN_1000341d0(&local_48,&local_50);
  local_58 = (QArrayData *)QString::fromAscii_helper("--mode",6);
  FUN_1000341d0(&local_48,&local_58);
  local_60 = (QArrayData *)QString::fromAscii_helper("pdfm",4);
  FUN_1000341d0(&local_48,&local_60);
  local_68 = (QArrayData *)QString::fromAscii_helper("--pidfile",9);
  FUN_1000341d0(&local_48,&local_68);
  FUN_100d8b860(&local_70);
  FUN_1000341d0(&local_48,&local_70);
  local_40.field1 = (Data *)local_48;
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 == 0) {
      QListData::detach((int)&local_40);
      iVar1 = *(int *)(local_40.field1 + 8);
      if (iVar1 != *(int *)(local_40.field1 + 0xc)) {
        pDVar7 = local_48 + (long)*(int *)(local_48 + 8) * 8 + 0x10;
        pDVar8 = (Data *)(local_40.field1 + (long)iVar1 * 8 + 0x10);
        lVar5 = (long)*(int *)(local_40.field1 + 0xc) * 8 + (long)iVar1 * -8;
        do {
          piVar2 = *(int **)pDVar7;
          *(int **)pDVar8 = piVar2;
          if (1 < *piVar2 + 1U) {
            LOCK();
            *piVar2 = *piVar2 + 1;
            local_29 = *piVar2 != 0;
            UNLOCK();
          }
          pDVar8 = pDVar8 + 8;
          pDVar7 = pDVar7 + 8;
          lVar5 = lVar5 + -8;
        } while (lVar5 != 0);
      }
    }
    else {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + 1;
      local_29 = *(int *)local_48 != 0;
      UNLOCK();
    }
  }
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_29 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1001e73cf;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_1001e73cf:
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_29 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1001e73fb;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_1001e73fb:
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_29 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1001e7427;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_1001e7427:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_29 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1001e7453;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1001e7453:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_29 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1001e747f;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1001e747f:
  pDVar7 = local_48;
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_29 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1001e7511;
    }
    iVar1 = *(int *)(local_48 + 0xc);
    if (iVar1 != *(int *)(local_48 + 8)) {
      lVar5 = (long)*(int *)(local_48 + 8) * 8 + (long)iVar1 * -8;
      pDVar8 = local_48 + (long)iVar1 * 8 + 8;
      do {
        pQVar9 = *(QArrayData **)pDVar8;
        if (*(int *)pQVar9 == 0) {
LAB_1001e74f0:
          QArrayData::deallocate(pQVar9,2,8);
        }
        else if (*(int *)pQVar9 != -1) {
          LOCK();
          *(int *)pQVar9 = *(int *)pQVar9 + -1;
          local_29 = *(int *)pQVar9 != 0;
          UNLOCK();
          if (!(bool)local_29) {
            pQVar9 = *(QArrayData **)pDVar8;
            goto LAB_1001e74f0;
          }
        }
        pDVar8 = pDVar8 + -8;
        lVar5 = lVar5 + 8;
      } while (lVar5 != 0);
    }
    QListData::dispose(pDVar7);
  }
LAB_1001e7511:
  cVar4 = QProcess::startDetached(&local_38,(QStringList *)&local_40.field0);
  uVar10 = 0x80015377;
  if (cVar4 != '\0') {
    uVar10 = 0;
  }
  uVar6 = FUN_100dddcf0(uVar10);
  FUN_100df99c0("[BOOTSTRAP]","prl_client_app",0,"Direct::start() has finished with result %s",uVar6
               );
  AVar3 = local_40;
  if (*(int *)local_40.field1 != -1) {
    if (*(int *)local_40.field1 != 0) {
      LOCK();
      *(int *)local_40.field1 = *(int *)local_40.field1 + -1;
      local_29 = *(int *)local_40.field1 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1001e75e1;
    }
    iVar1 = *(int *)(local_40.field1 + 0xc);
    if (iVar1 != *(int *)(local_40.field1 + 8)) {
      lVar5 = (long)*(int *)(local_40.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar7 = (Data *)(local_40.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar9 = *(QArrayData **)pDVar7;
        if (*(int *)pQVar9 == 0) {
LAB_1001e75c0:
          QArrayData::deallocate(pQVar9,2,8);
        }
        else if (*(int *)pQVar9 != -1) {
          LOCK();
          *(int *)pQVar9 = *(int *)pQVar9 + -1;
          local_29 = *(int *)pQVar9 != 0;
          UNLOCK();
          if (!(bool)local_29) {
            pQVar9 = *(QArrayData **)pDVar7;
            goto LAB_1001e75c0;
          }
        }
        pDVar7 = pDVar7 + -8;
        lVar5 = lVar5 + 8;
      } while (lVar5 != 0);
    }
    QListData::dispose((Data *)AVar3.field1);
  }
LAB_1001e75e1:
  if (*(int *)local_38.field0_0x0 != -1) {
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_38.field0_0x0 != 0) {
        return uVar10;
      }
      local_29 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
  }
  return uVar10;
}


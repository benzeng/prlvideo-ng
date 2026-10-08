
void FUN_10045a520(long param_1,QString *param_2)

{
  int iVar1;
  char *pcVar2;
  QString *pQVar3;
  undefined *puVar4;
  AnonymousUnion0 AVar5;
  Data *pDVar6;
  QArrayData *pQVar7;
  long lVar8;
  QArrayData *local_b8;
  QString local_b0;
  QVariant local_a8;
  QArrayData *local_98;
  QArrayData *local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  AnonymousUnion0 local_78;
  QVariant local_70;
  QArrayData *local_60;
  AnonymousUnion0 local_58;
  QVariant local_50;
  QArrayData *local_40;
  undefined1 local_31;
  
  QCoreApplication::translate((char *)&local_40,"CVmEdFloppyDialog","Form",0);
  QWidget::setWindowTitle(param_2);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10045a597;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_10045a597:
  puVar4 = PTR_shared_null_1021e15e8;
  pcVar2 = *(char **)(param_1 + 0x10);
  local_58.field1 = (Data *)PTR_shared_null_1021e15e8;
  QCoreApplication::translate((char *)&local_60,"CVmEdFloppyDialog","VmConfig",0);
  FUN_1000341d0(&local_58,&local_60);
  QVariant::QVariant(&local_50,(QStringList *)&local_58.field0);
  QObject::setProperty(pcVar2,(QVariant *)"storages");
  QVariant::~QVariant(&local_50);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10045a62b;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_10045a62b:
  AVar5 = local_58;
  if (*(int *)local_58.field1 != -1) {
    if (*(int *)local_58.field1 != 0) {
      LOCK();
      *(int *)local_58.field1 = *(int *)local_58.field1 + -1;
      local_31 = *(int *)local_58.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10045a6c1;
    }
    iVar1 = *(int *)(local_58.field1 + 0xc);
    if (iVar1 != *(int *)(local_58.field1 + 8)) {
      lVar8 = (long)*(int *)(local_58.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar6 = (Data *)(local_58.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar7 = *(QArrayData **)pDVar6;
        if (*(int *)pQVar7 == 0) {
LAB_10045a6a0:
          QArrayData::deallocate(pQVar7,2,8);
        }
        else if (*(int *)pQVar7 != -1) {
          LOCK();
          *(int *)pQVar7 = *(int *)pQVar7 + -1;
          local_31 = *(int *)pQVar7 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar7 = *(QArrayData **)pDVar6;
            goto LAB_10045a6a0;
          }
        }
        pDVar6 = pDVar6 + -8;
        lVar8 = lVar8 + 8;
      } while (lVar8 != 0);
    }
    QListData::dispose((Data *)AVar5.field1);
  }
LAB_10045a6c1:
  pcVar2 = *(char **)(param_1 + 0x10);
  local_78.field1 = (Data *)puVar4;
  QCoreApplication::translate((char *)&local_80,"CVmEdFloppyDialog","DYNAMIC_PART.SystemName",0);
  FUN_1000341d0(&local_78,&local_80);
  QCoreApplication::translate
            ((char *)&local_88,"CVmEdFloppyDialog","DYNAMIC_PART.UserFriendlyName",0);
  FUN_1000341d0(&local_78,&local_88);
  QCoreApplication::translate((char *)&local_90,"CVmEdFloppyDialog","DYNAMIC_PART.EmulatedType",0);
  FUN_1000341d0(&local_78,&local_90);
  QCoreApplication::translate((char *)&local_98,"CVmEdFloppyDialog","DYNAMIC_PART.Connected",0);
  FUN_1000341d0(&local_78,&local_98);
  QVariant::QVariant(&local_70,(QStringList *)&local_78.field0);
  QObject::setProperty(pcVar2,(QVariant *)"VmConfig");
  QVariant::~QVariant(&local_70);
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_31 = *(int *)local_98 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10045a7e4;
    }
    QArrayData::deallocate(local_98,2,8);
  }
LAB_10045a7e4:
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_31 = *(int *)local_90 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10045a81a;
    }
    QArrayData::deallocate(local_90,2,8);
  }
LAB_10045a81a:
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_31 = *(int *)local_88 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10045a84a;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_10045a84a:
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_31 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10045a87a;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_10045a87a:
  AVar5 = local_78;
  if (*(int *)local_78.field1 != -1) {
    if (*(int *)local_78.field1 != 0) {
      LOCK();
      *(int *)local_78.field1 = *(int *)local_78.field1 + -1;
      local_31 = *(int *)local_78.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10045a901;
    }
    iVar1 = *(int *)(local_78.field1 + 0xc);
    if (iVar1 != *(int *)(local_78.field1 + 8)) {
      lVar8 = (long)*(int *)(local_78.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar6 = (Data *)(local_78.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar7 = *(QArrayData **)pDVar6;
        if (*(int *)pQVar7 == 0) {
LAB_10045a8e0:
          QArrayData::deallocate(pQVar7,2,8);
        }
        else if (*(int *)pQVar7 != -1) {
          LOCK();
          *(int *)pQVar7 = *(int *)pQVar7 + -1;
          local_31 = *(int *)pQVar7 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar7 = *(QArrayData **)pDVar6;
            goto LAB_10045a8e0;
          }
        }
        pDVar6 = pDVar6 + -8;
        lVar8 = lVar8 + 8;
      } while (lVar8 != 0);
    }
    QListData::dispose((Data *)AVar5.field1);
  }
LAB_10045a901:
  pcVar2 = *(char **)(param_1 + 0x10);
  QCoreApplication::translate((char *)&local_b0,"CVmEdFloppyDialog","initFileDevSelectorWidget",0);
  QVariant::QVariant(&local_a8,&local_b0);
  QObject::setProperty(pcVar2,(QVariant *)"initer");
  QVariant::~QVariant(&local_a8);
  if (*(int *)local_b0.field0_0x0 != -1) {
    if (*(int *)local_b0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_b0.field0_0x0 = *(int *)local_b0.field0_0x0 + -1;
      local_31 = *(int *)local_b0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10045a991;
    }
    QArrayData::deallocate((QArrayData *)local_b0.field0_0x0,2,8);
  }
LAB_10045a991:
  pQVar3 = *(QString **)(param_1 + 0x20);
  QCoreApplication::translate((char *)&local_b8,"CVmEdFloppyDialog","Source:",0);
  QLabel::setText(pQVar3);
  if (*(int *)local_b8 != -1) {
    if (*(int *)local_b8 != 0) {
      LOCK();
      *(int *)local_b8 = *(int *)local_b8 + -1;
      UNLOCK();
      if (*(int *)local_b8 != 0) {
        return;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_b8,2,8);
  }
  return;
}


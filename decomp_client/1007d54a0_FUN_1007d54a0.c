
void FUN_1007d54a0(long param_1,AnonymousUnion0 *param_2)

{
  int iVar1;
  int *piVar2;
  long lVar3;
  undefined8 *puVar4;
  Data *pDVar5;
  AnonymousUnion0 local_60;
  QVariant local_58;
  Data_conflict local_48;
  QString local_40;
  QString local_38;
  QString local_30 [2];
  undefined1 local_19;
  
  FUN_100a04400(&local_38);
  FUN_1007caa20(&local_40);
  QSettings::QSettings((QSettings *)local_30,&local_38,&local_40,(QObject *)0x0);
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_19 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1007d5506;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_1007d5506:
  if (*(int *)local_38.field0_0x0 != -1) {
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      local_19 = *(int *)local_38.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1007d5536;
    }
    QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
  }
LAB_1007d5536:
  local_48.field7 = QString::fromAscii_helper("Host MacOS Kaspersky Antivirus",0x1e);
  QVariant::QVariant(&local_58,(QStringList *)&param_2->field0);
  QSettings::setValue(local_30,(QVariant *)&local_48);
  QVariant::~QVariant(&local_58);
  if (*(int *)local_48.field15 != -1) {
    if (*(int *)local_48.field15 != 0) {
      LOCK();
      *(int *)local_48.field15 = *(int *)local_48.field15 + -1;
      local_19 = *(int *)local_48.field15 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1007d55a1;
    }
    QArrayData::deallocate((QArrayData *)local_48.field15,2,8);
  }
LAB_1007d55a1:
  local_60.field0.field0_0x0 = *(QListData *)param_2;
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 == 0) {
      QListData::detach((int)&local_60);
      iVar1 = *(int *)(local_60.field1 + 8);
      if (iVar1 != *(int *)(local_60.field1 + 0xc)) {
        puVar4 = (undefined8 *)
                 ((long)param_2->field1 + 0x10 + (long)*(int *)((long)param_2->field1 + 8) * 8);
        pDVar5 = local_60.field1 + (long)iVar1 * 8 + 0x10;
        lVar3 = (long)*(int *)(local_60.field1 + 0xc) * 8 + (long)iVar1 * -8;
        do {
          piVar2 = (int *)*puVar4;
          *(int **)pDVar5 = piVar2;
          if (1 < *piVar2 + 1U) {
            LOCK();
            *piVar2 = *piVar2 + 1;
            local_19 = *piVar2 != 0;
            UNLOCK();
          }
          pDVar5 = pDVar5 + 8;
          puVar4 = puVar4 + 1;
          lVar3 = lVar3 + -8;
        } while (lVar3 != 0);
      }
    }
    else {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + 1;
      local_19 = *(int *)local_60 != 0;
      UNLOCK();
    }
  }
  ClientStatistics::setKasperskyAntivirusInMacosHost(param_1 + 0x10,&local_60);
  FUN_100039a80(&local_60);
  QSettings::~QSettings((QSettings *)local_30);
  return;
}


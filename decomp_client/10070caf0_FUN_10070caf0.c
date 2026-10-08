
void FUN_10070caf0(long param_1)

{
  undefined8 *puVar1;
  QString *pQVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  Data *pDVar5;
  char cVar6;
  undefined4 uVar7;
  QTypedArrayData<unsigned_short> *pQVar8;
  uint *puVar9;
  ulong uVar10;
  long lVar11;
  QString *pQVar12;
  QVariant local_f0;
  Data_conflict local_e0;
  QKeySequence local_d8 [8];
  QKeySequence local_d0 [8];
  QKeySequence local_c8 [8];
  Data *local_c0;
  Data *local_b8;
  Data *local_b0;
  undefined4 local_a8;
  long local_a0;
  undefined8 *local_98;
  undefined8 *local_90;
  undefined4 local_88;
  QArrayData *local_80;
  QVariant local_78;
  QArrayData *local_68;
  QVariant local_60;
  QVariant local_50;
  undefined *local_40;
  undefined1 local_31;
  
  local_40 = PTR_shared_null_1021e15e8;
  QSettings::QSettings((QSettings *)&local_50,(QObject *)0x0);
  local_68 = (QArrayData *)QString::fromAscii_helper("OldProfilesImported",0x13);
  QVariant::QVariant(&local_78,false);
  QSettings::value((QString *)&local_60,&local_50);
  cVar6 = QVariant::toBool();
  QVariant::~QVariant(&local_60);
  QVariant::~QVariant(&local_78);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_31 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10070cb9f;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_10070cb9f:
  if (cVar6 != '\0') goto LAB_10070cf90;
  FUN_100715570(&local_40);
  local_80 = (QArrayData *)QString::fromAscii_helper("OLD REMAPS",10);
  FUN_1007099c0(&local_40,&local_80);
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_31 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10070cc02;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_10070cc02:
  FUN_10055a620(&local_a0,&local_40);
  local_98 = (undefined8 *)(local_a0 + 0x10 + (long)*(int *)(local_a0 + 8) * 8);
  local_90 = (undefined8 *)(local_a0 + 0x10 + (long)*(int *)(local_a0 + 0xc) * 8);
  if (*(int *)(local_a0 + 8) != *(int *)(local_a0 + 0xc)) {
    puVar1 = (undefined8 *)(param_1 + 0x18);
    do {
      local_88 = 1;
      puVar9 = (uint *)*puVar1;
      if ((int)puVar9[2] < (int)puVar9[3]) {
        pQVar2 = (QString *)*local_98;
        lVar11 = 0;
LAB_10070cc90:
        if (1 < *puVar9) {
          FUN_10055a380(puVar1,puVar9[1]);
          puVar9 = (uint *)*puVar1;
        }
        pQVar12 = *(QString **)(puVar9 + ((int)puVar9[2] + lVar11) * 2 + 4);
        cVar6 = operator==(pQVar2,pQVar12);
        if (cVar6 == '\0') goto code_r0x00010070ccbf;
        FUN_1000ff290(&local_c0,pQVar2 + 2);
        local_b8 = local_c0 + (long)*(int *)(local_c0 + 8) * 8 + 0x10;
        local_b0 = local_c0 + (long)*(int *)(local_c0 + 0xc) * 8 + 0x10;
        if (*(int *)(local_c0 + 8) != *(int *)(local_c0 + 0xc)) {
          pQVar12 = pQVar12 + 2;
          do {
            local_a8 = 1;
            uVar3 = *(undefined8 *)local_b8;
            pQVar8 = pQVar12->field0_0x0;
            uVar10 = (ulong)*(uint *)(pQVar8 + 8);
            lVar11 = 0;
            if ((int)*(uint *)(pQVar8 + 8) < (int)*(uint *)(pQVar8 + 0xc)) {
              do {
                FUN_100714b50(local_c8,*(undefined8 *)(pQVar8 + ((int)uVar10 + lVar11) * 8 + 0x10));
                FUN_100714b50(local_d0,uVar3);
                cVar6 = QKeySequence::operator==(local_c8,local_d0);
                QKeySequence::~QKeySequence(local_d0);
                QKeySequence::~QKeySequence(local_c8);
                pQVar8 = pQVar12->field0_0x0;
                if (cVar6 != '\0') {
                  if (1 < *(uint *)pQVar8) {
                    FUN_100559bb0(pQVar12,*(uint *)(pQVar8 + 4));
                    pQVar8 = pQVar12->field0_0x0;
                  }
                  uVar4 = *(undefined8 *)(pQVar8 + ((int)*(uint *)(pQVar8 + 8) + lVar11) * 8 + 0x10)
                  ;
                  FUN_100714b80(local_d8,uVar3);
                  FUN_100714ba0(uVar4,local_d8);
                  QKeySequence::~QKeySequence(local_d8);
                  pQVar8 = pQVar12->field0_0x0;
                  if (1 < *(uint *)pQVar8) {
                    FUN_100559bb0(pQVar12,*(uint *)(pQVar8 + 4));
                    pQVar8 = pQVar12->field0_0x0;
                  }
                  uVar4 = *(undefined8 *)(pQVar8 + ((int)*(uint *)(pQVar8 + 8) + lVar11) * 8 + 0x10)
                  ;
                  uVar7 = FUN_100714bb0(uVar3);
                  FUN_100714bc0(uVar4,uVar7);
                  goto LAB_10070ce4c;
                }
                lVar11 = lVar11 + 1;
                uVar10 = (ulong)(int)*(uint *)(pQVar8 + 8);
              } while (lVar11 < (long)((long)(int)*(uint *)(pQVar8 + 0xc) - uVar10));
            }
            FUN_100559c70(pQVar12,uVar3);
LAB_10070ce4c:
            local_b8 = local_b8 + 8;
          } while (local_b8 != local_b0);
        }
        pDVar5 = local_c0;
        local_a8 = 1;
        if (*(int *)local_c0 != -1) {
          if (*(int *)local_c0 != 0) {
            LOCK();
            *(int *)local_c0 = *(int *)local_c0 + -1;
            local_31 = *(int *)local_c0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10070ced0;
          }
          FUN_1005596c0(&local_c0,local_c0 + (long)*(int *)(local_c0 + 8) * 8 + 0x10,
                        local_c0 + (long)*(int *)(local_c0 + 0xc) * 8 + 0x10);
          QListData::dispose(pDVar5);
        }
      }
LAB_10070ced0:
      local_98 = local_98 + 1;
    } while (local_98 != local_90);
  }
  local_88 = 1;
  FUN_1000fe670(&local_a0);
  FUN_10070dd40(param_1);
  local_e0.field7 = QString::fromAscii_helper("OldProfilesImported",0x13);
  QVariant::QVariant(&local_f0,true);
  QSettings::setValue((QString *)&local_50,(QVariant *)&local_e0);
  QVariant::~QVariant(&local_f0);
  if (*(int *)local_e0.field15 != -1) {
    if (*(int *)local_e0.field15 != 0) {
      LOCK();
      *(int *)local_e0.field15 = *(int *)local_e0.field15 + -1;
      local_31 = *(int *)local_e0.field15 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10070cf90;
    }
    QArrayData::deallocate((QArrayData *)local_e0.field15,2,8);
  }
LAB_10070cf90:
  QSettings::~QSettings((QSettings *)&local_50);
  FUN_1000fe670(&local_40);
  return;
code_r0x00010070ccbf:
  lVar11 = lVar11 + 1;
  puVar9 = (uint *)*puVar1;
  if ((long)(int)puVar9[3] - (long)(int)puVar9[2] <= lVar11) goto LAB_10070ced0;
  goto LAB_10070cc90;
}


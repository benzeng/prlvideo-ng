
void FUN_1003fab60(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  QString *pQVar1;
  QString *pQVar2;
  QVariant *pQVar3;
  QObject *pQVar4;
  undefined8 *puVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  char *pcVar9;
  uint uVar10;
  long lVar11;
  undefined8 *puVar12;
  int iVar13;
  int *piVar14;
  int *piVar15;
  long lVar16;
  QVariant local_d0;
  Data_conflict local_c0;
  undefined4 local_b8;
  Data *local_b0;
  Data *local_a8;
  Data *local_a0;
  Data *local_98;
  int local_90;
  Data_conflict local_88;
  undefined4 local_80;
  int *local_78;
  int *local_70;
  int *local_68;
  undefined4 local_60;
  QVariant local_58;
  int *local_48;
  QIcon local_40 [15];
  undefined1 local_31;
  
  pcVar9 = (char *)QMetaObject::cast((QObject *)PTR_staticMetaObject_1021e15c8);
  if (pcVar9 == (char *)0x0) {
    return;
  }
  QObject::property((char *)&local_58);
  FUN_10041b580(&local_48,&local_58);
  QVariant::~QVariant(&local_58);
  piVar14 = (int *)*param_3;
  if (local_48 == piVar14) goto LAB_1003fb008;
  iVar7 = local_48[3];
  iVar13 = local_48[2];
  if (iVar7 - iVar13 == piVar14[3] - piVar14[2]) {
    if (iVar7 != iVar13) {
      piVar15 = local_48 + (long)iVar13 * 2 + 4;
      piVar14 = piVar14 + (long)piVar14[2] * 2 + 4;
      lVar16 = (long)iVar7 * 8 + (long)iVar13 * -8;
      do {
        pQVar1 = *(QString **)piVar15;
        pQVar2 = *(QString **)piVar14;
        cVar6 = operator==(pQVar1,pQVar2);
        if ((cVar6 == '\0') || (cVar6 = FUN_10041ca30(pQVar1 + 1,pQVar2 + 1), cVar6 == '\0'))
        goto LAB_1003fac51;
        piVar15 = piVar15 + 2;
        piVar14 = piVar14 + 2;
        lVar16 = lVar16 + -8;
      } while (lVar16 != 0);
    }
    goto LAB_1003fb008;
  }
LAB_1003fac51:
  QComboBox::clear();
  FUN_10041c690(&local_78,param_3);
  local_70 = local_78 + (long)local_78[2] * 2 + 4;
  local_68 = local_78 + (long)local_78[3] * 2 + 4;
  if (local_78[2] != local_78[3]) {
    do {
      local_60 = 1;
      pQVar3 = *(QVariant **)local_70;
      pQVar4 = (pQVar3->field0_0x0).field0_0x0.field15;
      iVar7 = QString::compare_helper
                        (pQVar4 + *(long *)(pQVar4 + 0x10),*(undefined4 *)(pQVar4 + 4),"Separator",
                         0xffffffff,1);
      iVar13 = (int)pcVar9;
      if (iVar7 == 0) {
        QComboBox::count();
        QComboBox::insertSeparator(iVar13);
      }
      else {
        local_80 = 0x80000000;
        local_88.field7 = 0;
        uVar8 = QComboBox::count();
        QIcon::QIcon(local_40);
        QComboBox::insertItem(iVar13,(QIcon *)(ulong)uVar8,(QString *)local_40,pQVar3);
        QIcon::~QIcon(local_40);
        QVariant::~QVariant((QVariant *)&local_88);
        FUN_1004194a0(&local_b0);
        local_a8 = local_b0;
        if (*(int *)local_b0 != -1) {
          if (*(int *)local_b0 == 0) {
            QListData::detach((int)&local_a8);
            lVar16 = (long)*(int *)(local_a8 + 8);
            if ((local_b0 + (long)*(int *)(local_b0 + 8) * 8 != local_a8 + lVar16 * 8) &&
               (lVar11 = *(int *)(local_a8 + 0xc) - lVar16,
               lVar11 != 0 && lVar16 <= *(int *)(local_a8 + 0xc))) {
              _memcpy(local_a8 + lVar16 * 8 + 0x10,
                      local_b0 + (long)*(int *)(local_b0 + 8) * 8 + 0x10,lVar11 * 8);
            }
          }
          else {
            LOCK();
            *(int *)local_b0 = *(int *)local_b0 + 1;
            local_31 = *(int *)local_b0 != 0;
            UNLOCK();
          }
        }
        local_a0 = local_a8 + (long)*(int *)(local_a8 + 8) * 8 + 0x10;
        local_98 = local_a8 + (long)*(int *)(local_a8 + 0xc) * 8 + 0x10;
        local_90 = 1;
        if (*(int *)local_b0 == -1) {
LAB_1003fae6c:
          for (; local_a0 != local_98; local_a0 = local_a0 + 8) {
            uVar8 = *(uint *)local_a0;
            iVar7 = QComboBox::count();
            puVar5 = *(undefined8 **)&(pQVar3->field0_0x0).field1_0x8;
            if ((*(int *)((long)puVar5 + 0x14) != 0) && (*(uint *)(puVar5 + 4) != 0)) {
              uVar10 = *(uint *)((long)puVar5 + 0x24) ^ uVar8;
              for (puVar12 = *(undefined8 **)
                              (puVar5[1] + ((ulong)uVar10 % (ulong)*(uint *)(puVar5 + 4)) * 8);
                  puVar12 != puVar5; puVar12 = (undefined8 *)*puVar12) {
                if ((*(uint *)(puVar12 + 1) == uVar10) && (uVar8 == *(uint *)((long)puVar12 + 0xc)))
                {
                  if (puVar12 != puVar5) {
                    QVariant::QVariant((QVariant *)&local_c0,(QVariant *)(puVar12 + 2));
                    goto LAB_1003fae50;
                  }
                  break;
                }
              }
            }
            local_b8 = 0x80000000;
            local_c0.field7 = 0;
LAB_1003fae50:
            QComboBox::setItemData(iVar13,(QVariant *)(ulong)(iVar7 - 1),(int)&local_c0);
            QVariant::~QVariant((QVariant *)&local_c0);
            local_90 = 1;
          }
        }
        else {
          if (*(int *)local_b0 == 0) {
LAB_1003fae27:
            QListData::dispose(local_b0);
          }
          else {
            LOCK();
            *(int *)local_b0 = *(int *)local_b0 + -1;
            local_31 = *(int *)local_b0 != 0;
            UNLOCK();
            if (!(bool)local_31) goto LAB_1003fae27;
          }
          if (local_90 != 0) goto LAB_1003fae6c;
        }
        if (*(int *)local_a8 != -1) {
          if (*(int *)local_a8 != 0) {
            LOCK();
            *(int *)local_a8 = *(int *)local_a8 + -1;
            local_31 = *(int *)local_a8 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1003faf60;
          }
          QListData::dispose(local_a8);
        }
      }
LAB_1003faf60:
      local_70 = local_70 + 2;
    } while (local_70 != local_68);
  }
  local_60 = 1;
  if (*local_78 != -1) {
    if (*local_78 != 0) {
      LOCK();
      *local_78 = *local_78 + -1;
      local_31 = *local_78 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003fafa7;
    }
    FUN_10041c910(&local_78,local_78);
  }
LAB_1003fafa7:
  if (DAT_102273f74 == 0) {
    DAT_102273f74 = FUN_10041b690("CVmEdWidgetIniterPrivate::IdValuesList",0xffffffffffffffff,1);
  }
  QVariant::QVariant(&local_d0,DAT_102273f74,param_3,0);
  QObject::setProperty(pcVar9,(QVariant *)"InitInfo");
  QVariant::~QVariant(&local_d0);
LAB_1003fb008:
  if (*local_48 != -1) {
    if (*local_48 != 0) {
      LOCK();
      *local_48 = *local_48 + -1;
      UNLOCK();
      if (*local_48 != 0) {
        return;
      }
      local_31 = 0;
    }
    FUN_10041c910(&local_48,local_48);
  }
  return;
}


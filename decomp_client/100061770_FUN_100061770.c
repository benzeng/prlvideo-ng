
undefined1 FUN_100061770(undefined8 param_1,long *param_2)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  ulong uVar4;
  QString *pQVar5;
  char cVar6;
  uint uVar7;
  long lVar8;
  long *plVar9;
  int *piVar10;
  undefined1 uVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  QArrayData *local_88;
  QVariant local_80;
  Data_conflict local_70;
  undefined4 local_68;
  int *local_60;
  int *local_58;
  QString *local_50;
  QString *local_48;
  int local_40;
  undefined1 local_31;
  
  FUN_1000626e0(&local_60);
  local_58 = local_60;
  if (*local_60 != -1) {
    if (*local_60 == 0) {
      QListData::detach((int)&local_58);
      iVar1 = local_58[2];
      if (iVar1 != local_58[3]) {
        local_60 = local_60 + (long)local_60[2] * 2 + 4;
        piVar10 = local_58 + (long)iVar1 * 2 + 4;
        lVar8 = (long)local_58[3] * 8 + (long)iVar1 * -8;
        do {
          piVar3 = *(int **)local_60;
          *(int **)piVar10 = piVar3;
          if (1 < *piVar3 + 1U) {
            LOCK();
            *piVar3 = *piVar3 + 1;
            local_31 = *piVar3 != 0;
            UNLOCK();
          }
          piVar10 = piVar10 + 2;
          local_60 = local_60 + 2;
          lVar8 = lVar8 + -8;
        } while (lVar8 != 0);
      }
    }
    else {
      LOCK();
      *local_60 = *local_60 + 1;
      local_31 = *local_60 != 0;
      UNLOCK();
    }
  }
  local_50 = (QString *)(local_58 + (long)local_58[2] * 2 + 4);
  local_48 = (QString *)(local_58 + (long)local_58[3] * 2 + 4);
  local_40 = 1;
  FUN_100039a80(&local_60);
  uVar11 = 1;
  if ((local_40 != 0) && (local_50 != local_48)) {
    do {
      pQVar5 = local_50;
      plVar9 = (long *)*param_2;
      if ((*(int *)((long)plVar9 + 0x14) == 0) || (uVar2 = *(uint *)(plVar9 + 4), uVar2 == 0)) {
LAB_100061910:
        local_68 = 0x80000000;
        local_70.field7 = 0;
      }
      else {
        uVar7 = qHash(local_50,*(uint *)((long)plVar9 + 0x24));
        uVar4 = (ulong)uVar7 % (ulong)uVar2;
        plVar13 = *(long **)(plVar9[1] + uVar4 * 8);
        if (plVar13 == plVar9) goto LAB_100061910;
        plVar15 = (long *)(plVar9[1] + uVar4 * 8);
        do {
          plVar12 = plVar9;
          plVar14 = plVar13;
          if (*(uint *)(plVar13 + 1) == uVar7) {
            cVar6 = operator==(pQVar5,(QString *)(plVar13 + 2));
            plVar9 = (long *)*plVar15;
            plVar12 = (long *)*param_2;
            plVar14 = plVar9;
            if (cVar6 != '\0') break;
          }
          plVar9 = plVar12;
          plVar13 = (long *)*plVar14;
          plVar12 = plVar9;
          plVar15 = plVar14;
        } while (plVar13 != plVar9);
        if (plVar9 == plVar12) goto LAB_100061910;
        QVariant::QVariant((QVariant *)&local_70,(QVariant *)(plVar9 + 3));
      }
      QString::toLatin1();
      QObject::property((char *)&local_80);
      cVar6 = QVariant::cmp(&local_80);
      QVariant::~QVariant(&local_80);
      if (*(int *)local_88 != -1) {
        if (*(int *)local_88 != 0) {
          LOCK();
          *(int *)local_88 = *(int *)local_88 + -1;
          local_31 = *(int *)local_88 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10006198c;
        }
        QArrayData::deallocate(local_88,1,8);
      }
LAB_10006198c:
      QVariant::~QVariant((QVariant *)&local_70);
      if (cVar6 == '\0') {
        uVar11 = 0;
        goto LAB_1000619bc;
      }
      local_50 = local_50 + 1;
      local_40 = 1;
    } while (local_50 != local_48);
    uVar11 = 1;
  }
LAB_1000619bc:
  FUN_100039a80(&local_58);
  return uVar11;
}


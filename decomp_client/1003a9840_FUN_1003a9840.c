
void FUN_1003a9840(long *param_1,long *param_2)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  code *pcVar4;
  ulong uVar5;
  QString *pQVar6;
  char cVar7;
  uint uVar8;
  long lVar9;
  long *plVar10;
  int *piVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  Data_conflict local_78;
  undefined4 local_70;
  QArrayData *local_68;
  int *local_60;
  int *local_58;
  QString *local_50;
  QString *local_48;
  int local_40;
  undefined1 local_31;
  
  FUN_1000626e0(&local_60,param_1);
  local_58 = local_60;
  if (*local_60 != -1) {
    if (*local_60 == 0) {
      QListData::detach((int)&local_58);
      iVar1 = local_58[2];
      if (iVar1 != local_58[3]) {
        local_60 = local_60 + (long)local_60[2] * 2 + 4;
        piVar11 = local_58 + (long)iVar1 * 2 + 4;
        lVar9 = (long)local_58[3] * 8 + (long)iVar1 * -8;
        do {
          piVar3 = *(int **)local_60;
          *(int **)piVar11 = piVar3;
          if (1 < *piVar3 + 1U) {
            LOCK();
            *piVar3 = *piVar3 + 1;
            local_31 = *piVar3 != 0;
            UNLOCK();
          }
          piVar11 = piVar11 + 2;
          local_60 = local_60 + 2;
          lVar9 = lVar9 + -8;
        } while (lVar9 != 0);
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
  if ((local_40 != 0) && (local_50 != local_48)) {
    do {
      pQVar6 = local_50;
      pcVar4 = *(code **)(*param_2 + 0x88);
      local_68 = (QArrayData *)local_50->field0_0x0;
      if (1 < *(int *)local_68 + 1U) {
        LOCK();
        *(int *)local_68 = *(int *)local_68 + 1;
        local_31 = *(int *)local_68 != 0;
        UNLOCK();
      }
      plVar10 = (long *)*param_1;
      if ((*(int *)((long)plVar10 + 0x14) == 0) || (uVar2 = *(uint *)(plVar10 + 4), uVar2 == 0)) {
LAB_1003a9a00:
        local_70 = 0x80000000;
        local_78.field7 = 0;
      }
      else {
        uVar8 = qHash(local_50,*(uint *)((long)plVar10 + 0x24));
        uVar5 = (ulong)uVar8 % (ulong)uVar2;
        plVar12 = *(long **)(plVar10[1] + uVar5 * 8);
        if (plVar12 == plVar10) goto LAB_1003a9a00;
        plVar14 = (long *)(plVar10[1] + uVar5 * 8);
        do {
          plVar13 = plVar12;
          plVar15 = plVar10;
          if (*(uint *)(plVar12 + 1) == uVar8) {
            cVar7 = operator==(pQVar6,(QString *)(plVar12 + 2));
            plVar10 = (long *)*plVar14;
            plVar13 = plVar10;
            plVar15 = (long *)*param_1;
            if (cVar7 != '\0') break;
          }
          plVar10 = plVar15;
          plVar12 = (long *)*plVar13;
          plVar14 = plVar13;
          plVar15 = plVar10;
        } while (plVar12 != plVar10);
        if (plVar10 == plVar15) goto LAB_1003a9a00;
        QVariant::QVariant((QVariant *)&local_78,(QVariant *)(plVar10 + 3));
      }
      (*pcVar4)(param_2,&local_68,&local_78,0);
      QVariant::~QVariant((QVariant *)&local_78);
      if (*(int *)local_68 != -1) {
        if (*(int *)local_68 != 0) {
          LOCK();
          *(int *)local_68 = *(int *)local_68 + -1;
          local_31 = *(int *)local_68 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1003a9a5d;
        }
        QArrayData::deallocate(local_68,2,8);
      }
LAB_1003a9a5d:
      local_50 = local_50 + 1;
      local_40 = 1;
    } while (local_50 != local_48);
  }
  FUN_100039a80(&local_58);
  return;
}


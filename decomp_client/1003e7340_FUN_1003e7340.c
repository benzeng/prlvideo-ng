
void FUN_1003e7340(long param_1)

{
  long *plVar1;
  code *pcVar2;
  uint uVar3;
  int *piVar4;
  ulong uVar5;
  QString *pQVar6;
  QString *pQVar7;
  char cVar8;
  uint uVar9;
  int iVar10;
  long lVar11;
  long *plVar12;
  undefined8 uVar13;
  QString *pQVar14;
  QHash *pQVar15;
  int *piVar16;
  int *piVar17;
  long *plVar18;
  long *plVar19;
  long *plVar20;
  long *plVar21;
  QArrayData *local_c0;
  QString local_b8;
  QArrayData *local_b0;
  QString local_a8;
  QString local_a0;
  QArrayData *local_98;
  _func_void_Node_ptr *local_90;
  int *local_88;
  int *local_80;
  QString *local_78;
  QString *local_70;
  int local_68;
  int *local_60;
  int *local_58;
  QString *local_50;
  QString *local_48;
  int local_40;
  undefined1 local_31;
  
  plVar1 = (long *)(param_1 + 0x20);
  FUN_1003deae0(&local_60,plVar1);
  local_58 = local_60;
  if (*local_60 != -1) {
    if (*local_60 == 0) {
      QListData::detach((int)&local_58);
      iVar10 = local_58[2];
      if (iVar10 != local_58[3]) {
        local_60 = local_60 + (long)local_60[2] * 2 + 4;
        piVar16 = local_58 + (long)iVar10 * 2 + 4;
        lVar11 = (long)local_58[3] * 8 + (long)iVar10 * -8;
        do {
          piVar17 = *(int **)local_60;
          *(int **)piVar16 = piVar17;
          if (1 < *piVar17 + 1U) {
            LOCK();
            *piVar17 = *piVar17 + 1;
            local_31 = *piVar17 != 0;
            UNLOCK();
          }
          piVar16 = piVar16 + 2;
          local_60 = local_60 + 2;
          lVar11 = lVar11 + -8;
        } while (lVar11 != 0);
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
  if (local_40 != 0) {
    for (; pQVar7 = local_50, local_50 != local_48; local_50 = local_50 + 1) {
      plVar12 = (long *)*plVar1;
      if ((*(int *)((long)plVar12 + 0x14) == 0) || (uVar3 = *(uint *)(plVar12 + 4), uVar3 == 0)) {
LAB_1003e74f0:
        local_90 = (_func_void_Node_ptr *)PTR_shared_null_1021e15d0;
      }
      else {
        uVar9 = qHash(local_50,*(uint *)((long)plVar12 + 0x24));
        uVar5 = (ulong)uVar9 % (ulong)uVar3;
        plVar19 = *(long **)(plVar12[1] + uVar5 * 8);
        if (plVar19 == plVar12) goto LAB_1003e74f0;
        plVar21 = (long *)(plVar12[1] + uVar5 * 8);
        do {
          plVar18 = plVar12;
          plVar20 = plVar19;
          if (*(uint *)(plVar19 + 1) == uVar9) {
            cVar8 = operator==(pQVar7,(QString *)(plVar19 + 2));
            plVar12 = (long *)*plVar21;
            plVar18 = (long *)*plVar1;
            plVar20 = plVar12;
            if (cVar8 != '\0') break;
          }
          plVar12 = plVar18;
          plVar19 = (long *)*plVar20;
          plVar18 = plVar12;
          plVar21 = plVar20;
        } while (plVar19 != plVar12);
        if (plVar12 == plVar18) goto LAB_1003e74f0;
        FUN_100076800(&local_90,plVar12 + 3);
      }
      FUN_1000626e0(&local_88,&local_90);
      local_80 = local_88;
      if (*local_88 != -1) {
        if (*local_88 == 0) {
          QListData::detach((int)&local_80);
          iVar10 = local_80[2];
          if (iVar10 != local_80[3]) {
            piVar16 = local_88 + (long)local_88[2] * 2 + 4;
            piVar17 = local_80 + (long)iVar10 * 2 + 4;
            lVar11 = (long)local_80[3] * 8 + (long)iVar10 * -8;
            do {
              piVar4 = *(int **)piVar16;
              *(int **)piVar17 = piVar4;
              if (1 < *piVar4 + 1U) {
                LOCK();
                *piVar4 = *piVar4 + 1;
                local_31 = *piVar4 != 0;
                UNLOCK();
              }
              piVar17 = piVar17 + 2;
              piVar16 = piVar16 + 2;
              lVar11 = lVar11 + -8;
            } while (lVar11 != 0);
          }
        }
        else {
          LOCK();
          *local_88 = *local_88 + 1;
          local_31 = *local_88 != 0;
          UNLOCK();
        }
      }
      local_78 = (QString *)(local_80 + (long)local_80[2] * 2 + 4);
      local_70 = (QString *)(local_80 + (long)local_80[3] * 2 + 4);
      local_68 = 1;
      FUN_100039a80(&local_88);
      if (*(int *)(local_90 + 0x10) != -1) {
        if (*(int *)(local_90 + 0x10) != 0) {
          LOCK();
          pcVar2 = local_90 + 0x10;
          *(int *)pcVar2 = *(int *)pcVar2 + -1;
          local_31 = *(int *)pcVar2 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1003e7603;
        }
        QHashData::free_helper(local_90);
      }
LAB_1003e7603:
      if (local_68 != 0) {
        for (; pQVar6 = local_78, local_78 != local_70; local_78 = local_78 + 1) {
          uVar13 = FUN_1003ae480(plVar1,pQVar7);
          FUN_1002edf40(uVar13,pQVar6);
          QVariant::toString();
          if (*(int *)(local_98 + 4) == 0) {
            uVar13 = FUN_1003b0ad0(*(undefined8 *)(param_1 + 0x18));
            cVar8 = FUN_1003e5180(uVar13,pQVar7,pQVar6);
            if (cVar8 != '\0') {
              FUN_1003b0af0(*(undefined8 *)(param_1 + 0x18));
              pQVar15 = (QHash *)CMappingController::valuesToCommit();
              MappingHelpers::removeAllPathsStartsWith(pQVar15,pQVar6,pQVar7);
            }
          }
          else {
            local_a0.field0_0x0 = pQVar6->field0_0x0;
            if (1 < *(int *)local_a0.field0_0x0 + 1U) {
              LOCK();
              *(int *)local_a0.field0_0x0 = *(int *)local_a0.field0_0x0 + 1;
              local_31 = *(int *)local_a0.field0_0x0 != 0;
              UNLOCK();
            }
            local_b0 = (QArrayData *)QString::fromAscii_helper("[",1);
            QString::lastIndexOf(&local_a0,&local_b0,0xffffffff,1);
            QString::left((int)&local_a8);
            QString::operator=(&local_a0,&local_a8);
            if (*(int *)local_a8.field0_0x0 != -1) {
              if (*(int *)local_a8.field0_0x0 != 0) {
                LOCK();
                *(int *)local_a8.field0_0x0 = *(int *)local_a8.field0_0x0 + -1;
                local_31 = *(int *)local_a8.field0_0x0 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1003e7722;
              }
              QArrayData::deallocate((QArrayData *)local_a8.field0_0x0,2,8);
            }
LAB_1003e7722:
            if (*(int *)local_b0 != -1) {
              if (*(int *)local_b0 != 0) {
                LOCK();
                *(int *)local_b0 = *(int *)local_b0 + -1;
                local_31 = *(int *)local_b0 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1003e7758;
              }
              QArrayData::deallocate(local_b0,2,8);
            }
LAB_1003e7758:
            uVar13 = FUN_1003b0ad0(*(undefined8 *)(param_1 + 0x18));
            iVar10 = FUN_1003e5070(uVar13,pQVar7,&local_a0);
            local_b8.field0_0x0 = pQVar6->field0_0x0;
            if (1 < *(int *)local_b8.field0_0x0 + 1U) {
              LOCK();
              *(int *)local_b8.field0_0x0 = *(int *)local_b8.field0_0x0 + 1;
              local_31 = *(int *)local_b8.field0_0x0 != 0;
              UNLOCK();
            }
            QString::number((int)&local_c0,iVar10);
            pQVar14 = (QString *)QString::replace(&local_b8,&local_98,&local_c0,1);
            QString::operator=(&local_b8,pQVar14);
            if (*(int *)local_c0 != -1) {
              if (*(int *)local_c0 != 0) {
                LOCK();
                *(int *)local_c0 = *(int *)local_c0 + -1;
                local_31 = *(int *)local_c0 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1003e7801;
              }
              QArrayData::deallocate(local_c0,2,8);
            }
LAB_1003e7801:
            FUN_1003b0af0(*(undefined8 *)(param_1 + 0x18));
            pQVar15 = (QHash *)CMappingController::valuesToCommit();
            MappingHelpers::patchNewlyAddedListItemPath(pQVar15,pQVar7,pQVar6,&local_b8);
            if (*(int *)local_b8.field0_0x0 != -1) {
              if (*(int *)local_b8.field0_0x0 != 0) {
                LOCK();
                *(int *)local_b8.field0_0x0 = *(int *)local_b8.field0_0x0 + -1;
                local_31 = *(int *)local_b8.field0_0x0 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1003e785d;
              }
              QArrayData::deallocate((QArrayData *)local_b8.field0_0x0,2,8);
            }
LAB_1003e785d:
            if (*(int *)local_a0.field0_0x0 != -1) {
              if (*(int *)local_a0.field0_0x0 != 0) {
                LOCK();
                *(int *)local_a0.field0_0x0 = *(int *)local_a0.field0_0x0 + -1;
                local_31 = *(int *)local_a0.field0_0x0 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1003e78e0;
              }
              QArrayData::deallocate((QArrayData *)local_a0.field0_0x0,2,8);
            }
          }
LAB_1003e78e0:
          if (*(int *)local_98 != -1) {
            if (*(int *)local_98 != 0) {
              LOCK();
              *(int *)local_98 = *(int *)local_98 + -1;
              local_31 = *(int *)local_98 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1003e7620;
            }
            QArrayData::deallocate(local_98,2,8);
          }
LAB_1003e7620:
          local_68 = 1;
        }
      }
      FUN_100039a80(&local_80);
      local_40 = 1;
    }
  }
  FUN_100039a80(&local_58);
  FUN_1003fa050(plVar1);
  return;
}



/* WARNING: Removing unreachable block (ram,0x0001006016b2) */
/* WARNING: Removing unreachable block (ram,0x000100601570) */

int FUN_100600e60(undefined8 *param_1,long param_2,undefined8 *param_3,undefined8 param_4)

{
  ulong *puVar1;
  bool bVar2;
  undefined *puVar3;
  Data *pDVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  QString *this;
  QMapNodeBase *pQVar9;
  ulong uVar10;
  Data *pDVar11;
  long lVar12;
  long lVar13;
  QMapNodeBase *pQVar14;
  long lVar15;
  int iVar16;
  long lVar17;
  undefined1 auVar18 [16];
  QTypedArrayData<unsigned_short> *pQStack_1230;
  QFileInfo local_1210 [8];
  QString local_1208;
  QString QStack_1200;
  undefined8 local_11f8;
  undefined4 local_11f0;
  undefined1 local_11ec;
  undefined *local_11e8 [2];
  QString local_11d8;
  Data *local_11d0;
  undefined1 local_11c8 [16];
  QString local_11b0;
  QString local_11a8;
  QMapNodeBase *local_11a0;
  Data *local_1198;
  undefined1 local_1189;
  undefined8 local_1188;
  undefined8 local_1180;
  undefined1 local_1178 [16];
  undefined8 local_1168;
  undefined8 local_1160;
  undefined8 local_1158;
  undefined8 local_1150;
  undefined1 local_1148 [4368];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  FUN_1005aabe0(local_1148,*param_1);
  iVar6 = FUN_1005aad70(local_1148);
  if (iVar6 < 0) goto LAB_10060100f;
  uVar7 = (**(code **)(*(long *)*param_1 + 0x2f8))();
  cVar5 = FUN_1005b15b0(local_1148,param_3,uVar7);
  if (cVar5 == '\0') {
    iVar6 = FUN_100601bb0(param_1,param_3,param_4);
    goto LAB_10060100f;
  }
  FUN_1005b1e90(local_1148);
  local_1198 = (Data *)PTR_shared_null_100ba2188;
  iVar6 = FUN_1005b35d0(local_1148,*(undefined8 *)(param_2 + 0x28),&local_1198);
  pQVar14 = (QMapNodeBase *)PTR_shared_null_100ba20d8;
  if (iVar6 < 0) {
    FUN_1008e3970("Backup","vdisk",0,"CBT building failed with err = 0x%x, assigng full backup",
                  iVar6);
    iVar6 = FUN_100601bb0(param_1,param_3,param_4);
    FUN_1005b1e80(local_1148);
  }
  else if (*(int *)(local_1198 + 0xc) == *(int *)(local_1198 + 8)) {
    iVar6 = 0;
    FUN_1005b1e80(local_1148);
  }
  else {
    local_11a0 = (QMapNodeBase *)PTR_shared_null_100ba20d8;
    local_1158 = *param_3;
    local_1150 = param_3[1];
    local_1168 = *param_3;
    local_1160 = param_3[1];
    (**(code **)(*(long *)*param_1 + 0x130))(local_1178);
    iVar6 = FUN_1007ea6f0(&local_1168,local_1178);
    if (iVar6 == 0) {
      (**(code **)(*(long *)*param_1 + 0x2b0))(&local_1188);
      local_1160 = local_1180;
      local_1168 = local_1188;
    }
    uVar10 = (ulong)*(uint *)(local_1198 + 8);
    if ((int)*(uint *)(local_1198 + 8) < *(int *)(local_1198 + 0xc)) {
      lVar15 = 0;
      do {
        puVar1 = *(ulong **)(local_1198 + ((int)uVar10 + lVar15) * 8 + 0x10);
        FUN_100601990(&local_11a8,param_1,&local_1158,*(undefined4 *)((long)puVar1 + 0xc));
        FUN_100601990(&local_11b0,param_1,&local_1168,*(undefined4 *)((long)puVar1 + 0xc));
        local_11c8._8_8_ = 0;
        local_11c8._0_8_ = *puVar1;
        uVar8 = FUN_1005b3490(local_1148);
        local_11c8._8_8_ = uVar8;
        lVar13 = *(long *)(local_11a0 + 0x10);
        lVar17 = 0;
        if (*(long *)(local_11a0 + 0x10) == 0) {
LAB_1006011f6:
          local_11d8.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
          local_11d0 = (Data *)PTR_shared_null_100ba2188;
          QString::operator=(&local_11d8,&local_11b0);
          FUN_100603680(&local_11d0,local_11c8);
          this = (QString *)FUN_100602630(&local_11a0,&local_11a8);
          QString::operator=(this,&local_11d8);
          FUN_1006033e0(this + 1,&local_11d0);
          pDVar4 = local_11d0;
          if (*(int *)local_11d0 != -1) {
            if (*(int *)local_11d0 != 0) {
              LOCK();
              *(int *)local_11d0 = *(int *)local_11d0 + -1;
              local_1189 = *(int *)local_11d0 != 0;
              UNLOCK();
              if ((bool)local_1189) goto LAB_1006012e7;
            }
            iVar6 = *(int *)(local_11d0 + 0xc);
            if (iVar6 != *(int *)(local_11d0 + 8)) {
              lVar13 = (long)*(int *)(local_11d0 + 8) * 8 + (long)iVar6 * -8;
              pDVar11 = local_11d0 + (long)iVar6 * 8 + 8;
              do {
                if (*(void **)pDVar11 != (void *)0x0) {
                  operator_delete(*(void **)pDVar11);
                }
                pDVar11 = pDVar11 + -8;
                lVar13 = lVar13 + 8;
              } while (lVar13 != 0);
            }
            QListData::dispose(pDVar4);
          }
LAB_1006012e7:
          if (*(int *)local_11d8.field0_0x0 != -1) {
            if (*(int *)local_11d8.field0_0x0 != 0) {
              LOCK();
              *(int *)local_11d8.field0_0x0 = *(int *)local_11d8.field0_0x0 + -1;
              local_1189 = *(int *)local_11d8.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_1189) goto LAB_100601350;
            }
            QArrayData::deallocate((QArrayData *)local_11d8.field0_0x0,2,8);
          }
        }
        else {
          do {
            while (lVar12 = lVar13, cVar5 = operator<((QString *)(lVar12 + 0x18),&local_11a8),
                  cVar5 == '\0') {
              lVar13 = *(long *)(lVar12 + 8);
              lVar17 = lVar12;
              if (*(long *)(lVar12 + 8) == 0) goto LAB_1006011db;
            }
            lVar13 = *(long *)(lVar12 + 0x10);
          } while (*(long *)(lVar12 + 0x10) != 0);
          lVar12 = lVar17;
          if (lVar17 == 0) goto LAB_1006011f6;
LAB_1006011db:
          cVar5 = operator<(&local_11a8,(QString *)(lVar12 + 0x18));
          if (cVar5 != '\0') goto LAB_1006011f6;
          lVar13 = FUN_100602630(&local_11a0,&local_11a8);
          FUN_100603680(lVar13 + 8,local_11c8);
        }
LAB_100601350:
        if (*(int *)local_11b0.field0_0x0 != -1) {
          if (*(int *)local_11b0.field0_0x0 != 0) {
            LOCK();
            *(int *)local_11b0.field0_0x0 = *(int *)local_11b0.field0_0x0 + -1;
            local_1189 = *(int *)local_11b0.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_1189) goto LAB_10060138c;
          }
          QArrayData::deallocate((QArrayData *)local_11b0.field0_0x0,2,8);
        }
LAB_10060138c:
        if (*(int *)local_11a8.field0_0x0 != -1) {
          if (*(int *)local_11a8.field0_0x0 != 0) {
            LOCK();
            *(int *)local_11a8.field0_0x0 = *(int *)local_11a8.field0_0x0 + -1;
            local_1189 = *(int *)local_11a8.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_1189) goto LAB_1006013c8;
          }
          QArrayData::deallocate((QArrayData *)local_11a8.field0_0x0,2,8);
        }
LAB_1006013c8:
        lVar15 = lVar15 + 1;
        uVar10 = (ulong)*(int *)(local_1198 + 8);
        pQVar14 = local_11a0;
      } while (lVar15 < (long)((long)*(int *)(local_1198 + 0xc) - uVar10));
    }
    puVar3 = PTR_shared_null_100ba20d0;
    if (*(long *)(pQVar14 + 0x10) != 0) {
      pQVar9 = *(QMapNodeBase **)(pQVar14 + 0x20);
      if (pQVar9 != pQVar14 + 8) {
        auVar18._8_4_ = (int)PTR_shared_null_100ba20d0;
        auVar18._0_8_ = PTR_shared_null_100ba20d0;
        auVar18._12_4_ = (int)((ulong)PTR_shared_null_100ba20d0 >> 0x20);
        iVar16 = -0x7ffdefe0;
        do {
          pQStack_1230 = auVar18._8_8_;
          local_1208.field0_0x0 = (QTypedArrayData<unsigned_short> *)puVar3;
          QStack_1200.field0_0x0 = pQStack_1230;
          local_11f8 = 0;
          local_11f0 = 0;
          local_11ec = 0;
          local_11e8[0] = PTR_shared_null_100ba2188;
          QString::operator=(&local_1208,(QString *)(pQVar9 + 0x18));
          QString::operator=(&QStack_1200,(QString *)(pQVar9 + 0x20));
          local_11f0 = 3;
          local_11ec = 1;
          QFileInfo::QFileInfo(local_1210,&local_1208);
          local_11f8 = QFileInfo::size();
          QFileInfo::~QFileInfo(local_1210);
          if ((*(int *)(*(long *)(pQVar9 + 0x28) + 0xc) == *(int *)(*(long *)(pQVar9 + 0x28) + 8))
             || (iVar6 = FUN_100601de0(), -1 < iVar6)) {
            FUN_100603db0(local_11e8,pQVar9 + 0x28);
            FUN_100602b40(param_4,&local_1208);
            bVar2 = false;
            iVar6 = iVar16;
          }
          else {
            bVar2 = true;
            FUN_1008e3970("Backup","vdisk",0,"Metadata adding failed, err = 0x%X",iVar6);
          }
          FUN_100603280(&local_1208);
          if (bVar2) goto LAB_100601753;
          pQVar9 = (QMapNodeBase *)QMapNodeBase::nextNode();
          iVar16 = iVar6;
        } while (pQVar9 != pQVar14 + 8);
      }
    }
    iVar6 = 0;
    FUN_1005b1e80(local_1148);
LAB_100601753:
    if (*(int *)pQVar14 != -1) {
      if (*(int *)pQVar14 != 0) {
        LOCK();
        *(int *)pQVar14 = *(int *)pQVar14 + -1;
        local_1189 = *(int *)pQVar14 != 0;
        UNLOCK();
        if ((bool)local_1189) goto LAB_100600f96;
      }
      if (*(long *)(pQVar14 + 0x10) != 0) {
        FUN_1006038e0();
        QMapDataBase::freeTree(pQVar14,(int)*(undefined8 *)(pQVar14 + 0x10));
      }
      QMapDataBase::freeData((QMapDataBase *)pQVar14);
    }
  }
LAB_100600f96:
  pDVar4 = local_1198;
  if (*(int *)local_1198 != -1) {
    if (*(int *)local_1198 != 0) {
      LOCK();
      *(int *)local_1198 = *(int *)local_1198 + -1;
      local_1189 = *(int *)local_1198 != 0;
      UNLOCK();
      if ((bool)local_1189) goto LAB_10060100f;
    }
    iVar16 = *(int *)(local_1198 + 0xc);
    if (iVar16 != *(int *)(local_1198 + 8)) {
      lVar15 = (long)*(int *)(local_1198 + 8) * 8 + (long)iVar16 * -8;
      pDVar11 = local_1198 + (long)iVar16 * 8 + 8;
      do {
        if (*(void **)pDVar11 != (void *)0x0) {
          operator_delete(*(void **)pDVar11);
        }
        pDVar11 = pDVar11 + -8;
        lVar15 = lVar15 + 8;
      } while (lVar15 != 0);
    }
    QListData::dispose(pDVar4);
  }
LAB_10060100f:
  FUN_1005aad60(local_1148);
  if (*(long *)PTR____stack_chk_guard_100ba2320 == local_38) {
    return iVar6;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}


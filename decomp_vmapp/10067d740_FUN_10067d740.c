
int FUN_10067d740(long param_1,long *param_2)

{
  long *plVar1;
  uint uVar2;
  bool bVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  QArrayData *pQVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  Data *pDVar12;
  long lVar13;
  int local_bc;
  QString local_a8;
  QString local_a0;
  QArrayData *local_98;
  QArrayData *local_90;
  Data *local_88;
  QArrayData *local_80;
  undefined4 local_78;
  uint local_74;
  QString local_70;
  undefined4 local_64;
  QArrayData *local_60;
  undefined1 local_58 [8];
  Data *local_50;
  undefined1 local_48 [8];
  Data *local_40;
  undefined1 local_31;
  
  pQVar8 = (QArrayData *)PTR_shared_null_100ba20d0;
  plVar1 = *(long **)(param_1 + 0x10);
  if (plVar1 == (long *)0x0) {
    FUN_1008e3970("","WinRegistry",0,"OA00005.04:");
    return 0x8158003;
  }
  if (*(int *)(*param_2 + 4) == 0) {
    FUN_1008e3970("","WinRegistry",0,"OA00005.08:");
    return 0x815800f;
  }
  local_60 = (QArrayData *)PTR_shared_null_100ba20d0;
  local_64 = 0;
  iVar5 = (**(code **)(*plVar1 + 0x10))(plVar1,param_2,&local_64,0xffffffff);
  uVar4 = local_64;
  if (iVar5 != 0x8000000) goto LAB_10067e011;
  iVar5 = *(int *)(pQVar8 + 4);
  uVar6 = iVar5 + 1;
  uVar9 = *(uint *)(pQVar8 + 8) & 0x7fffffff;
  if ((*(uint *)pQVar8 < 2) && (uVar6 <= uVar9)) {
    *(undefined4 *)(pQVar8 + (long)iVar5 * 4 + *(long *)(pQVar8 + 0x10)) = local_64;
  }
  else {
    uVar10 = uVar9;
    if (uVar9 < uVar6) {
      uVar10 = uVar6;
    }
    FUN_1005b5560(&local_60,(long)iVar5,uVar10,(ulong)(uVar9 < uVar6) << 3);
    *(undefined4 *)(local_60 + (long)(int)*(uint *)(local_60 + 4) * 4 + *(long *)(local_60 + 0x10))
         = uVar4;
    pQVar8 = local_60;
  }
  *(uint *)(pQVar8 + 4) = *(uint *)(pQVar8 + 4) + 1;
  uVar6 = *(uint *)(pQVar8 + 4);
  uVar9 = uVar6 + 1;
  uVar10 = *(uint *)(pQVar8 + 8) & 0x7fffffff;
  if ((*(uint *)pQVar8 < 2) && (uVar9 <= uVar10)) {
    *(undefined4 *)(pQVar8 + (long)(int)uVar6 * 4 + *(long *)(pQVar8 + 0x10)) = 0;
  }
  else {
    uVar11 = uVar10;
    if (uVar10 < uVar9) {
      uVar11 = uVar9;
    }
    FUN_1005b5560(&local_60,(long)(int)uVar6,uVar11,(ulong)(uVar10 < uVar9) << 3);
    *(undefined4 *)(local_60 + (long)(int)*(uint *)(local_60 + 4) * 4 + *(long *)(local_60 + 0x10))
         = 0;
    pQVar8 = local_60;
  }
  *(uint *)(pQVar8 + 4) = *(uint *)(pQVar8 + 4) + 1;
  local_70.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("",0);
  if (*(uint *)(pQVar8 + 4) != 0) {
    local_bc = (int)local_70.field0_0x0;
    do {
      iVar7 = FUN_10067f3b0(&local_60);
      local_74 = FUN_10067f3b0(&local_60);
      if (iVar7 == 0) {
        iVar7 = 0;
      }
      else {
        iVar7 = iVar7 + -1;
        iVar5 = (**(code **)(**(long **)(param_1 + 0x10) + 0x30))
                          (*(long **)(param_1 + 0x10),local_74,iVar7,&local_70,0);
        if ((iVar5 != 0x8000000) ||
           (iVar5 = (**(code **)(**(long **)(param_1 + 0x10) + 0x20))
                              (*(long **)(param_1 + 0x10),&local_70,local_74), iVar5 != 0x8000000))
        goto LAB_10067dfe1;
      }
      iVar5 = (**(code **)(**(long **)(param_1 + 0x10) + 0x30))
                        (*(long **)(param_1 + 0x10),local_74,iVar7,&local_70);
      if (iVar5 == 0x8158017) {
        local_78 = 0;
        local_80 = (QArrayData *)QString::fromAscii_helper("",0);
        do {
          iVar5 = (**(code **)(**(long **)(param_1 + 0x10) + 0x58))
                            (*(long **)(param_1 + 0x10),local_74,0,&local_80,&local_78,0,0);
          bVar3 = false;
          if (iVar5 != 0x8000000) goto LAB_10067dae4;
          iVar5 = (**(code **)(**(long **)(param_1 + 0x10) + 0x40))
                            (*(long **)(param_1 + 0x10),local_74,&local_80);
        } while (iVar5 == 0x8000000);
        bVar3 = true;
        local_bc = iVar5;
LAB_10067dae4:
        if (*(int *)local_80 != -1) {
          if (*(int *)local_80 != 0) {
            LOCK();
            *(int *)local_80 = *(int *)local_80 + -1;
            local_31 = *(int *)local_80 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10067db14;
          }
          QArrayData::deallocate(local_80,2,8);
        }
LAB_10067db14:
        iVar5 = local_bc;
        if (bVar3) goto LAB_10067dfe1;
      }
      else {
        if ((iVar5 != 0x8000000) ||
           (iVar5 = (**(code **)(**(long **)(param_1 + 0x10) + 0x10))
                              (*(long **)(param_1 + 0x10),&local_70,&local_64,local_74),
           uVar6 = local_74, iVar5 != 0x8000000)) goto LAB_10067dfe1;
        uVar9 = *(uint *)(local_60 + 4);
        uVar10 = uVar9 + 1;
        uVar11 = *(uint *)(local_60 + 8) & 0x7fffffff;
        if ((*(uint *)local_60 < 2) && (uVar10 <= uVar11)) {
          *(uint *)(local_60 + (long)(int)uVar9 * 4 + *(long *)(local_60 + 0x10)) = local_74;
        }
        else {
          uVar2 = uVar11;
          if (uVar11 < uVar10) {
            uVar2 = uVar10;
          }
          FUN_1005b5560(&local_60,(long)(int)uVar9,uVar2,(ulong)(uVar11 < uVar10) << 3);
          *(uint *)(local_60 + (long)(int)*(uint *)(local_60 + 4) * 4 + *(long *)(local_60 + 0x10))
               = uVar6;
        }
        *(uint *)(local_60 + 4) = *(uint *)(local_60 + 4) + 1;
        uVar6 = *(uint *)(local_60 + 4);
        uVar9 = uVar6 + 1;
        uVar10 = *(uint *)(local_60 + 8) & 0x7fffffff;
        if ((*(uint *)local_60 < 2) && (uVar9 <= uVar10)) {
          *(int *)(local_60 + (long)(int)uVar6 * 4 + *(long *)(local_60 + 0x10)) = iVar7 + 1;
        }
        else {
          uVar11 = uVar10;
          if (uVar10 < uVar9) {
            uVar11 = uVar9;
          }
          FUN_1005b5560(&local_60,(long)(int)uVar6,uVar11,(ulong)(uVar10 < uVar9) << 3);
          *(int *)(local_60 + (long)(int)*(uint *)(local_60 + 4) * 4 + *(long *)(local_60 + 0x10)) =
               iVar7 + 1;
        }
        uVar4 = local_64;
        *(uint *)(local_60 + 4) = *(uint *)(local_60 + 4) + 1;
        uVar6 = *(uint *)(local_60 + 4);
        uVar9 = uVar6 + 1;
        uVar10 = *(uint *)(local_60 + 8) & 0x7fffffff;
        if ((*(uint *)local_60 < 2) && (uVar9 <= uVar10)) {
          *(undefined4 *)(local_60 + (long)(int)uVar6 * 4 + *(long *)(local_60 + 0x10)) = local_64;
        }
        else {
          uVar11 = uVar10;
          if (uVar10 < uVar9) {
            uVar11 = uVar9;
          }
          FUN_1005b5560(&local_60,(long)(int)uVar6,uVar11,(ulong)(uVar10 < uVar9) << 3);
          *(undefined4 *)
           (local_60 + (long)(int)*(uint *)(local_60 + 4) * 4 + *(long *)(local_60 + 0x10)) = uVar4;
        }
        *(uint *)(local_60 + 4) = *(uint *)(local_60 + 4) + 1;
        uVar6 = *(uint *)(local_60 + 4);
        uVar9 = uVar6 + 1;
        uVar10 = *(uint *)(local_60 + 8) & 0x7fffffff;
        if ((*(uint *)local_60 < 2) && (uVar9 <= uVar10)) {
          *(undefined4 *)(local_60 + (long)(int)uVar6 * 4 + *(long *)(local_60 + 0x10)) = 0;
        }
        else {
          uVar11 = uVar10;
          if (uVar10 < uVar9) {
            uVar11 = uVar9;
          }
          FUN_1005b5560(&local_60,(long)(int)uVar6,uVar11,(ulong)(uVar10 < uVar9) << 3);
          *(undefined4 *)
           (local_60 + (long)(int)*(uint *)(local_60 + 4) * 4 + *(long *)(local_60 + 0x10)) = 0;
        }
        *(uint *)(local_60 + 4) = *(uint *)(local_60 + 4) + 1;
      }
    } while (*(uint *)(local_60 + 4) != 0);
  }
  local_90 = (QArrayData *)QString::fromAscii_helper("\\",1);
  QString::split(&local_88,param_2,&local_90,0,1);
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_31 = *(int *)local_90 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10067dc85;
    }
    QArrayData::deallocate(local_90,2,8);
  }
LAB_10067dc85:
  if (1 < *(uint *)local_88) {
    FUN_100022c80(&local_88,*(uint *)(local_88 + 4));
  }
  local_98 = *(QArrayData **)(local_88 + (long)(int)*(uint *)(local_88 + 0xc) * 8 + 8);
  if (1 < *(int *)local_98 + 1U) {
    LOCK();
    *(int *)local_98 = *(int *)local_98 + 1;
    local_31 = *(int *)local_98 != 0;
    UNLOCK();
  }
  if (1 < *(uint *)local_88) {
    FUN_100022c80(&local_88,*(uint *)(local_88 + 4));
  }
  local_50 = local_88 + (long)(int)*(uint *)(local_88 + 0xc) * 8 + 8;
  FUN_10005a450(local_58,&local_88,&local_50);
  if (*(uint *)(local_88 + 0xc) == *(uint *)(local_88 + 8)) {
    local_74 = 0xffffffff;
LAB_10067dee5:
    iVar5 = (**(code **)(**(long **)(param_1 + 0x10) + 0x20))
                      (*(long **)(param_1 + 0x10),&local_98,local_74);
    if (iVar5 == 0x8000000) {
      iVar5 = 0x8000000;
      (**(code **)(**(long **)(param_1 + 8) + 0x38))(*(long **)(param_1 + 8),1);
    }
  }
  else {
    local_a0.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("",0);
    QString::operator=(&local_70,&local_a0);
    if (*(int *)local_a0.field0_0x0 != -1) {
      if (*(int *)local_a0.field0_0x0 != 0) {
        LOCK();
        *(int *)local_a0.field0_0x0 = *(int *)local_a0.field0_0x0 + -1;
        local_31 = *(int *)local_a0.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10067dd6e;
      }
      QArrayData::deallocate((QArrayData *)local_a0.field0_0x0,2,8);
    }
LAB_10067dd6e:
    if (*(uint *)(local_88 + 0xc) != *(uint *)(local_88 + 8)) {
      do {
        if (1 < *(uint *)local_88) {
          FUN_100022c80(&local_88,*(uint *)(local_88 + 4));
        }
        pDVar12 = local_88;
        uVar6 = *(uint *)(local_88 + 8);
        pQVar8 = (QArrayData *)QString::fromAscii_helper("\\",1);
        local_a8.field0_0x0 =
             *(QTypedArrayData<unsigned_short> **)(pDVar12 + (long)(int)uVar6 * 8 + 0x10);
        if (1 < *(int *)local_a8.field0_0x0 + 1U) {
          LOCK();
          *(int *)local_a8.field0_0x0 = *(int *)local_a8.field0_0x0 + 1;
          local_31 = *(int *)local_a8.field0_0x0 != 0;
          UNLOCK();
        }
        QString::append(&local_a8);
        QString::append(&local_70);
        if (*(int *)local_a8.field0_0x0 != -1) {
          if (*(int *)local_a8.field0_0x0 != 0) {
            LOCK();
            *(int *)local_a8.field0_0x0 = *(int *)local_a8.field0_0x0 + -1;
            local_31 = *(int *)local_a8.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10067de2c;
          }
          QArrayData::deallocate((QArrayData *)local_a8.field0_0x0,2,8);
        }
LAB_10067de2c:
        if (*(int *)pQVar8 != -1) {
          if (*(int *)pQVar8 != 0) {
            LOCK();
            *(int *)pQVar8 = *(int *)pQVar8 + -1;
            local_31 = *(int *)pQVar8 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10067de62;
          }
          QArrayData::deallocate(pQVar8,2,8);
        }
LAB_10067de62:
        if (1 < *(uint *)local_88) {
          FUN_100022c80(&local_88,*(uint *)(local_88 + 4));
        }
        local_40 = local_88 + (long)(int)*(uint *)(local_88 + 8) * 8 + 0x10;
        FUN_10005a450(local_48,&local_88,&local_40);
      } while (*(uint *)(local_88 + 0xc) != *(uint *)(local_88 + 8));
    }
    QString::truncate((int)&local_70);
    iVar5 = (**(code **)(**(long **)(param_1 + 0x10) + 0x10))
                      (*(long **)(param_1 + 0x10),&local_70,&local_74,0xffffffff);
    if (iVar5 == 0x8000000) goto LAB_10067dee5;
  }
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_31 = *(int *)local_98 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10067df55;
    }
    QArrayData::deallocate(local_98,2,8);
  }
LAB_10067df55:
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_31 = *(int *)local_88 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10067dfe1;
    }
    iVar7 = *(int *)(local_88 + 0xc);
    if (iVar7 != *(int *)(local_88 + 8)) {
      lVar13 = (long)*(int *)(local_88 + 8) * 8 + (long)iVar7 * -8;
      pDVar12 = local_88 + (long)iVar7 * 8 + 8;
      do {
        pQVar8 = *(QArrayData **)pDVar12;
        if (*(int *)pQVar8 == 0) {
LAB_10067dfc0:
          QArrayData::deallocate(pQVar8,2,8);
        }
        else if (*(int *)pQVar8 != -1) {
          LOCK();
          *(int *)pQVar8 = *(int *)pQVar8 + -1;
          local_31 = *(int *)pQVar8 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar8 = *(QArrayData **)pDVar12;
            goto LAB_10067dfc0;
          }
        }
        pDVar12 = pDVar12 + -8;
        lVar13 = lVar13 + 8;
      } while (lVar13 != 0);
    }
    QListData::dispose(local_88);
  }
LAB_10067dfe1:
  if (*(int *)local_70.field0_0x0 != -1) {
    if (*(int *)local_70.field0_0x0 != 0) {
      LOCK();
      *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
      local_31 = *(int *)local_70.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10067e011;
    }
    QArrayData::deallocate((QArrayData *)local_70.field0_0x0,2,8);
  }
LAB_10067e011:
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) {
        return iVar5;
      }
    }
    QArrayData::deallocate(local_60,4,8);
  }
  return iVar5;
}


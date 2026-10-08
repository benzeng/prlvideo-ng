
int FUN_100b0fbe0(long *param_1,size_t param_2,undefined8 param_3,ulong *param_4)

{
  char cVar1;
  int iVar2;
  long ***ppplVar3;
  long ***ppplVar4;
  long ****pppplVar5;
  int iVar6;
  int iVar7;
  void *pvVar8;
  long ****pppplVar9;
  int iVar10;
  long ***ppplVar11;
  uint *puVar12;
  uint uVar13;
  long ***ppplVar14;
  uint uVar16;
  ulong uVar17;
  QArrayData *local_108;
  QArrayData *local_100;
  QArrayData *local_f8;
  QArrayData *local_f0;
  QArrayData *local_e8;
  QArrayData *local_e0;
  long ***local_d8;
  long ***local_d0;
  long local_c8;
  QString local_c0;
  undefined1 local_b1;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  int local_90 [2];
  long **local_88;
  long local_80;
  uint local_78;
  uint local_74;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  long **local_50;
  undefined4 local_48;
  QString local_40;
  long local_38;
  long lVar15;
  
  local_38 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_c8 = 0;
  local_d8 = (long ***)&local_d8;
  local_d0 = (long ***)&local_d8;
  FUN_100dda060(&local_70);
  FUN_100dda060(&local_60);
  local_40.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  *param_4 = 0;
  pvVar8 = _valloc(param_2);
  if (pvVar8 == (void *)0x0) {
    iVar7 = -0x7ffffffe;
    FUN_100df99c0("","dimg",0,"Error allocating memory for MBR sector");
  }
  else {
    pppplVar9 = operator_new(0x28);
    pppplVar9[2] = (long ***)0x0;
    *(undefined4 *)(pppplVar9 + 3) = 0x88888888;
    pppplVar9[4] = (long ***)0x0;
    pppplVar9[1] = (long ***)&local_d8;
    *pppplVar9 = local_d8;
    local_d8[1] = (long **)pppplVar9;
    iVar7 = 0;
    local_c8 = local_c8 + 1;
    local_d8 = (long ***)pppplVar9;
    if (local_c8 != 0) {
      uVar16 = 0;
      iVar10 = 1;
      iVar6 = 0x10000000;
      do {
        ppplVar3 = (long ***)local_d0[2];
        iVar2 = *(int *)(local_d0 + 3);
        ppplVar4 = (long ***)local_d0[4];
        ppplVar11 = (long ***)*local_d0;
        ppplVar11[1] = local_d0[1];
        *local_d0[1] = (long *)ppplVar11;
        local_c8 = local_c8 + -1;
        operator_delete(local_d0);
        uVar16 = uVar16 + 1;
        if ((500 < uVar16) || ((ppplVar3 == (long ***)0x0 && (iVar2 != -0x77777778)))) {
          (**(code **)(*param_1 + 0xd0))(&local_e8);
          QString::toUtf8();
          FUN_100df99c0("","dimg",0,"Found cycled MBR partitions <%s>",
                        local_e0 + *(long *)(local_e0 + 0x10));
          if (*(int *)local_e0 != -1) {
            if (*(int *)local_e0 != 0) {
              LOCK();
              *(int *)local_e0 = *(int *)local_e0 + -1;
              local_b1 = *(int *)local_e0 != 0;
              UNLOCK();
              if ((bool)local_b1) goto LAB_100b102ff;
            }
            QArrayData::deallocate(local_e0,1,8);
          }
LAB_100b102ff:
          if (*(int *)local_e8 == -1) {
            iVar7 = -0x7ffdefbd;
            goto LAB_100b10419;
          }
          if (*(int *)local_e8 != 0) {
            LOCK();
            *(int *)local_e8 = *(int *)local_e8 + -1;
            local_b1 = *(int *)local_e8 != 0;
            UNLOCK();
            if ((bool)local_b1) {
              iVar7 = -0x7ffdefbd;
              goto LAB_100b10419;
            }
          }
          iVar7 = -0x7ffdefbd;
          QArrayData::deallocate(local_e8,2,8);
          goto LAB_100b10419;
        }
        iVar7 = (**(code **)(*param_1 + 0x98))(param_1,pvVar8,param_2,ppplVar3);
        if (iVar7 < 0) {
          (**(code **)(*param_1 + 0xd0))(&local_f8,param_1);
          QString::toUtf8();
          FUN_100df99c0("","dimg",0,"Error reading sector %llu code 0x%x <%s>",ppplVar3,iVar7,
                        local_f0 + *(long *)(local_f0 + 0x10));
          if (*(int *)local_f0 != -1) {
            if (*(int *)local_f0 != 0) {
              LOCK();
              *(int *)local_f0 = *(int *)local_f0 + -1;
              local_b1 = *(int *)local_f0 != 0;
              UNLOCK();
              if ((bool)local_b1) goto LAB_100b103d1;
            }
            QArrayData::deallocate(local_f0,1,8);
          }
LAB_100b103d1:
          if (*(int *)local_f8 == -1) break;
          if (*(int *)local_f8 != 0) {
            LOCK();
            *(int *)local_f8 = *(int *)local_f8 + -1;
            local_b1 = *(int *)local_f8 != 0;
            UNLOCK();
            if ((bool)local_b1) break;
          }
          QArrayData::deallocate(local_f8,2,8);
          break;
        }
        uVar17 = 0;
        puVar12 = (uint *)((long)pvVar8 + 0x1ca);
        do {
          uVar13 = (uint)(ppplVar3 == (long ***)0x0);
          if ((char)puVar12[-2] != '\0') {
            if ((char)puVar12[-2] == -0x12) {
              *param_4 = (ulong)puVar12[-1];
            }
            else {
              FUN_100dda060(&local_a0);
              local_68 = local_98;
              local_70 = local_a0;
              FUN_100dda060(&local_b0);
              local_58 = local_a8;
              local_60 = local_b0;
              local_74 = (uint)(byte)puVar12[-2];
              local_48 = (undefined4)uVar17;
              local_88 = (long **)((ulong)puVar12[-1] + (long)ppplVar3);
              local_80 = ((ulong)*puVar12 - 1) + (long)local_88;
              local_78 = (uint)((char)puVar12[-3] != '\0');
              local_90[0] = iVar2;
              local_50 = (long **)ppplVar3;
              QString::fromUtf8_helper((char *)&local_c0,0x1e41978);
              QString::operator=(&local_40,&local_c0);
              if (*(int *)local_c0.field0_0x0 != -1) {
                if (*(int *)local_c0.field0_0x0 != 0) {
                  LOCK();
                  *(int *)local_c0.field0_0x0 = *(int *)local_c0.field0_0x0 + -1;
                  local_b1 = *(int *)local_c0.field0_0x0 != 0;
                  UNLOCK();
                  if ((bool)local_b1) goto LAB_100b0ff05;
                }
                QArrayData::deallocate((QArrayData *)local_c0.field0_0x0,2,8);
              }
LAB_100b0ff05:
              ppplVar11 = (long ***)local_88;
              cVar1 = (char)puVar12[-2];
              if (((cVar1 == -0x7b) || (cVar1 == '\x05')) ||
                 (uVar13 = 1, iVar7 = iVar10, cVar1 == '\x0f')) {
                lVar15 = (long)ppplVar4 - (long)ppplVar3;
                if (ppplVar3 == (long ***)0x0) {
                  lVar15 = 0;
                }
                ppplVar14 = (long ***)(lVar15 + (long)local_88);
                local_80 = (ulong)*puVar12 + (long)ppplVar14;
                local_88 = (long **)ppplVar14;
                pppplVar9 = operator_new(0x28);
                uVar13 = (uint)(ppplVar3 == (long ***)0x0);
                if (ppplVar3 != (long ***)0x0) {
                  ppplVar11 = ppplVar4;
                }
                pppplVar9[2] = ppplVar14;
                *(int *)(pppplVar9 + 3) = iVar6;
                pppplVar9[4] = ppplVar11;
                pppplVar9[1] = (long ***)&local_d8;
                *pppplVar9 = local_d8;
                local_d8[1] = (long **)pppplVar9;
                local_c8 = local_c8 + 1;
                local_d8 = (long ***)pppplVar9;
                iVar7 = iVar6;
                iVar6 = iVar6 + 1;
              }
              iVar7 = FUN_100b10730(param_3,iVar7,local_90);
              if (iVar7 < 0) {
                (**(code **)(*param_1 + 0xd0))(&local_108);
                QString::toUtf8();
                FUN_100df99c0("","dimg",0,"Error inserting MBR to map <%s>",
                              local_100 + *(long *)(local_100 + 0x10));
                if (*(int *)local_100 != -1) {
                  if (*(int *)local_100 != 0) {
                    LOCK();
                    *(int *)local_100 = *(int *)local_100 + -1;
                    local_b1 = *(int *)local_100 != 0;
                    UNLOCK();
                    if ((bool)local_b1) goto LAB_100b101e2;
                  }
                  QArrayData::deallocate(local_100,1,8);
                }
LAB_100b101e2:
                if (*(int *)local_108 == -1) goto LAB_100b1040d;
                if (*(int *)local_108 != 0) {
                  LOCK();
                  *(int *)local_108 = *(int *)local_108 + -1;
                  local_b1 = *(int *)local_108 != 0;
                  UNLOCK();
                  if ((bool)local_b1) goto LAB_100b1040d;
                }
                QArrayData::deallocate(local_108,2,8);
                goto LAB_100b1040d;
              }
            }
          }
          iVar10 = iVar10 + uVar13;
          uVar17 = uVar17 + 1;
          puVar12 = puVar12 + 4;
        } while (uVar17 < 4);
        if (local_c8 == 0) break;
      } while( true );
    }
LAB_100b1040d:
    _free(pvVar8);
  }
LAB_100b10419:
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_b1 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_b1) goto LAB_100b1044f;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_100b1044f:
  if (local_c8 != 0) {
    ppplVar3 = (long ***)*local_d0;
    ppplVar3[1] = local_d8[1];
    *local_d8[1] = (long *)ppplVar3;
    local_c8 = 0;
    pppplVar9 = (long ****)local_d0;
    while (pppplVar9 != &local_d8) {
      pppplVar5 = (long ****)pppplVar9[1];
      operator_delete(pppplVar9);
      pppplVar9 = pppplVar5;
    }
  }
  if (*(long *)PTR____stack_chk_guard_1021e1840 == local_38) {
    return iVar7;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}


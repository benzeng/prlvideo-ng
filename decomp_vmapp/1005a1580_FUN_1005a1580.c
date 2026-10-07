
int FUN_1005a1580(long *param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  int iVar4;
  undefined4 uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long lVar11;
  void *pvVar12;
  ulong uVar13;
  size_t sVar14;
  long lVar15;
  undefined1 auVar16 [16];
  QString local_f0;
  QString local_e8;
  QString local_e0;
  QString local_d8;
  undefined1 local_c9;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined1 local_b0 [16];
  ulong local_a0;
  undefined1 local_88 [48];
  QArrayData *local_58;
  QArrayData *local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  FUN_100098d30(local_b0);
  local_d8.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
  iVar4 = -0x7ffffffd;
  if (param_1 != (long *)0x0) {
    auVar16 = (**(code **)(*param_1 + 0x2e0))(param_1);
    uVar13 = auVar16._8_8_;
    uVar6 = auVar16._0_8_;
    uVar8 = 0;
    if (*(int *)(*param_2 + 4) != 0) {
      lVar7 = FUN_100785a10(param_2);
      uVar13 = (uVar6 - 1) + lVar7;
      uVar8 = uVar13 / uVar6;
      uVar13 = uVar13 % uVar6;
    }
    iVar4 = (**(code **)(*param_1 + 0x90))(param_1,local_b0,uVar13);
    uVar13 = local_a0;
    if (iVar4 < 0) {
      FUN_1008e3970("","vdisk",0,"[partitioning] Get Parameters for disk failed [0x%x]",iVar4);
    }
    else {
      uVar9 = 0xc800000;
      if (0x200 < uVar6) {
        uVar9 = 0x12c00000;
      }
      auVar2._8_8_ = 0;
      auVar2._0_8_ = uVar6;
      lVar7 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x8000000)) / auVar2,0);
      if (local_a0 < lVar7 + uVar9 / uVar6) {
        iVar4 = -0x7ffdefb0;
        FUN_1008e3970("","vdisk",0,"[partitioning] Size of disk is small, min: 400 Mb");
      }
      else {
        sVar14 = ((uVar6 + 0x1ff) - (uVar6 + 0x1ff) % uVar6) +
                 ((uVar6 + 0x3fff) - (uVar6 + 0x3fff) % uVar6);
        puVar10 = _valloc(sVar14);
        if (puVar10 == (undefined8 *)0x0) {
          iVar4 = -0x7ffffffe;
          FUN_1008e3970("","vdisk",0,"[partitioning] Error allocating memory for MBR + GPT");
        }
        else {
          ___bzero(puVar10,sVar14);
          *(undefined1 *)((long)puVar10 + 0x1be) = 0;
          *(undefined1 *)((long)puVar10 + 0x1c2) = 0xee;
          *(undefined4 *)((long)puVar10 + 0x1c6) = 1;
          *(int *)((long)puVar10 + 0x1ca) = (int)uVar13 + -1;
          *(undefined1 *)((long)puVar10 + 0x1c3) = 0xfe;
          *(undefined1 *)((long)puVar10 + 0x1bf) = 0xfe;
          *(undefined1 *)((long)puVar10 + 0x1c5) = 0xff;
          *(undefined1 *)((long)puVar10 + 0x1c1) = 0xff;
          *(undefined1 *)((long)puVar10 + 0x1c4) = 0xff;
          *(undefined1 *)(puVar10 + 0x38) = 0xff;
          *(undefined2 *)((long)puVar10 + 0x1fe) = 0xaa55;
          iVar4 = (**(code **)(*param_1 + 0xf0))(param_1,puVar10,uVar6 & 0xffffffff,0);
          if (iVar4 < 0) {
            FUN_1008e3970("","vdisk",0,"[partitioning] Error writing MBR sector [0x%x]",iVar4);
          }
          else {
            ___bzero(puVar10,sVar14);
            *puVar10 = 0x5452415020494645;
            *(undefined4 *)(puVar10 + 1) = 0x10000;
            *(undefined4 *)((long)puVar10 + 0xc) = 0x5c;
            puVar10[3] = 1;
            puVar10[4] = local_a0 - 1;
            *(undefined4 *)(puVar10 + 10) = 0x80;
            *(undefined4 *)((long)puVar10 + 0x54) = 0x80;
            puVar10[9] = 2;
            auVar3._8_8_ = 0;
            auVar3._0_8_ = uVar6;
            lVar11 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x4000)) / auVar3,0);
            puVar10[5] = lVar11 + 2;
            puVar10[6] = (local_a0 - 2) - lVar11;
            FUN_1007ea830(&local_c8);
            puVar1 = (undefined8 *)((long)puVar10 + uVar6);
            puVar10[8] = local_c0;
            puVar10[7] = local_c8;
            puVar1[1] = 0x3bc93ec9a0004bba;
            *puVar1 = 0x11d2f81fc12a7328;
            FUN_1007ea830(&local_c8);
            *(undefined8 *)(uVar6 + 0x18 + (long)puVar10) = local_c0;
            *(undefined8 *)(uVar6 + 0x10 + (long)puVar10) = local_c8;
            uVar13 = (puVar10[5] * uVar6 + 0xfff & 0xfffffffffffff000) / uVar6;
            *(ulong *)(uVar6 + 0x20 + (long)puVar10) = uVar13;
            *(ulong *)(uVar6 + 0x28 + (long)puVar10) = (uVar9 / uVar6 - 1) + uVar13;
            local_e0.field0_0x0 =
                 (QTypedArrayData<unsigned_short> *)
                 QString::fromAscii_helper("EFI System Partition",0x14);
            QString::operator=(&local_d8,&local_e0);
            if (*(int *)local_e0.field0_0x0 != -1) {
              if (*(int *)local_e0.field0_0x0 != 0) {
                LOCK();
                *(int *)local_e0.field0_0x0 = *(int *)local_e0.field0_0x0 + -1;
                local_c9 = *(int *)local_e0.field0_0x0 != 0;
                UNLOCK();
                if ((bool)local_c9) goto LAB_1005a191f;
              }
              QArrayData::deallocate((QArrayData *)local_e0.field0_0x0,2,8);
            }
LAB_1005a191f:
            pvVar12 = (void *)QString::utf16();
            _memcpy((void *)(uVar6 + 0x38 + (long)puVar10),pvVar12,
                    (long)*(int *)(local_d8.field0_0x0 + 4) * 2);
            lVar11 = puVar10[6];
            *(undefined8 *)(uVar6 + 0x88 + (long)puVar10) = 0xacec4365300011aa;
            *(undefined8 *)(uVar6 + 0x80 + (long)puVar10) = 0x11aa000048465300;
            FUN_1007ea830(&local_c8);
            lVar11 = (1 - lVar7) + lVar11;
            lVar7 = lVar11 - uVar8;
            *(undefined8 *)((long)puVar10 + uVar6 + 0x98) = local_c0;
            *(undefined8 *)((long)puVar10 + uVar6 + 0x90) = local_c8;
            *(long *)((long)puVar10 + uVar6 + 0xa0) = *(long *)((long)puVar10 + uVar6 + 0x28) + 1;
            *(long *)((long)puVar10 + uVar6 + 0xa8) = lVar7 + -1;
            local_e8.field0_0x0 =
                 (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("Macintosh HD",0xc);
            QString::operator=(&local_d8,&local_e8);
            if (*(int *)local_e8.field0_0x0 != -1) {
              if (*(int *)local_e8.field0_0x0 != 0) {
                LOCK();
                *(int *)local_e8.field0_0x0 = *(int *)local_e8.field0_0x0 + -1;
                local_c9 = *(int *)local_e8.field0_0x0 != 0;
                UNLOCK();
                if ((bool)local_c9) goto LAB_1005a1a3c;
              }
              QArrayData::deallocate((QArrayData *)local_e8.field0_0x0,2,8);
            }
LAB_1005a1a3c:
            pvVar12 = (void *)QString::utf16();
            _memcpy((void *)(uVar6 + 0xb8 + (long)puVar10),pvVar12,
                    (long)*(int *)(local_d8.field0_0x0 + 4) * 2);
            if (uVar8 != 0) {
              *(undefined8 *)(uVar6 + 0x108 + (long)puVar10) = 0xacec4365300011aa;
              *(undefined8 *)(uVar6 + 0x100 + (long)puVar10) = 0x11aa0000426f6f74;
              FUN_1007ea830(&local_c8);
              *(undefined8 *)((long)puVar10 + uVar6 + 0x118) = local_c0;
              *(undefined8 *)((long)puVar10 + uVar6 + 0x110) = local_c8;
              *(long *)((long)puVar10 + uVar6 + 0x120) = *(long *)((long)puVar10 + uVar6 + 0xa8) + 1
              ;
              *(long *)((long)puVar10 + uVar6 + 0x128) = lVar11;
              local_f0.field0_0x0 =
                   (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("Recovery HD",0xb);
              QString::operator=(&local_d8,&local_f0);
              if (*(int *)local_f0.field0_0x0 != -1) {
                if (*(int *)local_f0.field0_0x0 != 0) {
                  LOCK();
                  *(int *)local_f0.field0_0x0 = *(int *)local_f0.field0_0x0 + -1;
                  local_c9 = *(int *)local_f0.field0_0x0 != 0;
                  UNLOCK();
                  if ((bool)local_c9) goto LAB_1005a1b44;
                }
                QArrayData::deallocate((QArrayData *)local_f0.field0_0x0,2,8);
              }
LAB_1005a1b44:
              pvVar12 = (void *)QString::utf16();
              _memcpy((void *)(uVar6 + 0x138 + (long)puVar10),pvVar12,
                      (long)*(int *)(local_d8.field0_0x0 + 4) * 2);
            }
            uVar5 = FUN_1006897e0(puVar1,*(int *)((long)puVar10 + 0x54) * *(int *)(puVar10 + 10));
            *(undefined4 *)(puVar10 + 0xb) = uVar5;
            uVar5 = FUN_1006897e0(puVar10,*(undefined4 *)((long)puVar10 + 0xc));
            *(undefined4 *)(puVar10 + 2) = uVar5;
            iVar4 = (**(code **)(*param_1 + 0xf0))(param_1,puVar10,sVar14,1);
            if (iVar4 < 0) {
              FUN_1008e3970("","vdisk",0,"[partitioning] Error writing EFI Header and GPT [0x%x]",
                            iVar4);
            }
            else {
              puVar10[3] = local_a0 - 1;
              puVar10[4] = 1;
              uVar13 = (uVar6 - 1) +
                       (ulong)(uint)(*(int *)((long)puVar10 + 0x54) * *(int *)(puVar10 + 10));
              puVar10[9] = (local_a0 - 1) - uVar13 / uVar6;
              *(undefined4 *)(puVar10 + 2) = 0;
              uVar5 = FUN_1006897e0(puVar10,*(undefined4 *)((long)puVar10 + 0xc),uVar13 % uVar6);
              *(undefined4 *)(puVar10 + 2) = uVar5;
              iVar4 = (**(code **)(*param_1 + 0xf0))
                                (param_1,puVar10,uVar6 & 0xffffffff,local_a0 - 1);
              if (iVar4 < 0) {
                FUN_1008e3970("","vdisk",0,"[partitioning] Error writing alternate GPT [0x%x]",iVar4
                             );
              }
              else {
                iVar4 = (**(code **)(*param_1 + 0xf0))
                                  (param_1,puVar1,(int)sVar14 - auVar16._0_4_,puVar10[9]);
                if (iVar4 < 0) {
                  FUN_1008e3970("","vdisk",0,"[partitioning] Error writing alternate GPT [0x%x]",
                                iVar4);
                }
                else {
                  lVar11 = *(long *)((long)puVar10 + uVar6 + 0x20);
                  lVar15 = (1 - lVar11) + *(long *)((long)puVar10 + uVar6 + 0x28);
                  iVar4 = FUN_1005a2150(param_1,lVar11,lVar15);
                  if (iVar4 < 0) {
                    FUN_1008e3970("","vdisk",0,
                                  "EFI partition(start %llu, size %llu) formating failed",lVar11,
                                  lVar15);
                  }
                  else {
                    lVar11 = *(long *)((long)puVar10 + uVar6 + 0xa0);
                    lVar15 = (1 - lVar11) + *(long *)((long)puVar10 + uVar6 + 0xa8);
                    iVar4 = FUN_1005a2250(param_1,lVar11,lVar15);
                    if (iVar4 < 0) {
                      FUN_1008e3970("","vdisk",0,
                                    "HFS+ partition(start %llu, size %llu) formating failed",lVar11,
                                    lVar15);
                    }
                    else if (uVar8 != 0) {
                      iVar4 = FUN_1005a2350(param_1,param_2,lVar7,uVar8);
                    }
                  }
                }
              }
            }
          }
          _free(puVar10);
        }
      }
    }
  }
  if (*(int *)local_d8.field0_0x0 != -1) {
    if (*(int *)local_d8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_d8.field0_0x0 = *(int *)local_d8.field0_0x0 + -1;
      local_c9 = *(int *)local_d8.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_c9) goto LAB_1005a1e55;
    }
    QArrayData::deallocate((QArrayData *)local_d8.field0_0x0,2,8);
  }
LAB_1005a1e55:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_c9 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_c9) goto LAB_1005a1e8b;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1005a1e8b:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_c9 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_c9) goto LAB_1005a1ec1;
    }
    QArrayData::deallocate(local_58,1,8);
  }
LAB_1005a1ec1:
  FUN_100098f20(local_88);
  if (*(long *)PTR____stack_chk_guard_100ba2320 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar4;
}


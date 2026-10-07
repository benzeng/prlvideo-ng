
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_1007555c0(undefined8 param_1,uint param_2,long param_3,ulong *param_4,QString *param_5,
                  undefined1 param_6,int param_7)

{
  undefined8 *puVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  uint *puVar7;
  undefined4 *puVar8;
  undefined *puVar9;
  char *pcVar10;
  ulong uVar11;
  long lVar12;
  uint uVar13;
  ulong extraout_XMM0_Qa;
  ulong extraout_XMM0_Qb;
  undefined4 uVar15;
  undefined1 *puVar14;
  undefined4 local_2904;
  QArrayData *local_28d8;
  QArrayData *local_28d0;
  QArrayData *local_28c8;
  QArrayData *local_28c0;
  undefined1 local_28b8 [16];
  undefined1 local_28a8 [16];
  undefined8 local_2898;
  QString local_2890 [2];
  QString local_2880;
  undefined1 local_2878 [871];
  undefined1 local_2511;
  undefined1 local_2510 [1240];
  undefined1 local_2038 [16];
  undefined8 local_2028;
  undefined4 local_2020;
  undefined8 local_2018;
  undefined4 local_1fd8;
  undefined8 local_1fb8;
  undefined4 local_1d18;
  undefined4 local_1cc0;
  undefined2 local_1cb8;
  undefined2 local_1cb6;
  undefined2 local_1cb4;
  undefined2 local_1cb2;
  undefined2 local_1cb0;
  undefined2 local_1cae;
  undefined4 local_1cac;
  ulong local_1c8c;
  ulong uStack_1c84;
  undefined4 local_1c7c;
  undefined8 local_1c78;
  undefined8 uStack_1c70;
  undefined8 local_1c68;
  ulong uStack_1c60;
  undefined8 local_1c58;
  undefined8 uStack_1c50;
  undefined8 local_1c48;
  undefined8 uStack_1c40;
  undefined8 local_1c38;
  undefined8 uStack_1c30;
  undefined8 local_1c28;
  undefined8 uStack_1c20;
  undefined8 local_1c18;
  undefined8 uStack_1c10;
  undefined8 local_1c08;
  undefined8 local_1c00;
  undefined8 local_1bf8;
  long local_38;
  
  lVar12 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_2880.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
  local_38 = lVar12;
  QFile::QFile((QFile *)local_2890);
  if (param_7 == 0) {
    bVar3 = 0;
  }
  else {
    uVar11 = 0;
    uVar5 = 0;
    if (param_4 != (ulong *)0x0) {
      uVar5 = *param_4;
      uVar11 = param_4[1];
      if (uVar11 == 0) {
        uVar11 = 0;
      }
      else if ((param_3 != 0) && (0xfff < uVar5)) {
        uVar13 = 0;
        if (param_2 != 0) {
          puVar8 = (undefined4 *)(param_3 + 0x5b8);
          uVar5 = 0;
          uVar13 = param_2;
          do {
            if (puVar8[-0xd2] == 0) {
              FUN_1008e3970("","dbgdump",0,
                            "vcpu %u data contains garbage. Dbgdump may not be collected.",*puVar8);
            }
            else if (uVar5 < uVar13) {
              uVar13 = (uint)uVar5;
            }
            uVar5 = uVar5 + 1;
            puVar8 = puVar8 + 0x1da;
          } while (uVar5 < param_2);
        }
        if (uVar13 == param_2) {
          bVar3 = 0;
          FUN_1008e3970("","dbgdump",0,"No valid VCPU context found!");
          lVar12 = *(long *)PTR____stack_chk_guard_100ba2320;
          goto LAB_10075575f;
        }
        ___bzero(local_2510,0x4d2);
        local_28a8 = (undefined1  [16])0x0;
        local_28b8 = (undefined1  [16])0x0;
        local_2898 = 0;
        _memset_pattern16(local_2038,"PAGEPAGEPAGEPAGE7DbgDump",0x2000);
        if (*(short *)(param_3 + 0x220) == 0x40) {
          puVar14 = local_2878;
          iVar4 = FUN_100754240(param_1,param_2,(ulong)uVar13 * 0x768 + param_3,param_4,local_2038,
                                local_28b8,puVar14,local_2510,param_7);
          uVar15 = (undefined4)((ulong)puVar14 >> 0x20);
          lVar12 = *(long *)PTR____stack_chk_guard_100ba2320;
          local_2904 = 0x2000;
joined_r0x000100755905:
          if (iVar4 == 0) {
            puVar7 = &DAT_1011a1328;
            puVar9 = (undefined *)0x0;
            uVar5 = 0;
            do {
              if ((((uint)(ushort)local_28b8._0_2_ == puVar7[-2]) &&
                  ((uint)(ushort)local_28b8._2_2_ == puVar7[-1])) &&
                 ((uint)(ushort)local_28b8._8_2_ == *puVar7)) {
                puVar9 = &DAT_1011a1310 + uVar5 * 0x24;
                break;
              }
              uVar5 = uVar5 + 1;
              puVar7 = puVar7 + 9;
            } while (uVar5 < 0x33);
            FUN_1008e3970("","dbgdump",0,"Found debugger version block (0x%x.0x%x.0x%x):",
                          local_28b8._0_2_,local_28b8._2_2_,
                          CONCAT44(uVar15,(uint)(ushort)local_28b8._8_2_));
            FUN_1008e3970("","dbgdump",0,"KernBase          =0x%llx",local_28a8._0_8_);
            FUN_1008e3970("","dbgdump",0,"PsLoadedModuleList=0x%llx",local_28a8._8_8_);
            FUN_1008e3970("","dbgdump",0,"DebuggerDataList  =0x%llx",local_2898);
            pcVar10 = "known";
            if (puVar9 == (undefined *)0x0) {
              pcVar10 = "unknown";
            }
            FUN_1008e3970("","dbgdump",0,"Status            =%s",pcVar10);
            FUN_1008e3970("","dbgdump",0,"Dump header supplied information:");
            if (*(short *)(param_3 + 0x220) == 0x20) {
              FUN_1008e3970("","dbgdump",0,"DebuggerDatablock =0x%x",local_1fd8);
              FUN_1008e3970("","dbgdump",0,"PsLoadedModuleList=0x%x",local_2020);
            }
            else {
              FUN_1008e3970("","dbgdump",0,"DebuggerDatablock =0x%llx",local_1fb8);
              FUN_1008e3970("","dbgdump",0,"PsLoadedModuleList=0x%llx",local_2018);
            }
            if ((param_7 == 1) || (puVar9 != (undefined *)0x0)) {
              uVar5 = 0;
              bVar3 = 0;
              do {
                QString::operator=(&local_2880,param_5);
                if (param_7 == 3) {
                  local_28c8 = (QArrayData *)QString::fromAscii_helper("_%1",3);
                  QString::arg(&local_28c0,&local_28c8,uVar5,0,10,0x20);
                  QString::append(&local_2880);
                  if (*(int *)local_28c0 != -1) {
                    if (*(int *)local_28c0 != 0) {
                      LOCK();
                      *(int *)local_28c0 = *(int *)local_28c0 + -1;
                      local_2511 = *(int *)local_28c0 != 0;
                      UNLOCK();
                      if ((bool)local_2511) goto LAB_100755c38;
                    }
                    QArrayData::deallocate(local_28c0,2,8);
                  }
LAB_100755c38:
                  if (*(int *)local_28c8 != -1) {
                    if (*(int *)local_28c8 != 0) {
                      LOCK();
                      *(int *)local_28c8 = *(int *)local_28c8 + -1;
                      local_2511 = *(int *)local_28c8 != 0;
                      UNLOCK();
                      if ((bool)local_2511) goto LAB_100755c80;
                    }
                    QArrayData::deallocate(local_28c8,2,8);
                  }
                }
LAB_100755c80:
                QFile::setFileName(local_2890);
                cVar2 = QFile::exists();
                if (cVar2 != '\0') {
                  QString::toUtf8();
                  if ((1 < *(uint *)local_28d0) || (*(long *)(local_28d0 + 0x10) != 0x18)) {
                    QByteArray::reallocData
                              (&local_28d0,*(uint *)(local_28d0 + 4) + 1,
                               *(uint *)(local_28d0 + 8) >> 0x1f);
                  }
                  FUN_1008e3970("","dbgdump",0,
                                "Previous \'%s\' file removed. A new one is being created.",
                                local_28d0 + *(long *)(local_28d0 + 0x10));
                  if (*(int *)local_28d0 != -1) {
                    if (*(int *)local_28d0 != 0) {
                      LOCK();
                      *(int *)local_28d0 = *(int *)local_28d0 + -1;
                      local_2511 = *(int *)local_28d0 != 0;
                      UNLOCK();
                      if ((bool)local_2511) goto LAB_100755d4c;
                    }
                    QArrayData::deallocate(local_28d0,1,8);
                  }
LAB_100755d4c:
                  QFile::remove(&local_2880);
                }
                cVar2 = QFile::open(local_2890,0xb);
                if (cVar2 == '\0') {
                  QString::toUtf8();
                  if ((1 < *(uint *)local_28d8) || (*(long *)(local_28d8 + 0x10) != 0x18)) {
                    QByteArray::reallocData
                              (&local_28d8,*(uint *)(local_28d8 + 4) + 1,
                               *(uint *)(local_28d8 + 8) >> 0x1f);
                  }
                  FUN_1008e3970("","dbgdump",0,"can\'t create file \'%s\'",
                                local_28d8 + *(long *)(local_28d8 + 0x10));
                  if (*(int *)local_28d8 != -1) {
                    if (*(int *)local_28d8 != 0) {
                      LOCK();
                      *(int *)local_28d8 = *(int *)local_28d8 + -1;
                      local_2511 = *(int *)local_28d8 != 0;
                      UNLOCK();
                      if ((bool)local_2511) goto LAB_100756110;
                    }
                    QArrayData::deallocate(local_28d8,1,8);
                  }
                }
                else if (param_7 == 3) {
                  lVar6 = uVar5 * 0x768;
                  if (*(short *)(param_3 + 0x220) == 0x20) {
                    uStack_1c70 = CONCAT44(*(undefined4 *)(param_3 + 0x10 + lVar6),
                                           *(undefined4 *)(param_3 + 0x18 + lVar6));
                    local_1c68 = CONCAT44(*(undefined4 *)(param_3 + 0x30 + lVar6),
                                          *(undefined4 *)(param_3 + 8 + lVar6));
                    local_1c78 = CONCAT44(*(undefined4 *)(param_3 + 0x20 + lVar6),
                                          *(undefined4 *)(param_3 + 0x38 + lVar6));
                    local_1c7c = *(undefined4 *)(param_3 + 0x40 + lVar6);
                    uStack_1c60 = (ulong)CONCAT24(*(undefined2 *)(param_3 + 0x5f1 + lVar6),
                                                  (int)*(undefined8 *)(param_3 + lVar6));
                    local_1c8c = (extraout_XMM0_Qa & 0xffff0000ffff0000 |
                                  (ulong)*(ushort *)(param_3 + 0x6b1 + lVar6) |
                                 (ulong)*(ushort *)(param_3 + 0x681 + lVar6) << 0x20) &
                                 _DAT_100b4add0;
                    uStack_1c84 = (extraout_XMM0_Qb & 0xffff0000ffff0000 |
                                   (ulong)*(ushort *)(param_3 + 0x5c1 + lVar6) |
                                  (ulong)*(ushort *)(param_3 + 0x651 + lVar6) << 0x20) &
                                  _UNK_100b4add8;
                    uStack_1c50 = CONCAT44(uStack_1c50._4_4_,
                                           (uint)*(ushort *)(param_3 + 0x621 + lVar6));
                    local_1c58 = CONCAT44(*(undefined4 *)(param_3 + 0x28 + lVar6),
                                          *(undefined4 *)(param_3 + 0x88 + lVar6));
                    local_1d18 = 0x10007;
                    local_2028 = CONCAT44(local_2028._4_4_,*(undefined4 *)(param_3 + 0x90 + lVar6));
                  }
                  else {
                    puVar1 = (undefined8 *)(param_3 + 8 + lVar6);
                    local_1c78 = *puVar1;
                    uStack_1c70 = puVar1[1];
                    puVar1 = (undefined8 *)(param_3 + 0x18 + lVar6);
                    local_1c68 = *puVar1;
                    uStack_1c60 = puVar1[1];
                    puVar1 = (undefined8 *)(param_3 + 0x28 + lVar6);
                    local_1c58 = *puVar1;
                    uStack_1c50 = puVar1[1];
                    puVar1 = (undefined8 *)(param_3 + 0x38 + lVar6);
                    local_1c48 = *puVar1;
                    uStack_1c40 = puVar1[1];
                    puVar1 = (undefined8 *)(param_3 + 0x48 + lVar6);
                    local_1c38 = *puVar1;
                    uStack_1c30 = puVar1[1];
                    puVar1 = (undefined8 *)(param_3 + 0x58 + lVar6);
                    local_1c28 = *puVar1;
                    uStack_1c20 = puVar1[1];
                    puVar1 = (undefined8 *)(param_3 + 0x68 + lVar6);
                    local_1c18 = *puVar1;
                    uStack_1c10 = puVar1[1];
                    local_1c08 = *(undefined8 *)(param_3 + 0x78 + lVar6);
                    local_1c00 = *(undefined8 *)(param_3 + 0x80 + lVar6);
                    local_1cb8 = *(undefined2 *)(param_3 + 0x5f1 + lVar6);
                    local_1cb6 = *(undefined2 *)(param_3 + 0x651 + lVar6);
                    local_1cb4 = *(undefined2 *)(param_3 + 0x5c1 + lVar6);
                    local_1cb2 = *(undefined2 *)(param_3 + 0x681 + lVar6);
                    local_1cb0 = *(undefined2 *)(param_3 + 0x6b1 + lVar6);
                    local_1cae = *(undefined2 *)(param_3 + 0x621 + lVar6);
                    local_1cac = *(undefined4 *)(param_3 + 0x88 + lVar6);
                    local_1cc0 = 0x100007;
                    local_2028 = *(undefined8 *)(param_3 + 0x90 + lVar6);
                    local_1bf8 = *(undefined8 *)(param_3 + lVar6);
                  }
                  bVar3 = FUN_10075ee40(local_2890,uVar5,param_3,param_4,local_2038,local_2904,
                                        local_2878);
                  uVar5 = (ulong)((int)uVar5 + 1);
                }
                else if (param_7 == 2) {
                  bVar3 = FUN_10075efa0(local_2890,param_2,param_3,param_4,local_2038,local_2904,
                                        local_2878);
                }
                else if (param_7 == 1) {
                  bVar3 = FUN_100754780(param_1,local_2890,param_2,param_3,param_4,local_2038,
                                        local_2904,local_2878,puVar9,local_2510,param_6);
                }
LAB_100756110:
                (**(code **)(local_2890[0].field0_0x0 + 0x70))(local_2890);
              } while (((uint)uVar5 != 0) && ((uint)uVar5 < param_2));
              FUN_100753030(param_1,99);
              bVar3 = bVar3 & 1;
            }
            else {
              bVar3 = 0;
              FUN_1008e3970("","dbgdump",0,"Unknown guest OS");
            }
            goto LAB_10075575f;
          }
        }
        else {
          if (*(short *)(param_3 + 0x220) == 0x20) {
            puVar14 = local_2878;
            iVar4 = FUN_100753d50(param_1,param_2,(ulong)uVar13 * 0x768 + param_3,param_4,local_2038
                                  ,local_28b8,puVar14,local_2510,param_7);
            uVar15 = (undefined4)((ulong)puVar14 >> 0x20);
            lVar12 = *(long *)PTR____stack_chk_guard_100ba2320;
            local_2904 = 0x1000;
            goto joined_r0x000100755905;
          }
          FUN_1008e3970("","dbgdump",0,"unknown bitness: %d");
          lVar12 = *(long *)PTR____stack_chk_guard_100ba2320;
        }
        bVar3 = 0;
        FUN_1008e3970("","dbgdump",0,"Failed to create header");
        goto LAB_10075575f;
      }
    }
    bVar3 = 0;
    FUN_1008e3970("","dbgdump",0,"Invalid physical memory object %p %p %llu or dbg_ctx %p",param_4,
                  uVar11,uVar5,param_3);
  }
LAB_10075575f:
  QFile::~QFile((QFile *)local_2890);
  if (*(int *)local_2880.field0_0x0 != -1) {
    if (*(int *)local_2880.field0_0x0 != 0) {
      LOCK();
      *(int *)local_2880.field0_0x0 = *(int *)local_2880.field0_0x0 + -1;
      UNLOCK();
      local_28b8[0] = *(int *)local_2880.field0_0x0 != 0;
      if (*(int *)local_2880.field0_0x0 != 0) goto LAB_1007557a7;
    }
    QArrayData::deallocate((QArrayData *)local_2880.field0_0x0,2,8);
  }
LAB_1007557a7:
  if (lVar12 == local_38) {
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}


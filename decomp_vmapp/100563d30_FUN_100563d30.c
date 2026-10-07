
int FUN_100563d30(long *param_1,uint param_2,int *param_3)

{
  undefined4 *puVar1;
  byte *pbVar2;
  long lVar3;
  code *pcVar4;
  undefined *puVar5;
  Data *pDVar6;
  QArrayData *pQVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  long lVar11;
  Data *pDVar12;
  undefined1 *puVar13;
  QString local_240;
  QString local_238;
  QArrayData *local_230;
  undefined4 local_228;
  undefined4 local_224;
  Data *local_220;
  uint *local_218;
  QString local_210;
  char local_201;
  QArrayData *local_200;
  QArrayData *local_1f8;
  QArrayData *local_1f0;
  QArrayData *local_1e8;
  QArrayData *local_1e0;
  QArrayData *local_1d8;
  QArrayData *local_1d0;
  QString local_1c8;
  QArrayData *local_1c0;
  QString local_1b8;
  undefined1 local_1a9;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined1 local_100 [40];
  undefined1 local_d8 [8];
  undefined1 *local_d0;
  QArrayData *local_a8;
  QArrayData *local_90;
  ulong local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
  lVar11 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_38 = lVar11;
  if (param_1 == (long *)0x0) {
    FUN_1008e3970("","StatesUtils",0,"ASSERT( %s ) occured in %s:%d [%s]","pDisk",
                  "BootCampStatesHelper.cpp",0x20b,"ProcessDiskState");
  }
  if (1 < DAT_1011b55f8) {
    (**(code **)(*param_1 + 0x178))(&local_200,param_1);
    QString::toUtf8();
    FUN_1008e3970("","StatesUtils",2,"Processing BC disk \'%s\' state, action %d",
                  local_1f8 + *(long *)(local_1f8 + 0x10),param_2);
    if (*(int *)local_1f8 != -1) {
      if (*(int *)local_1f8 != 0) {
        LOCK();
        *(int *)local_1f8 = *(int *)local_1f8 + -1;
        local_1a9 = *(int *)local_1f8 != 0;
        UNLOCK();
        if ((bool)local_1a9) goto LAB_100563e4f;
      }
      QArrayData::deallocate(local_1f8,1,8);
    }
LAB_100563e4f:
    if (*(int *)local_200 != -1) {
      if (*(int *)local_200 != 0) {
        LOCK();
        *(int *)local_200 = *(int *)local_200 + -1;
        local_1a9 = *(int *)local_200 != 0;
        UNLOCK();
        if ((bool)local_1a9) goto LAB_100563e8b;
      }
      QArrayData::deallocate(local_200,2,8);
    }
  }
LAB_100563e8b:
  if (param_2 == 0) {
    FUN_1008e3970("","StatesUtils",0,"ASSERT( %s ) occured in %s:%d [%s]",
                  "SuspendDiskHelper::ReadState != action","BootCampStatesHelper.cpp",0x20f,
                  "ProcessDiskState");
  }
  *param_3 = 0;
  local_201 = '\0';
  local_210.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
  iVar9 = FUN_100563960(param_1,&local_201,&local_210);
  if (iVar9 < 0) {
    FUN_1008e3970("","StatesUtils",0,
                  "Error : Failed to get disk user BC suspend param info, error 0x%X",iVar9);
  }
  else {
    FUN_100098d30(local_100);
    iVar9 = (**(code **)(*param_1 + 0x90))(param_1,local_100);
    puVar5 = PTR_shared_null_100ba2188;
    if (iVar9 < 0) {
      FUN_1008e3970("","StatesUtils",0,"Error : Failed to get disk image params, error 0x%X",iVar9);
    }
    else {
      local_218 = (uint *)PTR_shared_null_100ba2188;
      if (local_d8 != local_d0) {
        puVar13 = local_d0;
        do {
          cVar8 = FUN_100684c20(*(undefined4 *)(puVar13 + 0x10));
          if (cVar8 != '\0') {
            FUN_100566cf0(&local_218,puVar13 + 0x10);
          }
          puVar13 = *(undefined1 **)(puVar13 + 8);
        } while (local_d8 != puVar13);
      }
      if (1 < DAT_1011b55f8) {
        FUN_1008e3970("","StatesUtils",2,"Detected %d BootCamp storages",local_218[3] - local_218[2]
                     );
      }
      local_228 = 0;
      local_224 = 1;
      local_220 = (Data *)puVar5;
      if (param_2 == 1) {
        local_118 = 0;
        uStack_110 = 0;
        local_128 = 0;
        uStack_120 = 0;
        local_138 = 0;
        uStack_130 = 0;
        local_148 = 0;
        uStack_140 = 0;
        local_158 = 0;
        uStack_150 = 0;
        if ((int)local_218[2] < (int)local_218[3]) {
          iVar9 = 0;
          do {
            FUN_100567690(&local_220,&local_158);
            iVar9 = iVar9 + 1;
          } while (iVar9 < (int)(local_218[3] - local_218[2]));
        }
LAB_1005641d1:
        if ((param_2 != 4) || ((char)param_3[1] != '\0')) {
LAB_1005641e8:
          if (1 < DAT_1011b55f8) {
            FUN_1008e3970("","StatesUtils",2,"Processing BootCamp disk storages.");
          }
          if ((int)local_218[2] < (int)local_218[3]) {
            lVar11 = 0;
            do {
              if (1 < *local_218) {
                FUN_100567be0(&local_218,local_218[1]);
              }
              puVar1 = *(undefined4 **)(local_218 + ((int)local_218[2] + lVar11) * 2 + 4);
              if (1 < *(uint *)local_220) {
                FUN_100567c90(&local_220,*(uint *)(local_220 + 4));
              }
              pbVar2 = *(byte **)(local_220 + ((int)*(uint *)(local_220 + 8) + lVar11) * 8 + 0x10);
              local_1d0 = (QArrayData *)PTR_shared_null_100ba20d0;
              FUN_10059da00(puVar1,&local_1d0);
              if (1 < DAT_1011b55f8) {
                QString::toUtf8();
                pQVar7 = local_1d8;
                lVar3 = *(long *)(local_1d8 + 0x10);
                QString::toUtf8();
                FUN_1008e3970("","StatesUtils",2,"Processing BC storage state \'%s(%s)\', action %d"
                              ,pQVar7 + lVar3,local_1e0 + *(long *)(local_1e0 + 0x10),param_2);
                if (*(int *)local_1e0 != -1) {
                  if (*(int *)local_1e0 != 0) {
                    LOCK();
                    *(int *)local_1e0 = *(int *)local_1e0 + -1;
                    local_1a9 = *(int *)local_1e0 != 0;
                    UNLOCK();
                    if ((bool)local_1a9) goto LAB_100564369;
                  }
                  QArrayData::deallocate(local_1e0,1,8);
                }
LAB_100564369:
                if (*(int *)local_1d8 != -1) {
                  if (*(int *)local_1d8 != 0) {
                    LOCK();
                    *(int *)local_1d8 = *(int *)local_1d8 + -1;
                    local_1a9 = *(int *)local_1d8 != 0;
                    UNLOCK();
                    if ((bool)local_1a9) goto LAB_1005643b0;
                  }
                  QArrayData::deallocate(local_1d8,1,8);
                }
              }
LAB_1005643b0:
              if (param_2 == 0) {
                FUN_1008e3970("","StatesUtils",0,"ASSERT( %s ) occured in %s:%d [%s]",
                              "SuspendDiskHelper::ReadState != action","BootCampStatesHelper.cpp",
                              0x2b6,"ProcessStorageState");
              }
              local_48 = 0;
              uStack_40 = 0;
              local_58 = 0;
              uStack_50 = 0;
              local_68 = 0;
              uStack_60 = 0;
              local_88 = 0;
              local_78 = *(undefined8 *)(puVar1 + 3);
              _uStack_80 = CONCAT44(puVar1[2],*puVar1);
              uStack_70 = (ulong)(uint)puVar1[5];
              iVar9 = FUN_100566060(param_1,0,param_3,puVar1,&local_88);
              if (iVar9 < 0) {
                if (0 < DAT_1011b55f8) {
                  FUN_1008e3970("","StatesUtils",1,
                                "Warning : Failed to collect(read) FS state, action %d, error 0x%X",
                                0,iVar9);
                }
                local_88 = local_88 | 1;
              }
              if ((param_2 == 1) || (param_2 == 4)) {
                _memcpy(pbVar2,&local_88,0x50);
LAB_10056449b:
                iVar9 = 0;
                if (((param_2 < 5) && ((0x1aU >> (param_2 & 0x1f) & 1) != 0)) &&
                   (iVar10 = FUN_100566060(param_1,param_2,param_3,puVar1,pbVar2), iVar10 < 0)) {
                  if (0 < DAT_1011b55f8) {
                    FUN_1008e3970("","StatesUtils",1,
                                  "Warning : Failed to modify FS state, action %d, error 0x%X",
                                  param_2,iVar10);
                  }
                  *pbVar2 = *pbVar2 | 1;
                  iVar9 = 0;
                }
              }
              else {
                if (((param_2 & 0xfffffffe) != 2) ||
                   ((iVar9 = _memcmp(pbVar2 + 8,&uStack_80,0x14), iVar9 == 0 &&
                    ((((*pbVar2 & 1) != 0 || ((local_88 & 1) != 0)) ||
                     (iVar9 = _memcmp(pbVar2 + 0x1c,(void *)((long)&uStack_70 + 4),0x34), iVar9 == 0
                     )))))) goto LAB_10056449b;
                *param_3 = -0x7ffdffec;
                if (1 < DAT_1011b55f8) {
                  FUN_1008e3970("","StatesUtils",2,
                                "BC saved storage state violation detected, action %d",param_2);
                }
                local_1e8 = (QArrayData *)QString::fromAscii_helper("current BC storage state",0x18)
                ;
                FUN_100566980(&local_1e8,&local_88);
                if (*(int *)local_1e8 != -1) {
                  if (*(int *)local_1e8 != 0) {
                    LOCK();
                    *(int *)local_1e8 = *(int *)local_1e8 + -1;
                    local_1a9 = *(int *)local_1e8 != 0;
                    UNLOCK();
                    if ((bool)local_1a9) goto LAB_100564629;
                  }
                  QArrayData::deallocate(local_1e8,2,8);
                }
LAB_100564629:
                local_1f0 = (QArrayData *)QString::fromAscii_helper("saved BC storage state",0x16);
                FUN_100566980(&local_1f0,pbVar2);
                if (*(int *)local_1f0 != -1) {
                  if (*(int *)local_1f0 != 0) {
                    LOCK();
                    *(int *)local_1f0 = *(int *)local_1f0 + -1;
                    local_1a9 = *(int *)local_1f0 != 0;
                    UNLOCK();
                    if ((bool)local_1a9) goto LAB_100564690;
                  }
                  QArrayData::deallocate(local_1f0,2,8);
                }
LAB_100564690:
                iVar9 = *param_3;
                if (param_2 == 2) {
                  iVar9 = 0;
                }
              }
              if (*(int *)local_1d0 != -1) {
                if (*(int *)local_1d0 != 0) {
                  LOCK();
                  *(int *)local_1d0 = *(int *)local_1d0 + -1;
                  local_1a9 = *(int *)local_1d0 != 0;
                  UNLOCK();
                  if ((bool)local_1a9) goto LAB_1005646f3;
                }
                QArrayData::deallocate(local_1d0,2,8);
              }
LAB_1005646f3:
              if (iVar9 < 0) {
                QString::toUtf8();
                FUN_1008e3970("","StatesUtils",0,
                              "Error : Failed to process action %d on BC storage \'%s\', error 0x%X"
                              ,param_2,local_230 + *(long *)(local_230 + 0x10),iVar9);
                if (*(int *)local_230 == -1) goto LAB_100564b0a;
                if (*(int *)local_230 != 0) {
                  LOCK();
                  *(int *)local_230 = *(int *)local_230 + -1;
                  local_1a9 = *(int *)local_230 != 0;
                  UNLOCK();
                  if ((bool)local_1a9) goto LAB_100564b0a;
                }
                QArrayData::deallocate(local_230,1,8);
                goto LAB_100564b0a;
              }
              lVar11 = lVar11 + 1;
            } while (lVar11 < (long)(int)local_218[3] - (long)(int)local_218[2]);
          }
        }
        if (param_2 == 1) {
          FUN_100567060(&local_238,&local_228);
          QString::operator=(&local_210,&local_238);
          if (*(int *)local_238.field0_0x0 != -1) {
            if (*(int *)local_238.field0_0x0 != 0) {
              LOCK();
              *(int *)local_238.field0_0x0 = *(int *)local_238.field0_0x0 + -1;
              local_1a9 = *(int *)local_238.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_1a9) goto LAB_10056478d;
            }
            QArrayData::deallocate((QArrayData *)local_238.field0_0x0,2,8);
          }
LAB_10056478d:
          if (*(int *)(local_210.field0_0x0 + 4) == 0) {
            FUN_1008e3970("","StatesUtils",0,"ASSERT( %s ) occured in %s:%d [%s]",
                          "!qStateStr.isEmpty()","BootCampStatesHelper.cpp",0x28d,"ProcessDiskState"
                         );
          }
        }
        else {
          iVar9 = 0;
          if (1 < param_2 - 3) goto LAB_100564b0a;
          QString::fromUtf8_helper((char *)&local_1c8,0xa03d34);
          QString::operator=(&local_210,&local_1c8);
          if (*(int *)local_1c8.field0_0x0 != -1) {
            if (*(int *)local_1c8.field0_0x0 != 0) {
              LOCK();
              *(int *)local_1c8.field0_0x0 = *(int *)local_1c8.field0_0x0 + -1;
              local_1a9 = *(int *)local_1c8.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_1a9) goto LAB_100564861;
            }
            QArrayData::deallocate((QArrayData *)local_1c8.field0_0x0,2,8);
          }
        }
LAB_100564861:
        local_240.field0_0x0 = local_210.field0_0x0;
        if (1 < *(int *)local_210.field0_0x0 + 1U) {
          LOCK();
          *(int *)local_210.field0_0x0 = *(int *)local_210.field0_0x0 + 1;
          local_1a9 = *(int *)local_210.field0_0x0 != 0;
          UNLOCK();
        }
        if (param_1 == (long *)0x0) {
          FUN_1008e3970("","StatesUtils",0,"ASSERT( %s ) occured in %s:%d [%s]","pDisk",
                        "BootCampStatesHelper.cpp",0x1ff,"DiskSetStateStringParam");
        }
        if (*(int *)(local_240.field0_0x0 + 4) == 0) {
          QString::fromUtf8_helper((char *)&local_1b8,0xa03d34);
          QString::operator=(&local_240,&local_1b8);
          if (*(int *)local_1b8.field0_0x0 != -1) {
            if (*(int *)local_1b8.field0_0x0 != 0) {
              LOCK();
              *(int *)local_1b8.field0_0x0 = *(int *)local_1b8.field0_0x0 + -1;
              local_1a9 = *(int *)local_1b8.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_1a9) goto LAB_10056493e;
            }
            QArrayData::deallocate((QArrayData *)local_1b8.field0_0x0,2,8);
          }
        }
LAB_10056493e:
        pcVar4 = *(code **)(*param_1 + 0x138);
        local_1c0 = (QArrayData *)QString::fromAscii_helper("BcSuspendState",0xe);
        iVar10 = (*pcVar4)(param_1,&local_1c0,&local_240);
        if (*(int *)local_1c0 != -1) {
          if (*(int *)local_1c0 != 0) {
            LOCK();
            *(int *)local_1c0 = *(int *)local_1c0 + -1;
            local_1a9 = *(int *)local_1c0 != 0;
            UNLOCK();
            if ((bool)local_1a9) goto LAB_1005649b1;
          }
          QArrayData::deallocate(local_1c0,2,8);
        }
LAB_1005649b1:
        if (*(int *)local_240.field0_0x0 != -1) {
          if (*(int *)local_240.field0_0x0 != 0) {
            LOCK();
            *(int *)local_240.field0_0x0 = *(int *)local_240.field0_0x0 + -1;
            local_1a9 = *(int *)local_240.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_1a9) goto LAB_1005649ed;
          }
          QArrayData::deallocate((QArrayData *)local_240.field0_0x0,2,8);
        }
LAB_1005649ed:
        iVar9 = 0;
        if (iVar10 < 0) {
          FUN_1008e3970("","StatesUtils",0,"Error : Failed to set BC disk suspend param, error 0x%X"
                        ,iVar10);
          iVar9 = iVar10;
        }
      }
      else if ((param_2 & 0xfffffffe) == 2) {
        if (local_201 == '\0') {
          FUN_1008e3970("","StatesUtils",0,
                        "Error : BC disk suspend state violation detected, no suspend state parameter found."
                       );
LAB_100564ab3:
          *param_3 = -0x7ffdffed;
          iVar10 = -0x7ffdffed;
        }
        else {
          cVar8 = FUN_100566e00(&local_228,&local_210);
          if (cVar8 == '\0') {
            FUN_1008e3970("","StatesUtils",0,
                          "Error : BC disk suspend state violation detected, suspend state parameter invalid format."
                         );
            goto LAB_100564ab3;
          }
          if (local_218[3] - local_218[2] == *(uint *)(local_220 + 0xc) - *(uint *)(local_220 + 8))
          {
            iVar10 = *param_3;
            if (-1 < iVar10) goto LAB_1005641d1;
          }
          else {
            FUN_1008e3970("","StatesUtils",0,
                          "Error : BC disk suspend state violation detected, storages count differs."
                         );
            *param_3 = -0x7ffdffec;
            iVar10 = -0x7ffdffec;
          }
        }
        iVar9 = 0;
        if (param_2 != 2) {
          iVar9 = iVar10;
        }
      }
      else {
        if (param_2 != 4) goto LAB_1005641e8;
        iVar9 = 0;
        if (local_201 != '\0') {
          local_168 = 0;
          uStack_160 = 0;
          local_178 = 0;
          uStack_170 = 0;
          local_188 = 0;
          uStack_180 = 0;
          local_198 = 0;
          uStack_190 = 0;
          local_1a8 = 0;
          uStack_1a0 = 0;
          if ((int)local_218[2] < (int)local_218[3]) {
            iVar9 = 0;
            do {
              FUN_100567690(&local_220,&local_1a8);
              iVar9 = iVar9 + 1;
            } while (iVar9 < (int)(local_218[3] - local_218[2]));
          }
          goto LAB_1005641d1;
        }
      }
LAB_100564b0a:
      pDVar6 = local_220;
      if (*(int *)local_220 != -1) {
        if (*(int *)local_220 != 0) {
          LOCK();
          *(int *)local_220 = *(int *)local_220 + -1;
          local_1a9 = *(int *)local_220 != 0;
          UNLOCK();
          if ((bool)local_1a9) goto LAB_100564b7f;
        }
        iVar10 = *(int *)(local_220 + 0xc);
        if (iVar10 != *(int *)(local_220 + 8)) {
          lVar11 = (long)*(int *)(local_220 + 8) * 8 + (long)iVar10 * -8;
          pDVar12 = local_220 + (long)iVar10 * 8 + 8;
          do {
            if (*(void **)pDVar12 != (void *)0x0) {
              operator_delete(*(void **)pDVar12);
            }
            pDVar12 = pDVar12 + -8;
            lVar11 = lVar11 + 8;
          } while (lVar11 != 0);
        }
        QListData::dispose(pDVar6);
      }
LAB_100564b7f:
      if (*local_218 == 0xffffffff) {
        lVar11 = *(long *)PTR____stack_chk_guard_100ba2320;
      }
      else {
        lVar11 = *(long *)PTR____stack_chk_guard_100ba2320;
        if (*local_218 != 0) {
          LOCK();
          *local_218 = *local_218 - 1;
          local_1a9 = *local_218 != 0;
          UNLOCK();
          if ((bool)local_1a9) goto LAB_100564bce;
        }
        FUN_1005675d0(&local_218,local_218);
      }
    }
LAB_100564bce:
    if (*(int *)local_90 != -1) {
      if (*(int *)local_90 != 0) {
        LOCK();
        *(int *)local_90 = *(int *)local_90 + -1;
        local_1a9 = *(int *)local_90 != 0;
        UNLOCK();
        if ((bool)local_1a9) goto LAB_100564c0a;
      }
      QArrayData::deallocate(local_90,2,8);
    }
LAB_100564c0a:
    if (*(int *)local_a8 != -1) {
      if (*(int *)local_a8 != 0) {
        LOCK();
        *(int *)local_a8 = *(int *)local_a8 + -1;
        local_1a9 = *(int *)local_a8 != 0;
        UNLOCK();
        if ((bool)local_1a9) goto LAB_100564c46;
      }
      QArrayData::deallocate(local_a8,1,8);
    }
LAB_100564c46:
    FUN_100098f20(local_d8);
  }
  if (*(int *)local_210.field0_0x0 != -1) {
    if (*(int *)local_210.field0_0x0 != 0) {
      LOCK();
      *(int *)local_210.field0_0x0 = *(int *)local_210.field0_0x0 + -1;
      local_1a9 = *(int *)local_210.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_1a9) goto LAB_100564c8e;
    }
    QArrayData::deallocate((QArrayData *)local_210.field0_0x0,2,8);
  }
LAB_100564c8e:
  if (lVar11 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar9;
}


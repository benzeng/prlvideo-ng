
undefined4 FUN_100094cc0(long *param_1)

{
  long lVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  undefined1 *puVar5;
  long lVar6;
  QArrayData *pQVar7;
  undefined4 uVar8;
  QArrayData *local_100;
  QArrayData *local_f8;
  QArrayData *local_f0;
  QArrayData *local_e8;
  QString local_e0;
  QFile local_d8 [16];
  QArrayData *local_c8;
  QArrayData *local_c0;
  QArrayData *local_b8;
  undefined1 local_a9;
  undefined1 local_a8 [24];
  int local_90;
  undefined1 local_80 [8];
  undefined1 *local_78;
  QArrayData *local_50;
  QArrayData *local_38;
  long local_30;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_c0 = (QArrayData *)PTR_shared_null_100ba20d0;
  pcVar2 = *(code **)(*param_1 + 0x140);
  local_30 = lVar1;
  local_c8 = (QArrayData *)QString::fromAscii_helper("CompatLevel",0xb);
  iVar4 = (*pcVar2)(param_1,&local_c8,&local_c0);
  if (*(int *)local_c8 != -1) {
    if (*(int *)local_c8 != 0) {
      LOCK();
      *(int *)local_c8 = *(int *)local_c8 + -1;
      local_a9 = *(int *)local_c8 != 0;
      UNLOCK();
      if ((bool)local_a9) goto LAB_100094d65;
    }
    QArrayData::deallocate(local_c8,2,8);
  }
LAB_100094d65:
  if (iVar4 < 0) {
    FUN_100098d30(local_a8);
    iVar4 = (**(code **)(*param_1 + 0x90))(param_1,local_a8);
    FUN_1008e3970("","vm",0,"CompatCheck: No level was set yet => guessing (BlockSize=%u)",local_90)
    ;
    if (iVar4 < 0) {
      uVar8 = 0xfffffff;
      FUN_1008e3970("","vm",0,"CompatCheck: failed to get disk parameters => latest");
    }
    else {
      for (puVar5 = local_78; puVar5 != local_80; puVar5 = *(undefined1 **)(puVar5 + 8)) {
        cVar3 = FUN_100684c20(*(undefined4 *)(puVar5 + 0x10));
        if (cVar3 != '\0') {
          uVar8 = 1;
          FUN_1008e3970("","vm",0,"CompatCheck: BootCamp => level1");
          goto LAB_10009523d;
        }
      }
      uVar8 = 1;
      if (local_90 != 0x3f) {
        if (local_90 == 0) {
          (**(code **)(*param_1 + 0x178))(&local_e8,param_1);
          local_e0.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_e8;
          if (1 < *(int *)local_e8 + 1U) {
            LOCK();
            *(int *)local_e8 = *(int *)local_e8 + 1;
            local_a9 = *(int *)local_e8 != 0;
            UNLOCK();
          }
          QString::fromUtf8_helper((char *)&local_b8,0x9e773d);
          QString::append(&local_e0);
          if (*(int *)local_b8 != -1) {
            if (*(int *)local_b8 != 0) {
              LOCK();
              *(int *)local_b8 = *(int *)local_b8 + -1;
              local_a9 = *(int *)local_b8 != 0;
              UNLOCK();
              if ((bool)local_a9) goto LAB_10009501a;
            }
            QArrayData::deallocate(local_b8,2,8);
          }
LAB_10009501a:
          QFile::QFile(local_d8,&local_e0);
          if (*(int *)local_e0.field0_0x0 != -1) {
            if (*(int *)local_e0.field0_0x0 != 0) {
              LOCK();
              *(int *)local_e0.field0_0x0 = *(int *)local_e0.field0_0x0 + -1;
              local_a9 = *(int *)local_e0.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_a9) goto LAB_100095069;
            }
            QArrayData::deallocate((QArrayData *)local_e0.field0_0x0,2,8);
          }
LAB_100095069:
          if (*(int *)local_e8 != -1) {
            if (*(int *)local_e8 != 0) {
              LOCK();
              *(int *)local_e8 = *(int *)local_e8 + -1;
              local_a9 = *(int *)local_e8 != 0;
              UNLOCK();
              if ((bool)local_a9) goto LAB_1000950a5;
            }
            QArrayData::deallocate(local_e8,2,8);
          }
LAB_1000950a5:
          cVar3 = QFile::open(local_d8,1);
          if (cVar3 == '\0') {
LAB_1000951f5:
            uVar8 = 2;
          }
          else {
            QIODevice::readAll();
            lVar6 = 0;
            pQVar7 = local_f8 + *(long *)(local_f8 + 0x10);
            if ((pQVar7 != (QArrayData *)0x0) && (*(uint *)(local_f8 + 4) != 0)) {
              lVar6 = 0;
              do {
                if (pQVar7[lVar6] == (QArrayData)0x0) break;
                lVar6 = lVar6 + 1;
              } while ((uint)lVar6 < *(uint *)(local_f8 + 4));
            }
            local_f0 = (QArrayData *)QString::fromAscii_helper((char *)pQVar7,(int)lVar6);
            if (*(int *)local_f8 != -1) {
              if (*(int *)local_f8 != 0) {
                LOCK();
                *(int *)local_f8 = *(int *)local_f8 + -1;
                local_a9 = *(int *)local_f8 != 0;
                UNLOCK();
                if ((bool)local_a9) goto LAB_100095141;
              }
              QArrayData::deallocate(local_f8,1,8);
            }
LAB_100095141:
            local_100 = (QArrayData *)QString::fromAscii_helper("<Blocksize>63</Blocksize>",0x19);
            iVar4 = QString::indexOf(&local_f0,&local_100,0,0);
            if (*(int *)local_100 != -1) {
              if (*(int *)local_100 != 0) {
                LOCK();
                *(int *)local_100 = *(int *)local_100 + -1;
                local_a9 = *(int *)local_100 != 0;
                UNLOCK();
                if ((bool)local_a9) goto LAB_1000951ae;
              }
              QArrayData::deallocate(local_100,2,8);
            }
LAB_1000951ae:
            if (*(int *)local_f0 != -1) {
              if (*(int *)local_f0 != 0) {
                LOCK();
                *(int *)local_f0 = *(int *)local_f0 + -1;
                local_a9 = *(int *)local_f0 != 0;
                UNLOCK();
                if ((bool)local_a9) goto LAB_1000951ea;
              }
              QArrayData::deallocate(local_f0,2,8);
            }
LAB_1000951ea:
            uVar8 = 1;
            if (iVar4 == -1) goto LAB_1000951f5;
          }
          QFile::~QFile(local_d8);
        }
        else {
          uVar8 = 2;
        }
      }
    }
LAB_10009523d:
    if (*(int *)local_38 != -1) {
      if (*(int *)local_38 != 0) {
        LOCK();
        *(int *)local_38 = *(int *)local_38 + -1;
        local_a9 = *(int *)local_38 != 0;
        UNLOCK();
        if ((bool)local_a9) goto LAB_100095273;
      }
      QArrayData::deallocate(local_38,2,8);
    }
LAB_100095273:
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        local_a9 = *(int *)local_50 != 0;
        UNLOCK();
        if ((bool)local_a9) goto LAB_1000952a9;
      }
      QArrayData::deallocate(local_50,1,8);
    }
LAB_1000952a9:
    FUN_100098f20(local_80);
  }
  else {
    iVar4 = QString::compare_helper
                      (local_c0 + *(long *)(local_c0 + 0x10),*(undefined4 *)(local_c0 + 4),"level0",
                       0xffffffff,1);
    uVar8 = 0;
    if (iVar4 != 0) {
      iVar4 = QString::compare_helper
                        (local_c0 + *(long *)(local_c0 + 0x10),*(undefined4 *)(local_c0 + 4),
                         "level1",0xffffffff,1);
      uVar8 = 1;
      if (iVar4 != 0) {
        iVar4 = QString::compare_helper
                          (local_c0 + *(long *)(local_c0 + 0x10),*(undefined4 *)(local_c0 + 4),
                           "level2",0xffffffff,1);
        uVar8 = 2;
        if (iVar4 != 0) {
          iVar4 = QString::compare_helper
                            (local_c0 + *(long *)(local_c0 + 0x10),*(undefined4 *)(local_c0 + 4),
                             "level2:p",0xffffffff,1);
          uVar8 = 3;
          if (iVar4 != 0) {
            iVar4 = QString::compare_helper
                              (local_c0 + *(long *)(local_c0 + 0x10),*(undefined4 *)(local_c0 + 4),
                               "level2:v",0xffffffff,1);
            uVar8 = 4;
            if (iVar4 != 0) {
              iVar4 = QString::compare_helper
                                (local_c0 + *(long *)(local_c0 + 0x10),*(undefined4 *)(local_c0 + 4)
                                 ,"level3:1",0xffffffff,1);
              uVar8 = 0xfffffff;
              if (iVar4 == 0) {
                uVar8 = 5;
              }
            }
          }
        }
      }
    }
  }
  if (*(int *)local_c0 != -1) {
    if (*(int *)local_c0 != 0) {
      LOCK();
      *(int *)local_c0 = *(int *)local_c0 + -1;
      local_a9 = *(int *)local_c0 != 0;
      UNLOCK();
      if ((bool)local_a9) goto LAB_1000952ee;
    }
    QArrayData::deallocate(local_c0,2,8);
  }
LAB_1000952ee:
  if (lVar1 != local_30) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar8;
}


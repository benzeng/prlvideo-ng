
int FUN_1005a2800(long *param_1)

{
  QString *this;
  char cVar1;
  int iVar2;
  QArrayData *pQVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  QArrayData *local_148;
  QArrayData *local_140;
  QArrayData *local_138;
  long local_130 [2];
  QArrayData *local_120;
  undefined8 *local_110;
  undefined8 local_108;
  undefined8 local_100;
  QArrayData *local_f8;
  QString local_f0;
  QString local_e8;
  QString local_e0;
  QArrayData *local_d8;
  QArrayData *local_d0;
  QFileInfo local_c8 [8];
  QArrayData *local_c0;
  int local_b8;
  undefined1 local_b1;
  undefined1 local_b0 [16];
  long local_a0;
  long local_88;
  long *local_80;
  long local_78;
  QArrayData *local_58;
  QArrayData *local_40;
  long local_38;
  
  lVar6 = *(long *)PTR____stack_chk_guard_100ba2320;
  iVar2 = -0x7ffffffd;
  local_38 = lVar6;
  if (param_1 == (long *)0x0) goto LAB_1005a2fa4;
  FUN_100098d30(local_b0);
  local_b8 = (**(code **)(*param_1 + 0x90))(param_1,local_b0);
  if (local_b8 < 0) {
    FUN_1008e3970("","vdisk",0,"Error 0x%x getting parameters at boot camp validation",local_b8);
    iVar2 = local_b8;
  }
  else {
    if (local_80 != &local_88) {
      plVar7 = local_80;
      do {
        cVar1 = FUN_100684c40((int)plVar7[2]);
        if (cVar1 == '\0') {
          lVar6 = *plVar7;
          plVar4 = (long *)plVar7[1];
          *(long **)(lVar6 + 8) = plVar4;
          *(long *)plVar7[1] = lVar6;
          local_78 = local_78 + -1;
          pQVar3 = (QArrayData *)plVar7[5];
          if (*(int *)pQVar3 != -1) {
            if (*(int *)pQVar3 != 0) {
              LOCK();
              *(int *)pQVar3 = *(int *)pQVar3 + -1;
              local_b1 = *(int *)pQVar3 != 0;
              UNLOCK();
              if ((bool)local_b1) goto LAB_1005a2a4c;
              pQVar3 = (QArrayData *)plVar7[5];
            }
            QArrayData::deallocate(pQVar3,2,8);
          }
LAB_1005a2a4c:
          operator_delete(plVar7);
        }
        else {
          if ((int)plVar7[2] == 7) {
            this = (QString *)(plVar7 + 5);
            QFileInfo::QFileInfo(local_c8,this);
            QFileInfo::fileName();
            local_b8 = FUN_100786550(&local_c0,this);
            if (*(int *)local_c0 != -1) {
              if (*(int *)local_c0 != 0) {
                LOCK();
                *(int *)local_c0 = *(int *)local_c0 + -1;
                local_b1 = *(int *)local_c0 != 0;
                UNLOCK();
                if ((bool)local_b1) goto LAB_1005a290b;
              }
              QArrayData::deallocate(local_c0,2,8);
            }
LAB_1005a290b:
            QFileInfo::~QFileInfo(local_c8);
            if (local_b8 < 0) {
              if (local_b8 == -0x7fffffe9) {
                QString::toUtf8();
                lVar6 = *(long *)PTR____stack_chk_guard_100ba2320;
                FUN_1008e3970("","vdisk",0,"Partition with uid %s is not found.",
                              local_d0 + *(long *)(local_d0 + 0x10));
                iVar2 = -0x7ffd8ba9;
                if (*(int *)local_d0 == -1) goto LAB_1005a2f2f;
                if (*(int *)local_d0 != 0) {
                  LOCK();
                  *(int *)local_d0 = *(int *)local_d0 + -1;
                  local_b1 = *(int *)local_d0 != 0;
                  UNLOCK();
                  if ((bool)local_b1) goto LAB_1005a2f2f;
                }
                QArrayData::deallocate(local_d0,1,8);
              }
              else {
                QString::toUtf8();
                lVar6 = *(long *)PTR____stack_chk_guard_100ba2320;
                FUN_1008e3970("","vdisk",0,"Error getting name from uid %s at validation [0x%x].",
                              local_d8 + *(long *)(local_d8 + 0x10),local_b8);
                iVar2 = local_b8;
                if (*(int *)local_d8 == -1) goto LAB_1005a2f2f;
                if (*(int *)local_d8 != 0) {
                  LOCK();
                  *(int *)local_d8 = *(int *)local_d8 + -1;
                  local_b1 = *(int *)local_d8 != 0;
                  UNLOCK();
                  if ((bool)local_b1) goto LAB_1005a2f2f;
                }
                QArrayData::deallocate(local_d8,1,8);
                iVar2 = local_b8;
              }
              goto LAB_1005a2f2f;
            }
            pQVar3 = (QArrayData *)QString::fromAscii_helper("/dev/",5);
            if (1 < *(int *)pQVar3 + 1U) {
              LOCK();
              *(int *)pQVar3 = *(int *)pQVar3 + 1;
              local_b1 = *(int *)pQVar3 != 0;
              UNLOCK();
            }
            local_e0.field0_0x0 = (QTypedArrayData<unsigned_short> *)pQVar3;
            QString::append(&local_e0);
            QString::operator=(this,&local_e0);
            if (*(int *)local_e0.field0_0x0 != -1) {
              if (*(int *)local_e0.field0_0x0 != 0) {
                LOCK();
                *(int *)local_e0.field0_0x0 = *(int *)local_e0.field0_0x0 + -1;
                local_b1 = *(int *)local_e0.field0_0x0 != 0;
                UNLOCK();
                if ((bool)local_b1) goto LAB_1005a29b1;
              }
              QArrayData::deallocate((QArrayData *)local_e0.field0_0x0,2,8);
            }
LAB_1005a29b1:
            if (*(int *)pQVar3 != -1) {
              if (*(int *)pQVar3 != 0) {
                LOCK();
                *(int *)pQVar3 = *(int *)pQVar3 + -1;
                local_b1 = *(int *)pQVar3 != 0;
                UNLOCK();
                if ((bool)local_b1) goto LAB_1005a29f0;
              }
              QArrayData::deallocate(pQVar3,2,8);
            }
          }
LAB_1005a29f0:
          plVar4 = (long *)plVar7[1];
        }
        plVar7 = plVar4;
      } while (plVar4 != &local_88);
      lVar6 = *(long *)PTR____stack_chk_guard_100ba2320;
    }
    plVar7 = local_80;
    if (local_80 == &local_88) {
      FUN_1008e3970("","vdisk",0,"No physical volumes found at given disk!");
      iVar2 = -0x7ffffffd;
    }
    else {
      local_e8.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_80[5];
      if (1 < *(int *)local_e8.field0_0x0 + 1U) {
        LOCK();
        *(int *)local_e8.field0_0x0 = *(int *)local_e8.field0_0x0 + 1;
        local_b1 = *(int *)local_e8.field0_0x0 != 0;
        UNLOCK();
      }
      FUN_10059f600(&local_f0,&local_e8);
      QString::operator=(&local_e8,&local_f0);
      if (*(int *)local_f0.field0_0x0 != -1) {
        if (*(int *)local_f0.field0_0x0 != 0) {
          LOCK();
          *(int *)local_f0.field0_0x0 = *(int *)local_f0.field0_0x0 + -1;
          local_b1 = *(int *)local_f0.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_b1) goto LAB_1005a2b01;
        }
        QArrayData::deallocate((QArrayData *)local_f0.field0_0x0,2,8);
      }
LAB_1005a2b01:
      plVar4 = (long *)FUN_100684400(&local_e8,1,6,&local_b8,0);
      if (plVar4 == (long *)0x0) {
        QString::toUtf8();
        FUN_1008e3970("","vdisk",0,"Validation: Error opening image %s [0x%x]",
                      local_f8 + *(long *)(local_f8 + 0x10),local_b8);
        iVar2 = local_b8;
        if (*(int *)local_f8 != -1) {
          if (*(int *)local_f8 != 0) {
            LOCK();
            *(int *)local_f8 = *(int *)local_f8 + -1;
            local_b1 = *(int *)local_f8 != 0;
            UNLOCK();
            if ((bool)local_b1) goto LAB_1005a2ef3;
          }
          QArrayData::deallocate(local_f8,1,8);
          iVar2 = local_b8;
        }
      }
      else {
        local_100 = 0;
        local_108 = 0;
        local_120 = (QArrayData *)PTR_shared_null_100ba20d0;
        local_110 = &local_108;
        local_b8 = (**(code **)(*plVar4 + 0x38))(plVar4,local_130);
        if (local_b8 < 0) {
          QString::toUtf8();
          FUN_1008e3970("","vdisk",0,"Validation: Error getting parameters from image %s [0x%x]",
                        local_138 + *(long *)(local_138 + 0x10),local_b8);
          if (*(int *)local_138 != -1) {
            if (*(int *)local_138 != 0) {
              LOCK();
              *(int *)local_138 = *(int *)local_138 + -1;
              local_b1 = *(int *)local_138 != 0;
              UNLOCK();
              if ((bool)local_b1) goto LAB_1005a2e7e;
            }
            QArrayData::deallocate(local_138,1,8);
          }
        }
        else if (local_a0 == local_130[0]) {
          if ((int)plVar7[2] != 4) {
            local_b8 = FUN_100688360(plVar4,&local_110);
            if (local_b8 < 0) {
              FUN_1008e3970("","vdisk",0,"Validation: Error enumerating partitions 0x%x",local_b8);
            }
            else {
              plVar7 = local_80;
              if (local_80 != &local_88) {
                do {
                  iVar2 = FUN_10059f480(plVar7 + 5);
                  if (iVar2 == -1) {
                    local_b8 = -0x7ffdefac;
                    break;
                  }
                  puVar5 = (undefined8 *)FUN_1005a36f0(&local_110,plVar7 + 5);
                  if (puVar5 == &local_108) {
                    QString::toUtf8();
                    FUN_1008e3970("","vdisk",0,"Partition %s not exists!",
                                  local_140 + *(long *)(local_140 + 0x10));
                    if (*(int *)local_140 != -1) {
                      if (*(int *)local_140 != 0) {
                        LOCK();
                        *(int *)local_140 = *(int *)local_140 + -1;
                        local_b1 = *(int *)local_140 != 0;
                        UNLOCK();
                        if ((bool)local_b1) goto LAB_1005a31bf;
                      }
                      QArrayData::deallocate(local_140,1,8);
                    }
LAB_1005a31bf:
                    local_b8 = -0x7ffdef99;
                    break;
                  }
                  if ((puVar5[6] != plVar7[3]) || (puVar5[7] != puVar5[6] + -1 + plVar7[4])) {
                    QString::toUtf8();
                    FUN_1008e3970("","vdisk",0,
                                  "Partition %s placement differs from stored! [%llu:%llu via %llu:%llu]"
                                  ,local_148 + *(long *)(local_148 + 0x10),plVar7[3],plVar7[4],
                                  puVar5[6],(1 - puVar5[6]) + puVar5[7]);
                    if (*(int *)local_148 != -1) {
                      if (*(int *)local_148 != 0) {
                        LOCK();
                        *(int *)local_148 = *(int *)local_148 + -1;
                        local_b1 = *(int *)local_148 != 0;
                        UNLOCK();
                        if ((bool)local_b1) goto LAB_1005a3127;
                      }
                      QArrayData::deallocate(local_148,1,8);
                    }
LAB_1005a3127:
                    local_b8 = -0x7ffdef9a;
                    break;
                  }
                  plVar7 = (long *)plVar7[1];
                } while (plVar7 != &local_88);
              }
            }
          }
        }
        else {
          FUN_1008e3970("","vdisk",0,"Real disk and descriptor size mismatch! [%llu:%llu]");
          local_b8 = -0x7ffdef9a;
        }
LAB_1005a2e7e:
        (**(code **)(*plVar4 + 0x28))();
        (**(code **)(*plVar4 + 0x20))();
        iVar2 = local_b8;
        if (*(int *)local_120 != -1) {
          if (*(int *)local_120 != 0) {
            LOCK();
            *(int *)local_120 = *(int *)local_120 + -1;
            local_b1 = *(int *)local_120 != 0;
            UNLOCK();
            if ((bool)local_b1) goto LAB_1005a2ee0;
          }
          QArrayData::deallocate(local_120,2,8);
        }
LAB_1005a2ee0:
        FUN_100650070(&local_110,local_108);
      }
LAB_1005a2ef3:
      if (*(int *)local_e8.field0_0x0 != -1) {
        if (*(int *)local_e8.field0_0x0 != 0) {
          LOCK();
          *(int *)local_e8.field0_0x0 = *(int *)local_e8.field0_0x0 + -1;
          local_b1 = *(int *)local_e8.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_b1) goto LAB_1005a2f2f;
        }
        QArrayData::deallocate((QArrayData *)local_e8.field0_0x0,2,8);
      }
    }
  }
LAB_1005a2f2f:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_b1 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_b1) goto LAB_1005a2f65;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1005a2f65:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_b1 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_b1) goto LAB_1005a2f9b;
    }
    QArrayData::deallocate(local_58,1,8);
  }
LAB_1005a2f9b:
  FUN_100098f20(&local_88);
LAB_1005a2fa4:
  if (lVar6 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar2;
}



undefined8 FUN_1005e5fb0(long param_1,undefined8 *param_2,undefined8 param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  char cVar4;
  undefined2 uVar5;
  int iVar6;
  uint uVar7;
  long *plVar8;
  undefined8 uVar9;
  QArrayData *pQVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  QFileInfo local_170 [8];
  QArrayData *local_168;
  QArrayData *local_160;
  QArrayData *local_158;
  QArrayData *local_150;
  undefined *local_148;
  QArrayData *local_140;
  QArrayData *local_138;
  QArrayData *local_130;
  QArrayData *local_128;
  QArrayData *local_120;
  QString local_118;
  QString local_110;
  QArrayData *local_108;
  QArrayData *local_100;
  QArrayData *local_f8;
  QArrayData *local_f0;
  QArrayData *local_e8;
  QArrayData *local_e0;
  QArrayData *local_d8;
  QArrayData *local_d0;
  QArrayData *local_c8;
  QArrayData *local_c0;
  undefined1 local_b1;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined1 local_70 [16];
  undefined1 local_60 [16];
  undefined8 local_50;
  undefined8 local_48;
  long *local_40;
  long local_38;
  
  lVar11 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_38 = lVar11;
  QMutex::lock();
  FUN_1007d6920(local_60,param_2);
  plVar1 = (long *)(param_1 + 0x28);
  if (*(long **)(param_1 + 0x28) != (long *)0x0) {
    plVar3 = *(long **)(param_1 + 0x28);
    plVar14 = plVar1;
    do {
      while (plVar8 = plVar3, iVar6 = FUN_1007ea6f0(plVar8 + 4,local_60), iVar6 < 0) {
        plVar13 = plVar8 + 1;
        plVar8 = plVar14;
        plVar3 = (long *)*plVar13;
        if ((long *)*plVar13 == (long *)0x0) goto LAB_1005e6070;
      }
      plVar3 = (long *)*plVar8;
      plVar14 = plVar8;
    } while ((long *)*plVar8 != (long *)0x0);
LAB_1005e6070:
    if ((plVar8 != plVar1) && (iVar6 = FUN_1007ea6f0(local_60,plVar8 + 4), -1 < iVar6)) {
      local_c8 = (QArrayData *)*param_2;
      if (1 < *(int *)local_c8 + 1U) {
        LOCK();
        *(int *)local_c8 = *(int *)local_c8 + 1;
        local_b1 = *(int *)local_c8 != 0;
        UNLOCK();
      }
      QString::toLocal8Bit();
      FUN_1008e3970("","vdisk",0,"Error: can\'t create snapshot, uid \'%s\' already exists",
                    local_c0 + *(long *)(local_c0 + 0x10));
      if (*(int *)local_c0 != -1) {
        if (*(int *)local_c0 != 0) {
          LOCK();
          *(int *)local_c0 = *(int *)local_c0 + -1;
          local_b1 = *(int *)local_c0 != 0;
          UNLOCK();
          if ((bool)local_b1) goto LAB_1005e6146;
        }
        QArrayData::deallocate(local_c0,1,8);
      }
LAB_1005e6146:
      uVar9 = 0x80021011;
      if (*(int *)local_c8 != -1) {
        if (*(int *)local_c8 != 0) {
          LOCK();
          *(int *)local_c8 = *(int *)local_c8 + -1;
          local_b1 = *(int *)local_c8 != 0;
          UNLOCK();
          if ((bool)local_b1) goto LAB_1005e620e;
        }
        QArrayData::deallocate(local_c8,2,8);
      }
      goto LAB_1005e620e;
    }
  }
  if ((*(long *)(param_1 + 0x68) == 0) ||
     (lVar12 = *(long *)(*(long *)(param_1 + 0x68) + 0x10), lVar12 == 0)) {
    uVar9 = 0x80021011;
    FUN_1008e3970("","vdisk",0,"Error: can\'t create snapshot, current VMDK is unavailable");
    goto LAB_1005e620e;
  }
  FUN_1007d6920(local_70,param_3);
  iVar6 = FUN_1007ea6f0(lVar12 + 0x228,local_70);
  if (iVar6 != 0) {
    uVar9 = 0x80021011;
    FUN_1008e3970("","vdisk",0,"Error: current snapshot parent UID is not equal to parent UID");
    goto LAB_1005e620e;
  }
  if (*(long *)(param_1 + 0x48) != 1) {
    uVar9 = 0x80021011;
    FUN_1008e3970("","vdisk",0,"Error: no image was created before create snapshot call");
    goto LAB_1005e620e;
  }
  plVar3 = *(long **)(*(long *)(param_1 + 0x38) + 0x30);
  lVar11 = 0;
  if (plVar3 != (long *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    lVar11 = plVar3[2];
  }
  lVar12 = 0;
  if (*(long *)(param_1 + 0x68) != 0) {
    lVar12 = *(long *)(*(long *)(param_1 + 0x68) + 0x10);
  }
  iVar6 = FUN_1007ea6f0(lVar11 + 0x218,lVar12 + 0x218);
  if (iVar6 == 0) {
    lVar11 = 0;
    if (plVar3 != (long *)0x0) {
      lVar11 = plVar3[2];
    }
    lVar12 = 0;
    if (*(long *)(param_1 + 0x68) != 0) {
      lVar12 = *(long *)(*(long *)(param_1 + 0x68) + 0x10);
    }
    iVar6 = FUN_1007ea6f0(lVar11 + 0x218,lVar12 + 0x218);
    if (iVar6 == 0) {
      lVar11 = 0;
      if (*(long *)(param_1 + 0x68) != 0) {
        lVar11 = *(long *)(*(long *)(param_1 + 0x68) + 0x10);
      }
      if ((long *)*plVar1 != (long *)0x0) {
        plVar14 = (long *)*plVar1;
        plVar8 = plVar1;
        do {
          while (plVar13 = plVar14, iVar6 = FUN_1007ea6f0(plVar13 + 4,lVar11 + 0x218), iVar6 < 0) {
            plVar2 = plVar13 + 1;
            plVar13 = plVar8;
            plVar14 = (long *)*plVar2;
            if ((long *)*plVar2 == (long *)0x0) goto LAB_1005e66a5;
          }
          plVar14 = (long *)*plVar13;
          plVar8 = plVar13;
        } while ((long *)*plVar13 != (long *)0x0);
LAB_1005e66a5:
        if ((plVar13 != plVar1) && (iVar6 = FUN_1007ea6f0(lVar11 + 0x218,plVar13 + 4), -1 < iVar6))
        {
          FUN_1007d6920(&local_a0,param_2);
          local_88 = local_98;
          local_90 = local_a0;
          plVar1 = *(long **)(param_1 + 0x68);
          if (plVar1 != (long *)0x0) {
            LOCK();
            *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
            UNLOCK();
            LOCK();
            *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
            UNLOCK();
            LOCK();
            *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
            UNLOCK();
          }
          local_48 = local_98;
          local_50 = local_a0;
          local_40 = plVar1;
          FUN_1005f2de0(param_1 + 0x20,&local_50);
          if (local_40 != (long *)0x0) {
            LOCK();
            plVar14 = local_40 + 1;
            lVar11 = *plVar14;
            *(int *)plVar14 = (int)*plVar14 + -1;
            UNLOCK();
            if ((int)lVar11 == 1) {
              (**(code **)(*local_40 + 0x10))();
            }
          }
          if (plVar1 != (long *)0x0) {
            plVar14 = plVar1 + 1;
            LOCK();
            plVar8 = plVar1 + 1;
            lVar11 = *plVar8;
            *(int *)plVar8 = (int)*plVar8 + -1;
            UNLOCK();
            if ((int)lVar11 == 1) {
              (**(code **)(*plVar1 + 0x10))(plVar1);
            }
            LOCK();
            lVar11 = *plVar14;
            *(int *)plVar14 = (int)*plVar14 + -1;
            UNLOCK();
            if ((int)lVar11 == 1) {
              (**(code **)(*plVar1 + 0x10))(plVar1);
            }
          }
          QFileInfo::absolutePath();
          uVar5 = QDir::separator();
          local_120 = local_128;
          if (1 < *(uint *)local_128 + 1) {
            LOCK();
            *(uint *)local_128 = *(uint *)local_128 + 1;
            local_b1 = *(uint *)local_128 != 0;
            UNLOCK();
          }
          uVar7 = *(uint *)(local_128 + 4);
          if ((1 < *(uint *)local_128) || ((*(uint *)(local_128 + 8) & 0x7fffffff) < uVar7 + 2)) {
            QString::reallocData((uint)&local_120,SUB41(uVar7 + 2,0));
            uVar7 = *(uint *)(local_120 + 4);
          }
          *(uint *)(local_120 + 4) = uVar7 + 1;
          *(undefined2 *)(local_120 + (long)(int)uVar7 * 2 + *(long *)(local_120 + 0x10)) = uVar5;
          *(undefined2 *)
           (local_120 + (long)(int)*(uint *)(local_120 + 4) * 2 + *(long *)(local_120 + 0x10)) = 0;
          FUN_1005e7700(&local_130,param_1 + 0x78,*(int *)(param_1 + 0x80) + 1);
          local_118.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_120;
          if (1 < *(uint *)local_120 + 1) {
            LOCK();
            *(uint *)local_120 = *(uint *)local_120 + 1;
            local_b1 = *(uint *)local_120 != 0;
            UNLOCK();
          }
          QString::append(&local_118);
          QDir::fromNativeSeparators(&local_110);
          if (*(int *)local_118.field0_0x0 != -1) {
            if (*(int *)local_118.field0_0x0 != 0) {
              LOCK();
              *(int *)local_118.field0_0x0 = *(int *)local_118.field0_0x0 + -1;
              local_b1 = *(int *)local_118.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_b1) goto LAB_1005e69af;
            }
            QArrayData::deallocate((QArrayData *)local_118.field0_0x0,2,8);
          }
LAB_1005e69af:
          if (*(int *)local_130 != -1) {
            if (*(int *)local_130 != 0) {
              LOCK();
              *(int *)local_130 = *(int *)local_130 + -1;
              local_b1 = *(int *)local_130 != 0;
              UNLOCK();
              if ((bool)local_b1) goto LAB_1005e69eb;
            }
            QArrayData::deallocate(local_130,2,8);
          }
LAB_1005e69eb:
          if (*(int *)local_120 != -1) {
            if (*(int *)local_120 != 0) {
              LOCK();
              *(int *)local_120 = *(int *)local_120 + -1;
              local_b1 = *(int *)local_120 != 0;
              UNLOCK();
              if ((bool)local_b1) goto LAB_1005e6a27;
            }
            QArrayData::deallocate(local_120,2,8);
          }
LAB_1005e6a27:
          if (*(int *)local_128 != -1) {
            if (*(int *)local_128 != 0) {
              LOCK();
              *(int *)local_128 = *(int *)local_128 + -1;
              local_b1 = *(int *)local_128 != 0;
              UNLOCK();
              if ((bool)local_b1) goto LAB_1005e6a63;
            }
            QArrayData::deallocate(local_128,2,8);
          }
LAB_1005e6a63:
          lVar11 = *(long *)(*(long *)(*(long *)(param_1 + 0x68) + 0x10) + 0x200);
          uVar9 = 0;
          if (lVar11 != 0) {
            uVar9 = *(undefined8 *)(lVar11 + 0x10);
          }
          local_138 = (QArrayData *)QString::fromAscii_helper("DDB",3);
          local_140 = (QArrayData *)QString::fromAscii_helper("ddb.parallels_snapshot_uuid",0x1b);
          local_148 = PTR_shared_null_100ba2188;
          FUN_10000c490(&local_148,param_2);
          cVar4 = FUN_1006ad450(uVar9,&local_138,&local_140,&local_148);
          FUN_100013180(&local_148);
          if (*(int *)local_140 != -1) {
            if (*(int *)local_140 != 0) {
              LOCK();
              *(int *)local_140 = *(int *)local_140 + -1;
              local_b1 = *(int *)local_140 != 0;
              UNLOCK();
              if ((bool)local_b1) goto LAB_1005e6b35;
            }
            QArrayData::deallocate(local_140,2,8);
          }
LAB_1005e6b35:
          if (*(int *)local_138 != -1) {
            if (*(int *)local_138 != 0) {
              LOCK();
              *(int *)local_138 = *(int *)local_138 + -1;
              local_b1 = *(int *)local_138 != 0;
              UNLOCK();
              if ((bool)local_b1) goto LAB_1005e6b71;
            }
            QArrayData::deallocate(local_138,2,8);
          }
LAB_1005e6b71:
          if (cVar4 == '\0') {
            local_158 = (QArrayData *)*param_2;
            if (1 < *(int *)local_158 + 1U) {
              LOCK();
              *(int *)local_158 = *(int *)local_158 + 1;
              local_b1 = *(int *)local_158 != 0;
              UNLOCK();
            }
            QString::toLocal8Bit();
            pQVar10 = local_150 + *(long *)(local_150 + 0x10);
            QFileInfo::absoluteFilePath();
            QString::toUtf8();
            FUN_1008e3970("","vdisk",0,
                          "Error: can\'t insert \'ddb.parallels_snapshot_uuid \'%s\'to VMDK \'%s\'",
                          pQVar10,local_160 + *(long *)(local_160 + 0x10));
            if (*(int *)local_160 != -1) {
              if (*(int *)local_160 != 0) {
                LOCK();
                *(int *)local_160 = *(int *)local_160 + -1;
                local_b1 = *(int *)local_160 != 0;
                UNLOCK();
                if ((bool)local_b1) goto LAB_1005e6d80;
              }
              QArrayData::deallocate(local_160,1,8);
            }
LAB_1005e6d80:
            if (*(int *)local_168 != -1) {
              if (*(int *)local_168 != 0) {
                LOCK();
                *(int *)local_168 = *(int *)local_168 + -1;
                local_b1 = *(int *)local_168 != 0;
                UNLOCK();
                if ((bool)local_b1) goto LAB_1005e6dbc;
              }
              QArrayData::deallocate(local_168,2,8);
            }
LAB_1005e6dbc:
            if (*(int *)local_150 != -1) {
              if (*(int *)local_150 != 0) {
                LOCK();
                *(int *)local_150 = *(int *)local_150 + -1;
                local_b1 = *(int *)local_150 != 0;
                UNLOCK();
                if ((bool)local_b1) goto LAB_1005e6df8;
              }
              QArrayData::deallocate(local_150,1,8);
            }
LAB_1005e6df8:
            uVar9 = 0x80021025;
            if (*(int *)local_158 != -1) {
              if (*(int *)local_158 != 0) {
                LOCK();
                *(int *)local_158 = *(int *)local_158 + -1;
                local_b1 = *(int *)local_158 != 0;
                UNLOCK();
                if ((bool)local_b1) goto LAB_1005e6e39;
              }
              QArrayData::deallocate(local_158,2,8);
            }
          }
          else {
            lVar11 = 0;
            if (*(long *)(param_1 + 0x68) != 0) {
              lVar11 = *(long *)(*(long *)(param_1 + 0x68) + 0x10);
            }
            FUN_1007d6920(&local_b0,param_2);
            *(undefined8 *)(lVar11 + 0x220) = local_a8;
            *(undefined8 *)(lVar11 + 0x218) = local_b0;
            lVar11 = 0;
            if (*(long *)(param_1 + 0x68) != 0) {
              lVar11 = *(long *)(*(long *)(param_1 + 0x68) + 0x10);
            }
            QFileInfo::QFileInfo(local_170,&local_110);
            QFileInfo::operator=((QFileInfo *)(lVar11 + 0x208),local_170);
            QFileInfo::~QFileInfo(local_170);
            if (plVar3 != (long *)0x0) {
              LOCK();
              *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
              UNLOCK();
            }
            plVar1 = (long *)plVar13[6];
            plVar13[6] = (long)plVar3;
            if (plVar1 != (long *)0x0) {
              LOCK();
              plVar14 = plVar1 + 1;
              lVar11 = *plVar14;
              *(int *)plVar14 = (int)*plVar14 + -1;
              UNLOCK();
              if ((int)lVar11 == 1) {
                (**(code **)(*plVar1 + 0x10))();
              }
            }
            if (plVar3 != (long *)0x0) {
              LOCK();
              *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
              UNLOCK();
            }
            plVar1 = *(long **)(param_1 + 0x68);
            *(long **)(param_1 + 0x68) = plVar3;
            if (plVar1 != (long *)0x0) {
              LOCK();
              plVar14 = plVar1 + 1;
              lVar11 = *plVar14;
              *(int *)plVar14 = (int)*plVar14 + -1;
              UNLOCK();
              if ((int)lVar11 == 1) {
                (**(code **)(*plVar1 + 0x10))();
              }
            }
            FUN_1005f29c0((long *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40));
            *(undefined8 *)(param_1 + 0x48) = 0;
            *(long *)(param_1 + 0x38) = param_1 + 0x40;
            *(undefined8 *)(param_1 + 0x40) = 0;
            *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + 1;
            uVar9 = 0;
          }
LAB_1005e6e39:
          if (*(int *)local_110.field0_0x0 != -1) {
            if (*(int *)local_110.field0_0x0 != 0) {
              LOCK();
              *(int *)local_110.field0_0x0 = *(int *)local_110.field0_0x0 + -1;
              local_b1 = *(int *)local_110.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_b1) goto LAB_1005e6755;
            }
            QArrayData::deallocate((QArrayData *)local_110.field0_0x0,2,8);
          }
          goto LAB_1005e6755;
        }
      }
      uVar9 = 0x80021011;
      FUN_1008e3970("","vdisk",0,"Error: current VMDK is unavailable");
    }
    else {
      lVar11 = 0;
      if (plVar3 != (long *)0x0) {
        lVar11 = plVar3[2];
      }
      FUN_1007d6a70(&local_f8,lVar11 + 0x218);
      QString::toLocal8Bit();
      pQVar10 = local_f0 + *(long *)(local_f0 + 0x10);
      lVar11 = 0;
      if (*(long *)(param_1 + 0x68) != 0) {
        lVar11 = *(long *)(*(long *)(param_1 + 0x68) + 0x10);
      }
      FUN_1007d6a70(&local_108,lVar11 + 0x218);
      QString::toLocal8Bit();
      FUN_1008e3970("","vdisk",0,"Error: wrong new uid \'%s\' should be \'%s\'",pQVar10,
                    local_100 + *(long *)(local_100 + 0x10));
      if (*(int *)local_100 != -1) {
        if (*(int *)local_100 != 0) {
          LOCK();
          *(int *)local_100 = *(int *)local_100 + -1;
          local_b1 = *(int *)local_100 != 0;
          UNLOCK();
          if ((bool)local_b1) goto LAB_1005e6570;
        }
        QArrayData::deallocate(local_100,1,8);
      }
LAB_1005e6570:
      if (*(int *)local_108 != -1) {
        if (*(int *)local_108 != 0) {
          LOCK();
          *(int *)local_108 = *(int *)local_108 + -1;
          local_b1 = *(int *)local_108 != 0;
          UNLOCK();
          if ((bool)local_b1) goto LAB_1005e65ac;
        }
        QArrayData::deallocate(local_108,2,8);
      }
LAB_1005e65ac:
      if (*(int *)local_f0 != -1) {
        if (*(int *)local_f0 != 0) {
          LOCK();
          *(int *)local_f0 = *(int *)local_f0 + -1;
          local_b1 = *(int *)local_f0 != 0;
          UNLOCK();
          if ((bool)local_b1) goto LAB_1005e65e8;
        }
        QArrayData::deallocate(local_f0,1,8);
      }
LAB_1005e65e8:
      uVar9 = 0x80021011;
      if (*(int *)local_f8 != -1) {
        if (*(int *)local_f8 != 0) {
          LOCK();
          *(int *)local_f8 = *(int *)local_f8 + -1;
          local_b1 = *(int *)local_f8 != 0;
          UNLOCK();
          if ((bool)local_b1) goto LAB_1005e6755;
        }
        QArrayData::deallocate(local_f8,2,8);
      }
    }
  }
  else {
    lVar11 = 0;
    if (plVar3 != (long *)0x0) {
      lVar11 = plVar3[2];
    }
    FUN_1007d6a70(&local_d8,lVar11 + 0x218);
    QString::toLocal8Bit();
    pQVar10 = local_d0 + *(long *)(local_d0 + 0x10);
    lVar11 = 0;
    if (*(long *)(param_1 + 0x68) != 0) {
      lVar11 = *(long *)(*(long *)(param_1 + 0x68) + 0x10);
    }
    FUN_1007d6a70(&local_e8,lVar11 + 0x218);
    QString::toLocal8Bit();
    FUN_1008e3970("","vdisk",0,"Error: wrong new uid \'%s\' should be \'%s\'",pQVar10,
                  local_e0 + *(long *)(local_e0 + 0x10));
    if (*(int *)local_e0 != -1) {
      if (*(int *)local_e0 != 0) {
        LOCK();
        *(int *)local_e0 = *(int *)local_e0 + -1;
        local_b1 = *(int *)local_e0 != 0;
        UNLOCK();
        if ((bool)local_b1) goto LAB_1005e6371;
      }
      QArrayData::deallocate(local_e0,1,8);
    }
LAB_1005e6371:
    if (*(int *)local_e8 != -1) {
      if (*(int *)local_e8 != 0) {
        LOCK();
        *(int *)local_e8 = *(int *)local_e8 + -1;
        local_b1 = *(int *)local_e8 != 0;
        UNLOCK();
        if ((bool)local_b1) goto LAB_1005e63ad;
      }
      QArrayData::deallocate(local_e8,2,8);
    }
LAB_1005e63ad:
    if (*(int *)local_d0 != -1) {
      if (*(int *)local_d0 != 0) {
        LOCK();
        *(int *)local_d0 = *(int *)local_d0 + -1;
        local_b1 = *(int *)local_d0 != 0;
        UNLOCK();
        if ((bool)local_b1) goto LAB_1005e63e9;
      }
      QArrayData::deallocate(local_d0,1,8);
    }
LAB_1005e63e9:
    uVar9 = 0x80021011;
    if (*(int *)local_d8 != -1) {
      if (*(int *)local_d8 != 0) {
        LOCK();
        *(int *)local_d8 = *(int *)local_d8 + -1;
        local_b1 = *(int *)local_d8 != 0;
        UNLOCK();
        if ((bool)local_b1) goto LAB_1005e6755;
      }
      QArrayData::deallocate(local_d8,2,8);
    }
  }
LAB_1005e6755:
  if (plVar3 == (long *)0x0) {
    lVar11 = *(long *)PTR____stack_chk_guard_100ba2320;
  }
  else {
    LOCK();
    plVar1 = plVar3 + 1;
    lVar12 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    lVar11 = *(long *)PTR____stack_chk_guard_100ba2320;
    if ((int)lVar12 == 1) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
  }
LAB_1005e620e:
  QMutex::unlock();
  if (lVar11 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar9;
}



int FUN_1005886b0(long param_1,undefined8 *param_2)

{
  long lVar1;
  code *pcVar2;
  uint uVar3;
  char cVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  long *plVar13;
  QArrayData *pQVar14;
  long lVar15;
  ulong uVar16;
  long *plVar17;
  long *plVar18;
  QArrayData *pQVar19;
  bool bVar20;
  int local_1c8;
  QString local_1b0;
  QArrayData *local_1a8;
  QArrayData *local_1a0;
  QArrayData *local_198;
  QArrayData *local_190;
  QArrayData *local_188;
  QArrayData *local_180;
  QArrayData *local_178;
  QArrayData *local_170;
  QArrayData *local_168;
  QArrayData *local_160;
  QArrayData *local_158;
  QArrayData *local_150;
  QString local_148;
  QArrayData *local_140;
  QArrayData *local_138;
  QArrayData *local_130;
  QString local_128;
  QArrayData *local_120;
  QArrayData *local_118;
  QArrayData *local_110;
  QArrayData *local_108;
  QArrayData *local_100;
  QArrayData *local_f8;
  int local_ec;
  QArrayData *local_e8;
  QArrayData *local_e0;
  QArrayData *local_d8;
  QArrayData *local_d0;
  undefined1 local_c8 [12];
  undefined4 local_bc;
  QString local_b8 [2];
  QArrayData *local_a8;
  undefined1 local_99;
  undefined1 local_98 [16];
  undefined8 local_88;
  undefined8 local_80;
  undefined1 local_78 [16];
  undefined8 local_68;
  undefined8 local_60;
  undefined1 local_58 [16];
  undefined8 local_48;
  undefined8 local_40;
  long local_38;
  
  lVar12 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_38 = lVar12;
  if (*(long *)(param_1 + 0x70) == 0) {
    FUN_1008e3970("","vdisk",0,"Invalid parent class pointer");
    local_1c8 = -0x7fffffff;
    goto LAB_100589a5a;
  }
  *(undefined1 *)(param_1 + 0x7c) = 0;
  local_b8[0].field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
  cVar4 = FUN_1007ea210(param_2);
  if (cVar4 == '\0') {
    if (*(long *)(param_1 + 0x60) != 0) {
      uVar16 = *(long *)(param_1 + 0x60) + *(long *)(param_1 + 0x58);
      lVar15 = *(long *)(param_1 + 0x40);
      uVar11 = uVar16 >> 9;
      lVar12 = 0;
      lVar1 = *(long *)(lVar15 + uVar11 * 8);
      if (*(long *)(param_1 + 0x48) != lVar15) {
        lVar12 = lVar1 + (uVar16 & 0x1ff) * 8;
      }
      if (lVar12 == lVar1) {
        lVar12 = *(long *)(lVar15 + -8 + uVar11 * 8) + 0x1000;
      }
      (**(code **)(**(long **)(lVar12 + -8) + 0x38))();
      goto LAB_100588763;
    }
    FUN_1007d6a70(&local_d8,param_2);
    QString::toUtf8();
    FUN_1008e3970("","vdisk",0,"Trying to switch to state %s on unopened/errorswitched disk",
                  local_d0 + *(long *)(local_d0 + 0x10));
    if (*(int *)local_d0 != -1) {
      if (*(int *)local_d0 != 0) {
        LOCK();
        *(int *)local_d0 = *(int *)local_d0 + -1;
        local_99 = *(int *)local_d0 != 0;
        UNLOCK();
        if ((bool)local_99) goto LAB_100589069;
      }
      QArrayData::deallocate(local_d0,1,8);
    }
LAB_100589069:
    local_1c8 = -0x7ffdefdf;
    if (*(int *)local_d8 != -1) {
      if (*(int *)local_d8 != 0) {
        LOCK();
        *(int *)local_d8 = *(int *)local_d8 + -1;
        local_99 = *(int *)local_d8 != 0;
        UNLOCK();
        if ((bool)local_99) goto LAB_100589a1e;
      }
      QArrayData::deallocate(local_d8,2,8);
    }
  }
  else {
LAB_100588763:
    FUN_100584e90(param_1);
    local_48 = *param_2;
    local_40 = param_2[1];
    lVar12 = *(long *)(*(long *)(param_1 + 0x70) + 8);
    plVar10 = (long *)0x0;
    if (lVar12 != 0) {
      plVar10 = *(long **)(lVar12 + 0x10);
    }
    (**(code **)(*plVar10 + 0xa0))(local_58);
    plVar10 = (long *)(param_1 + 0x28);
    plVar17 = *(long **)(param_1 + 0x28);
    plVar18 = plVar10;
    if (*(long **)(param_1 + 0x28) == (long *)0x0) {
LAB_10058884a:
      plVar18 = plVar10;
    }
    else {
      do {
        while (plVar9 = plVar17, iVar6 = FUN_1007ea6f0(plVar9 + 4), iVar6 < 0) {
          plVar17 = (long *)plVar9[1];
          if ((long *)plVar9[1] == (long *)0x0) goto LAB_100588829;
        }
        plVar18 = plVar9;
        plVar17 = (long *)*plVar9;
      } while ((long *)*plVar9 != (long *)0x0);
LAB_100588829:
      if ((plVar18 == plVar10) || (iVar6 = FUN_1007ea6f0(local_58), iVar6 < 0)) goto LAB_10058884a;
    }
    if (cVar4 == '\0') {
      lVar12 = *(long *)PTR____stack_chk_guard_100ba2320;
      plVar9 = (long *)*plVar10;
      plVar17 = plVar10;
      if ((long *)*plVar10 != (long *)0x0) {
        do {
          while (plVar13 = plVar9, iVar6 = FUN_1007ea6f0(plVar13 + 4,param_2), iVar6 < 0) {
            plVar9 = (long *)plVar13[1];
            if ((long *)plVar13[1] == (long *)0x0) goto LAB_100588eb2;
          }
          plVar17 = plVar13;
          plVar9 = (long *)*plVar13;
        } while ((long *)*plVar13 != (long *)0x0);
LAB_100588eb2:
        lVar12 = *(long *)PTR____stack_chk_guard_100ba2320;
        if ((plVar17 != plVar10) &&
           (local_68 = FUN_1007ea6f0(param_2,plVar17 + 4), -1 < (int)local_68)) {
          if (plVar18 == plVar10) {
            local_1c8 = -0x7ffe6fed;
            FUN_1008e3970("","vdisk",0,"Temporary state not found");
            goto LAB_100589a1e;
          }
          goto LAB_100588894;
        }
      }
      FUN_1007d6a70(&local_e8,param_2);
      QString::toUtf8();
      FUN_1008e3970("","vdisk",0,"UID %s not found",local_e0 + *(long *)(local_e0 + 0x10));
      if (*(int *)local_e0 != -1) {
        if (*(int *)local_e0 != 0) {
          LOCK();
          *(int *)local_e0 = *(int *)local_e0 + -1;
          local_99 = *(int *)local_e0 != 0;
          UNLOCK();
          if ((bool)local_99) goto LAB_100588f94;
        }
        QArrayData::deallocate(local_e0,1,8);
      }
LAB_100588f94:
      local_1c8 = -0x7ffe6fec;
      if (*(int *)local_e8 != -1) {
        if (*(int *)local_e8 != 0) {
          LOCK();
          *(int *)local_e8 = *(int *)local_e8 + -1;
          local_99 = *(int *)local_e8 != 0;
          UNLOCK();
          if ((bool)local_99) goto LAB_100589a1e;
        }
        QArrayData::deallocate(local_e8,2,8);
      }
    }
    else {
      lVar12 = *(long *)(*(long *)(param_1 + 0x70) + 8);
      plVar17 = (long *)0x0;
      if (lVar12 != 0) {
        plVar17 = *(long **)(lVar12 + 0x10);
      }
      (**(code **)(*plVar17 + 0xa0))(&local_68);
      local_40 = local_60;
      local_48 = local_68;
LAB_100588894:
      local_ec = 0;
      local_1c8 = (int)local_68;
      while (cVar5 = FUN_1007ea210(&local_48), cVar5 == '\0') {
        uVar7 = (**(code **)(**(long **)(param_1 + 0x70) + 0x2f8))();
        if ((long *)*plVar10 == (long *)0x0) {
LAB_100588dce:
          FUN_1007d6a70(&local_100,&local_48);
          lVar12 = *(long *)PTR____stack_chk_guard_100ba2320;
          QString::toUtf8();
          FUN_1008e3970("","vdisk",0,"Can\'t find uid in images %s",
                        local_f8 + *(long *)(local_f8 + 0x10));
          if (*(int *)local_f8 != -1) {
            if (*(int *)local_f8 != 0) {
              LOCK();
              *(int *)local_f8 = *(int *)local_f8 + -1;
              local_99 = *(int *)local_f8 != 0;
              UNLOCK();
              if ((bool)local_99) goto LAB_100588e61;
            }
            QArrayData::deallocate(local_f8,1,8);
          }
LAB_100588e61:
          local_1c8 = -0x7ffe6fed;
          if (*(int *)local_100 == -1) goto LAB_100589a1e;
          if (*(int *)local_100 != 0) {
            LOCK();
            *(int *)local_100 = *(int *)local_100 + -1;
            local_99 = *(int *)local_100 != 0;
            UNLOCK();
            if ((bool)local_99) goto LAB_100589a1e;
          }
          QArrayData::deallocate(local_100,2,8);
          goto LAB_100589a1e;
        }
        plVar9 = (long *)*plVar10;
        plVar17 = plVar10;
        do {
          while (plVar13 = plVar9, iVar6 = FUN_1007ea6f0(plVar13 + 4,&local_48), iVar6 < 0) {
            plVar9 = (long *)plVar13[1];
            if ((long *)plVar13[1] == (long *)0x0) goto LAB_100588953;
          }
          plVar17 = plVar13;
          plVar9 = (long *)*plVar13;
        } while ((long *)*plVar13 != (long *)0x0);
LAB_100588953:
        if ((plVar17 == plVar10) || (iVar6 = FUN_1007ea6f0(&local_48,plVar17 + 4), iVar6 < 0))
        goto LAB_100588dce;
        FUN_100585d90(&local_108,param_1,plVar17 + 7);
        uVar11 = (**(code **)(**(long **)(param_1 + 0x70) + 0x2f8))();
        if ((uVar11 & 2) == 0) {
          bVar20 = false;
        }
        else {
          lVar12 = *(long *)(*(long *)(param_1 + 0x70) + 8);
          plVar9 = (long *)0x0;
          if (lVar12 != 0) {
            plVar9 = *(long **)(lVar12 + 0x10);
          }
          (**(code **)(*plVar9 + 0xa0))(local_78);
          iVar6 = FUN_1007ea6f0(&local_48,local_78);
          if (iVar6 == 0) {
            bVar20 = *(char *)(param_1 + 0x8c) == '\0';
          }
          else {
            bVar20 = false;
          }
        }
        uVar3 = uVar7 & 0xfffffff9 | 2;
        if (!bVar20) {
          uVar3 = uVar7 & 0xfffffff9;
        }
        plVar9 = (long *)FUN_100684400(&local_108,uVar3,(int)plVar17[6],&local_ec,param_1);
        if (plVar9 == (long *)0x0) {
          FUN_1007d6a70(&local_118,&local_48);
          QString::toUtf8();
          pQVar14 = local_110;
          lVar12 = *(long *)(local_110 + 0x10);
          QString::toUtf8();
          FUN_1008e3970("","vdisk",0,"Can\'t open uid %s name %s Error 0x%x",pQVar14 + lVar12,
                        local_120 + *(long *)(local_120 + 0x10),local_ec);
          if (*(int *)local_120 != -1) {
            if (*(int *)local_120 != 0) {
              LOCK();
              *(int *)local_120 = *(int *)local_120 + -1;
              local_99 = *(int *)local_120 != 0;
              UNLOCK();
              if ((bool)local_99) goto LAB_100588b57;
            }
            QArrayData::deallocate(local_120,1,8);
          }
LAB_100588b57:
          if (*(int *)local_110 != -1) {
            if (*(int *)local_110 != 0) {
              LOCK();
              *(int *)local_110 = *(int *)local_110 + -1;
              local_99 = *(int *)local_110 != 0;
              UNLOCK();
              if ((bool)local_99) goto LAB_100588b93;
            }
            QArrayData::deallocate(local_110,1,8);
          }
LAB_100588b93:
          if (*(int *)local_118 != -1) {
            if (*(int *)local_118 != 0) {
              LOCK();
              *(int *)local_118 = *(int *)local_118 + -1;
              local_99 = *(int *)local_118 != 0;
              UNLOCK();
              if ((bool)local_99) goto LAB_100588bcf;
            }
            QArrayData::deallocate(local_118,2,8);
          }
LAB_100588bcf:
          if (((uVar3 & 2) != 0) &&
             (plVar17 = (long *)FUN_100684400(&local_108,1,(int)plVar17[6],0,param_1),
             plVar17 != (long *)0x0)) {
            FUN_1008e3970("","vdisk",0,"But can open it as read-only");
            uVar11 = (**(code **)(**(long **)(param_1 + 0x70) + 0x2f8))();
            if ((uVar11 & 0x40000) == 0) {
              (**(code **)(*plVar17 + 0x28))(plVar17);
              (**(code **)(*plVar17 + 0x20))(plVar17);
            }
            else {
              FUN_1008e3970("","vdisk",0,"Protection ignore mode: use ro image");
              local_ec = FUN_100586100(param_1,plVar17,1);
              iVar6 = 0x12;
              if (-1 < local_ec) goto LAB_100588cf2;
              FUN_1008e3970("","vdisk",0,"Error adding ro image to list at switch");
              (**(code **)(*plVar17 + 0x28))(plVar17);
              (**(code **)(*plVar17 + 0x20))(plVar17);
            }
          }
LAB_100588ce0:
          iVar6 = 1;
          local_1c8 = local_ec;
        }
        else {
          local_ec = FUN_100586100(param_1,plVar9,1);
          iVar6 = 0x12;
          if (local_ec < 0) {
            FUN_1008e3970("","vdisk",0,"Error adding image to list at switch");
            (**(code **)(*plVar9 + 0x28))(plVar9);
            (**(code **)(*plVar9 + 0x20))(plVar9);
            goto LAB_100588ce0;
          }
        }
LAB_100588cf2:
        if (*(int *)local_108 != -1) {
          if (*(int *)local_108 != 0) {
            LOCK();
            *(int *)local_108 = *(int *)local_108 + -1;
            local_99 = *(int *)local_108 != 0;
            UNLOCK();
            if ((bool)local_99) goto LAB_100588d35;
          }
          QArrayData::deallocate(local_108,2,8);
        }
LAB_100588d35:
        if (iVar6 != 0x12) {
          lVar12 = *(long *)PTR____stack_chk_guard_100ba2320;
          goto LAB_100589a1e;
        }
        lVar12 = *(long *)(*(long *)(param_1 + 0x70) + 8);
        plVar17 = (long *)0x0;
        if (lVar12 != 0) {
          plVar17 = *(long **)(lVar12 + 0x10);
        }
        (**(code **)(*plVar17 + 0xb8))(&local_88,plVar17,&local_48,0);
        local_40 = local_80;
        local_48 = local_88;
      }
      lVar12 = *(long *)PTR____stack_chk_guard_100ba2320;
      if (cVar4 == '\0') {
        lVar15 = *(long *)(*(long *)(param_1 + 0x70) + 8);
        plVar10 = (long *)0x0;
        if (lVar15 != 0) {
          plVar10 = *(long **)(lVar15 + 0x10);
        }
        pcVar2 = *(code **)(*plVar10 + 0xf0);
        FUN_1007d6bd0(local_98);
        (*pcVar2)(&local_130,plVar10,local_98,*(undefined4 *)(param_1 + 0x78));
        local_128.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_130;
        if (1 < *(int *)local_130 + 1U) {
          LOCK();
          *(int *)local_130 = *(int *)local_130 + 1;
          local_99 = *(int *)local_130 != 0;
          UNLOCK();
        }
        QString::fromUtf8_helper((char *)&local_a8,0xa46c66);
        QString::append(&local_128);
        if (*(int *)local_a8 != -1) {
          if (*(int *)local_a8 != 0) {
            LOCK();
            *(int *)local_a8 = *(int *)local_a8 + -1;
            local_99 = *(int *)local_a8 != 0;
            UNLOCK();
            if ((bool)local_99) goto LAB_1005891a1;
          }
          QArrayData::deallocate(local_a8,2,8);
        }
LAB_1005891a1:
        if (*(int *)local_130 != -1) {
          if (*(int *)local_130 != 0) {
            LOCK();
            *(int *)local_130 = *(int *)local_130 + -1;
            local_99 = *(int *)local_130 != 0;
            UNLOCK();
            if ((bool)local_99) goto LAB_1005891dd;
          }
          QArrayData::deallocate(local_130,2,8);
        }
LAB_1005891dd:
        FUN_100585d90(&local_140,param_1,&local_128);
        QString::toUtf8();
        FUN_1008e3970("","vdisk",0,"Create new temporary image: %s",
                      local_138 + *(long *)(local_138 + 0x10));
        if (*(int *)local_138 != -1) {
          if (*(int *)local_138 != 0) {
            LOCK();
            *(int *)local_138 = *(int *)local_138 + -1;
            local_99 = *(int *)local_138 != 0;
            UNLOCK();
            if ((bool)local_99) goto LAB_10058926b;
          }
          QArrayData::deallocate(local_138,1,8);
        }
LAB_10058926b:
        if (*(int *)local_140 != -1) {
          if (*(int *)local_140 != 0) {
            LOCK();
            *(int *)local_140 = *(int *)local_140 + -1;
            local_99 = *(int *)local_140 != 0;
            UNLOCK();
            if ((bool)local_99) goto LAB_1005892a7;
          }
          QArrayData::deallocate(local_140,2,8);
        }
LAB_1005892a7:
        FUN_100585d90(&local_148,param_1,&local_128);
        QString::operator=(local_b8,&local_148);
        if (*(int *)local_148.field0_0x0 != -1) {
          if (*(int *)local_148.field0_0x0 != 0) {
            LOCK();
            *(int *)local_148.field0_0x0 = *(int *)local_148.field0_0x0 + -1;
            local_99 = *(int *)local_148.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_99) goto LAB_10058930c;
          }
          QArrayData::deallocate((QArrayData *)local_148.field0_0x0,2,8);
        }
LAB_10058930c:
        local_bc = (undefined4)plVar18[6];
        uVar8 = (**(code **)(**(long **)(param_1 + 0x70) + 0x2f8))();
        plVar10 = (long *)FUN_1006848d0(local_c8,uVar8,&DAT_1011bc648,&local_ec,param_1);
        if (plVar10 == (long *)0x0) {
          FUN_1008e3970("","vdisk",0,"Error creating temporary image 0x%x",local_ec);
LAB_1005898f1:
          bVar20 = true;
          local_1c8 = local_ec;
        }
        else {
          (**(code **)(*plVar10 + 0x28))(plVar10);
          (**(code **)(*plVar10 + 0x20))(plVar10);
          FUN_100585d90(&local_150,param_1,&local_128);
          FUN_10056b070(&local_150);
          if (*(int *)local_150 != -1) {
            if (*(int *)local_150 != 0) {
              LOCK();
              *(int *)local_150 = *(int *)local_150 + -1;
              local_99 = *(int *)local_150 != 0;
              UNLOCK();
              if ((bool)local_99) goto LAB_1005893cd;
            }
            QArrayData::deallocate(local_150,2,8);
          }
LAB_1005893cd:
          FUN_100585d90(&local_160,param_1,&local_128);
          QString::toUtf8();
          pQVar14 = local_158 + *(long *)(local_158 + 0x10);
          plVar10 = plVar18 + 7;
          FUN_100585d90(&local_170,param_1,plVar10);
          QString::toUtf8();
          cVar4 = FUN_1007619a0(pQVar14,local_168 + *(long *)(local_168 + 0x10));
          if (*(int *)local_168 != -1) {
            if (*(int *)local_168 != 0) {
              LOCK();
              *(int *)local_168 = *(int *)local_168 + -1;
              local_99 = *(int *)local_168 != 0;
              UNLOCK();
              if ((bool)local_99) goto LAB_100589483;
            }
            QArrayData::deallocate(local_168,1,8);
          }
LAB_100589483:
          if (*(int *)local_170 != -1) {
            if (*(int *)local_170 != 0) {
              LOCK();
              *(int *)local_170 = *(int *)local_170 + -1;
              local_99 = *(int *)local_170 != 0;
              UNLOCK();
              if ((bool)local_99) goto LAB_1005894bf;
            }
            QArrayData::deallocate(local_170,2,8);
          }
LAB_1005894bf:
          if (*(int *)local_158 != -1) {
            if (*(int *)local_158 != 0) {
              LOCK();
              *(int *)local_158 = *(int *)local_158 + -1;
              local_99 = *(int *)local_158 != 0;
              UNLOCK();
              if ((bool)local_99) goto LAB_1005894fb;
            }
            QArrayData::deallocate(local_158,1,8);
          }
LAB_1005894fb:
          if (*(int *)local_160 != -1) {
            if (*(int *)local_160 != 0) {
              LOCK();
              *(int *)local_160 = *(int *)local_160 + -1;
              local_99 = *(int *)local_160 != 0;
              UNLOCK();
              if ((bool)local_99) goto LAB_100589537;
            }
            QArrayData::deallocate(local_160,2,8);
          }
LAB_100589537:
          if (cVar4 != '\0') {
            FUN_100585d90(&local_1a8,param_1,plVar10);
            uVar8 = (**(code **)(**(long **)(param_1 + 0x70) + 0x2f8))();
            plVar10 = (long *)FUN_100684400(&local_1a8,uVar8,(int)plVar18[6],&local_ec,param_1);
            if (*(int *)local_1a8 != -1) {
              if (*(int *)local_1a8 != 0) {
                LOCK();
                *(int *)local_1a8 = *(int *)local_1a8 + -1;
                local_99 = *(int *)local_1a8 != 0;
                UNLOCK();
                if ((bool)local_99) goto LAB_1005895c9;
              }
              QArrayData::deallocate(local_1a8,2,8);
            }
LAB_1005895c9:
            if (plVar10 == (long *)0x0) {
              FUN_1008e3970("","vdisk",0,"Error opening temporary image 0x%x",local_ec);
            }
            else {
              bVar20 = false;
              local_ec = FUN_100586100(param_1,plVar10,0);
              if (-1 < local_ec) goto LAB_100589903;
              FUN_1008e3970("","vdisk",0,
                            "Memory allocation failed in pushing temporary image at switch");
              (**(code **)(*plVar10 + 0x28))(plVar10);
              (**(code **)(*plVar10 + 0x20))(plVar10);
            }
            goto LAB_1005898f1;
          }
          FUN_100585d90(&local_180,param_1,&local_128);
          QString::toUtf8();
          pQVar19 = local_178 + *(long *)(local_178 + 0x10);
          FUN_100585d90(&local_190,param_1,plVar10);
          QString::toUtf8();
          pQVar14 = local_188;
          lVar15 = *(long *)(local_188 + 0x10);
          uVar8 = FUN_100768f60();
          FUN_1008e3970("","vdisk",0,"Error: rename \'%s\' to \'%s\' failed with %d",pQVar19,
                        pQVar14 + lVar15,uVar8);
          if (*(int *)local_188 != -1) {
            if (*(int *)local_188 != 0) {
              LOCK();
              *(int *)local_188 = *(int *)local_188 + -1;
              local_99 = *(int *)local_188 != 0;
              UNLOCK();
              if ((bool)local_99) goto LAB_100589746;
            }
            QArrayData::deallocate(local_188,1,8);
          }
LAB_100589746:
          if (*(int *)local_190 != -1) {
            if (*(int *)local_190 != 0) {
              LOCK();
              *(int *)local_190 = *(int *)local_190 + -1;
              local_99 = *(int *)local_190 != 0;
              UNLOCK();
              if ((bool)local_99) goto LAB_100589782;
            }
            QArrayData::deallocate(local_190,2,8);
          }
LAB_100589782:
          if (*(int *)local_178 != -1) {
            if (*(int *)local_178 != 0) {
              LOCK();
              *(int *)local_178 = *(int *)local_178 + -1;
              local_99 = *(int *)local_178 != 0;
              UNLOCK();
              if ((bool)local_99) goto LAB_1005897c1;
            }
            QArrayData::deallocate(local_178,1,8);
          }
LAB_1005897c1:
          if (*(int *)local_180 != -1) {
            if (*(int *)local_180 != 0) {
              LOCK();
              *(int *)local_180 = *(int *)local_180 + -1;
              local_99 = *(int *)local_180 != 0;
              UNLOCK();
              if ((bool)local_99) goto LAB_1005897fd;
            }
            QArrayData::deallocate(local_180,2,8);
          }
LAB_1005897fd:
          FUN_100585d90(&local_1a0,param_1,&local_128);
          QString::toUtf8();
          FUN_100761940(local_198 + *(long *)(local_198 + 0x10));
          if (*(int *)local_198 != -1) {
            if (*(int *)local_198 != 0) {
              LOCK();
              *(int *)local_198 = *(int *)local_198 + -1;
              local_99 = *(int *)local_198 != 0;
              UNLOCK();
              if ((bool)local_99) goto LAB_100589872;
            }
            QArrayData::deallocate(local_198,1,8);
          }
LAB_100589872:
          bVar20 = true;
          if (*(int *)local_1a0 == -1) {
            local_1c8 = -0x7ffdefed;
          }
          else {
            local_1c8 = -0x7ffdefed;
            if (*(int *)local_1a0 != 0) {
              LOCK();
              *(int *)local_1a0 = *(int *)local_1a0 + -1;
              local_99 = *(int *)local_1a0 != 0;
              UNLOCK();
              if ((bool)local_99) goto LAB_100589903;
            }
            QArrayData::deallocate(local_1a0,2,8);
          }
        }
LAB_100589903:
        if (*(int *)local_128.field0_0x0 != -1) {
          if (*(int *)local_128.field0_0x0 != 0) {
            LOCK();
            *(int *)local_128.field0_0x0 = *(int *)local_128.field0_0x0 + -1;
            local_99 = *(int *)local_128.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_99) goto LAB_100589945;
          }
          QArrayData::deallocate((QArrayData *)local_128.field0_0x0,2,8);
        }
LAB_100589945:
        if (bVar20) goto LAB_100589a1e;
      }
      *(undefined1 *)(param_1 + 0x7c) = 1;
      FUN_100585d90(&local_1b0,param_1,plVar18 + 7);
      QString::operator=((QString *)(param_1 + 0x80),&local_1b0);
      if (*(int *)local_1b0.field0_0x0 != -1) {
        if (*(int *)local_1b0.field0_0x0 != 0) {
          LOCK();
          *(int *)local_1b0.field0_0x0 = *(int *)local_1b0.field0_0x0 + -1;
          local_99 = *(int *)local_1b0.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_99) goto LAB_1005899be;
        }
        QArrayData::deallocate((QArrayData *)local_1b0.field0_0x0,2,8);
      }
LAB_1005899be:
      uVar8 = *(undefined4 *)(param_1 + 0x88);
      iVar6 = (int)*(undefined8 *)(param_1 + 0x60);
      if (iVar6 != 0) {
        lVar15 = 0;
        do {
          uVar11 = *(long *)(param_1 + 0x58) + lVar15;
          plVar10 = *(long **)(*(long *)(*(long *)(param_1 + 0x40) + (uVar11 >> 9) * 8) +
                              (uVar11 & 0x1ff) * 8);
          (**(code **)(*plVar10 + 0x58))(plVar10,uVar8);
          lVar15 = lVar15 + 1;
        } while (iVar6 != (int)lVar15);
      }
      *(undefined4 *)(param_1 + 0x88) = uVar8;
      local_1c8 = 0;
    }
  }
LAB_100589a1e:
  if (*(int *)local_b8[0].field0_0x0 != -1) {
    if (*(int *)local_b8[0].field0_0x0 != 0) {
      LOCK();
      *(int *)local_b8[0].field0_0x0 = *(int *)local_b8[0].field0_0x0 + -1;
      local_99 = *(int *)local_b8[0].field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_99) goto LAB_100589a5a;
    }
    QArrayData::deallocate((QArrayData *)local_b8[0].field0_0x0,2,8);
  }
LAB_100589a5a:
  if (lVar12 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return local_1c8;
}


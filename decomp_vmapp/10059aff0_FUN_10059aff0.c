
int FUN_10059aff0(QString *param_1)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  QArrayData *pQVar4;
  char cVar5;
  long *plVar6;
  int iVar7;
  ulong uVar8;
  QArrayData *local_160;
  QArrayData *local_158;
  QArrayData *local_150;
  QString local_148;
  QString local_140;
  QArrayData *local_138;
  QString local_130;
  QArrayData *local_128;
  QArrayData *local_120;
  QArrayData *local_118;
  QString local_110;
  QString local_108;
  undefined1 local_100 [12];
  int local_f4;
  QArrayData *local_f0;
  int local_dc;
  QFileInfo local_d8 [8];
  QFile local_d0 [23];
  undefined1 local_b9;
  undefined1 local_b8 [16];
  undefined4 local_a8;
  uint local_a4;
  uint local_a0;
  ulong local_98;
  undefined4 local_90;
  undefined1 local_80 [8];
  long local_78;
  QArrayData *local_50;
  QArrayData *local_38;
  long local_30;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_30 = lVar1;
  QFileInfo::QFileInfo(local_d8,param_1);
  local_dc = 0;
  plVar6 = (long *)FUN_100684400(param_1,1,100,&local_dc,0);
  if (plVar6 == (long *)0x0) {
    FUN_1008e3970("","vdisk",0,"Error guessing image type: 0x%x",local_dc);
    iVar7 = local_dc;
    goto LAB_10059ba47;
  }
  local_f0 = (QArrayData *)PTR_shared_null_100ba20d0;
  local_dc = (**(code **)(*plVar6 + 0x38))(plVar6,local_100);
  (**(code **)(*plVar6 + 0x28))(plVar6);
  (**(code **)(*plVar6 + 0x20))(plVar6);
  if (local_dc < 0) {
    FUN_1008e3970("","vdisk",0,"Error getting disk parameters: 0x%x");
    iVar7 = local_dc;
  }
  else {
    FUN_100098d30(&local_a8);
    local_dc = FUN_10059c050(local_100,&local_a8);
    if (local_dc < 0) {
      FUN_1008e3970("","vdisk",0,"Error 0x%x converting image info",local_dc);
      iVar7 = local_dc;
    }
    else if (local_98 == 0) {
      FUN_1008e3970("","vdisk",0,"Wrong disk parameters got");
      iVar7 = -0x7ffdefcd;
    }
    else {
      if (local_f4 == 1) {
        local_90 = 0x3f0;
        if (local_98 != (local_98 / 0x3f0) * 0x3f0) {
          if (local_98 >> 0x20 == 0) {
            QFile::QFile(local_d0,(QString *)(local_78 + 0x28));
            local_a4 = (int)(local_98 / 0x3f0) + 1;
            local_a8 = 0x10;
            local_a0 = 0x3f;
            local_98 = (ulong)local_a4 * 0x3f0;
            *(ulong *)(local_78 + 0x20) = local_98;
            cVar5 = QFile::resize((longlong)local_d0);
            iVar7 = 0;
            if (cVar5 == '\0') {
              iVar7 = -0x7ffdefa9;
              FUN_1008e3970("","vdisk",0,"Error resizing plain disk");
            }
            QFile::~QFile(local_d0);
            local_dc = iVar7;
            if (-1 < iVar7) goto LAB_10059b2c8;
          }
          else {
            FUN_1008e3970("","vdisk",0,"Weird plain disk size, larger than 2 Tb (%llu)");
            local_dc = -0x7ffffffd;
          }
          FUN_1008e3970("","vdisk",0,"Error expanding PD3 image 0x%x",local_dc);
          iVar7 = local_dc;
          goto LAB_10059b996;
        }
        local_dc = 0;
      }
LAB_10059b2c8:
      QFileInfo::absoluteFilePath();
      local_118 = (QArrayData *)QString::fromAscii_helper(".temporary",10);
      local_110.field0_0x0 = local_108.field0_0x0;
      if (1 < *(int *)local_108.field0_0x0 + 1U) {
        LOCK();
        *(int *)local_108.field0_0x0 = *(int *)local_108.field0_0x0 + 1;
        local_b9 = *(int *)local_108.field0_0x0 != 0;
        UNLOCK();
      }
      QString::append(&local_110);
      if (*(int *)local_118 != -1) {
        if (*(int *)local_118 != 0) {
          LOCK();
          *(int *)local_118 = *(int *)local_118 + -1;
          local_b9 = *(int *)local_118 != 0;
          UNLOCK();
          if ((bool)local_b9) goto LAB_10059b364;
        }
        QArrayData::deallocate(local_118,2,8);
      }
LAB_10059b364:
      if (2 < DAT_1011b55f8) {
        QString::toUtf8();
        pQVar4 = local_120;
        lVar2 = *(long *)(local_120 + 0x10);
        QString::toUtf8();
        FUN_1008e3970("","vdisk",3,"Move %s to %s",pQVar4 + lVar2,
                      local_128 + *(long *)(local_128 + 0x10));
        if (*(int *)local_128 != -1) {
          if (*(int *)local_128 != 0) {
            LOCK();
            *(int *)local_128 = *(int *)local_128 + -1;
            local_b9 = *(int *)local_128 != 0;
            UNLOCK();
            if ((bool)local_b9) goto LAB_10059b413;
          }
          QArrayData::deallocate(local_128,1,8);
        }
LAB_10059b413:
        if (*(int *)local_120 != -1) {
          if (*(int *)local_120 != 0) {
            LOCK();
            *(int *)local_120 = *(int *)local_120 + -1;
            local_b9 = *(int *)local_120 != 0;
            UNLOCK();
            if ((bool)local_b9) goto LAB_10059b44f;
          }
          QArrayData::deallocate(local_120,1,8);
        }
      }
LAB_10059b44f:
      cVar5 = QFile::rename(&local_108,&local_110);
      if (cVar5 == '\0') {
        FUN_1008e3970("","vdisk",0,"Error moving to temporary file");
        iVar7 = -0x7ffdefcc;
        QFile::remove(&local_110);
      }
      else {
        QFileInfo::fileName();
        local_138 = (QArrayData *)QString::fromAscii_helper(".hds",4);
        cVar5 = QString::endsWith(&local_130,&local_138,1);
        if (cVar5 == '\0') {
          QString::append(&local_130);
        }
        local_150 = (QArrayData *)QString::fromAscii_helper("/",1);
        local_148.field0_0x0 = local_108.field0_0x0;
        if (1 < *(int *)local_108.field0_0x0 + 1U) {
          LOCK();
          *(int *)local_108.field0_0x0 = *(int *)local_108.field0_0x0 + 1;
          local_b9 = *(int *)local_108.field0_0x0 != 0;
          UNLOCK();
        }
        QString::append(&local_148);
        local_140.field0_0x0 = local_148.field0_0x0;
        if (1 < *(int *)local_148.field0_0x0 + 1U) {
          LOCK();
          *(int *)local_148.field0_0x0 = *(int *)local_148.field0_0x0 + 1;
          local_b9 = *(int *)local_148.field0_0x0 != 0;
          UNLOCK();
        }
        QString::append(&local_140);
        if (*(int *)local_148.field0_0x0 != -1) {
          if (*(int *)local_148.field0_0x0 != 0) {
            LOCK();
            *(int *)local_148.field0_0x0 = *(int *)local_148.field0_0x0 + -1;
            local_b9 = *(int *)local_148.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_b9) goto LAB_10059b582;
          }
          QArrayData::deallocate((QArrayData *)local_148.field0_0x0,2,8);
        }
LAB_10059b582:
        if (*(int *)local_150 != -1) {
          if (*(int *)local_150 != 0) {
            LOCK();
            *(int *)local_150 = *(int *)local_150 + -1;
            local_b9 = *(int *)local_150 != 0;
            UNLOCK();
            if ((bool)local_b9) goto LAB_10059b5be;
          }
          QArrayData::deallocate(local_150,2,8);
        }
LAB_10059b5be:
        QString::operator=((QString *)(local_78 + 0x28),&local_130);
        uVar8 = (ulong)local_a0;
        if (local_98 % uVar8 != 0) {
          local_98 = (local_98 - 1) + uVar8;
          local_98 = local_98 - local_98 % uVar8;
        }
        plVar6 = (long *)FUN_10059a920(&local_108,&local_a8,0x1023,0,0,&local_dc);
        if (plVar6 == (long *)0x0) {
          FUN_1008e3970("","vdisk",0,"Error creating disk at conversion 0x%x",local_dc);
LAB_10059b849:
          QFile::rename(&local_110,param_1);
          QFile::remove(&local_110);
          iVar7 = local_dc;
        }
        else {
          pcVar3 = *(code **)(*plVar6 + 0x138);
          local_158 = (QArrayData *)QString::fromAscii_helper("CompatLevel",0xb);
          local_160 = (QArrayData *)QString::fromAscii_helper("level0",6);
          local_dc = (*pcVar3)(plVar6,&local_158,&local_160);
          if (*(int *)local_160 != -1) {
            if (*(int *)local_160 != 0) {
              LOCK();
              *(int *)local_160 = *(int *)local_160 + -1;
              local_b9 = *(int *)local_160 != 0;
              UNLOCK();
              if ((bool)local_b9) goto LAB_10059b6c2;
            }
            QArrayData::deallocate(local_160,2,8);
          }
LAB_10059b6c2:
          if (*(int *)local_158 != -1) {
            if (*(int *)local_158 != 0) {
              LOCK();
              *(int *)local_158 = *(int *)local_158 + -1;
              local_b9 = *(int *)local_158 != 0;
              UNLOCK();
              if ((bool)local_b9) goto LAB_10059b6fe;
            }
            QArrayData::deallocate(local_158,2,8);
          }
LAB_10059b6fe:
          if (local_dc < 0) {
            FUN_1008e3970("","vdisk",0,"Error setting compatibility level 0x%x");
LAB_10059b817:
            pcVar3 = *(code **)(*plVar6 + 0x38);
            FUN_1007d6870(local_b8);
            (*pcVar3)(plVar6,local_b8,0,0,0);
            (**(code **)(*plVar6 + 0x10))(plVar6);
            goto LAB_10059b849;
          }
          cVar5 = QFile::rename(&local_110,&local_140);
          if (cVar5 == '\0') {
            FUN_1008e3970("","vdisk",0,"Error moving file inside directory");
            local_dc = -0x7ffdefcc;
            goto LAB_10059b817;
          }
          (**(code **)(*plVar6 + 0x20))(plVar6);
          (**(code **)(*plVar6 + 0x10))(plVar6);
          iVar7 = 0;
        }
        if (*(int *)local_140.field0_0x0 != -1) {
          if (*(int *)local_140.field0_0x0 != 0) {
            LOCK();
            *(int *)local_140.field0_0x0 = *(int *)local_140.field0_0x0 + -1;
            local_b9 = *(int *)local_140.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_b9) goto LAB_10059b8a6;
          }
          QArrayData::deallocate((QArrayData *)local_140.field0_0x0,2,8);
        }
LAB_10059b8a6:
        if (*(int *)local_138 != -1) {
          if (*(int *)local_138 != 0) {
            LOCK();
            *(int *)local_138 = *(int *)local_138 + -1;
            local_b9 = *(int *)local_138 != 0;
            UNLOCK();
            if ((bool)local_b9) goto LAB_10059b8e2;
          }
          QArrayData::deallocate(local_138,2,8);
        }
LAB_10059b8e2:
        if (*(int *)local_130.field0_0x0 != -1) {
          if (*(int *)local_130.field0_0x0 != 0) {
            LOCK();
            *(int *)local_130.field0_0x0 = *(int *)local_130.field0_0x0 + -1;
            local_b9 = *(int *)local_130.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_b9) goto LAB_10059b91e;
          }
          QArrayData::deallocate((QArrayData *)local_130.field0_0x0,2,8);
        }
      }
LAB_10059b91e:
      if (*(int *)local_110.field0_0x0 != -1) {
        if (*(int *)local_110.field0_0x0 != 0) {
          LOCK();
          *(int *)local_110.field0_0x0 = *(int *)local_110.field0_0x0 + -1;
          local_b9 = *(int *)local_110.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_b9) goto LAB_10059b95a;
        }
        QArrayData::deallocate((QArrayData *)local_110.field0_0x0,2,8);
      }
LAB_10059b95a:
      if (*(int *)local_108.field0_0x0 != -1) {
        if (*(int *)local_108.field0_0x0 != 0) {
          LOCK();
          *(int *)local_108.field0_0x0 = *(int *)local_108.field0_0x0 + -1;
          local_b9 = *(int *)local_108.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_b9) goto LAB_10059b996;
        }
        QArrayData::deallocate((QArrayData *)local_108.field0_0x0,2,8);
      }
    }
LAB_10059b996:
    if (*(int *)local_38 != -1) {
      if (*(int *)local_38 != 0) {
        LOCK();
        *(int *)local_38 = *(int *)local_38 + -1;
        local_b9 = *(int *)local_38 != 0;
        UNLOCK();
        if ((bool)local_b9) goto LAB_10059b9cc;
      }
      QArrayData::deallocate(local_38,2,8);
    }
LAB_10059b9cc:
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        local_b9 = *(int *)local_50 != 0;
        UNLOCK();
        if ((bool)local_b9) goto LAB_10059ba02;
      }
      QArrayData::deallocate(local_50,1,8);
    }
LAB_10059ba02:
    FUN_100098f20(local_80);
  }
  if (*(int *)local_f0 != -1) {
    if (*(int *)local_f0 != 0) {
      LOCK();
      *(int *)local_f0 = *(int *)local_f0 + -1;
      local_b9 = *(int *)local_f0 != 0;
      UNLOCK();
      if ((bool)local_b9) goto LAB_10059ba47;
    }
    QArrayData::deallocate(local_f0,2,8);
  }
LAB_10059ba47:
  QFileInfo::~QFileInfo(local_d8);
  if (lVar1 != local_30) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar7;
}


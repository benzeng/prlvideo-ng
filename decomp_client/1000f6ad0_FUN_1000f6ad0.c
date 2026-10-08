
void FUN_1000f6ad0(undefined8 param_1,undefined8 param_2)

{
  QArrayData *pQVar1;
  char cVar2;
  undefined2 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  ulong uVar8;
  QString local_b0;
  QString local_a8;
  char local_99;
  QArrayData *local_98;
  QString local_90;
  QString local_88;
  QFileInfo local_80 [8];
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  uVar4 = FUN_100152280();
  lVar5 = FUN_1001548f0(uVar4,param_1);
  if (lVar5 == 0) {
    QString::toUtf8();
    FUN_100df99c0("SGAC","prl_client_app",0,"No vm with vmUuid=\"%s\"",
                  local_48 + *(long *)(local_48 + 0x10));
    if (*(int *)local_48 == -1) {
      return;
    }
    local_78 = local_48;
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      UNLOCK();
      if (*(int *)local_48 != 0) {
        return;
      }
      local_31 = 0;
    }
LAB_1000f6f31:
    uVar8 = 1;
  }
  else {
    uVar4 = FUN_100152280();
    FUN_1001884b0(&local_50,lVar5);
    lVar6 = FUN_100152a20(uVar4,&local_50);
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        local_31 = *(int *)local_50 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1000f6b5b;
      }
      QArrayData::deallocate(local_50,2,8);
    }
LAB_1000f6b5b:
    if (lVar6 == 0) {
      FUN_1001884b0(&local_60,lVar5);
      QString::toUtf8();
      pQVar1 = local_58;
      lVar5 = *(long *)(local_58 + 0x10);
      QString::toUtf8();
      FUN_100df99c0("SGAC","prl_client_app",0,"No server with uuid=\"%s\" for vmUuid=\"%s\"",
                    pQVar1 + lVar5,local_68 + *(long *)(local_68 + 0x10));
      if (*(int *)local_68 != -1) {
        if (*(int *)local_68 != 0) {
          LOCK();
          *(int *)local_68 = *(int *)local_68 + -1;
          local_31 = *(int *)local_68 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1000f6e73;
        }
        QArrayData::deallocate(local_68,1,8);
      }
LAB_1000f6e73:
      if (*(int *)local_58 != -1) {
        if (*(int *)local_58 != 0) {
          LOCK();
          *(int *)local_58 = *(int *)local_58 + -1;
          local_31 = *(int *)local_58 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1000f6ea3;
        }
        QArrayData::deallocate(local_58,1,8);
      }
LAB_1000f6ea3:
      if (*(uint *)local_60 == 0xffffffff) {
        return;
      }
      local_78 = local_60;
      if (*(uint *)local_60 != 0) {
        LOCK();
        *(uint *)local_60 = *(uint *)local_60 - 1;
        UNLOCK();
        if (*(uint *)local_60 != 0) {
          return;
        }
        local_31 = 0;
      }
    }
    else {
      uVar4 = FUN_100152280();
      cVar2 = FUN_100155010(uVar4,lVar6,0);
      if (cVar2 == '\0') {
        if (DAT_10230ffd0 < 3) {
          return;
        }
        QString::toUtf8();
        FUN_100df99c0("SGAC","prl_client_app",3,"Non local Vm with vmUuid=\"%s\"",
                      local_70 + *(long *)(local_70 + 0x10));
        if (*(int *)local_70 == -1) {
          return;
        }
        local_78 = local_70;
        if (*(int *)local_70 != 0) {
          LOCK();
          *(int *)local_70 = *(int *)local_70 + -1;
          UNLOCK();
          if (*(int *)local_70 != 0) {
            return;
          }
          uVar8 = 1;
          local_31 = 0;
          goto LAB_1000f700f;
        }
        goto LAB_1000f6f31;
      }
      FUN_10018d860(&local_88,lVar5);
      QFileInfo::QFileInfo(local_80,&local_88);
      QFileInfo::path();
      QFileInfo::~QFileInfo(local_80);
      if (*(int *)local_88.field0_0x0 != -1) {
        if (*(int *)local_88.field0_0x0 != 0) {
          LOCK();
          *(int *)local_88.field0_0x0 = *(int *)local_88.field0_0x0 + -1;
          local_31 = *(int *)local_88.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1000f6bdf;
        }
        QArrayData::deallocate((QArrayData *)local_88.field0_0x0,2,8);
      }
LAB_1000f6bdf:
      uVar3 = QDir::separator();
      local_98 = local_78;
      if (1 < *(uint *)local_78 + 1) {
        LOCK();
        *(uint *)local_78 = *(uint *)local_78 + 1;
        local_31 = *(uint *)local_78 != 0;
        UNLOCK();
      }
      uVar7 = *(uint *)(local_78 + 4);
      if ((1 < *(uint *)local_78) || ((*(uint *)(local_78 + 8) & 0x7fffffff) < uVar7 + 2)) {
        QString::reallocData((uint)&local_98,SUB41(uVar7 + 2,0));
        uVar7 = *(uint *)(local_98 + 4);
      }
      *(uint *)(local_98 + 4) = uVar7 + 1;
      *(undefined2 *)(local_98 + (long)(int)uVar7 * 2 + *(long *)(local_98 + 0x10)) = uVar3;
      *(undefined2 *)
       (local_98 + (long)(int)*(uint *)(local_98 + 4) * 2 + *(long *)(local_98 + 0x10)) = 0;
      if (1 < *(uint *)local_98 + 1) {
        LOCK();
        *(uint *)local_98 = *(uint *)local_98 + 1;
        local_31 = *(uint *)local_98 != 0;
        UNLOCK();
      }
      local_90.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_98;
      QString::fromUtf8_helper((char *)&local_40,0x1db77da);
      QString::append(&local_90);
      if (*(int *)local_40 != -1) {
        if (*(int *)local_40 != 0) {
          LOCK();
          *(int *)local_40 = *(int *)local_40 + -1;
          local_31 = *(int *)local_40 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1000f6cce;
        }
        QArrayData::deallocate(local_40,2,8);
      }
LAB_1000f6cce:
      if (*(int *)local_98 != -1) {
        if (*(int *)local_98 != 0) {
          LOCK();
          *(int *)local_98 = *(int *)local_98 + -1;
          local_31 = *(int *)local_98 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1000f6d04;
        }
        QArrayData::deallocate(local_98,2,8);
      }
LAB_1000f6d04:
      FUN_100da2bf0(&local_a8,param_2,1,1,&local_99);
      FUN_100da2bf0(&local_b0,&local_90,1,1,&local_99);
      cVar2 = operator==(&local_b0,&local_a8);
      if (cVar2 == '\0') {
        if (local_99 == '\0') {
          FUN_100d9bbb0(&local_b0);
        }
        else {
          QFile::remove(&local_90);
        }
      }
      if (*(int *)local_b0.field0_0x0 != -1) {
        if (*(int *)local_b0.field0_0x0 != 0) {
          LOCK();
          *(int *)local_b0.field0_0x0 = *(int *)local_b0.field0_0x0 + -1;
          local_31 = *(int *)local_b0.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1000f6f7d;
        }
        QArrayData::deallocate((QArrayData *)local_b0.field0_0x0,2,8);
      }
LAB_1000f6f7d:
      if (*(int *)local_a8.field0_0x0 != -1) {
        if (*(int *)local_a8.field0_0x0 != 0) {
          LOCK();
          *(int *)local_a8.field0_0x0 = *(int *)local_a8.field0_0x0 + -1;
          local_31 = *(int *)local_a8.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1000f6fb3;
        }
        QArrayData::deallocate((QArrayData *)local_a8.field0_0x0,2,8);
      }
LAB_1000f6fb3:
      if (*(int *)local_90.field0_0x0 != -1) {
        if (*(int *)local_90.field0_0x0 != 0) {
          LOCK();
          *(int *)local_90.field0_0x0 = *(int *)local_90.field0_0x0 + -1;
          local_31 = *(int *)local_90.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1000f6fe9;
        }
        QArrayData::deallocate((QArrayData *)local_90.field0_0x0,2,8);
      }
LAB_1000f6fe9:
      if (*(uint *)local_78 == 0xffffffff) {
        return;
      }
      if (*(uint *)local_78 != 0) {
        LOCK();
        *(uint *)local_78 = *(uint *)local_78 - 1;
        UNLOCK();
        if (*(uint *)local_78 != 0) {
          return;
        }
        local_31 = 0;
      }
    }
    uVar8 = 2;
  }
LAB_1000f700f:
  QArrayData::deallocate(local_78,uVar8,8);
  return;
}


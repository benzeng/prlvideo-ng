
undefined4 FUN_1004ca140(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  char cVar3;
  long lVar4;
  QArrayData *pQVar5;
  uint uVar6;
  ulong uVar7;
  QChar *pQVar8;
  long *plVar9;
  QArrayData *local_70;
  QArrayData *local_68;
  QDir local_60 [8];
  QFileInfo local_58 [8];
  QString local_50;
  long *local_48;
  QArrayData *local_40;
  undefined4 local_38;
  undefined1 local_31;
  
  local_38 = 0xf0000003;
  if (*(short *)(param_2 + 0x14) != 0) {
    return 0xf0000003;
  }
  if (*(short *)(param_2 + 0x16) != 1) {
    return 0xf0000003;
  }
  lVar4 = FUN_1002a6120(param_2,0,0);
  if (lVar4 == 0) {
    return local_38;
  }
  uVar6 = *(uint *)(lVar4 + 8);
  uVar7 = (ulong)(int)uVar6;
  if (uVar7 < 0xe) {
    return local_38;
  }
  if ((int)uVar6 < 1) {
    local_40 = (QArrayData *)PTR_shared_null_100ba20d0;
    pQVar5 = (QArrayData *)PTR_shared_null_100ba20d0;
  }
  else {
    pQVar5 = (QArrayData *)QArrayData::allocate(1,8,uVar7,0);
    local_40 = pQVar5;
    if (pQVar5 == (QArrayData *)0x0) {
      qBadAlloc();
    }
    *(uint *)(pQVar5 + 4) = uVar6;
    ___bzero(pQVar5 + *(long *)(pQVar5 + 0x10),uVar7);
  }
  if (1 < *(uint *)pQVar5) {
    if ((*(uint *)(pQVar5 + 8) & 0x7fffffff) == 0) {
      pQVar5 = (QArrayData *)QArrayData::allocate(1,8,0,2);
      local_40 = pQVar5;
    }
    else {
      FUN_1004d6790(&local_40,*(uint *)(pQVar5 + 4),*(uint *)(pQVar5 + 8) & 0x7fffffff,0);
      pQVar5 = local_40;
    }
  }
  FUN_1002a5990(lVar4,0,pQVar5 + *(long *)(pQVar5 + 0x10),*(undefined4 *)(lVar4 + 8));
  if (1 < *(uint *)pQVar5) {
    if ((*(uint *)(pQVar5 + 8) & 0x7fffffff) == 0) {
      pQVar5 = (QArrayData *)QArrayData::allocate(1,8,0,2);
      local_40 = pQVar5;
    }
    else {
      FUN_1004d6790(&local_40,*(uint *)(pQVar5 + 4),*(uint *)(pQVar5 + 8) & 0x7fffffff,0);
      pQVar5 = local_40;
    }
  }
  lVar4 = *(long *)(pQVar5 + 0x10);
  FUN_1004cf180(&local_48,*param_1 + 0x48,*(undefined4 *)(pQVar5 + lVar4));
  if (local_48 == (long *)0x0) {
    local_38 = 0xf0000012;
    goto LAB_1004ca4f0;
  }
  if (*(char *)((long)local_48 + 0x29) == '\0') {
    pQVar8 = (QChar *)(pQVar5 + lVar4 + 0xc);
    uVar6 = *(uint *)(pQVar5 + lVar4 + 8) >> 1;
    if (uVar6 == 0) {
      uVar6 = 0;
    }
    else if ((*(short *)pQVar8 == 0x2f) || (*(short *)pQVar8 == 0x5c)) {
      pQVar8 = (QChar *)(pQVar5 + lVar4 + 0xe);
      uVar6 = uVar6 - 1;
    }
    QString::QString(&local_50,pQVar8,uVar6);
    lVar1 = local_48[2];
    FUN_1004cf4e0(lVar1,&local_50);
    if (DAT_10111cc74 == 0) {
LAB_1004ca3bf:
      local_38 = 0xf0000007;
      plVar2 = *(long **)(lVar1 + 0x80);
      plVar9 = (long *)0x0;
      if (plVar2 != (long *)0x0) {
        LOCK();
        *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
        UNLOCK();
        plVar9 = (long *)plVar2[2];
      }
      cVar3 = (**(code **)(*plVar9 + 0x30))(plVar9,&local_50);
      if (cVar3 != '\0') {
        QString::mid((int)&local_70,(int)local_48 + 0x18);
        plVar9 = (long *)0x0;
        if (plVar2 != (long *)0x0) {
          plVar9 = (long *)plVar2[2];
        }
        cVar3 = (**(code **)(*plVar9 + 0x38))(plVar9,&local_70);
        if (cVar3 != '\0') {
          local_38 = (**(code **)(*local_48 + 0x38))
                               (local_48,&local_50,*(int *)(pQVar5 + lVar4 + 4) != 0);
        }
        if (*(int *)local_70 != -1) {
          if (*(int *)local_70 != 0) {
            LOCK();
            *(int *)local_70 = *(int *)local_70 + -1;
            local_31 = *(int *)local_70 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1004ca47e;
          }
          QArrayData::deallocate(local_70,2,8);
        }
      }
LAB_1004ca47e:
      if (plVar2 != (long *)0x0) {
        LOCK();
        plVar9 = plVar2 + 1;
        lVar4 = *plVar9;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
        }
      }
    }
    else if (*(char *)(local_48[2] + 0x30) == '\0') {
      QDir::QDir(local_60,(QString *)(lVar1 + 0x18));
      QFileInfo::QFileInfo(local_58,local_60,&local_50);
      QDir::~QDir(local_60);
      QFileInfo::absoluteFilePath();
      cVar3 = FUN_1004f1780(&local_68,local_48 + 3,&local_38);
      if (*(int *)local_68 != -1) {
        if (*(int *)local_68 != 0) {
          LOCK();
          *(int *)local_68 = *(int *)local_68 + -1;
          local_31 = *(int *)local_68 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1004ca3ad;
        }
        QArrayData::deallocate(local_68,2,8);
      }
LAB_1004ca3ad:
      QFileInfo::~QFileInfo(local_58);
      if (cVar3 == '\0') goto LAB_1004ca3bf;
    }
    else {
      local_38 = 0xf0000007;
    }
    if (*(int *)local_50.field0_0x0 != -1) {
      if (*(int *)local_50.field0_0x0 != 0) {
        LOCK();
        *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
        local_31 = *(int *)local_50.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1004ca4cf;
      }
      QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
    }
LAB_1004ca4cf:
    if (local_48 == (long *)0x0) goto LAB_1004ca4f0;
  }
  else {
    local_38 = 0xf000000f;
  }
  LOCK();
  plVar2 = local_48 + 1;
  lVar4 = *plVar2;
  *(int *)plVar2 = (int)*plVar2 + -1;
  UNLOCK();
  if ((int)lVar4 == 1) {
    (**(code **)(*local_48 + 0x10))(local_48);
  }
LAB_1004ca4f0:
  if (*(int *)pQVar5 != -1) {
    if (*(int *)pQVar5 != 0) {
      LOCK();
      *(int *)pQVar5 = *(int *)pQVar5 + -1;
      local_31 = *(int *)pQVar5 != 0;
      UNLOCK();
      if ((bool)local_31) {
        return local_38;
      }
    }
    QArrayData::deallocate(pQVar5,1,8);
  }
  return local_38;
}


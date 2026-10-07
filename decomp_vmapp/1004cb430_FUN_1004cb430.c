
int FUN_1004cb430(long *param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  QArrayData *pQVar4;
  long *plVar5;
  long lVar6;
  QArrayData *pQVar7;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  uint local_98;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  uint local_78;
  QArrayData *local_68;
  long *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QString local_40;
  undefined1 local_31;
  
  if (*(short *)(param_2 + 0x16) != 2) {
    return -0xffffffd;
  }
  if (*(short *)(param_2 + 0x14) != 0) {
    return -0xffffffd;
  }
  lVar3 = FUN_1002a6120(param_2,0,0);
  if (lVar3 == 0) {
    return -0xffffffd;
  }
  uVar1 = *(uint *)(lVar3 + 8);
  lVar6 = (long)(int)uVar1;
  if (0x1000 < lVar6) {
    return -0xffffffd;
  }
  if ((int)uVar1 < 1) {
    local_48 = (QArrayData *)PTR_shared_null_100ba20d0;
    pQVar4 = (QArrayData *)PTR_shared_null_100ba20d0;
  }
  else {
    pQVar4 = (QArrayData *)QArrayData::allocate(1,8,lVar6,0);
    local_48 = pQVar4;
    if (pQVar4 == (QArrayData *)0x0) {
      qBadAlloc();
    }
    *(uint *)(pQVar4 + 4) = uVar1;
    ___bzero(pQVar4 + *(long *)(pQVar4 + 0x10),lVar6);
  }
  if (1 < *(uint *)pQVar4) {
    if ((*(uint *)(pQVar4 + 8) & 0x7fffffff) == 0) {
      pQVar4 = (QArrayData *)QArrayData::allocate(1,8,0,2);
      local_48 = pQVar4;
    }
    else {
      FUN_1004d6920(&local_48,*(uint *)(pQVar4 + 4),*(uint *)(pQVar4 + 8) & 0x7fffffff,0);
      pQVar4 = local_48;
    }
  }
  FUN_1002a5990(lVar3,0,pQVar4 + *(long *)(pQVar4 + 0x10),uVar1);
  pQVar7 = pQVar4 + *(long *)(pQVar4 + 0x10);
  if (pQVar7 != (QArrayData *)0x0) {
    _strlen((char *)pQVar7);
  }
  QString::fromUtf8_helper((char *)&local_58,(int)pQVar7);
  QString::normalized(&local_50,&local_58,1,0);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004cb595;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1004cb595:
  FUN_1004cf920(&local_60,*param_1 + 0x48,&local_50);
  iVar2 = -0xfffffee;
  if (local_60 != (long *)0x0) {
    QString::QString(&local_40,0x2f);
    QString::section(&local_68,&local_50,&local_40,2,0xffffffff,0);
    if (*(int *)local_40.field0_0x0 != -1) {
      if (*(int *)local_40.field0_0x0 != 0) {
        LOCK();
        *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
        local_31 = *(int *)local_40.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1004cb61c;
      }
      QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
    }
LAB_1004cb61c:
    lVar3 = FUN_1002a6120(param_2,1,1);
    iVar2 = -0xffffffd;
    if ((lVar3 != 0) && (iVar2 = -0xffffff7, 0x17 < *(uint *)(lVar3 + 8))) {
      FUN_1002a5990(lVar3,0,&local_88,0x18);
      local_a8 = local_88;
      uStack_a4 = uStack_84;
      uStack_a0 = uStack_80;
      uStack_9c = uStack_7c;
      local_98 = local_78 >> 0xf & 4 |
                 (local_78 & 0x10000) << 8 |
                 local_78 >> 6 & 0x100 |
                 local_78 << 7 & 0x100000 |
                 local_78 >> 2 & 0x80 |
                 local_78 >> 6 & 4 |
                 local_78 >> 4 & 8 |
                 (local_78 & 0x40) << 4 |
                 (local_78 & 0x20) << 0xc |
                 local_78 << 7 & 0x800 | (local_78 & 8) << 6 | local_78 >> 1 & 3;
      if (*(int *)(local_68 + 4) != 0) {
        plVar5 = (long *)0x0;
        if (local_60[0x10] != 0) {
          plVar5 = *(long **)(local_60[0x10] + 0x10);
        }
        (**(code **)(*plVar5 + 0x18))(plVar5,&local_68);
      }
      iVar2 = FUN_1004e02b0(local_60,&local_68,&local_a8);
      local_88 = local_a8;
      uStack_84 = uStack_a4;
      uStack_80 = uStack_a0;
      uStack_7c = uStack_9c;
      local_78 = (local_98 & 4) << 0xf |
                 local_98 >> 8 & 0x10000 |
                 (local_98 & 0x100) << 6 |
                 local_98 >> 7 & 0x2000 |
                 local_98 * 4 & 0x200 |
                 (local_98 & 4) << 6 |
                 (local_98 & 8) << 4 |
                 local_98 >> 4 & 0x40 |
                 local_98 >> 0xc & 0x20 |
                 local_98 >> 7 & 0x10 | local_98 >> 6 & 8 | local_98 * 2 & 6;
      if (iVar2 == 0) {
        iVar2 = 0;
        FUN_1002a5a50(lVar3,0,&local_88,0x18);
        *(undefined4 *)(lVar3 + 0x10) = 0x18;
      }
    }
    if (*(int *)local_68 != -1) {
      if (*(int *)local_68 != 0) {
        LOCK();
        *(int *)local_68 = *(int *)local_68 + -1;
        local_31 = *(int *)local_68 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1004cb82a;
      }
      QArrayData::deallocate(local_68,2,8);
    }
LAB_1004cb82a:
    LOCK();
    plVar5 = local_60 + 1;
    lVar3 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)(*local_60 + 0x10))(local_60);
    }
  }
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004cb876;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1004cb876:
  if (*(int *)pQVar4 != -1) {
    if (*(int *)pQVar4 != 0) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + -1;
      local_31 = *(int *)pQVar4 != 0;
      UNLOCK();
      if ((bool)local_31) {
        return iVar2;
      }
    }
    QArrayData::deallocate(pQVar4,1,8);
  }
  return iVar2;
}


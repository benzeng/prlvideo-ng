
int FUN_1004cad80(long *param_1,long param_2)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  QArrayData *pQVar5;
  QArrayData *pQVar6;
  long *plVar7;
  ulong uVar8;
  undefined1 local_b0 [48];
  QString local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QString local_68;
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
  lVar4 = FUN_1002a6120(param_2,0,0);
  if (lVar4 == 0) {
    return -0xffffffd;
  }
  uVar1 = *(uint *)(lVar4 + 8);
  uVar8 = (ulong)(int)uVar1;
  if (0x1000 < uVar8) {
    return -0xffffffd;
  }
  if ((int)uVar1 < 1) {
    local_48 = (QArrayData *)PTR_shared_null_100ba20d0;
    pQVar5 = (QArrayData *)PTR_shared_null_100ba20d0;
  }
  else {
    pQVar5 = (QArrayData *)QArrayData::allocate(1,8,uVar8,0);
    local_48 = pQVar5;
    if (pQVar5 == (QArrayData *)0x0) {
      qBadAlloc();
    }
    *(uint *)(pQVar5 + 4) = uVar1;
    ___bzero(pQVar5 + *(long *)(pQVar5 + 0x10),uVar8);
  }
  if (1 < *(uint *)pQVar5) {
    if ((*(uint *)(pQVar5 + 8) & 0x7fffffff) == 0) {
      pQVar5 = (QArrayData *)QArrayData::allocate(1,8,0,2);
      local_48 = pQVar5;
    }
    else {
      FUN_1004d6920(&local_48,*(uint *)(pQVar5 + 4),*(uint *)(pQVar5 + 8) & 0x7fffffff,0);
      pQVar5 = local_48;
    }
  }
  FUN_1002a5990(lVar4,0,pQVar5 + *(long *)(pQVar5 + 0x10),uVar1);
  pQVar6 = pQVar5 + *(long *)(pQVar5 + 0x10);
  if (pQVar6 != (QArrayData *)0x0) {
    _strlen((char *)pQVar6);
  }
  QString::fromUtf8_helper((char *)&local_58,(int)pQVar6);
  QString::normalized(&local_50,&local_58,1,0);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004caeeb;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1004caeeb:
  FUN_1004cf920(&local_60,*param_1 + 0x48,&local_50);
  iVar3 = -0xfffffee;
  if (local_60 != (long *)0x0) {
    local_68.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_60[3];
    if (1 < *(int *)local_68.field0_0x0 + 1U) {
      LOCK();
      *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + 1;
      local_31 = *(int *)local_68.field0_0x0 != 0;
      UNLOCK();
    }
    cVar2 = QString::endsWith(&local_68,0x2f,1);
    if (cVar2 == '\0') {
      QString::append(&local_68,0x2f);
    }
    lVar4 = FUN_1004d93b0(local_60);
    iVar3 = -0xfffffe4;
    if (lVar4 != 0) {
      QString::toUtf8_helper(&local_80);
      QTextCodec::toUnicode((char *)&local_78);
      QString::QString(&local_40,0x2f);
      QString::section(&local_70,&local_78,&local_40,2,0xffffffff,0);
      if (*(int *)local_40.field0_0x0 != -1) {
        if (*(int *)local_40.field0_0x0 != 0) {
          LOCK();
          *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
          local_31 = *(int *)local_40.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1004cafe9;
        }
        QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
      }
LAB_1004cafe9:
      if (*(int *)local_78 != -1) {
        if (*(int *)local_78 != 0) {
          LOCK();
          *(int *)local_78 = *(int *)local_78 + -1;
          local_31 = *(int *)local_78 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1004cb019;
        }
        QArrayData::deallocate(local_78,2,8);
      }
LAB_1004cb019:
      if (*(int *)local_80.field0_0x0 != -1) {
        if (*(int *)local_80.field0_0x0 != 0) {
          LOCK();
          *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + -1;
          local_31 = *(int *)local_80.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1004cb049;
        }
        QArrayData::deallocate((QArrayData *)local_80.field0_0x0,1,8);
      }
LAB_1004cb049:
      if (*(int *)(local_70 + 4) != 0) {
        plVar7 = (long *)0x0;
        if (local_60[0x10] != 0) {
          plVar7 = *(long **)(local_60[0x10] + 0x10);
        }
        (**(code **)(*plVar7 + 0x18))(plVar7,&local_70);
      }
      QString::append(&local_68);
      lVar4 = FUN_1002a6120(param_2,1,0);
      iVar3 = -0xffffffd;
      if ((lVar4 != 0) && (iVar3 = -0xffffff7, 0x2f < *(uint *)(lVar4 + 8))) {
        if ((*(byte *)(lVar4 + 0xc) & 1) == 0) {
          FUN_1002a4d60(&DAT_1011c3e48,DAT_10111cc78,2);
          FUN_1002a5990(lVar4,0,local_b0,0x30);
          iVar3 = FUN_1004dfff0(local_60,&local_68,local_b0);
        }
        else {
          FUN_1002a4d60(&DAT_1011c3e48,DAT_10111cc78,1);
          iVar3 = FUN_1004dfcc0(local_60,&local_68,local_b0);
          if (iVar3 == 0) {
            iVar3 = 0;
            FUN_1002a5a50(lVar4,0,local_b0,0x30);
            *(undefined4 *)(lVar4 + 0x10) = 0x30;
          }
        }
      }
      if (*(int *)local_70 != -1) {
        if (*(int *)local_70 != 0) {
          LOCK();
          *(int *)local_70 = *(int *)local_70 + -1;
          local_31 = *(int *)local_70 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1004cb174;
        }
        QArrayData::deallocate(local_70,2,8);
      }
    }
LAB_1004cb174:
    if (*(int *)local_68.field0_0x0 != -1) {
      if (*(int *)local_68.field0_0x0 != 0) {
        LOCK();
        *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
        local_31 = *(int *)local_68.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1004cb1a4;
      }
      QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
    }
LAB_1004cb1a4:
    LOCK();
    plVar7 = local_60 + 1;
    lVar4 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)(*local_60 + 0x10))(local_60);
    }
  }
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004cb1f0;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1004cb1f0:
  if (*(int *)pQVar5 != -1) {
    if (*(int *)pQVar5 != 0) {
      LOCK();
      *(int *)pQVar5 = *(int *)pQVar5 + -1;
      local_31 = *(int *)pQVar5 != 0;
      UNLOCK();
      if ((bool)local_31) {
        return iVar3;
      }
    }
    QArrayData::deallocate(pQVar5,1,8);
  }
  return iVar3;
}


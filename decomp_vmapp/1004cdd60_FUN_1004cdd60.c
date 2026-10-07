
undefined4 FUN_1004cdd60(long *param_1,long param_2)

{
  uint uVar1;
  char cVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  QArrayData *pQVar7;
  long *plVar8;
  long lVar9;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  long *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  undefined4 local_44;
  QString local_40;
  undefined1 local_31;
  
  if (*(short *)(param_2 + 0x16) != 3) {
    return 0xf0000003;
  }
  if (*(short *)(param_2 + 0x14) != 0) {
    return 0xf0000003;
  }
  lVar4 = FUN_1002a6120(param_2,0,0);
  lVar5 = FUN_1002a6120(param_2,1,0);
  lVar6 = FUN_1002a6120(param_2,2,0);
  if (lVar4 == 0) {
    return 0xf0000003;
  }
  if (lVar5 == 0) {
    return 0xf0000003;
  }
  if (lVar6 == 0) {
    return 0xf0000003;
  }
  local_44 = 0;
  uVar1 = *(uint *)(lVar5 + 8);
  lVar9 = (long)(int)uVar1;
  if (lVar9 < 1) {
    local_50 = (QArrayData *)PTR_shared_null_100ba20d0;
  }
  else {
    pQVar7 = (QArrayData *)QArrayData::allocate(1,8,lVar9,0);
    local_50 = pQVar7;
    if (pQVar7 == (QArrayData *)0x0) {
      qBadAlloc();
    }
    *(uint *)(pQVar7 + 4) = uVar1;
    pQVar7 = pQVar7 + lVar9 + *(long *)(pQVar7 + 0x10);
    do {
      pQVar7[-1] = (QArrayData)0x0;
      pQVar7 = pQVar7 + -1;
    } while (pQVar7 != local_50 + *(long *)(local_50 + 0x10));
  }
  uVar1 = *(uint *)(lVar6 + 8);
  lVar9 = (long)(int)uVar1;
  if (lVar9 < 1) {
    local_58 = (QArrayData *)PTR_shared_null_100ba20d0;
  }
  else {
    pQVar7 = (QArrayData *)QArrayData::allocate(1,8,lVar9,0);
    local_58 = pQVar7;
    if (pQVar7 == (QArrayData *)0x0) {
      qBadAlloc();
    }
    *(uint *)(pQVar7 + 4) = uVar1;
    pQVar7 = pQVar7 + lVar9 + *(long *)(pQVar7 + 0x10);
    do {
      pQVar7[-1] = (QArrayData)0x0;
      pQVar7 = pQVar7 + -1;
    } while (pQVar7 != local_58 + *(long *)(local_58 + 0x10));
  }
  pQVar7 = local_58;
  uVar3 = 0xf0000003;
  if (*(int *)(lVar4 + 8) == 4) {
    FUN_1002a5990(lVar4,0,&local_44,4);
    if (1 < *(uint *)local_50) {
      if ((*(uint *)(local_50 + 8) & 0x7fffffff) == 0) {
        local_50 = (QArrayData *)QArrayData::allocate(1,8,0,2);
      }
      else {
        FUN_1004d6920(&local_50,*(uint *)(local_50 + 4),*(uint *)(local_50 + 8) & 0x7fffffff,0);
      }
    }
    FUN_1002a5990(lVar5,0,local_50 + *(long *)(local_50 + 0x10),*(undefined4 *)(lVar5 + 8));
    if (1 < *(uint *)pQVar7) {
      if ((*(uint *)(pQVar7 + 8) & 0x7fffffff) == 0) {
        pQVar7 = (QArrayData *)QArrayData::allocate(1,8,0,2);
        local_58 = pQVar7;
      }
      else {
        FUN_1004d6920(&local_58,*(uint *)(pQVar7 + 4),*(uint *)(pQVar7 + 8) & 0x7fffffff,0);
        pQVar7 = local_58;
      }
    }
    FUN_1002a5990(lVar6,0,pQVar7 + *(long *)(pQVar7 + 0x10),*(undefined4 *)(lVar6 + 8));
    FUN_1004cef90(&local_60,*param_1 + 0x48,local_44);
    uVar3 = 0xf0000012;
    if (local_60 != (long *)0x0) {
      lVar4 = FUN_1004d93b0(local_60);
      uVar3 = 0xf000001c;
      if (lVar4 != 0) {
        QTextCodec::toUnicode((char *)&local_70);
        QString::QString(&local_40,0x2f);
        QString::section(&local_68,&local_70,&local_40,2,0xffffffff,0);
        if (*(int *)local_40.field0_0x0 != -1) {
          if (*(int *)local_40.field0_0x0 != 0) {
            LOCK();
            *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
            local_31 = *(int *)local_40.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1004ce04e;
          }
          QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
        }
LAB_1004ce04e:
        if (*(int *)local_70 != -1) {
          if (*(int *)local_70 != 0) {
            LOCK();
            *(int *)local_70 = *(int *)local_70 + -1;
            local_31 = *(int *)local_70 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1004ce07e;
          }
          QArrayData::deallocate(local_70,2,8);
        }
LAB_1004ce07e:
        if (*(int *)(local_68 + 4) != 0) {
          plVar8 = (long *)0x0;
          if (local_60[0x10] != 0) {
            plVar8 = *(long **)(local_60[0x10] + 0x10);
          }
          (**(code **)(*plVar8 + 0x18))(plVar8,&local_68);
        }
        QTextCodec::toUnicode((char *)&local_78);
        plVar8 = (long *)0x0;
        if (local_60[0x10] != 0) {
          plVar8 = *(long **)(local_60[0x10] + 0x10);
        }
        cVar2 = (**(code **)(*plVar8 + 0x30))(plVar8,&local_68);
        uVar3 = 0xf0000007;
        if (cVar2 != '\0') {
          uVar3 = FUN_1004e2270(local_60,&local_68,&local_78);
        }
        if (*(int *)local_78 != -1) {
          if (*(int *)local_78 != 0) {
            LOCK();
            *(int *)local_78 = *(int *)local_78 + -1;
            local_31 = *(int *)local_78 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1004ce126;
          }
          QArrayData::deallocate(local_78,2,8);
        }
LAB_1004ce126:
        if (*(int *)local_68 != -1) {
          if (*(int *)local_68 != 0) {
            LOCK();
            *(int *)local_68 = *(int *)local_68 + -1;
            local_31 = *(int *)local_68 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1004ce156;
          }
          QArrayData::deallocate(local_68,2,8);
        }
      }
LAB_1004ce156:
      LOCK();
      plVar8 = local_60 + 1;
      lVar4 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)(*local_60 + 0x10))(local_60);
      }
    }
  }
  if (*(int *)pQVar7 != -1) {
    if (*(int *)pQVar7 != 0) {
      LOCK();
      *(int *)pQVar7 = *(int *)pQVar7 + -1;
      local_31 = *(int *)pQVar7 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004ce1a1;
    }
    QArrayData::deallocate(pQVar7,1,8);
  }
LAB_1004ce1a1:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) {
        return uVar3;
      }
    }
    QArrayData::deallocate(local_50,1,8);
  }
  return uVar3;
}


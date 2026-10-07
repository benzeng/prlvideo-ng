
undefined4 FUN_1004cc1c0(long *param_1,long param_2)

{
  uint uVar1;
  char cVar2;
  undefined4 uVar3;
  long lVar4;
  QArrayData *pQVar5;
  QArrayData *pQVar6;
  long *plVar7;
  long lVar8;
  QArrayData *local_70;
  QArrayData *local_68;
  long *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QString local_40;
  undefined1 local_31;
  
  if (*(short *)(param_2 + 0x16) != 1) {
    return 0xf0000003;
  }
  if (*(short *)(param_2 + 0x14) != 0) {
    return 0xf0000003;
  }
  lVar4 = FUN_1002a6120(param_2,0,0);
  if (lVar4 == 0) {
    return 0xf0000003;
  }
  uVar1 = *(uint *)(lVar4 + 8);
  lVar8 = (long)(int)uVar1;
  if (0x1000 < lVar8) {
    return 0xf0000003;
  }
  if ((int)uVar1 < 1) {
    local_48 = (QArrayData *)PTR_shared_null_100ba20d0;
    pQVar5 = (QArrayData *)PTR_shared_null_100ba20d0;
  }
  else {
    pQVar5 = (QArrayData *)QArrayData::allocate(1,8,lVar8,0);
    local_48 = pQVar5;
    if (pQVar5 == (QArrayData *)0x0) {
      qBadAlloc();
    }
    *(uint *)(pQVar5 + 4) = uVar1;
    ___bzero(pQVar5 + *(long *)(pQVar5 + 0x10),lVar8);
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
      if ((bool)local_31) goto LAB_1004cc324;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1004cc324:
  FUN_1004cf920(&local_60,*param_1 + 0x48,&local_50);
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
          if ((bool)local_31) goto LAB_1004cc3d1;
        }
        QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
      }
LAB_1004cc3d1:
      if (*(int *)local_70 != -1) {
        if (*(int *)local_70 != 0) {
          LOCK();
          *(int *)local_70 = *(int *)local_70 + -1;
          local_31 = *(int *)local_70 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1004cc401;
        }
        QArrayData::deallocate(local_70,2,8);
      }
LAB_1004cc401:
      if (*(int *)(local_68 + 4) != 0) {
        plVar7 = (long *)0x0;
        if (local_60[0x10] != 0) {
          plVar7 = *(long **)(local_60[0x10] + 0x10);
        }
        (**(code **)(*plVar7 + 0x18))(plVar7,&local_68);
      }
      plVar7 = (long *)0x0;
      if (local_60[0x10] != 0) {
        plVar7 = *(long **)(local_60[0x10] + 0x10);
      }
      cVar2 = (**(code **)(*plVar7 + 0x38))(plVar7,&local_68);
      uVar3 = 0xf0000007;
      if (cVar2 != '\0') {
        uVar3 = FUN_1004e1610(local_60,&local_68);
      }
      if (*(int *)local_68 != -1) {
        if (*(int *)local_68 != 0) {
          LOCK();
          *(int *)local_68 = *(int *)local_68 + -1;
          local_31 = *(int *)local_68 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1004cc490;
        }
        QArrayData::deallocate(local_68,2,8);
      }
    }
LAB_1004cc490:
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
      if ((bool)local_31) goto LAB_1004cc4dc;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1004cc4dc:
  if (*(int *)pQVar5 != -1) {
    if (*(int *)pQVar5 != 0) {
      LOCK();
      *(int *)pQVar5 = *(int *)pQVar5 + -1;
      local_31 = *(int *)pQVar5 != 0;
      UNLOCK();
      if ((bool)local_31) {
        return uVar3;
      }
    }
    QArrayData::deallocate(pQVar5,1,8);
  }
  return uVar3;
}



undefined4 FUN_1004cc6b0(long *param_1,long param_2)

{
  int iVar1;
  int iVar2;
  char cVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  QArrayData *pQVar7;
  QArrayData *pQVar8;
  long *plVar9;
  long *plVar10;
  long *local_a0;
  QArrayData *local_98;
  QArrayData *local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  long *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QString local_48;
  QString local_40;
  undefined1 local_31;
  
  if (*(short *)(param_2 + 0x16) != 2) {
    return 0xf0000003;
  }
  if (*(short *)(param_2 + 0x14) != 0) {
    return 0xf0000003;
  }
  lVar5 = FUN_1002a6120(param_2,0,0);
  if (lVar5 == 0) {
    return 0xf0000003;
  }
  iVar1 = *(int *)(lVar5 + 8);
  if (0x1000 < (long)iVar1) {
    return 0xf0000003;
  }
  lVar6 = FUN_1002a6120(param_2,1,0);
  if (lVar6 == 0) {
    return 0xf0000003;
  }
  iVar2 = *(int *)(lVar6 + 8);
  if (0x1000 < (long)iVar2) {
    return 0xf0000003;
  }
  pQVar7 = (QArrayData *)QArrayData::allocate(1,8,0x1000,0);
  local_50 = pQVar7;
  if (pQVar7 == (QArrayData *)0x0) {
    qBadAlloc();
  }
  *(uint *)(pQVar7 + 4) = 0x1000;
  ___bzero(pQVar7 + *(long *)(pQVar7 + 0x10),0x1000);
  if (1 < *(uint *)pQVar7) {
    if ((*(uint *)(pQVar7 + 8) & 0x7fffffff) == 0) {
      pQVar7 = (QArrayData *)QArrayData::allocate(1,8,0,2);
      local_50 = pQVar7;
    }
    else {
      FUN_1004d6920(&local_50,*(uint *)(pQVar7 + 4),*(uint *)(pQVar7 + 8) & 0x7fffffff,0);
      pQVar7 = local_50;
    }
  }
  FUN_1002a5990(lVar5,0,pQVar7 + *(long *)(pQVar7 + 0x10),iVar1);
  if (iVar1 == 0x1000) {
    if (1 < *(uint *)pQVar7) {
      if ((*(uint *)(pQVar7 + 8) & 0x7fffffff) == 0) {
        pQVar7 = (QArrayData *)QArrayData::allocate(1,8,0,2);
        local_50 = pQVar7;
      }
      else {
        FUN_1004d6920(&local_50,*(uint *)(pQVar7 + 4),*(uint *)(pQVar7 + 8) & 0x7fffffff,0);
        pQVar7 = local_50;
      }
    }
    pQVar7[*(long *)(pQVar7 + 0x10) + 0xfff] = (QArrayData)0x0;
  }
  else {
    if (1 < *(uint *)pQVar7) {
      if ((*(uint *)(pQVar7 + 8) & 0x7fffffff) == 0) {
        pQVar7 = (QArrayData *)QArrayData::allocate(1,8,0,2);
        local_50 = pQVar7;
      }
      else {
        FUN_1004d6920(&local_50,*(uint *)(pQVar7 + 4),*(uint *)(pQVar7 + 8) & 0x7fffffff,0);
        pQVar7 = local_50;
      }
    }
    pQVar7[(long)iVar1 + *(long *)(pQVar7 + 0x10)] = (QArrayData)0x0;
  }
  pQVar7 = local_50;
  pQVar8 = local_50 + *(long *)(local_50 + 0x10);
  if (pQVar8 != (QArrayData *)0x0) {
    _strlen((char *)pQVar8);
  }
  QString::fromUtf8_helper((char *)&local_60,(int)pQVar8);
  QString::normalized(&local_58,&local_60,1,0);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004cc8f6;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_1004cc8f6:
  FUN_1004cf920(&local_68,*param_1 + 0x48,&local_58);
  plVar10 = local_68;
  if (local_68 == (long *)0x0) {
    uVar4 = 0xf0000012;
  }
  else {
    lVar5 = FUN_1004d93b0(local_68);
    if (lVar5 == 0) {
      uVar4 = 0xf000001c;
    }
    else {
      QTextCodec::toUnicode((char *)&local_78);
      QString::QString(&local_48,0x2f);
      QString::section(&local_70,&local_78,&local_48,2,0xffffffff,0);
      if (*(int *)local_48.field0_0x0 != -1) {
        if (*(int *)local_48.field0_0x0 != 0) {
          LOCK();
          *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
          local_31 = *(int *)local_48.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1004cc99c;
        }
        QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
      }
LAB_1004cc99c:
      if (*(int *)local_78 != -1) {
        if (*(int *)local_78 != 0) {
          LOCK();
          *(int *)local_78 = *(int *)local_78 + -1;
          local_31 = *(int *)local_78 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1004cc9cc;
        }
        QArrayData::deallocate(local_78,2,8);
      }
LAB_1004cc9cc:
      if (*(int *)(local_70 + 4) != 0) {
        plVar9 = (long *)0x0;
        if (plVar10[0x10] != 0) {
          plVar9 = *(long **)(plVar10[0x10] + 0x10);
        }
        (**(code **)(*plVar9 + 0x18))(plVar9,&local_70);
      }
      if (1 < *(uint *)pQVar7) {
        if ((*(uint *)(pQVar7 + 8) & 0x7fffffff) == 0) {
          pQVar7 = (QArrayData *)QArrayData::allocate(1,8,0,2);
          local_50 = pQVar7;
        }
        else {
          FUN_1004d6920(&local_50,*(uint *)(pQVar7 + 4),*(uint *)(pQVar7 + 8) & 0x7fffffff,0);
          pQVar7 = local_50;
        }
      }
      FUN_1002a5990(lVar6,0,pQVar7 + *(long *)(pQVar7 + 0x10),iVar2);
      if (iVar2 == 0x1000) {
        if (1 < *(uint *)pQVar7) {
          if ((*(uint *)(pQVar7 + 8) & 0x7fffffff) == 0) {
            pQVar7 = (QArrayData *)QArrayData::allocate(1,8,0,2);
            local_50 = pQVar7;
          }
          else {
            FUN_1004d6920(&local_50,*(uint *)(pQVar7 + 4),*(uint *)(pQVar7 + 8) & 0x7fffffff,0);
            pQVar7 = local_50;
          }
        }
        pQVar7[*(long *)(pQVar7 + 0x10) + 0xfff] = (QArrayData)0x0;
      }
      else {
        if (1 < *(uint *)pQVar7) {
          if ((*(uint *)(pQVar7 + 8) & 0x7fffffff) == 0) {
            pQVar7 = (QArrayData *)QArrayData::allocate(1,8,0,2);
            local_50 = pQVar7;
          }
          else {
            FUN_1004d6920(&local_50,*(uint *)(pQVar7 + 4),*(uint *)(pQVar7 + 8) & 0x7fffffff,0);
            pQVar7 = local_50;
          }
        }
        pQVar7[(long)iVar2 + *(long *)(pQVar7 + 0x10)] = (QArrayData)0x0;
      }
      pQVar7 = local_50;
      QTextCodec::toUnicode((char *)&local_88);
      QString::QString(&local_40,0x2f);
      QString::section(&local_80,&local_88,&local_40,2,0xffffffff,0);
      if (*(int *)local_40.field0_0x0 != -1) {
        if (*(int *)local_40.field0_0x0 != 0) {
          LOCK();
          *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
          local_31 = *(int *)local_40.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1004ccb8b;
        }
        QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
      }
LAB_1004ccb8b:
      if (*(int *)local_88 != -1) {
        if (*(int *)local_88 != 0) {
          LOCK();
          *(int *)local_88 = *(int *)local_88 + -1;
          local_31 = *(int *)local_88 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1004ccbbb;
        }
        QArrayData::deallocate(local_88,2,8);
      }
LAB_1004ccbbb:
      if (*(int *)(local_80 + 4) != 0) {
        plVar10 = (long *)0x0;
        if (local_68[0x10] != 0) {
          plVar10 = *(long **)(local_68[0x10] + 0x10);
        }
        (**(code **)(*plVar10 + 0x18))(plVar10,&local_80);
      }
      pQVar8 = pQVar7 + *(long *)(pQVar7 + 0x10);
      if (pQVar8 != (QArrayData *)0x0) {
        _strlen((char *)pQVar8);
      }
      QString::fromUtf8_helper((char *)&local_98,(int)pQVar8);
      QString::normalized(&local_90,&local_98,1,0);
      if (*(int *)local_98 != -1) {
        if (*(int *)local_98 != 0) {
          LOCK();
          *(int *)local_98 = *(int *)local_98 + -1;
          local_31 = *(int *)local_98 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1004ccc61;
        }
        QArrayData::deallocate(local_98,2,8);
      }
LAB_1004ccc61:
      FUN_1004cf920(&local_a0,*param_1 + 0x48,&local_90);
      uVar4 = 0xf0000023;
      if (local_a0 == local_68) {
        plVar10 = (long *)0x0;
        if (local_68[0x10] != 0) {
          plVar10 = *(long **)(local_68[0x10] + 0x10);
        }
        cVar3 = (**(code **)(*plVar10 + 0x38))(plVar10,&local_70);
        uVar4 = 0xf0000007;
        if (cVar3 != '\0') {
          plVar10 = (long *)0x0;
          if (local_68[0x10] != 0) {
            plVar10 = *(long **)(local_68[0x10] + 0x10);
          }
          cVar3 = (**(code **)(*plVar10 + 0x30))(plVar10,&local_80);
          if (cVar3 != '\0') {
            uVar4 = FUN_1004e1ce0(local_68,&local_70,&local_80);
          }
        }
      }
      if (local_a0 != (long *)0x0) {
        LOCK();
        plVar10 = local_a0 + 1;
        lVar5 = *plVar10;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)(*local_a0 + 0x10))(local_a0);
        }
      }
      if (*(int *)local_90 != -1) {
        if (*(int *)local_90 != 0) {
          LOCK();
          *(int *)local_90 = *(int *)local_90 + -1;
          local_31 = *(int *)local_90 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1004ccd46;
        }
        QArrayData::deallocate(local_90,2,8);
      }
LAB_1004ccd46:
      if (*(int *)local_80 != -1) {
        if (*(int *)local_80 != 0) {
          LOCK();
          *(int *)local_80 = *(int *)local_80 + -1;
          local_31 = *(int *)local_80 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1004ccd76;
        }
        QArrayData::deallocate(local_80,2,8);
      }
LAB_1004ccd76:
      if (*(int *)local_70 != -1) {
        if (*(int *)local_70 != 0) {
          LOCK();
          *(int *)local_70 = *(int *)local_70 + -1;
          local_31 = *(int *)local_70 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1004ccda6;
        }
        QArrayData::deallocate(local_70,2,8);
      }
LAB_1004ccda6:
      plVar10 = local_68;
      if (local_68 == (long *)0x0) goto LAB_1004ccdc8;
    }
    LOCK();
    plVar9 = plVar10 + 1;
    lVar5 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
    }
  }
LAB_1004ccdc8:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004ccdf8;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1004ccdf8:
  if (*(int *)pQVar7 != -1) {
    if (*(int *)pQVar7 != 0) {
      LOCK();
      *(int *)pQVar7 = *(int *)pQVar7 + -1;
      local_31 = *(int *)pQVar7 != 0;
      UNLOCK();
      if ((bool)local_31) {
        return uVar4;
      }
    }
    QArrayData::deallocate(pQVar7,1,8);
  }
  return uVar4;
}


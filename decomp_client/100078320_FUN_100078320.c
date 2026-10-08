
void FUN_100078320(long param_1,QString *param_2,QWidget *param_3)

{
  long *plVar1;
  int *piVar2;
  long lVar3;
  ulong uVar4;
  char cVar5;
  uint uVar6;
  long *plVar7;
  long *plVar8;
  undefined8 uVar9;
  uint uVar10;
  void *aBlock;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  bool bVar15;
  int *local_78;
  int *local_70;
  int *local_68;
  uint local_60;
  QTypedArrayData<unsigned_short> *local_58;
  QArrayData *local_50;
  QTypedArrayData<unsigned_short> *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  plVar1 = (long *)(param_1 + 0x28);
  plVar7 = *(long **)(param_1 + 0x28);
  uVar10 = *(uint *)(plVar7 + 4);
  if (uVar10 == 0) {
LAB_1000783b7:
    FUN_100df99c0("[APP_RESUME]","prl_client_app",0,"ASSERT( %s ) occured in %s:%d [%s]",
                  "m_handlers.contains( restoreId )","AppResume/CAppResumeManager.mm",0x13c,
                  "callCompletionHandler");
    plVar8 = (long *)*plVar1;
  }
  else {
    uVar6 = qHash(param_2,*(uint *)((long)plVar7 + 0x24));
    uVar4 = (ulong)uVar6 % (ulong)uVar10;
    plVar12 = *(long **)(plVar7[1] + uVar4 * 8);
    if (plVar12 == plVar7) goto LAB_1000783b7;
    plVar11 = (long *)(plVar7[1] + uVar4 * 8);
    do {
      plVar8 = plVar7;
      if (*(uint *)(plVar12 + 1) == uVar6) {
        cVar5 = operator==(param_2,(QString *)(plVar12 + 2));
        plVar7 = (long *)*plVar11;
        plVar12 = plVar7;
        plVar8 = (long *)*plVar1;
        if (cVar5 != '\0') break;
      }
      plVar7 = plVar8;
      plVar11 = plVar12;
      plVar12 = (long *)*plVar11;
      plVar8 = plVar7;
    } while (plVar12 != plVar7);
    if (plVar7 == plVar8) goto LAB_1000783b7;
  }
  uVar10 = *(uint *)(plVar8 + 4);
  if (uVar10 == 0) {
    return;
  }
  uVar6 = qHash(param_2,*(uint *)((long)plVar8 + 0x24));
  uVar4 = (ulong)uVar6 % (ulong)uVar10;
  plVar7 = *(long **)(plVar8[1] + uVar4 * 8);
  if (plVar7 == plVar8) {
    return;
  }
  plVar12 = plVar8;
  plVar11 = (long *)(plVar8[1] + uVar4 * 8);
  do {
    plVar13 = plVar7;
    plVar14 = plVar8;
    if (*(uint *)(plVar7 + 1) == uVar6) {
      cVar5 = operator==(param_2,(QString *)(plVar7 + 2));
      plVar8 = (long *)*plVar11;
      plVar12 = (long *)*plVar1;
      plVar13 = plVar8;
      plVar14 = plVar12;
      if (cVar5 != '\0') break;
    }
    plVar8 = plVar14;
    plVar7 = (long *)*plVar13;
    plVar14 = plVar8;
    plVar11 = plVar13;
  } while (plVar7 != plVar8);
  if (plVar8 == plVar14) {
    return;
  }
  aBlock = (void *)0x0;
  if (*(int *)((long)plVar14 + 0x14) != 0) {
    uVar10 = *(uint *)(plVar14 + 4);
    if (uVar10 != 0) {
      uVar6 = qHash(param_2,*(uint *)((long)plVar14 + 0x24));
      uVar4 = (ulong)uVar6 % (ulong)uVar10;
      plVar7 = *(long **)(plVar14[1] + uVar4 * 8);
      plVar12 = plVar14;
      if (plVar7 != plVar14) {
        plVar11 = (long *)(plVar14[1] + uVar4 * 8);
        do {
          if (*(uint *)(plVar7 + 1) == uVar6) {
            cVar5 = operator==(param_2,(QString *)(plVar7 + 2));
            plVar14 = (long *)*plVar1;
            plVar7 = (long *)*plVar11;
            plVar12 = (long *)*plVar11;
            if (cVar5 != '\0') break;
          }
          plVar11 = plVar7;
          plVar7 = (long *)*plVar11;
          plVar12 = plVar14;
        } while (plVar7 != plVar14);
      }
    }
    aBlock = (void *)0x0;
    if (plVar12 != plVar14) {
      aBlock = (void *)plVar12[3];
    }
  }
  if (2 < DAT_10230ffd0) {
    local_48 = param_2->field0_0x0;
    if (1 < *(int *)local_48 + 1U) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + 1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
    }
    QString::toLocal8Bit();
    FUN_100df99c0("[APP_RESUME]","prl_client_app",3,"Calling completion handler for id: %s",
                  local_40 + *(long *)(local_40 + 0x10));
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        local_31 = *(int *)local_40 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100078583;
      }
      QArrayData::deallocate(local_40,1,8);
    }
LAB_100078583:
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        local_31 = *(int *)local_48 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1000785b3;
      }
      QArrayData::deallocate((QArrayData *)local_48,2,8);
    }
  }
LAB_1000785b3:
  if (param_3 == (QWidget *)0x0) {
    uVar9 = 0;
  }
  else {
    uVar9 = MacUtils::getWindowRef(param_3);
  }
  (**(code **)((long)aBlock + 0x10))(aBlock,uVar9,0);
  if (2 < DAT_10230ffd0) {
    local_58 = param_2->field0_0x0;
    if (1 < *(int *)local_58 + 1U) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + 1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
    }
    QString::toLocal8Bit();
    FUN_100df99c0("[APP_RESUME]","prl_client_app",3,"Removing completion handler for id %s",
                  local_50 + *(long *)(local_50 + 0x10));
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        local_31 = *(int *)local_50 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100078665;
      }
      QArrayData::deallocate(local_50,1,8);
    }
LAB_100078665:
    if (*(int *)local_58 != -1) {
      if (*(int *)local_58 != 0) {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + -1;
        local_31 = *(int *)local_58 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100078695;
      }
      QArrayData::deallocate((QArrayData *)local_58,2,8);
    }
  }
LAB_100078695:
  FUN_10007b350(plVar1,param_2);
  __Block_release(aBlock);
  if (*(int *)(*plVar1 + 0x14) != 0) {
    FUN_1000797c0(param_1);
    return;
  }
  if (2 < DAT_10230ffd0) {
    FUN_100df99c0("[APP_RESUME]","prl_client_app",3,"The last handler removed");
  }
  FUN_10006b440(&local_78,param_1 + 0x30);
  local_70 = local_78 + (long)local_78[2] * 2 + 4;
  local_68 = local_78 + (long)local_78[3] * 2 + 4;
  local_60 = 1;
  if (local_78[2] != local_78[3]) {
    do {
      piVar2 = (int *)**(undefined8 **)local_70;
      lVar3 = (*(undefined8 **)local_70)[1];
      if (piVar2 != (int *)0x0) {
        LOCK();
        *piVar2 = *piVar2 + 1;
        local_31 = *piVar2 != 0;
        UNLOCK();
      }
      if (local_60 != 0) {
        if (((piVar2 != (int *)0x0) && (lVar3 != 0)) && (piVar2[1] != 0)) {
          FUN_100079a70(DAT_100e11050);
        }
        local_60 = 0;
      }
      if (piVar2 != (int *)0x0) {
        LOCK();
        *piVar2 = *piVar2 + -1;
        local_31 = *piVar2 != 0;
        UNLOCK();
        if (!(bool)local_31) {
          operator_delete(piVar2);
        }
      }
      local_70 = local_70 + 2;
      uVar10 = local_60 ^ 1;
      bVar15 = local_60 != 1;
      local_60 = uVar10;
    } while ((bVar15) && (local_70 != local_68));
  }
  if (*local_78 != -1) {
    if (*local_78 != 0) {
      LOCK();
      *local_78 = *local_78 + -1;
      local_31 = *local_78 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000787da;
    }
    FUN_10006b5d0(&local_78,local_78);
  }
LAB_1000787da:
  FUN_10007b5a0(param_1 + 0x30);
  if (*(char *)(param_1 + 0x20) != '\0') {
    *(undefined1 *)(param_1 + 0x20) = 0;
    FUN_1008666d0(*(undefined8 *)(param_1 + 0x10));
  }
  return;
}



void FUN_100231550(long *param_1)

{
  long *plVar1;
  void **ppvVar2;
  ulong uVar3;
  code *pcVar4;
  char cVar5;
  byte bVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 uVar11;
  uint *puVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  int iVar16;
  QArrayData *pQVar17;
  undefined8 in_stack_ffffffffffffff08;
  Connection local_e0 [8];
  QArrayData *local_d8;
  QArrayData *local_d0;
  QArrayData *local_c8;
  QArrayData *local_c0;
  undefined8 local_b8;
  undefined2 local_b0;
  QArrayData *local_a8;
  QArrayData *local_a0;
  QArrayData *local_98;
  QArrayData *local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  uVar11 = (undefined4)((ulong)in_stack_ffffffffffffff08 >> 0x20);
  lVar14 = param_1[3];
  puVar12 = (uint *)param_1[9];
  plVar1 = param_1 + 3;
  if (puVar12[3] != puVar12[2]) {
    if (((lVar14 == 0) || (*(int *)(lVar14 + 4) == 0)) || (param_1[4] == 0)) goto LAB_1002319d7;
    ppvVar2 = (void **)(param_1 + 9);
    uVar3 = **(ulong **)(puVar12 + (long)(int)puVar12[2] * 2 + 4);
    param_1[10] = uVar3;
    if (1 < *puVar12) {
      FUN_100239890(ppvVar2,puVar12[1]);
      puVar12 = *ppvVar2;
      if (1 < *puVar12) {
        FUN_100239890(ppvVar2,puVar12[1]);
        puVar12 = *ppvVar2;
      }
    }
    if (*(void **)(puVar12 + (long)(int)puVar12[2] * 2 + 4) != (void *)0x0) {
      operator_delete(*(void **)(puVar12 + (long)(int)puVar12[2] * 2 + 4));
    }
    uVar13 = uVar3 >> 0x20;
    QListData::erase(ppvVar2);
    lVar14 = 0;
    if ((*plVar1 != 0) && (lVar14 = 0, *(int *)(*plVar1 + 4) != 0)) {
      lVar14 = param_1[4];
    }
    lVar14 = FUN_1003192a0(lVar14,uVar3 & 0xffffffff);
    if (lVar14 == 0) {
      lVar14 = 0;
      if ((*plVar1 != 0) && (lVar14 = 0, *(int *)(*plVar1 + 4) != 0)) {
        lVar14 = param_1[4];
      }
      FUN_1003193e0(&local_58,lVar14);
      QString::toUtf8();
      pQVar17 = local_50 + *(long *)(local_50 + 0x10);
      EnumUtils::enumToString(&local_68,uVar13,1);
      QString::toUtf8();
      FUN_100df99c0("","prl_client_app",0,
                    "Cannot switch VM [%s] display #%d to %s mode. Display object does not exist",
                    pQVar17,uVar3 & 0xffffffff,local_60 + *(long *)(local_60 + 0x10));
      if (*(int *)local_60 != -1) {
        if (*(int *)local_60 != 0) {
          LOCK();
          *(int *)local_60 = *(int *)local_60 + -1;
          local_31 = *(int *)local_60 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100231ae3;
        }
        QArrayData::deallocate(local_60,1,8);
      }
LAB_100231ae3:
      if (*(int *)local_68 != -1) {
        if (*(int *)local_68 != 0) {
          LOCK();
          *(int *)local_68 = *(int *)local_68 + -1;
          local_31 = *(int *)local_68 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100231b13;
        }
        QArrayData::deallocate(local_68,2,8);
      }
LAB_100231b13:
      if (*(int *)local_50 != -1) {
        if (*(int *)local_50 != 0) {
          LOCK();
          *(int *)local_50 = *(int *)local_50 + -1;
          local_31 = *(int *)local_50 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100231b43;
        }
        QArrayData::deallocate(local_50,1,8);
      }
LAB_100231b43:
      if (*(int *)local_58 == -1) goto LAB_100231ec3;
      local_98 = local_58;
      if (*(int *)local_58 != 0) {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + -1;
        iVar10 = *(int *)local_58;
        UNLOCK();
        goto joined_r0x000100231b66;
      }
    }
    else {
      if (1 < DAT_10230ffd0) {
        lVar15 = 0;
        if ((*plVar1 != 0) && (lVar15 = 0, *(int *)(*plVar1 + 4) != 0)) {
          lVar15 = param_1[4];
        }
        FUN_1003193e0(&local_78,lVar15);
        QString::toLocal8Bit();
        pQVar17 = local_70 + *(long *)(local_70 + 0x10);
        EnumUtils::enumToString(&local_88,uVar13,1);
        QString::toLocal8Bit();
        FUN_100df99c0("","prl_client_app",2,"About to switch VM [%s] display #%d to %s mode",pQVar17
                      ,uVar3 & 0xffffffff,local_80 + *(long *)(local_80 + 0x10));
        if (*(int *)local_80 != -1) {
          if (*(int *)local_80 != 0) {
            LOCK();
            *(int *)local_80 = *(int *)local_80 + -1;
            local_31 = *(int *)local_80 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100231871;
          }
          QArrayData::deallocate(local_80,1,8);
        }
LAB_100231871:
        if (*(int *)local_88 != -1) {
          if (*(int *)local_88 != 0) {
            LOCK();
            *(int *)local_88 = *(int *)local_88 + -1;
            local_31 = *(int *)local_88 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1002318a1;
          }
          QArrayData::deallocate(local_88,2,8);
        }
LAB_1002318a1:
        if (*(int *)local_70 != -1) {
          if (*(int *)local_70 != 0) {
            LOCK();
            *(int *)local_70 = *(int *)local_70 + -1;
            local_31 = *(int *)local_70 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1002318d4;
          }
          QArrayData::deallocate(local_70,1,8);
        }
LAB_1002318d4:
        if (*(int *)local_78 != -1) {
          if (*(int *)local_78 != 0) {
            LOCK();
            *(int *)local_78 = *(int *)local_78 + -1;
            local_31 = *(int *)local_78 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100231904;
          }
          QArrayData::deallocate(local_78,2,8);
        }
      }
LAB_100231904:
      iVar10 = FUN_100325aa0(lVar14);
      iVar16 = (int)(uVar3 >> 0x20);
      if (((iVar16 == 0) || (iVar10 != iVar16)) || (*(char *)((long)param_1 + 0x36) != '\0')) {
        local_b0 = 0;
        local_b8 = 0;
        bVar6 = 1;
        if (*(char *)((long)param_1 + 0x35) == '\0') {
          bVar6 = FUN_100325f80(lVar14);
          bVar6 = bVar6 ^ 1;
        }
        local_b8 = CONCAT44((int)param_1[8],
                            CONCAT13((char)param_1[7],
                                     CONCAT12(*(undefined1 *)((long)param_1 + 0x37),
                                              CONCAT11(*(undefined1 *)((long)param_1 + 0x36),bVar6))
                                    ));
        local_b0 = CONCAT11(*(undefined1 *)((long)param_1 + 0x44),(undefined1)local_b0);
        lVar15 = FUN_1003244f0(lVar14,uVar13,&local_b8);
        if (lVar15 != 0) {
          cVar5 = CAbstractTask::isFinished();
          if (cVar5 != '\0') {
            pcVar4 = *(code **)(*param_1 + 0x118);
            uVar11 = CAbstractTask::getResult();
            (*pcVar4)(param_1,uVar11);
            return;
          }
          QObject::connect(local_e0,lVar15,"2taskFinished( PRL_RESULT )",param_1,
                           "1onVmDisplaySwitchTaskFinished( PRL_RESULT )",0);
          QMetaObject::Connection::~Connection(local_e0);
          return;
        }
        cVar5 = FUN_100325f80(lVar14);
        if (cVar5 == '\0') goto LAB_100231ec3;
        lVar14 = 0;
        if ((*plVar1 != 0) && (lVar14 = 0, *(int *)(*plVar1 + 4) != 0)) {
          lVar14 = param_1[4];
        }
        FUN_1003193e0(&local_c8,lVar14);
        QString::toLocal8Bit();
        pQVar17 = local_c0 + *(long *)(local_c0 + 0x10);
        EnumUtils::enumToString(&local_d8,uVar13,1);
        QString::toLocal8Bit();
        FUN_100df99c0("","prl_client_app",0,
                      "Cannot switch VM [%s] display #%d to %s mode. Task wasn\'t created.",pQVar17,
                      uVar3,local_d0 + *(long *)(local_d0 + 0x10));
        if (*(int *)local_d0 != -1) {
          if (*(int *)local_d0 != 0) {
            LOCK();
            *(int *)local_d0 = *(int *)local_d0 + -1;
            local_31 = *(int *)local_d0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100231c5f;
          }
          QArrayData::deallocate(local_d0,1,8);
        }
LAB_100231c5f:
        if (*(int *)local_d8 != -1) {
          if (*(int *)local_d8 != 0) {
            LOCK();
            *(int *)local_d8 = *(int *)local_d8 + -1;
            local_31 = *(int *)local_d8 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100231c95;
          }
          QArrayData::deallocate(local_d8,2,8);
        }
LAB_100231c95:
        if (*(int *)local_c0 != -1) {
          if (*(int *)local_c0 != 0) {
            LOCK();
            *(int *)local_c0 = *(int *)local_c0 + -1;
            local_31 = *(int *)local_c0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100231ccb;
          }
          QArrayData::deallocate(local_c0,1,8);
        }
LAB_100231ccb:
        if (*(int *)local_c8 != -1) {
          if (*(int *)local_c8 != 0) {
            LOCK();
            *(int *)local_c8 = *(int *)local_c8 + -1;
            local_31 = *(int *)local_c8 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100231d01;
          }
          QArrayData::deallocate(local_c8,2,8);
        }
LAB_100231d01:
        (**(code **)(*param_1 + 0x118))(param_1,0x80000009);
        return;
      }
      lVar14 = 0;
      if ((*plVar1 != 0) && (lVar14 = 0, *(int *)(*plVar1 + 4) != 0)) {
        lVar14 = param_1[4];
      }
      FUN_1003193e0(&local_98,lVar14);
      QString::toUtf8();
      pQVar17 = local_90 + *(long *)(local_90 + 0x10);
      EnumUtils::enumToString(&local_a8,uVar13,1);
      QString::toUtf8();
      FUN_100df99c0("","prl_client_app",0,"VM [%s] Display #%d is in %s mode already",pQVar17,
                    uVar3 & 0xffffffff,local_a0 + *(long *)(local_a0 + 0x10));
      if (*(int *)local_a0 != -1) {
        if (*(int *)local_a0 != 0) {
          LOCK();
          *(int *)local_a0 = *(int *)local_a0 + -1;
          local_31 = *(int *)local_a0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100231e21;
        }
        QArrayData::deallocate(local_a0,1,8);
      }
LAB_100231e21:
      if (*(int *)local_a8 != -1) {
        if (*(int *)local_a8 != 0) {
          LOCK();
          *(int *)local_a8 = *(int *)local_a8 + -1;
          local_31 = *(int *)local_a8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100231e57;
        }
        QArrayData::deallocate(local_a8,2,8);
      }
LAB_100231e57:
      if (*(int *)local_90 != -1) {
        if (*(int *)local_90 != 0) {
          LOCK();
          *(int *)local_90 = *(int *)local_90 + -1;
          local_31 = *(int *)local_90 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100231e8d;
        }
        QArrayData::deallocate(local_90,1,8);
      }
LAB_100231e8d:
      if (*(int *)local_98 == -1) goto LAB_100231ec3;
      if (*(int *)local_98 != 0) {
        LOCK();
        *(int *)local_98 = *(int *)local_98 + -1;
        iVar10 = *(int *)local_98;
        UNLOCK();
joined_r0x000100231b66:
        local_31 = iVar10 != 0;
        if ((bool)local_31) goto LAB_100231ec3;
      }
    }
    QArrayData::deallocate(local_98,2,8);
LAB_100231ec3:
    FUN_100231550(param_1);
    return;
  }
  if ((((lVar14 == 0) || (*(int *)(lVar14 + 4) == 0)) || (param_1[4] == 0)) ||
     (uVar8 = *(uint *)(param_1 + 0xb), uVar7 = FUN_100319450(), uVar7 <= uVar8)) {
LAB_1002319d7:
    if (((*plVar1 != 0) && (*(int *)(*plVar1 + 4) != 0)) && (param_1[4] != 0)) {
      iVar10 = 1;
      if ((int)param_1[8] != 0) {
        iVar10 = (int)param_1[8];
      }
      FUN_10031bf30(param_1[4],(int)param_1[5],iVar10);
    }
                    /* WARNING: Could not recover jumptable at 0x000100231a25. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0xb0))(param_1,0);
    return;
  }
  lVar14 = 0;
  if ((*plVar1 != 0) && (lVar14 = 0, *(int *)(*plVar1 + 4) != 0)) {
    lVar14 = param_1[4];
  }
  iVar10 = (int)param_1[5];
  cVar5 = FUN_10031bc70(lVar14,iVar10);
  iVar16 = 1;
  if (cVar5 != '\0') {
    uVar8 = FUN_100319450(lVar14);
    iVar16 = 3;
    if (uVar8 < 2) {
      iVar16 = (iVar10 == 0) + 1 + (uint)(iVar10 == 0);
    }
  }
  *(int *)(param_1 + 6) = iVar16;
  lVar14 = 0;
  if ((param_1[3] != 0) && (lVar14 = 0, *(int *)(param_1[3] + 4) != 0)) {
    lVar14 = param_1[4];
  }
  FUN_1003193e0(&local_48,lVar14);
  QString::toLocal8Bit();
  pQVar17 = local_40 + *(long *)(local_40 + 0x10);
  lVar15 = param_1[0xb];
  lVar14 = 0;
  if ((param_1[3] != 0) && (lVar14 = 0, *(int *)(param_1[3] + 4) != 0)) {
    lVar14 = param_1[4];
  }
  uVar9 = FUN_100319450(lVar14);
  FUN_100df99c0("","prl_client_app",0,
                "Available in guest displays count changed for Vm [%s], Prev count[%d], New count [%d]."
                ,pQVar17,(int)lVar15,CONCAT44(uVar11,uVar9));
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002316b3;
    }
    QArrayData::deallocate(local_40,1,8);
  }
LAB_1002316b3:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002316e3;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1002316e3:
  (**(code **)(*param_1 + 0xd0))(param_1);
  return;
}


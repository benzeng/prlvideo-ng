
int FUN_100318cf0(long param_1)

{
  long lVar1;
  int iVar2;
  ulong *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  QMapNodeBase *pQVar7;
  QArrayData *pQVar8;
  QMapNodeBase *local_70;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  if (2 < DAT_10230ffd0) {
    uVar4 = 0;
    if ((*(long *)(param_1 + 0x10) != 0) &&
       (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0)) {
      uVar4 = *(undefined8 *)(param_1 + 0x18);
    }
    FUN_100188480(&local_48,uVar4);
    QString::toLocal8Bit();
    pQVar8 = local_40 + *(long *)(local_40 + 0x10);
    uVar4 = 0;
    if ((*(long *)(param_1 + 0x10) != 0) &&
       (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0)) {
      uVar4 = *(undefined8 *)(param_1 + 0x18);
    }
    FUN_1001884b0(&local_58,uVar4);
    QString::toLocal8Bit();
    FUN_100df99c0("","prl_client_app",3,"this=%p, Connecting to VM %s, server %s",param_1,pQVar8,
                  local_50 + *(long *)(local_50 + 0x10));
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        local_31 = *(int *)local_50 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100318ddb;
      }
      QArrayData::deallocate(local_50,1,8);
    }
LAB_100318ddb:
    if (*(int *)local_58 != -1) {
      if (*(int *)local_58 != 0) {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + -1;
        local_31 = *(int *)local_58 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100318e0b;
      }
      QArrayData::deallocate(local_58,2,8);
    }
LAB_100318e0b:
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        local_31 = *(int *)local_40 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100318e3b;
      }
      QArrayData::deallocate(local_40,1,8);
    }
LAB_100318e3b:
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        local_31 = *(int *)local_48 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100318e6b;
      }
      QArrayData::deallocate(local_48,2,8);
    }
  }
LAB_100318e6b:
  iVar2 = FUN_100327ed0(*(undefined8 *)(param_1 + 0x60),0x7fffffff);
  if (-1 < iVar2) {
    FUN_100327ed0(*(undefined8 *)(param_1 + 0x68),0x7fffffff);
    FUN_100327ed0(*(undefined8 *)(param_1 + 0x78),0x7fffffff);
    FUN_100327ed0(*(undefined8 *)(param_1 + 0x80),0x7fffffff);
    FUN_100327ed0(*(undefined8 *)(param_1 + 0x88),0x7fffffff);
    FUN_100327ed0(*(undefined8 *)(param_1 + 0x90),0x7fffffff);
    local_70 = *(QMapNodeBase **)(param_1 + 0x48);
    if (*(int *)local_70 == 0) {
      local_70 = (QMapNodeBase *)QMapDataBase::createData();
      lVar1 = *(long *)(*(long *)(param_1 + 0x48) + 0x10);
      if (lVar1 != 0) {
        puVar3 = (ulong *)FUN_1000340b0(lVar1,local_70);
        *(ulong **)(local_70 + 0x10) = puVar3;
        *puVar3 = *puVar3 & 3 | (ulong)(local_70 + 8);
        QMapDataBase::recalcMostLeftNode();
      }
    }
    else if (*(int *)local_70 != -1) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + 1;
      local_31 = *(int *)local_70 != 0;
      UNLOCK();
      local_70 = *(QMapNodeBase **)(param_1 + 0x48);
    }
    if (*(long *)(local_70 + 0x10) != 0) {
      pQVar7 = *(QMapNodeBase **)(local_70 + 0x20);
      while (pQVar7 != local_70 + 8) {
        if ((((*(long *)(pQVar7 + 0x20) != 0) && (*(int *)(*(long *)(pQVar7 + 0x20) + 4) != 0)) &&
            (lVar1 = *(long *)(pQVar7 + 0x28), lVar1 != 0)) &&
           (lVar5 = FUN_100323e30(lVar1,0), lVar5 != 0)) {
          uVar4 = *(undefined8 *)(param_1 + 0x148);
          uVar6 = FUN_100323e30(lVar1,0);
          FUN_100379860(uVar6);
          FUN_10035b410(uVar4);
        }
        pQVar7 = (QMapNodeBase *)QMapNodeBase::nextNode();
      }
    }
    if (*(int *)local_70 == -1) {
      return 0;
    }
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_31 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_31) {
        return 0;
      }
    }
    if (*(long *)(local_70 + 0x10) != 0) {
      FUN_100034170();
      QMapDataBase::freeTree(local_70,(int)*(undefined8 *)(local_70 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)local_70);
    return 0;
  }
  pQVar8 = *(QArrayData **)(param_1 + 0x28);
  if (1 < *(int *)pQVar8 + 1U) {
    LOCK();
    *(int *)pQVar8 = *(int *)pQVar8 + 1;
    local_31 = *(int *)pQVar8 != 0;
    UNLOCK();
  }
  QString::toLocal8Bit();
  lVar1 = *(long *)(local_60 + 0x10);
  uVar4 = FUN_100dddcf0(iVar2);
  FUN_100df99c0("","prl_client_app",0,
                "(!)Error: failed to connect to a VM [%s]: failed to open IO gate. RC = %.8X [%s]",
                local_60 + lVar1,iVar2,uVar4);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100318fbf;
    }
    QArrayData::deallocate(local_60,1,8);
  }
LAB_100318fbf:
  if (*(int *)pQVar8 != -1) {
    if (*(int *)pQVar8 != 0) {
      LOCK();
      *(int *)pQVar8 = *(int *)pQVar8 + -1;
      UNLOCK();
      if (*(int *)pQVar8 != 0) {
        return iVar2;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(pQVar8,2,8);
  }
  return iVar2;
}


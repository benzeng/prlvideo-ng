
undefined8 *
FUN_1007444c0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  int iVar2;
  QMapNodeBase *pQVar3;
  QMapNodeBase *pQVar4;
  QArrayData *local_f0;
  QString local_e8;
  QArrayData *local_e0;
  QArrayData *local_d8;
  QArrayData *local_d0 [11];
  int *local_78;
  int *local_70;
  int *local_68;
  int *local_60;
  int *local_58;
  QMapNodeBase *local_50;
  QString local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  *param_1 = PTR_shared_null_1021e15e8;
  local_40 = (QArrayData *)QString::fromAscii_helper(".",1);
  iVar2 = QString::lastIndexOf(param_3,&local_40,0xffffffff,1);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10074454b;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_10074454b:
  if (iVar2 < 0) {
    return param_1;
  }
  QString::left((int)&local_48);
  FUN_100742f00(&local_50,param_2,param_4);
  if (1 < *(uint *)local_50) {
    FUN_1005c0260(&local_50);
  }
  if (*(long *)(local_50 + 0x10) == 0) {
    pQVar3 = local_50 + 8;
  }
  else {
    pQVar3 = *(QMapNodeBase **)(local_50 + 0x20);
  }
  pQVar4 = local_50;
  while( true ) {
    if (1 < *(uint *)pQVar4) {
      FUN_1005c0260(&local_50);
      pQVar4 = local_50;
    }
    if (pQVar3 == pQVar4 + 8) break;
    FUN_100283580(local_d0,pQVar3 + 0x20);
    local_78 = *(int **)(pQVar3 + 0x78);
    if (1 < *local_78 + 1U) {
      LOCK();
      *local_78 = *local_78 + 1;
      local_31 = *local_78 != 0;
      UNLOCK();
    }
    local_70 = *(int **)(pQVar3 + 0x80);
    if (1 < *local_70 + 1U) {
      LOCK();
      *local_70 = *local_70 + 1;
      local_31 = *local_70 != 0;
      UNLOCK();
    }
    local_68 = *(int **)(pQVar3 + 0x88);
    if (1 < *local_68 + 1U) {
      LOCK();
      *local_68 = *local_68 + 1;
      local_31 = *local_68 != 0;
      UNLOCK();
    }
    local_60 = *(int **)(pQVar3 + 0x90);
    if (1 < *local_60 + 1U) {
      LOCK();
      *local_60 = *local_60 + 1;
      local_31 = *local_60 != 0;
      UNLOCK();
    }
    local_58 = *(int **)(pQVar3 + 0x98);
    if (1 < *local_58 + 1U) {
      LOCK();
      *local_58 = *local_58 + 1;
      local_31 = *local_58 != 0;
      UNLOCK();
    }
    cVar1 = FUN_10073dd70(local_d0);
    if (cVar1 != '\0') {
      local_d8 = local_d0[0];
      if (1 < *(int *)local_d0[0] + 1U) {
        LOCK();
        *(int *)local_d0[0] = *(int *)local_d0[0] + 1;
        local_31 = *(int *)local_d0[0] != 0;
        UNLOCK();
      }
      local_e0 = (QArrayData *)QString::fromAscii_helper(".",1);
      iVar2 = QString::lastIndexOf(&local_d8,&local_e0,0xffffffff,1);
      if (*(int *)local_e0 != -1) {
        if (*(int *)local_e0 != 0) {
          LOCK();
          *(int *)local_e0 = *(int *)local_e0 + -1;
          local_31 = *(int *)local_e0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1007446fd;
        }
        QArrayData::deallocate(local_e0,2,8);
      }
LAB_1007446fd:
      if (-1 < iVar2) {
        QString::left((int)&local_e8);
        cVar1 = operator==(&local_48,&local_e8);
        if (*(int *)local_e8.field0_0x0 != -1) {
          if (*(int *)local_e8.field0_0x0 != 0) {
            LOCK();
            *(int *)local_e8.field0_0x0 = *(int *)local_e8.field0_0x0 + -1;
            local_31 = *(int *)local_e8.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100744765;
          }
          QArrayData::deallocate((QArrayData *)local_e8.field0_0x0,2,8);
        }
LAB_100744765:
        if (cVar1 != '\0') {
          FUN_10073e290(&local_f0,local_d0);
          FUN_1000341d0(param_1,&local_f0);
          if (*(int *)local_f0 != -1) {
            if (*(int *)local_f0 != 0) {
              LOCK();
              *(int *)local_f0 = *(int *)local_f0 + -1;
              local_31 = *(int *)local_f0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1007447d0;
            }
            QArrayData::deallocate(local_f0,2,8);
          }
        }
      }
LAB_1007447d0:
      if (*(int *)local_d8 != -1) {
        if (*(int *)local_d8 != 0) {
          LOCK();
          *(int *)local_d8 = *(int *)local_d8 + -1;
          local_31 = *(int *)local_d8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100744810;
        }
        QArrayData::deallocate(local_d8,2,8);
      }
    }
LAB_100744810:
    FUN_100252c80(&local_78);
    FUN_100252e70(local_d0);
    pQVar3 = (QMapNodeBase *)QMapNodeBase::nextNode();
  }
  if (*(int *)pQVar4 != -1) {
    if (*(int *)pQVar4 != 0) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + -1;
      local_31 = *(int *)pQVar4 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007448ec;
    }
    if (*(long *)(pQVar4 + 0x10) != 0) {
      FUN_1005bfc90();
      QMapDataBase::freeTree(pQVar4,(int)*(undefined8 *)(pQVar4 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)pQVar4);
  }
LAB_1007448ec:
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_48.field0_0x0 != 0) {
        return param_1;
      }
      local_31 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
  return param_1;
}


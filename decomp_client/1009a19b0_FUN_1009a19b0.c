
bool FUN_1009a19b0(undefined8 param_1,undefined8 param_2)

{
  QArrayData *pQVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  int iVar5;
  QArrayData *pQVar6;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  QByteArray::QByteArray((QByteArray *)&local_40,"\\/:*?\"<>|",-1);
  pQVar1 = local_40;
  if (1 < *(int *)local_40 + 1U) {
    LOCK();
    *(int *)local_40 = *(int *)local_40 + 1;
    local_31 = *(int *)local_40 != 0;
    UNLOCK();
  }
  lVar4 = (long)*(int *)(local_40 + 4);
  iVar5 = 2;
  if (lVar4 != 0) {
    pQVar6 = local_40 + *(long *)(local_40 + 0x10);
    do {
      iVar2 = QString::indexOf(param_2,(int)(char)*pQVar6,0,1);
      if (iVar2 != -1) {
        uVar3 = FUN_100998580(param_1);
        FUN_100998560(&local_48,param_1);
        QMetaObject::tr((char *)&local_50,PTR_staticMetaObject_1021e1520,
                        (int)PTR_s_The_name_you_specified_is_invali_10227e098);
        lVar4 = 0;
        QMetaObject::tr((char *)&local_60,PTR_staticMetaObject_1021e1520,
                        (int)PTR_s_Make_sure_that_it_does_not_conta_10227e0a0);
        pQVar6 = local_40 + *(long *)(local_40 + 0x10);
        if ((pQVar6 == (QArrayData *)0x0) || (*(uint *)(local_40 + 4) == 0)) goto LAB_1009a1acd;
        lVar4 = 0;
        goto LAB_1009a1ac0;
      }
      pQVar6 = pQVar6 + 1;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  goto LAB_1009a1bfb;
  while (lVar4 = lVar4 + 1, (uint)lVar4 < *(uint *)(local_40 + 4)) {
LAB_1009a1ac0:
    if (pQVar6[lVar4] == (QArrayData)0x0) break;
  }
LAB_1009a1acd:
  local_68 = (QArrayData *)QString::fromAscii_helper((char *)pQVar6,(int)lVar4);
  QString::arg(&local_58,&local_60,&local_68,0,0x20);
  FUN_100a08530(uVar3,&local_48,&local_50,&local_58);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1009a1b35;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1009a1b35:
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_31 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1009a1b65;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_1009a1b65:
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1009a1b95;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_1009a1b95:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1009a1bc5;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1009a1bc5:
  iVar5 = 1;
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1009a1bfb;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1009a1bfb:
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      local_31 = *(int *)pQVar1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1009a1c28;
    }
    QArrayData::deallocate(pQVar1,1,8);
  }
LAB_1009a1c28:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) goto LAB_1009a1c58;
      local_31 = 0;
    }
    QArrayData::deallocate(local_40,1,8);
  }
LAB_1009a1c58:
  return iVar5 == 2;
}



void FUN_100a74970(QString *param_1,QString *param_2)

{
  int iVar1;
  long lVar2;
  QArrayData *pQVar3;
  long lVar4;
  QTypedArrayData<unsigned_short> *pQVar5;
  QArrayData *local_168;
  QArrayData *local_158;
  QArrayData *local_150;
  QTypedArrayData<unsigned_short> *local_148;
  undefined1 local_139;
  char local_138 [264];
  long local_30;
  
  lVar2 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_30 = lVar2;
  lVar4 = FUN_100c63310();
  QString::operator=(param_1,param_2);
  if (lVar4 == 0) {
    pQVar5 = param_2->field0_0x0;
    if (1 < *(int *)pQVar5 + 1U) {
      LOCK();
      *(int *)pQVar5 = *(int *)pQVar5 + 1;
      local_139 = *(int *)pQVar5 != 0;
      UNLOCK();
    }
    QString::toLocal8Bit();
    FUN_100df99c0("","IOCommunication",0,"%s",local_168 + *(long *)(local_168 + 0x10));
    if (*(int *)local_168 != -1) {
      if (*(int *)local_168 != 0) {
        LOCK();
        *(int *)local_168 = *(int *)local_168 + -1;
        local_139 = *(int *)local_168 != 0;
        UNLOCK();
        if ((bool)local_139) goto LAB_100a74c07;
      }
      QArrayData::deallocate(local_168,1,8);
    }
LAB_100a74c07:
    if (*(int *)pQVar5 == -1) goto LAB_100a74c43;
    if (*(int *)pQVar5 != 0) {
      LOCK();
      *(int *)pQVar5 = *(int *)pQVar5 + -1;
      iVar1 = *(int *)pQVar5;
      UNLOCK();
      goto joined_r0x000100a74c2b;
    }
  }
  else {
    FUN_100c63950(lVar4,local_138,0x100);
    pQVar3 = (QArrayData *)param_2->field0_0x0;
    if (1 < *(int *)pQVar3 + 1U) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + 1;
      local_139 = *(int *)pQVar3 != 0;
      UNLOCK();
    }
    QString::toLocal8Bit();
    FUN_100df99c0("","IOCommunication",0,"%s. %s",local_158 + *(long *)(local_158 + 0x10),local_138)
    ;
    if (*(int *)local_158 != -1) {
      if (*(int *)local_158 != 0) {
        LOCK();
        *(int *)local_158 = *(int *)local_158 + -1;
        local_139 = *(int *)local_158 != 0;
        UNLOCK();
        if ((bool)local_139) goto LAB_100a74a67;
      }
      QArrayData::deallocate(local_158,1,8);
    }
LAB_100a74a67:
    if (*(int *)pQVar3 != -1) {
      if (*(int *)pQVar3 != 0) {
        LOCK();
        *(int *)pQVar3 = *(int *)pQVar3 + -1;
        local_139 = *(int *)pQVar3 != 0;
        UNLOCK();
        if ((bool)local_139) goto LAB_100a74aa3;
      }
      QArrayData::deallocate(pQVar3,2,8);
    }
LAB_100a74aa3:
    QString::fromUtf8_helper((char *)&local_150,0x1e31af0);
    QString::append(param_1);
    if (*(int *)local_150 != -1) {
      if (*(int *)local_150 != 0) {
        LOCK();
        *(int *)local_150 = *(int *)local_150 + -1;
        local_139 = *(int *)local_150 != 0;
        UNLOCK();
        if ((bool)local_139) goto LAB_100a74b05;
      }
      QArrayData::deallocate(local_150,2,8);
    }
LAB_100a74b05:
    _strlen(local_138);
    QString::fromUtf8_helper((char *)&local_148,(int)local_138);
    QString::append(param_1);
    if (*(int *)local_148 == -1) goto LAB_100a74c43;
    pQVar5 = local_148;
    if (*(int *)local_148 != 0) {
      LOCK();
      *(int *)local_148 = *(int *)local_148 + -1;
      iVar1 = *(int *)local_148;
      UNLOCK();
joined_r0x000100a74c2b:
      local_139 = iVar1 != 0;
      if ((bool)local_139) goto LAB_100a74c43;
    }
  }
  QArrayData::deallocate((QArrayData *)pQVar5,2,8);
LAB_100a74c43:
  if (lVar2 == local_30) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}


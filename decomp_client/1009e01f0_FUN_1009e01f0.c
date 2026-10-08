
undefined8 * FUN_1009e01f0(undefined8 *param_1,int param_2,long *param_3)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  QArrayData *pQVar5;
  QArrayData *local_140;
  undefined4 local_134;
  QArrayData *local_130;
  QArrayData *local_128;
  undefined8 local_120;
  QArrayData *local_118;
  QArrayData *local_110;
  QArrayData *local_108;
  QArrayData *local_100;
  undefined1 local_f1;
  undefined1 local_f0 [168];
  undefined8 local_48;
  undefined8 uStack_40;
  long local_30;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_30 = lVar1;
  if (*(int *)(*param_3 + 4) == 0) {
    *param_1 = PTR_shared_null_1021e1288;
    goto LAB_1009e0636;
  }
  local_100 = (QArrayData *)PTR_shared_null_1021e1288;
  local_48 = 0;
  uStack_40 = 0;
  QString::toUtf8();
  if (*(uint *)(local_110 + 4) < 0x11) {
    QString::toUtf8();
  }
  else {
    QString::mid((int)&local_118,param_2);
    QString::toUtf8();
    if (*(int *)local_118 != -1) {
      if (*(int *)local_118 != 0) {
        LOCK();
        *(int *)local_118 = *(int *)local_118 + -1;
        local_f1 = *(int *)local_118 != 0;
        UNLOCK();
        if ((bool)local_f1) goto LAB_1009e02f9;
      }
      QArrayData::deallocate(local_118,2,8);
    }
  }
LAB_1009e02f9:
  if (*(int *)local_110 != -1) {
    if (*(int *)local_110 != 0) {
      LOCK();
      *(int *)local_110 = *(int *)local_110 + -1;
      local_f1 = *(int *)local_110 != 0;
      UNLOCK();
      if ((bool)local_f1) goto LAB_1009e0335;
    }
    QArrayData::deallocate(local_110,1,8);
  }
LAB_1009e0335:
  _memcpy(&local_48,local_108 + *(long *)(local_108 + 0x10),(long)*(int *)(local_108 + 4));
  local_120 = 0x3430323135303032;
  FUN_100c66060(local_f0);
  uVar3 = FUN_100c67e50();
  FUN_100c66e10(local_f0,uVar3,&local_48,&local_120);
  QString::toLatin1();
  QByteArray::fromBase64((QByteArray *)&local_128);
  if (*(int *)local_130 != -1) {
    if (*(int *)local_130 != 0) {
      LOCK();
      *(int *)local_130 = *(int *)local_130 + -1;
      local_f1 = *(int *)local_130 != 0;
      UNLOCK();
      if ((bool)local_f1) goto LAB_1009e03ea;
    }
    QArrayData::deallocate(local_130,1,8);
  }
LAB_1009e03ea:
  FUN_100c6fb80(local_f0);
  QByteArray::resize((int)&local_100);
  local_134 = 0;
  if ((1 < *(uint *)local_100) || (*(long *)(local_100 + 0x10) != 0x18)) {
    QByteArray::reallocData
              (&local_100,*(uint *)(local_100 + 4) + 1,*(uint *)(local_100 + 8) >> 0x1f);
  }
  pQVar5 = local_100 + *(long *)(local_100 + 0x10);
  if ((1 < *(uint *)local_128) || (*(long *)(local_128 + 0x10) != 0x18)) {
    QByteArray::reallocData
              (&local_128,*(uint *)(local_128 + 4) + 1,*(uint *)(local_128 + 8) >> 0x1f);
  }
  iVar2 = FUN_100c66830(local_f0,pQVar5,&local_134,local_128 + *(long *)(local_128 + 0x10),
                        *(uint *)(local_128 + 4));
  if (iVar2 == 1) {
    QByteArray::resize((int)&local_100);
  }
  else {
    FUN_100df99c0("","prl_bf_wrapper",0,"Failed to decrypt data");
  }
  if (*(int *)local_128 != -1) {
    if (*(int *)local_128 != 0) {
      LOCK();
      *(int *)local_128 = *(int *)local_128 + -1;
      local_f1 = *(int *)local_128 != 0;
      UNLOCK();
      if ((bool)local_f1) goto LAB_1009e0514;
    }
    QArrayData::deallocate(local_128,1,8);
  }
LAB_1009e0514:
  FUN_100c66520(local_f0);
  pQVar5 = local_100 + *(long *)(local_100 + 0x10);
  if ((pQVar5 != (QArrayData *)0x0) && (*(uint *)(local_100 + 4) != 0)) {
    lVar4 = 0;
    do {
      if (pQVar5[lVar4] == (QArrayData)0x0) break;
      lVar4 = lVar4 + 1;
    } while ((uint)lVar4 < *(uint *)(local_100 + 4));
    if ((int)lVar4 == -1) {
      _strlen((char *)pQVar5);
    }
  }
  QString::fromUtf8_helper((char *)&local_140,(int)pQVar5);
  QString::normalized(param_1,&local_140,1,0);
  if (*(int *)local_140 != -1) {
    if (*(int *)local_140 != 0) {
      LOCK();
      *(int *)local_140 = *(int *)local_140 + -1;
      local_f1 = *(int *)local_140 != 0;
      UNLOCK();
      if ((bool)local_f1) goto LAB_1009e05be;
    }
    QArrayData::deallocate(local_140,2,8);
  }
LAB_1009e05be:
  if (*(int *)local_108 != -1) {
    if (*(int *)local_108 != 0) {
      LOCK();
      *(int *)local_108 = *(int *)local_108 + -1;
      local_f1 = *(int *)local_108 != 0;
      UNLOCK();
      if ((bool)local_f1) goto LAB_1009e05fa;
    }
    QArrayData::deallocate(local_108,1,8);
  }
LAB_1009e05fa:
  if (*(int *)local_100 != -1) {
    if (*(int *)local_100 != 0) {
      LOCK();
      *(int *)local_100 = *(int *)local_100 + -1;
      local_f1 = *(int *)local_100 != 0;
      UNLOCK();
      if ((bool)local_f1) goto LAB_1009e0636;
    }
    QArrayData::deallocate(local_100,1,8);
  }
LAB_1009e0636:
  if (lVar1 != local_30) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return param_1;
}


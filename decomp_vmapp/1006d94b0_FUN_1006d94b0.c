
QString * FUN_1006d94b0(QString *param_1)

{
  undefined4 uVar1;
  QTypedArrayData<unsigned_short> *pQVar2;
  uint uVar3;
  QArrayData *local_60;
  QArrayData *local_58;
  QString local_50;
  QString local_48;
  QString local_40;
  QString local_38;
  QString local_30;
  QString local_28;
  QString local_20;
  undefined1 local_11;
  
  uVar1 = FUN_1006d65a0();
  local_48.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
  switch(uVar1) {
  case 0:
    QString::fromUtf8_helper((char *)&local_38,0xae8bc0);
    QString::operator=(&local_48,&local_38);
    if (*(int *)local_38.field0_0x0 != -1) {
      if (*(int *)local_38.field0_0x0 != 0) {
        LOCK();
        *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
        local_11 = *(int *)local_38.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_11) break;
      }
      QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
    }
    break;
  case 1:
  case 5:
    QString::fromUtf8_helper((char *)&local_40,0xa37e7b);
    QString::operator=(&local_48,&local_40);
    if (*(int *)local_40.field0_0x0 != -1) {
      if (*(int *)local_40.field0_0x0 != 0) {
        LOCK();
        *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
        local_11 = *(int *)local_40.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_11) break;
      }
      QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
    }
    break;
  case 2:
    QString::fromUtf8_helper((char *)&local_30,0xae8bc7);
    QString::operator=(&local_48,&local_30);
    if (*(int *)local_30.field0_0x0 != -1) {
      if (*(int *)local_30.field0_0x0 != 0) {
        LOCK();
        *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
        local_11 = *(int *)local_30.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_11) break;
      }
      QArrayData::deallocate((QArrayData *)local_30.field0_0x0,2,8);
    }
    break;
  case 3:
    QString::fromUtf8_helper((char *)&local_28,0xae8bd3);
    QString::operator=(&local_48,&local_28);
    if (*(int *)local_28.field0_0x0 != -1) {
      if (*(int *)local_28.field0_0x0 != 0) {
        LOCK();
        *(int *)local_28.field0_0x0 = *(int *)local_28.field0_0x0 + -1;
        local_11 = *(int *)local_28.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_11) break;
      }
      QArrayData::deallocate((QArrayData *)local_28.field0_0x0,2,8);
    }
    break;
  default:
    FUN_1008e3970("","cmn_utils",0,"ASSERT( %s ) occured in %s:%d [%s]","false","ParallelsDirs.cpp",
                  0x159,"getConfigScriptsDir");
    pQVar2 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("",0);
    param_1->field0_0x0 = pQVar2;
    goto LAB_1006d9835;
  case 6:
    QString::fromUtf8_helper((char *)&local_20,0xaec1ef);
    QString::operator=(&local_48,&local_20);
    if (*(int *)local_20.field0_0x0 != -1) {
      if (*(int *)local_20.field0_0x0 != 0) {
        LOCK();
        *(int *)local_20.field0_0x0 = *(int *)local_20.field0_0x0 + -1;
        local_11 = *(int *)local_20.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_11) break;
      }
      QArrayData::deallocate((QArrayData *)local_20.field0_0x0,2,8);
    }
  }
  FUN_1006d9b50(&local_60);
  local_58 = local_60;
  if (1 < *(uint *)local_60 + 1) {
    LOCK();
    *(uint *)local_60 = *(uint *)local_60 + 1;
    local_11 = *(uint *)local_60 != 0;
    UNLOCK();
  }
  uVar3 = *(uint *)(local_60 + 4);
  if ((1 < *(uint *)local_60) || ((*(uint *)(local_60 + 8) & 0x7fffffff) < uVar3 + 2)) {
    QString::reallocData((uint)&local_58,SUB41(uVar3 + 2,0));
    uVar3 = *(uint *)(local_58 + 4);
  }
  *(uint *)(local_58 + 4) = uVar3 + 1;
  *(undefined2 *)(local_58 + (long)(int)uVar3 * 2 + *(long *)(local_58 + 0x10)) = 0x2f;
  *(undefined2 *)(local_58 + (long)(int)*(uint *)(local_58 + 4) * 2 + *(long *)(local_58 + 0x10)) =
       0;
  if (1 < *(uint *)local_58 + 1) {
    LOCK();
    *(uint *)local_58 = *(uint *)local_58 + 1;
    local_11 = *(uint *)local_58 != 0;
    UNLOCK();
  }
  local_50.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_58;
  QString::append(&local_50);
  QDir::toNativeSeparators(param_1);
  if (*(int *)local_50.field0_0x0 != -1) {
    if (*(int *)local_50.field0_0x0 != 0) {
      LOCK();
      *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
      local_11 = *(int *)local_50.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_1006d97d5;
    }
    QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
  }
LAB_1006d97d5:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_11 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_1006d9805;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1006d9805:
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_11 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_1006d9835;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_1006d9835:
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_48.field0_0x0 != 0) {
        return param_1;
      }
      local_11 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
  return param_1;
}


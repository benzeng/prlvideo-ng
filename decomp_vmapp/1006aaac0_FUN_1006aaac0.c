
undefined8 * FUN_1006aaac0(undefined8 *param_1,QString *param_2)

{
  undefined *puVar1;
  int iVar2;
  QArrayData *pQVar3;
  QString local_58;
  QArrayData *local_50;
  QFileInfo local_48 [8];
  QArrayData *local_40;
  QString local_38;
  undefined1 local_29;
  
  puVar1 = PTR_shared_null_100ba20d0;
  local_38.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
  QFileInfo::QFileInfo(local_48,param_2);
  QFileInfo::fileName();
  iVar2 = FUN_100786550(&local_40,&local_38);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_29 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1006aab35;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1006aab35:
  QFileInfo::~QFileInfo(local_48);
  if (iVar2 < 0) {
    QString::toUtf8();
    FUN_1008e3970("","dimg",0,"Error getting bsd name from uid %s.",
                  local_50 + *(long *)(local_50 + 0x10));
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        local_29 = *(int *)local_50 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1006aac60;
      }
      QArrayData::deallocate(local_50,1,8);
    }
LAB_1006aac60:
    *param_1 = puVar1;
    goto LAB_1006aac63;
  }
  pQVar3 = (QArrayData *)QString::fromAscii_helper("/dev/",5);
  if (1 < *(int *)pQVar3 + 1U) {
    LOCK();
    *(int *)pQVar3 = *(int *)pQVar3 + 1;
    local_29 = *(int *)pQVar3 != 0;
    UNLOCK();
  }
  local_58.field0_0x0 = (QTypedArrayData<unsigned_short> *)pQVar3;
  QString::append(&local_58);
  QString::operator=(&local_38,&local_58);
  if (*(int *)local_58.field0_0x0 != -1) {
    if (*(int *)local_58.field0_0x0 != 0) {
      LOCK();
      *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
      local_29 = *(int *)local_58.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1006aabb9;
    }
    QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
  }
LAB_1006aabb9:
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      local_29 = *(int *)pQVar3 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1006aabe4;
    }
    QArrayData::deallocate(pQVar3,2,8);
  }
LAB_1006aabe4:
  *param_1 = local_38.field0_0x0;
  if (1 < *(int *)local_38.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + 1;
    local_29 = *(int *)local_38.field0_0x0 != 0;
    UNLOCK();
  }
LAB_1006aac63:
  if (*(int *)local_38.field0_0x0 != -1) {
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_38.field0_0x0 != 0) {
        return param_1;
      }
      local_29 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
  }
  return param_1;
}


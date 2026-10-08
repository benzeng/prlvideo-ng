
void FUN_100a15f60(long param_1,int param_2)

{
  long lVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  Data_conflict *pDVar5;
  long lVar6;
  Data_conflict local_a8;
  undefined4 local_a0;
  QString local_98;
  QVariant local_90;
  QArrayData *local_80;
  QString local_78;
  QString local_70;
  Data_conflict local_68;
  undefined4 local_60;
  QString local_58;
  QMapNodeBase *local_50;
  QVariant local_48;
  QMapNodeBase *local_38;
  undefined1 local_29;
  
  if (param_2 - 200U < 100) {
    *(undefined4 *)(param_1 + 0x58) = 47000;
    return;
  }
  *(undefined4 *)(param_1 + 0x58) = 0x80000001;
  if (param_2 != 400) {
    if (param_2 != 0x199) {
      return;
    }
    *(undefined4 *)(param_1 + 0x58) = 0x80047006;
    return;
  }
  QVariant::toMap();
  local_58.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("errors",6);
  local_60 = 0x80000000;
  local_68.field7 = 0;
  if (*(long *)(local_50 + 0x10) == 0) {
LAB_100a1604b:
    lVar4 = 0;
  }
  else {
    lVar1 = *(long *)(local_50 + 0x10);
    lVar6 = 0;
    do {
      while (lVar4 = lVar1, cVar2 = operator<((QString *)(lVar4 + 0x18),&local_58), cVar2 == '\0') {
        lVar1 = *(long *)(lVar4 + 8);
        lVar6 = lVar4;
        if (*(long *)(lVar4 + 8) == 0) goto LAB_100a1603a;
      }
      lVar1 = *(long *)(lVar4 + 0x10);
    } while (*(long *)(lVar4 + 0x10) != 0);
    lVar4 = lVar6;
    if (lVar6 == 0) goto LAB_100a1604b;
LAB_100a1603a:
    cVar2 = operator<(&local_58,(QString *)(lVar4 + 0x18));
    if (cVar2 != '\0') goto LAB_100a1604b;
  }
  pDVar5 = &local_68;
  if (lVar4 != 0) {
    pDVar5 = (Data_conflict *)(lVar4 + 0x20);
  }
  QVariant::QVariant(&local_48,(QVariant *)pDVar5);
  QVariant::toMap();
  QVariant::~QVariant(&local_48);
  QVariant::~QVariant((QVariant *)&local_68);
  if (*(int *)local_58.field0_0x0 != -1) {
    if (*(int *)local_58.field0_0x0 != 0) {
      LOCK();
      *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
      local_29 = *(int *)local_58.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100a160b4;
    }
    QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
  }
LAB_100a160b4:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_29 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100a160fc;
    }
    if (*(long *)(local_50 + 0x10) != 0) {
      FUN_100037d60();
      QMapDataBase::freeTree(local_50,(int)*(undefined8 *)(local_50 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)local_50);
  }
LAB_100a160fc:
  local_70.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("email",5);
  if (*(long *)(local_38 + 0x10) == 0) {
LAB_100a16172:
    lVar4 = 0;
  }
  else {
    lVar1 = *(long *)(local_38 + 0x10);
    lVar6 = 0;
    do {
      while (lVar4 = lVar1, cVar2 = operator<((QString *)(lVar4 + 0x18),&local_70), cVar2 == '\0') {
        lVar1 = *(long *)(lVar4 + 8);
        lVar6 = lVar4;
        if (*(long *)(lVar4 + 8) == 0) goto LAB_100a16161;
      }
      lVar1 = *(long *)(lVar4 + 0x10);
    } while (*(long *)(lVar4 + 0x10) != 0);
    lVar4 = lVar6;
    if (lVar6 == 0) goto LAB_100a16172;
LAB_100a16161:
    cVar2 = operator<(&local_70,(QString *)(lVar4 + 0x18));
    if (cVar2 != '\0') goto LAB_100a16172;
  }
  if (*(int *)local_70.field0_0x0 != -1) {
    if (*(int *)local_70.field0_0x0 != 0) {
      LOCK();
      *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
      local_29 = *(int *)local_70.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100a161a4;
    }
    QArrayData::deallocate((QArrayData *)local_70.field0_0x0,2,8);
  }
LAB_100a161a4:
  if (lVar4 != 0) {
    *(undefined4 *)(param_1 + 0x58) = 0x80047008;
    goto LAB_100a16417;
  }
  local_78.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("password",8);
  if (*(long *)(local_38 + 0x10) == 0) {
LAB_100a16232:
    lVar4 = 0;
  }
  else {
    lVar1 = *(long *)(local_38 + 0x10);
    lVar6 = 0;
    do {
      while (lVar4 = lVar1, cVar2 = operator<((QString *)(lVar4 + 0x18),&local_78), cVar2 == '\0') {
        lVar1 = *(long *)(lVar4 + 8);
        lVar6 = lVar4;
        if (*(long *)(lVar4 + 8) == 0) goto LAB_100a16221;
      }
      lVar1 = *(long *)(lVar4 + 0x10);
    } while (*(long *)(lVar4 + 0x10) != 0);
    lVar4 = lVar6;
    if (lVar6 == 0) goto LAB_100a16232;
LAB_100a16221:
    cVar2 = operator<(&local_78,(QString *)(lVar4 + 0x18));
    if (cVar2 != '\0') goto LAB_100a16232;
  }
  if (*(int *)local_78.field0_0x0 != -1) {
    if (*(int *)local_78.field0_0x0 != 0) {
      LOCK();
      *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + -1;
      local_29 = *(int *)local_78.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100a16264;
    }
    QArrayData::deallocate((QArrayData *)local_78.field0_0x0,2,8);
  }
LAB_100a16264:
  if (lVar4 == 0) goto LAB_100a16417;
  *(undefined4 *)(param_1 + 0x58) = 0x80047002;
  local_98.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("password",8);
  local_a0 = 0x80000000;
  local_a8.field7 = 0;
  if (*(long *)(local_38 + 0x10) == 0) {
LAB_100a16305:
    lVar4 = 0;
  }
  else {
    lVar1 = *(long *)(local_38 + 0x10);
    lVar6 = 0;
    do {
      while (lVar4 = lVar1, cVar2 = operator<((QString *)(lVar4 + 0x18),&local_98), cVar2 == '\0') {
        lVar1 = *(long *)(lVar4 + 8);
        lVar6 = lVar4;
        if (*(long *)(lVar4 + 8) == 0) goto LAB_100a162f1;
      }
      lVar1 = *(long *)(lVar4 + 0x10);
    } while (*(long *)(lVar4 + 0x10) != 0);
    lVar4 = lVar6;
    if (lVar6 == 0) goto LAB_100a16305;
LAB_100a162f1:
    cVar2 = operator<(&local_98,(QString *)(lVar4 + 0x18));
    if (cVar2 != '\0') goto LAB_100a16305;
  }
  pDVar5 = &local_a8;
  if (lVar4 != 0) {
    pDVar5 = (Data_conflict *)(lVar4 + 0x20);
  }
  QVariant::QVariant(&local_90,(QVariant *)pDVar5);
  QVariant::toString();
  QVariant::~QVariant(&local_90);
  QVariant::~QVariant((QVariant *)&local_a8);
  if (*(int *)local_98.field0_0x0 != -1) {
    if (*(int *)local_98.field0_0x0 != 0) {
      LOCK();
      *(int *)local_98.field0_0x0 = *(int *)local_98.field0_0x0 + -1;
      local_29 = *(int *)local_98.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100a16383;
    }
    QArrayData::deallocate((QArrayData *)local_98.field0_0x0,2,8);
  }
LAB_100a16383:
  iVar3 = QString::compare_helper
                    (local_80 + *(long *)(local_80 + 0x10),*(undefined4 *)(local_80 + 4),
                     "max length",0xffffffff,1);
  if (iVar3 == 0) {
    *(undefined4 *)(param_1 + 0x58) = 0x80047032;
  }
  else {
    iVar3 = QString::compare_helper
                      (local_80 + *(long *)(local_80 + 0x10),*(undefined4 *)(local_80 + 4),
                       "min length",0xffffffff,1);
    if (iVar3 == 0) {
      *(undefined4 *)(param_1 + 0x58) = 0x80047033;
    }
  }
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_29 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100a16417;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_100a16417:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) {
        return;
      }
      local_29 = 0;
    }
    if (*(long *)(local_38 + 0x10) != 0) {
      FUN_100037d60();
      QMapDataBase::freeTree(local_38,(int)*(undefined8 *)(local_38 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)local_38);
  }
  return;
}


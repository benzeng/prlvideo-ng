
void FUN_10061cce0(QByteArray *param_1)

{
  QArrayData *pQVar1;
  QArrayData *pQVar2;
  QArrayData *pQVar3;
  undefined8 *puVar4;
  QArrayData *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  QByteArray::QByteArray((QByteArray *)&local_70,"MTruJQUcTEHprBtYzmJJrCySniIaLnl",-1);
  QByteArray::QByteArray((QByteArray *)&local_60,"--",-1);
  puVar4 = (undefined8 *)QByteArray::append((QByteArray *)&local_60);
  pQVar1 = (QArrayData *)*puVar4;
  if (1 < *(int *)pQVar1 + 1U) {
    LOCK();
    *(int *)pQVar1 = *(int *)pQVar1 + 1;
    local_29 = *(int *)pQVar1 != 0;
    UNLOCK();
  }
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_29 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10061cd6f;
    }
    QArrayData::deallocate(local_60,1,8);
  }
LAB_10061cd6f:
  if (1 < *(int *)pQVar1 + 1U) {
    LOCK();
    *(int *)pQVar1 = *(int *)pQVar1 + 1;
    local_29 = *(int *)pQVar1 != 0;
    UNLOCK();
  }
  local_58 = pQVar1;
  puVar4 = (undefined8 *)QByteArray::append((char *)&local_58);
  pQVar2 = (QArrayData *)*puVar4;
  if (1 < *(int *)pQVar2 + 1U) {
    LOCK();
    *(int *)pQVar2 = *(int *)pQVar2 + 1;
    local_29 = *(int *)pQVar2 != 0;
    UNLOCK();
  }
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_29 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10061cdde;
    }
    QArrayData::deallocate(local_58,1,8);
  }
LAB_10061cdde:
  if (1 < *(int *)pQVar2 + 1U) {
    LOCK();
    *(int *)pQVar2 = *(int *)pQVar2 + 1;
    local_29 = *(int *)pQVar2 != 0;
    UNLOCK();
  }
  local_50 = pQVar2;
  puVar4 = (undefined8 *)QByteArray::append((char *)&local_50);
  pQVar3 = (QArrayData *)*puVar4;
  if (1 < *(int *)pQVar3 + 1U) {
    LOCK();
    *(int *)pQVar3 = *(int *)pQVar3 + 1;
    local_29 = *(int *)pQVar3 != 0;
    UNLOCK();
  }
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_29 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10061ce4b;
    }
    QArrayData::deallocate(local_50,1,8);
  }
LAB_10061ce4b:
  if (1 < *(int *)pQVar3 + 1U) {
    LOCK();
    *(int *)pQVar3 = *(int *)pQVar3 + 1;
    local_29 = *(int *)pQVar3 != 0;
    UNLOCK();
  }
  local_48 = pQVar3;
  puVar4 = (undefined8 *)QByteArray::append((char *)&local_48);
  local_68 = (QArrayData *)*puVar4;
  if (1 < *(int *)local_68 + 1U) {
    LOCK();
    *(int *)local_68 = *(int *)local_68 + 1;
    local_29 = *(int *)local_68 != 0;
    UNLOCK();
  }
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_29 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10061ceb8;
    }
    QArrayData::deallocate(local_48,1,8);
  }
LAB_10061ceb8:
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      local_29 = *(int *)pQVar3 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10061cee3;
    }
    QArrayData::deallocate(pQVar3,1,8);
  }
LAB_10061cee3:
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      local_29 = *(int *)pQVar2 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10061cf12;
    }
    QArrayData::deallocate(pQVar2,1,8);
  }
LAB_10061cf12:
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      local_29 = *(int *)pQVar1 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10061cf3f;
    }
    QArrayData::deallocate(pQVar1,1,8);
  }
LAB_10061cf3f:
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_29 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10061cf6f;
    }
    QArrayData::deallocate(local_70,1,8);
  }
LAB_10061cf6f:
  QByteArray::prepend(param_1);
  QByteArray::QByteArray((QByteArray *)&local_80,"MTruJQUcTEHprBtYzmJJrCySniIaLnl",-1);
  QByteArray::QByteArray((QByteArray *)&local_40,"\r\n--",-1);
  puVar4 = (undefined8 *)QByteArray::append((QByteArray *)&local_40);
  pQVar1 = (QArrayData *)*puVar4;
  if (1 < *(int *)pQVar1 + 1U) {
    LOCK();
    *(int *)pQVar1 = *(int *)pQVar1 + 1;
    local_29 = *(int *)pQVar1 != 0;
    UNLOCK();
  }
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_29 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10061cff6;
    }
    QArrayData::deallocate(local_40,1,8);
  }
LAB_10061cff6:
  if (1 < *(int *)pQVar1 + 1U) {
    LOCK();
    *(int *)pQVar1 = *(int *)pQVar1 + 1;
    local_29 = *(int *)pQVar1 != 0;
    UNLOCK();
  }
  local_38 = pQVar1;
  puVar4 = (undefined8 *)QByteArray::append((char *)&local_38);
  local_78 = (QArrayData *)*puVar4;
  if (1 < *(int *)local_78 + 1U) {
    LOCK();
    *(int *)local_78 = *(int *)local_78 + 1;
    local_29 = *(int *)local_78 != 0;
    UNLOCK();
  }
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_29 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10061d063;
    }
    QArrayData::deallocate(local_38,1,8);
  }
LAB_10061d063:
  QByteArray::operator=((QByteArray *)&local_68,(QByteArray *)&local_78);
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_29 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10061d0a0;
    }
    QArrayData::deallocate(local_78,1,8);
  }
LAB_10061d0a0:
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      local_29 = *(int *)pQVar1 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10061d0cb;
    }
    QArrayData::deallocate(pQVar1,1,8);
  }
LAB_10061d0cb:
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_29 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10061d0fb;
    }
    QArrayData::deallocate(local_80,1,8);
  }
LAB_10061d0fb:
  QByteArray::append(param_1);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      UNLOCK();
      if (*(int *)local_68 != 0) {
        return;
      }
      local_29 = 0;
    }
    QArrayData::deallocate(local_68,1,8);
  }
  return;
}


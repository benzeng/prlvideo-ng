
undefined8 FUN_10062d270(undefined8 param_1,long param_2)

{
  char cVar1;
  long lVar2;
  QArrayData *pQVar3;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  long local_50 [2];
  QArrayData *local_40;
  QString local_38;
  QString local_30;
  undefined1 local_21;
  
  local_40 = (QArrayData *)QString::fromAscii_helper("/",1);
  local_38.field0_0x0 = *(QTypedArrayData<unsigned_short> **)(param_2 + 0x268);
  if (1 < *(int *)local_38.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + 1;
    local_21 = *(int *)local_38.field0_0x0 != 0;
    UNLOCK();
  }
  QString::append(&local_38);
  local_30.field0_0x0 = local_38.field0_0x0;
  if (1 < *(int *)local_38.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + 1;
    local_21 = *(int *)local_38.field0_0x0 != 0;
    UNLOCK();
  }
  QString::append(&local_30);
  if (*(int *)local_38.field0_0x0 != -1) {
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      local_21 = *(int *)local_38.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10062d319;
    }
    QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
  }
LAB_10062d319:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_21 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10062d349;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_10062d349:
  QFile::QFile((QFile *)local_50,&local_30);
  local_58 = (QArrayData *)PTR_shared_null_100ba20d0;
  cVar1 = QFile::open(local_50,1);
  if (cVar1 != '\0') {
    QIODevice::readAll();
    QByteArray::operator=((QByteArray *)&local_58,(QByteArray *)&local_60);
    if (*(int *)local_60 != -1) {
      if (*(int *)local_60 != 0) {
        LOCK();
        *(int *)local_60 = *(int *)local_60 + -1;
        local_21 = *(int *)local_60 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_10062d3bd;
      }
      QArrayData::deallocate(local_60,1,8);
    }
  }
LAB_10062d3bd:
  (**(code **)(local_50[0] + 0x70))(local_50);
  pQVar3 = local_58 + *(long *)(local_58 + 0x10);
  if ((pQVar3 != (QArrayData *)0x0) && (*(uint *)(local_58 + 4) != 0)) {
    lVar2 = 0;
    do {
      if (pQVar3[lVar2] == (QArrayData)0x0) break;
      lVar2 = lVar2 + 1;
    } while ((uint)lVar2 < *(uint *)(local_58 + 4));
    if ((int)lVar2 == -1) {
      _strlen((char *)pQVar3);
    }
  }
  QString::fromUtf8_helper((char *)&local_68,(int)pQVar3);
  QString::normalized(param_1,&local_68,1,0);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_21 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10062d45c;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_10062d45c:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_21 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10062d48c;
    }
    QArrayData::deallocate(local_58,1,8);
  }
LAB_10062d48c:
  QFile::~QFile((QFile *)local_50);
  if (*(int *)local_30.field0_0x0 != -1) {
    if (*(int *)local_30.field0_0x0 != 0) {
      LOCK();
      *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_30.field0_0x0 != 0) {
        return param_1;
      }
      local_21 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_30.field0_0x0,2,8);
  }
  return param_1;
}


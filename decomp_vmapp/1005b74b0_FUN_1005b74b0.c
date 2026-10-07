
undefined8 FUN_1005b74b0(undefined8 param_1,int param_2)

{
  bool bVar1;
  char cVar2;
  pid_t pVar3;
  undefined8 uVar4;
  long lVar5;
  QArrayData *pQVar6;
  int iVar7;
  bool bVar8;
  QArrayData *local_a0;
  QArrayData *local_98;
  QArrayData *local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QString local_70;
  long local_68 [2];
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  local_40 = (QArrayData *)PTR_shared_null_100ba20d0;
  local_58 = (QArrayData *)QString::fromAscii_helper("%1:%2",5);
  pVar3 = _getpid();
  QString::arg(&local_50,&local_58,(long)pVar3,0,10,0x20);
  uVar4 = FUN_1007dc310();
  QString::arg(&local_48,&local_50,uVar4,0,10,0x20);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005b7563;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1005b7563:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005b7593;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1005b7593:
  QFileInfo::filePath();
  local_80 = (QArrayData *)QString::fromAscii_helper(".lck",4);
  local_70.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_78;
  if (1 < *(int *)local_78 + 1U) {
    LOCK();
    *(int *)local_78 = *(int *)local_78 + 1;
    local_31 = *(int *)local_78 != 0;
    UNLOCK();
  }
  QString::append(&local_70);
  QFile::QFile((QFile *)local_68,&local_70);
  if (*(int *)local_70.field0_0x0 != -1) {
    if (*(int *)local_70.field0_0x0 != 0) {
      LOCK();
      *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
      local_31 = *(int *)local_70.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005b7618;
    }
    QArrayData::deallocate((QArrayData *)local_70.field0_0x0,2,8);
  }
LAB_1005b7618:
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_31 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005b7648;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_1005b7648:
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_31 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005b7678;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_1005b7678:
  bVar8 = true;
  bVar1 = false;
  iVar7 = param_2;
  do {
    while (iVar7 = iVar7 + -1, iVar7 != 0) {
      cVar2 = FUN_1005ba8a0(param_1);
      if (cVar2 == '\0') {
        cVar2 = QFile::open(local_68,0x13);
        uVar4 = 0x80022002;
        if (cVar2 == '\0') goto LAB_1005b7955;
        lVar5 = QFile::size();
        if (lVar5 == 0) {
          QString::toUtf8();
          QIODevice::write((char *)local_68,(longlong)(local_88 + *(long *)(local_88 + 0x10)));
          if (*(int *)local_88 != -1) {
            if (*(int *)local_88 != 0) {
              LOCK();
              *(int *)local_88 = *(int *)local_88 + -1;
              local_31 = *(int *)local_88 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1005b7944;
            }
            QArrayData::deallocate(local_88,1,8);
          }
LAB_1005b7944:
          uVar4 = 0;
          (**(code **)(local_68[0] + 0x70))(local_68);
          goto LAB_1005b7955;
        }
        bVar1 = false;
        (**(code **)(local_68[0] + 0x70))(local_68);
      }
      else {
        if (bVar8) {
          QFile::open(local_68,0x11);
          QIODevice::readAll();
          QByteArray::operator=((QByteArray *)&local_40,(QByteArray *)&local_90);
          if (*(int *)local_90 != -1) {
            if (*(int *)local_90 != 0) {
              LOCK();
              *(int *)local_90 = *(int *)local_90 + -1;
              local_31 = *(int *)local_90 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1005b7729;
            }
            QArrayData::deallocate(local_90,1,8);
          }
LAB_1005b7729:
          (**(code **)(local_68[0] + 0x70))(local_68);
          bVar8 = false;
        }
        FUN_1007685b0(1);
      }
    }
    local_98 = (QArrayData *)PTR_shared_null_100ba20d0;
    QFile::open(local_68,0x11);
    QIODevice::readAll();
    QByteArray::operator=((QByteArray *)&local_98,(QByteArray *)&local_a0);
    if (*(int *)local_a0 != -1) {
      if (*(int *)local_a0 != 0) {
        LOCK();
        *(int *)local_a0 = *(int *)local_a0 + -1;
        local_31 = *(int *)local_a0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1005b77c5;
      }
      QArrayData::deallocate(local_a0,1,8);
    }
LAB_1005b77c5:
    (**(code **)(local_68[0] + 0x70))(local_68);
    pQVar6 = local_98;
    if ((*(int *)(local_98 + 4) == *(int *)(local_40 + 4)) &&
       (iVar7 = _memcmp(local_98 + *(long *)(local_98 + 0x10),local_40 + *(long *)(local_40 + 0x10),
                        (long)*(int *)(local_98 + 4)), iVar7 == 0)) {
      FUN_1008e3970("","vdisk",0,"Remove locker from VirtualDisk. It seems to be invalid");
      FUN_1005b7cc0(param_1);
      bVar1 = (bool)(~bVar1 & 1);
      pQVar6 = local_98;
    }
    if (*(int *)pQVar6 != -1) {
      if (*(int *)pQVar6 != 0) {
        LOCK();
        *(int *)pQVar6 = *(int *)pQVar6 + -1;
        local_31 = *(int *)pQVar6 != 0;
        UNLOCK();
        pQVar6 = local_98;
        if ((bool)local_31) goto LAB_1005b7876;
      }
      QArrayData::deallocate(pQVar6,1,8);
    }
LAB_1005b7876:
    uVar4 = 0x80021052;
    iVar7 = param_2;
  } while (bVar1);
LAB_1005b7955:
  QFile::~QFile((QFile *)local_68);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005b798e;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1005b798e:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return uVar4;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_40,1,8);
  }
  return uVar4;
}


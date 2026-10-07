
undefined4 FUN_1005bcf00(long param_1,QString *param_2,QFile *param_3)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  QArrayData *pQVar4;
  char cVar5;
  undefined4 uVar6;
  QArrayData *local_90;
  QArrayData *local_88;
  long local_80 [2];
  QArrayData *local_70;
  QArrayData *local_68;
  QString local_60;
  QString local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QString local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  QDir::currentPath();
  QDir::QDir((QDir *)&local_40,param_2);
  cVar5 = QDir::exists();
  if (cVar5 != '\0') {
    uVar6 = 0x80021012;
    FUN_1008e3970("","vdisk",0,"File exists");
    goto LAB_1005bd2c7;
  }
  QDir::setPath(&local_40);
  cVar5 = QDir::mkpath(&local_40);
  if (cVar5 == '\0') {
    QString::toUtf8();
    pQVar4 = local_48;
    lVar3 = *(long *)(local_48 + 0x10);
    QString::toUtf8();
    FUN_1008e3970("","vdisk",0,"Error creating file path %s/%s",pQVar4 + lVar3,
                  local_50 + *(long *)(local_50 + 0x10));
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        local_29 = *(int *)local_50 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1005bd1d6;
      }
      QArrayData::deallocate(local_50,1,8);
    }
LAB_1005bd1d6:
    uVar6 = 0x80021015;
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        local_29 = *(int *)local_48 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1005bd2c7;
      }
      QArrayData::deallocate(local_48,1,8);
    }
    goto LAB_1005bd2c7;
  }
  FUN_100769490(param_2);
  local_68 = (QArrayData *)QString::fromAscii_helper("/",1);
  local_60.field0_0x0 = param_2->field0_0x0;
  if (1 < *(int *)local_60.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + 1;
    local_29 = *(int *)local_60.field0_0x0 != 0;
    UNLOCK();
  }
  QString::append(&local_60);
  local_70 = (QArrayData *)QString::fromAscii_helper("DiskDescriptor.xml",0x12);
  local_58.field0_0x0 = local_60.field0_0x0;
  if (1 < *(int *)local_60.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + 1;
    local_29 = *(int *)local_60.field0_0x0 != 0;
    UNLOCK();
  }
  QString::append(&local_58);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_29 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1005bd032;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_1005bd032:
  if (*(int *)local_60.field0_0x0 != -1) {
    if (*(int *)local_60.field0_0x0 != 0) {
      LOCK();
      *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
      local_29 = *(int *)local_60.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1005bd062;
    }
    QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
  }
LAB_1005bd062:
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_29 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1005bd092;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_1005bd092:
  QFile::QFile((QFile *)local_80,&local_58);
  cVar5 = QFile::open(local_80,3);
  if (cVar5 == '\0') {
    QString::toUtf8();
    FUN_1008e3970("","vdisk",0,"Error creating XML file %s",local_88 + *(long *)(local_88 + 0x10));
    if (*(int *)local_88 != -1) {
      if (*(int *)local_88 != 0) {
        LOCK();
        *(int *)local_88 = *(int *)local_88 + -1;
        local_29 = *(int *)local_88 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1005bd27c;
      }
      QArrayData::deallocate(local_88,1,8);
    }
LAB_1005bd27c:
    uVar6 = 0x80021013;
    QDir::rmpath(&local_40);
  }
  else {
    (**(code **)(local_80[0] + 0x70))(local_80);
    FUN_10056b070(&local_58);
    QFileInfo::setFile(param_3);
    if (*(long *)(param_1 + 8) == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    plVar1 = *(long **)(*(long *)(param_1 + 8) + 0x10);
    pcVar2 = *(code **)(*plVar1 + 0x28);
    (**(code **)(*plVar1 + 0x20))(&local_90,plVar1,param_3);
    uVar6 = (*pcVar2)(plVar1,&local_90);
    if (*(int *)local_90 != -1) {
      if (*(int *)local_90 != 0) {
        LOCK();
        *(int *)local_90 = *(int *)local_90 + -1;
        local_29 = *(int *)local_90 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1005bd28e;
      }
      QArrayData::deallocate(local_90,2,8);
    }
  }
LAB_1005bd28e:
  QFile::~QFile((QFile *)local_80);
  if (*(int *)local_58.field0_0x0 != -1) {
    if (*(int *)local_58.field0_0x0 != 0) {
      LOCK();
      *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
      local_29 = *(int *)local_58.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1005bd2c7;
    }
    QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
  }
LAB_1005bd2c7:
  QDir::~QDir((QDir *)&local_40);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) {
        return uVar6;
      }
      local_29 = 0;
    }
    QArrayData::deallocate(local_38,2,8);
  }
  return uVar6;
}


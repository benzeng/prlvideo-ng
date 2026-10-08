
undefined8 * FUN_10010a190(undefined8 *param_1)

{
  undefined *puVar1;
  char cVar2;
  undefined8 uVar3;
  size_t sVar4;
  int iVar5;
  QArrayData *local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QString local_58;
  QString local_50;
  QDir local_48 [8];
  QArrayData *local_40;
  QArrayData *local_38;
  QString local_30;
  undefined1 local_21;
  
  FUN_100d842d0(&local_30);
  if ((*(int *)(local_30.field0_0x0 + 4) == 0) ||
     (cVar2 = QDir::isRelativePath(&local_30), cVar2 != '\0')) {
    local_40 = (QArrayData *)local_30.field0_0x0;
    if (1 < *(int *)local_30.field0_0x0 + 1U) {
      LOCK();
      *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + 1;
      local_21 = *(int *)local_30.field0_0x0 != 0;
      UNLOCK();
    }
    QString::toLocal8Bit();
    FUN_100df99c0("","prl_client_app",0,"Can\'t get valid user preferences dir =[%s]",
                  local_38 + *(long *)(local_38 + 0x10));
    if (*(int *)local_38 != -1) {
      if (*(int *)local_38 != 0) {
        LOCK();
        *(int *)local_38 = *(int *)local_38 + -1;
        local_21 = *(int *)local_38 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_10010a240;
      }
      QArrayData::deallocate(local_38,1,8);
    }
LAB_10010a240:
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        local_21 = *(int *)local_40 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_10010a270;
      }
      QArrayData::deallocate(local_40,2,8);
    }
LAB_10010a270:
    uVar3 = QString::fromAscii_helper("",0);
LAB_10010a27e:
    *param_1 = uVar3;
    goto LAB_10010a281;
  }
  QDir::QDir(local_48,&local_30);
  cVar2 = QDir::exists();
  QDir::~QDir(local_48);
  if (cVar2 == '\0') {
    local_58.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
    QDir::QDir((QDir *)&local_50,&local_58);
    cVar2 = QDir::mkpath(&local_50);
    QDir::~QDir((QDir *)&local_50);
    if (*(int *)local_58.field0_0x0 != -1) {
      if (*(int *)local_58.field0_0x0 != 0) {
        LOCK();
        *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
        local_21 = *(int *)local_58.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_10010a345;
      }
      QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
    }
LAB_10010a345:
    if (cVar2 == '\0') {
      local_68 = (QArrayData *)local_30.field0_0x0;
      if (1 < *(int *)local_30.field0_0x0 + 1U) {
        LOCK();
        *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + 1;
        local_21 = *(int *)local_30.field0_0x0 != 0;
        UNLOCK();
      }
      QString::toLocal8Bit();
      FUN_100df99c0("","prl_client_app",0,"Can not create the %s directory.",
                    local_60 + *(long *)(local_60 + 0x10));
      if (*(int *)local_60 != -1) {
        if (*(int *)local_60 != 0) {
          LOCK();
          *(int *)local_60 = *(int *)local_60 + -1;
          local_21 = *(int *)local_60 != 0;
          UNLOCK();
          if ((bool)local_21) goto LAB_10010a521;
        }
        QArrayData::deallocate(local_60,1,8);
      }
LAB_10010a521:
      if (*(int *)local_68 != -1) {
        if (*(int *)local_68 != 0) {
          LOCK();
          *(int *)local_68 = *(int *)local_68 + -1;
          local_21 = *(int *)local_68 != 0;
          UNLOCK();
          if ((bool)local_21) goto LAB_10010a551;
        }
        QArrayData::deallocate(local_68,2,8);
      }
LAB_10010a551:
      uVar3 = QString::fromAscii_helper("",0);
      goto LAB_10010a27e;
    }
  }
  local_80 = (QArrayData *)QString::fromAscii_helper("%1/%2",5);
  QString::arg(&local_78,&local_80,&local_30,0,0x20);
  puVar1 = PTR_s__parallels_preferences_xml_102270c70;
  iVar5 = -1;
  if (PTR_s__parallels_preferences_xml_102270c70 != (undefined *)0x0) {
    sVar4 = _strlen(PTR_s__parallels_preferences_xml_102270c70);
    iVar5 = (int)sVar4;
  }
  local_88 = (QArrayData *)QString::fromAscii_helper(puVar1,iVar5);
  QString::arg(&local_70,&local_78,&local_88,0,0x20);
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_21 = *(int *)local_88 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10010a3f0;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_10010a3f0:
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_21 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10010a420;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_10010a420:
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_21 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10010a450;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_10010a450:
  *param_1 = local_70;
  if (1 < *(int *)local_70 + 1U) {
    LOCK();
    *(int *)local_70 = *(int *)local_70 + 1;
    local_21 = *(int *)local_70 != 0;
    UNLOCK();
  }
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_21 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10010a281;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_10010a281:
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


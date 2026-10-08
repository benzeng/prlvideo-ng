
uint FUN_10004b4e0(long param_1,undefined8 param_2,undefined8 param_3,long param_4,byte param_5)

{
  char cVar1;
  QArrayData *pQVar2;
  undefined8 *puVar3;
  uint uVar4;
  QArrayData *local_c0;
  QArrayData *local_b8;
  AnonymousUnion0 local_b0;
  QArrayData *local_a8;
  QArrayData *local_a0;
  AnonymousUnion0 local_98;
  QArrayData *local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  local_40 = (QArrayData *)QString::fromAscii_helper("System",6);
  local_48 = (QArrayData *)QString::fromAscii_helper("VM Id",5);
  local_50 = *(QArrayData **)(param_1 + 0x10);
  if (1 < *(int *)local_50 + 1U) {
    LOCK();
    *(int *)local_50 = *(int *)local_50 + 1;
    local_31 = *(int *)local_50 != 0;
    UNLOCK();
  }
  FUN_100b573b0(param_3,&local_40,&local_48,&local_50);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10004b58a;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_10004b58a:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10004b5ba;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_10004b5ba:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10004b5ea;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_10004b5ea:
  local_58 = (QArrayData *)QString::fromAscii_helper("System",6);
  local_60 = (QArrayData *)QString::fromAscii_helper("VM Name",7);
  local_68 = *(QArrayData **)(param_1 + 0x18);
  if (1 < *(int *)local_68 + 1U) {
    LOCK();
    *(int *)local_68 = *(int *)local_68 + 1;
    local_31 = *(int *)local_68 != 0;
    UNLOCK();
  }
  FUN_100b573b0(param_3,&local_58,&local_60,&local_68);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_31 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10004b671;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_10004b671:
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10004b6a1;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_10004b6a1:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10004b6d1;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_10004b6d1:
  local_70 = (QArrayData *)QString::fromAscii_helper("System",6);
  local_78 = (QArrayData *)QString::fromAscii_helper("Helper Version",0xe);
  puVar3 = &DAT_102310840;
  if (param_5 != 0) {
    puVar3 = &DAT_102310848;
  }
  local_80 = (QArrayData *)*puVar3;
  if (1 < *(int *)local_80 + 1U) {
    LOCK();
    *(int *)local_80 = *(int *)local_80 + 1;
    local_31 = *(int *)local_80 != 0;
    UNLOCK();
  }
  FUN_100b573b0(param_3,&local_70,&local_78,&local_80);
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_31 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10004b76c;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_10004b76c:
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_31 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10004b79c;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_10004b79c:
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_31 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10004b7cc;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_10004b7cc:
  if (param_4 != 0) {
    local_88 = (QArrayData *)QString::fromAscii_helper("System",6);
    local_90 = (QArrayData *)QString::fromAscii_helper("File Extensions",0xf);
    pQVar2 = (QArrayData *)QString::fromAscii_helper(",",1);
    QtPrivate::QStringList_join
              ((QStringList *)&local_98.field0,(QChar *)(param_4 + 0x18),
               (int)*(undefined8 *)(pQVar2 + 0x10) + (int)pQVar2);
    FUN_100b573b0(param_3,&local_88,&local_90,&local_98);
    if (*(int *)local_98.field1 != -1) {
      if (*(int *)local_98.field1 != 0) {
        LOCK();
        *(int *)local_98.field1 = *(int *)local_98.field1 + -1;
        local_31 = *(int *)local_98.field1 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10004b881;
      }
      QArrayData::deallocate((QArrayData *)local_98.field1,2,8);
    }
LAB_10004b881:
    if (*(int *)pQVar2 != -1) {
      if (*(int *)pQVar2 != 0) {
        LOCK();
        *(int *)pQVar2 = *(int *)pQVar2 + -1;
        local_31 = *(int *)pQVar2 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10004b8ac;
      }
      QArrayData::deallocate(pQVar2,2,8);
    }
LAB_10004b8ac:
    if (*(int *)local_90 != -1) {
      if (*(int *)local_90 != 0) {
        LOCK();
        *(int *)local_90 = *(int *)local_90 + -1;
        local_31 = *(int *)local_90 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10004b8e2;
      }
      QArrayData::deallocate(local_90,2,8);
    }
LAB_10004b8e2:
    if (*(int *)local_88 != -1) {
      if (*(int *)local_88 != 0) {
        LOCK();
        *(int *)local_88 = *(int *)local_88 + -1;
        local_31 = *(int *)local_88 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10004b912;
      }
      QArrayData::deallocate(local_88,2,8);
    }
LAB_10004b912:
    local_a0 = (QArrayData *)QString::fromAscii_helper("System",6);
    local_a8 = (QArrayData *)QString::fromAscii_helper("Protocols",9);
    pQVar2 = (QArrayData *)QString::fromAscii_helper(",",1);
    QtPrivate::QStringList_join
              ((QStringList *)&local_b0.field0,(QChar *)(param_4 + 0x10),
               (int)*(undefined8 *)(pQVar2 + 0x10) + (int)pQVar2);
    FUN_100b573b0(param_3,&local_a0,&local_a8,&local_b0);
    if (*(int *)local_b0.field1 != -1) {
      if (*(int *)local_b0.field1 != 0) {
        LOCK();
        *(int *)local_b0.field1 = *(int *)local_b0.field1 + -1;
        local_31 = *(int *)local_b0.field1 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10004b9c6;
      }
      QArrayData::deallocate((QArrayData *)local_b0.field1,2,8);
    }
LAB_10004b9c6:
    if (*(int *)pQVar2 != -1) {
      if (*(int *)pQVar2 != 0) {
        LOCK();
        *(int *)pQVar2 = *(int *)pQVar2 + -1;
        local_31 = *(int *)pQVar2 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10004b9f1;
      }
      QArrayData::deallocate(pQVar2,2,8);
    }
LAB_10004b9f1:
    if (*(int *)local_a8 != -1) {
      if (*(int *)local_a8 != 0) {
        LOCK();
        *(int *)local_a8 = *(int *)local_a8 + -1;
        local_31 = *(int *)local_a8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10004ba27;
      }
      QArrayData::deallocate(local_a8,2,8);
    }
LAB_10004ba27:
    if (*(int *)local_a0 != -1) {
      if (*(int *)local_a0 != 0) {
        LOCK();
        *(int *)local_a0 = *(int *)local_a0 + -1;
        local_31 = *(int *)local_a0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10004ba5d;
      }
      QArrayData::deallocate(local_a0,2,8);
    }
  }
LAB_10004ba5d:
  local_b8 = (QArrayData *)QString::fromAscii_helper("",0);
  cVar1 = FUN_100b57cc0(param_3,&local_b8);
  if (*(int *)local_b8 != -1) {
    if (*(int *)local_b8 != 0) {
      LOCK();
      *(int *)local_b8 = *(int *)local_b8 + -1;
      local_31 = *(int *)local_b8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10004bab9;
    }
    QArrayData::deallocate(local_b8,2,8);
  }
LAB_10004bab9:
  if (cVar1 == '\0') {
    uVar4 = 0xffffffff;
    if (0 < DAT_10230ffd0) {
      QString::toUtf8();
      FUN_100df99c0("SGASMGMT","prl_client_app",1,"configuration file write err, bundlePath=\"%s\"",
                    local_c0 + *(long *)(local_c0 + 0x10));
      if (*(int *)local_c0 != -1) {
        if (*(int *)local_c0 != 0) {
          LOCK();
          *(int *)local_c0 = *(int *)local_c0 + -1;
          UNLOCK();
          if (*(int *)local_c0 != 0) {
            return 0xffffffff;
          }
          local_31 = 0;
        }
        QArrayData::deallocate(local_c0,1,8);
      }
    }
  }
  else {
    uVar4 = (uint)param_5;
  }
  return uVar4;
}


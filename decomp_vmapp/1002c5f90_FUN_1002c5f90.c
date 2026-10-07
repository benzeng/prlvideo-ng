
uint FUN_1002c5f90(char *param_1,uint *param_2)

{
  long *plVar1;
  char cVar2;
  uint uVar3;
  CVmEventParameter *pCVar4;
  long lVar5;
  int iVar6;
  char *pcVar7;
  QArrayData **ppQVar8;
  undefined4 uVar9;
  QArrayData *local_2c8;
  QArrayData *local_2c0;
  QArrayData *local_2b8;
  QArrayData *local_2b0;
  QArrayData *local_2a8;
  QArrayData *local_2a0;
  QArrayData *local_298;
  QArrayData *local_290;
  QArrayData *local_288;
  CVmEvent local_280 [224];
  QEvent local_1a0 [32];
  QArrayData *local_180;
  long *local_178;
  QArrayData *local_170;
  QArrayData *local_168;
  QArrayData *local_160;
  QArrayData *local_158;
  QArrayData *local_150;
  QArrayData *local_148;
  QArrayData *local_140;
  CVmEvent local_138 [8];
  undefined1 local_130 [216];
  QEvent local_58 [39];
  undefined1 local_31;
  
  lVar5 = DAT_1011c3650;
  local_140 = *(QArrayData **)(DAT_1011c3650 + 0x18);
  if (1 < *(int *)local_140 + 1U) {
    LOCK();
    *(int *)local_140 = *(int *)local_140 + 1;
    local_31 = *(int *)local_140 != 0;
    UNLOCK();
  }
  local_148 = (QArrayData *)QString::fromAscii_helper("",0);
  ppQVar8 = &local_148;
  CVmEvent::CVmEvent(local_138,0x18b53,&local_140,0,100000,1,ppQVar8,0);
  uVar9 = (undefined4)((ulong)ppQVar8 >> 0x20);
  if (*(int *)local_148 != -1) {
    if (*(int *)local_148 != 0) {
      LOCK();
      *(int *)local_148 = *(int *)local_148 + -1;
      local_31 = *(int *)local_148 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002c6054;
    }
    QArrayData::deallocate(local_148,2,8);
  }
LAB_1002c6054:
  if (*(int *)local_140 != -1) {
    if (*(int *)local_140 != 0) {
      LOCK();
      *(int *)local_140 = *(int *)local_140 + -1;
      local_31 = *(int *)local_140 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002c608a;
    }
    QArrayData::deallocate(local_140,2,8);
  }
LAB_1002c608a:
  pCVar4 = operator_new(0xd0);
  if (param_1 != (char *)0x0) {
    _strlen(param_1);
  }
  QString::fromLocal8Bit_helper((char *)&local_150,(int)param_1);
  local_158 = (QArrayData *)QString::fromAscii_helper("mouumou_disk_name",0x11);
  CVmEventParameter::CVmEventParameter(pCVar4,1,&local_150,&local_158);
  CVmEvent::addEventParameter((CVmEventParameter *)local_138);
  if (*(int *)local_158 != -1) {
    if (*(int *)local_158 != 0) {
      LOCK();
      *(int *)local_158 = *(int *)local_158 + -1;
      local_31 = *(int *)local_158 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002c613b;
    }
    QArrayData::deallocate(local_158,2,8);
  }
LAB_1002c613b:
  if (*(int *)local_150 != -1) {
    if (*(int *)local_150 != 0) {
      LOCK();
      *(int *)local_150 = *(int *)local_150 + -1;
      local_31 = *(int *)local_150 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002c6171;
    }
    QArrayData::deallocate(local_150,2,8);
  }
LAB_1002c6171:
  pCVar4 = operator_new(0xd0);
  local_168 = (QArrayData *)QString::fromAscii_helper("%1",2);
  QString::arg(&local_160,&local_168,*param_2,0,10,0x20);
  local_170 = (QArrayData *)QString::fromAscii_helper("unmount_context",0xf);
  CVmEventParameter::CVmEventParameter(pCVar4,0,&local_160,&local_170);
  CVmEvent::addEventParameter((CVmEventParameter *)local_138);
  if (*(int *)local_170 != -1) {
    if (*(int *)local_170 != 0) {
      LOCK();
      *(int *)local_170 = *(int *)local_170 + -1;
      local_31 = *(int *)local_170 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002c6239;
    }
    QArrayData::deallocate(local_170,2,8);
  }
LAB_1002c6239:
  if (*(int *)local_160 != -1) {
    if (*(int *)local_160 != 0) {
      LOCK();
      *(int *)local_160 = *(int *)local_160 + -1;
      local_31 = *(int *)local_160 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002c6271;
    }
    QArrayData::deallocate(local_160,2,8);
  }
LAB_1002c6271:
  if (*(int *)local_168 != -1) {
    if (*(int *)local_168 != 0) {
      LOCK();
      *(int *)local_168 = *(int *)local_168 + -1;
      local_31 = *(int *)local_168 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002c62a7;
    }
    QArrayData::deallocate(local_168,2,8);
  }
LAB_1002c62a7:
  local_178 = (long *)0x0;
  CBaseNode::toString(SUB81(&local_180,0),SUB81(local_130,0));
  cVar2 = FUN_100067870(lVar5,&local_180,0xbbb,&local_178);
  if (1 < DAT_1011c568c) {
    pcVar7 = "fail";
    if (cVar2 != '\0') {
      pcVar7 = "success";
    }
    FUN_1008e3970("","USB",0,"vmSyncSendEvent [%s]",pcVar7);
  }
  uVar3 = 0;
  if (cVar2 != '\0') {
    iVar6 = 0;
    if (*(long *)(local_178[2] + 0x80) != 0) {
      pcVar7 = *(char **)(*(long *)(local_178[2] + 0x80) + 0x10);
      iVar6 = 0;
      if (pcVar7 != (char *)0x0) {
        _strlen(pcVar7);
        iVar6 = (int)pcVar7;
      }
    }
    QString::fromUtf8_helper((char *)&local_290,iVar6);
    QString::normalized(&local_288,&local_290,1,0);
    CVmEvent::CVmEvent(local_280,(QTypedArrayData<unsigned_short> *)&local_288);
    if (*(int *)local_288 != -1) {
      if (*(int *)local_288 != 0) {
        LOCK();
        *(int *)local_288 = *(int *)local_288 + -1;
        local_31 = *(int *)local_288 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1002c63d6;
      }
      QArrayData::deallocate(local_288,2,8);
    }
LAB_1002c63d6:
    if (*(int *)local_290 != -1) {
      if (*(int *)local_290 != 0) {
        LOCK();
        *(int *)local_290 = *(int *)local_290 + -1;
        local_31 = *(int *)local_290 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1002c640c;
      }
      QArrayData::deallocate(local_290,2,8);
    }
LAB_1002c640c:
    local_298 = (QArrayData *)QString::fromAscii_helper("mouumou_disk_name",0x11);
    CVmEvent::getEventParameter((QTypedArrayData<unsigned_short> *)local_280);
    if (*(int *)local_298 != -1) {
      if (*(int *)local_298 != 0) {
        LOCK();
        *(int *)local_298 = *(int *)local_298 + -1;
        local_31 = *(int *)local_298 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1002c6473;
      }
      QArrayData::deallocate(local_298,2,8);
    }
LAB_1002c6473:
    local_2a0 = (QArrayData *)QString::fromAscii_helper("unmount_context",0xf);
    lVar5 = CVmEvent::getEventParameter((QTypedArrayData<unsigned_short> *)local_280);
    if (*(int *)local_2a0 != -1) {
      if (*(int *)local_2a0 != 0) {
        LOCK();
        *(int *)local_2a0 = *(int *)local_2a0 + -1;
        local_31 = *(int *)local_2a0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1002c64d7;
      }
      QArrayData::deallocate(local_2a0,2,8);
    }
LAB_1002c64d7:
    uVar3 = 0;
    if (lVar5 != 0) {
      CVmEventParameter::getParamValue();
      uVar3 = QString::toInt((bool *)&local_2a8,0);
      *param_2 = uVar3;
      if (*(int *)local_2a8 != -1) {
        if (*(int *)local_2a8 != 0) {
          LOCK();
          *(int *)local_2a8 = *(int *)local_2a8 + -1;
          local_31 = *(int *)local_2a8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1002c653a;
        }
        QArrayData::deallocate(local_2a8,2,8);
      }
LAB_1002c653a:
      uVar3 = *param_2 & 1;
    }
    if (1 < DAT_1011c568c) {
      CVmEventParameter::getParamValue();
      QString::toUtf8();
      lVar5 = *(long *)(local_2b0 + 0x10);
      CVmEventParameter::getParamValue();
      QString::toUtf8();
      FUN_1008e3970("","USB",0,"media %s was umounted with: %s ctx: 0x%X",local_2b0 + lVar5,
                    local_2c0 + *(long *)(local_2c0 + 0x10),CONCAT44(uVar9,*param_2));
      if (*(int *)local_2c0 != -1) {
        if (*(int *)local_2c0 != 0) {
          LOCK();
          *(int *)local_2c0 = *(int *)local_2c0 + -1;
          local_31 = *(int *)local_2c0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1002c6604;
        }
        QArrayData::deallocate(local_2c0,1,8);
      }
LAB_1002c6604:
      if (*(int *)local_2c8 != -1) {
        if (*(int *)local_2c8 != 0) {
          LOCK();
          *(int *)local_2c8 = *(int *)local_2c8 + -1;
          local_31 = *(int *)local_2c8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1002c663a;
        }
        QArrayData::deallocate(local_2c8,2,8);
      }
LAB_1002c663a:
      if (*(int *)local_2b0 != -1) {
        if (*(int *)local_2b0 != 0) {
          LOCK();
          *(int *)local_2b0 = *(int *)local_2b0 + -1;
          local_31 = *(int *)local_2b0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1002c6670;
        }
        QArrayData::deallocate(local_2b0,1,8);
      }
LAB_1002c6670:
      if (*(int *)local_2b8 != -1) {
        if (*(int *)local_2b8 != 0) {
          LOCK();
          *(int *)local_2b8 = *(int *)local_2b8 + -1;
          local_31 = *(int *)local_2b8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1002c66a6;
        }
        QArrayData::deallocate(local_2b8,2,8);
      }
    }
LAB_1002c66a6:
    QEvent::~QEvent(local_1a0);
    CVmEventBase::~CVmEventBase((CVmEventBase *)local_280);
  }
  if (*(int *)local_180 != -1) {
    if (*(int *)local_180 != 0) {
      LOCK();
      *(int *)local_180 = *(int *)local_180 + -1;
      local_31 = *(int *)local_180 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002c66f4;
    }
    QArrayData::deallocate(local_180,2,8);
  }
LAB_1002c66f4:
  if (local_178 != (long *)0x0) {
    LOCK();
    plVar1 = local_178 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)(*local_178 + 0x10))();
    }
  }
  QEvent::~QEvent(local_58);
  CVmEventBase::~CVmEventBase((CVmEventBase *)local_138);
  return uVar3;
}



uint FUN_1003f9150(undefined8 *param_1,uint *param_2)

{
  long *plVar1;
  char *pcVar2;
  char cVar3;
  uint uVar4;
  CVmEventParameter *pCVar5;
  long lVar6;
  int iVar7;
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
  
  lVar6 = DAT_1011c3650;
  local_140 = *(QArrayData **)(DAT_1011c3650 + 0x18);
  if (1 < *(int *)local_140 + 1U) {
    LOCK();
    *(int *)local_140 = *(int *)local_140 + 1;
    local_31 = *(int *)local_140 != 0;
    UNLOCK();
  }
  local_148 = (QArrayData *)QString::fromAscii_helper("",0);
  CVmEvent::CVmEvent(local_138,0x18b54,&local_140,0,100000,1,&local_148,0);
  if (*(int *)local_148 != -1) {
    if (*(int *)local_148 != 0) {
      LOCK();
      *(int *)local_148 = *(int *)local_148 + -1;
      local_31 = *(int *)local_148 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003f9214;
    }
    QArrayData::deallocate(local_148,2,8);
  }
LAB_1003f9214:
  if (*(int *)local_140 != -1) {
    if (*(int *)local_140 != 0) {
      LOCK();
      *(int *)local_140 = *(int *)local_140 + -1;
      local_31 = *(int *)local_140 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003f924a;
    }
    QArrayData::deallocate(local_140,2,8);
  }
LAB_1003f924a:
  pCVar5 = operator_new(0xd0);
  local_150 = (QArrayData *)*param_1;
  if (1 < *(int *)local_150 + 1U) {
    LOCK();
    *(int *)local_150 = *(int *)local_150 + 1;
    local_31 = *(int *)local_150 != 0;
    UNLOCK();
  }
  local_158 = (QArrayData *)QString::fromAscii_helper("mouumou_disk_name",0x11);
  CVmEventParameter::CVmEventParameter(pCVar5,1,&local_150,&local_158);
  CVmEvent::addEventParameter((CVmEventParameter *)local_138);
  if (*(int *)local_158 != -1) {
    if (*(int *)local_158 != 0) {
      LOCK();
      *(int *)local_158 = *(int *)local_158 + -1;
      local_31 = *(int *)local_158 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003f92f3;
    }
    QArrayData::deallocate(local_158,2,8);
  }
LAB_1003f92f3:
  if (*(int *)local_150 != -1) {
    if (*(int *)local_150 != 0) {
      LOCK();
      *(int *)local_150 = *(int *)local_150 + -1;
      local_31 = *(int *)local_150 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003f9329;
    }
    QArrayData::deallocate(local_150,2,8);
  }
LAB_1003f9329:
  pCVar5 = operator_new(0xd0);
  local_168 = (QArrayData *)QString::fromAscii_helper("%1",2);
  QString::arg(&local_160,&local_168,*param_2,0,10,0x20);
  local_170 = (QArrayData *)QString::fromAscii_helper("unmount_context",0xf);
  CVmEventParameter::CVmEventParameter(pCVar5,0,&local_160,&local_170);
  CVmEvent::addEventParameter((CVmEventParameter *)local_138);
  if (*(int *)local_170 != -1) {
    if (*(int *)local_170 != 0) {
      LOCK();
      *(int *)local_170 = *(int *)local_170 + -1;
      local_31 = *(int *)local_170 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003f93f1;
    }
    QArrayData::deallocate(local_170,2,8);
  }
LAB_1003f93f1:
  if (*(int *)local_160 != -1) {
    if (*(int *)local_160 != 0) {
      LOCK();
      *(int *)local_160 = *(int *)local_160 + -1;
      local_31 = *(int *)local_160 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003f9429;
    }
    QArrayData::deallocate(local_160,2,8);
  }
LAB_1003f9429:
  if (*(int *)local_168 != -1) {
    if (*(int *)local_168 != 0) {
      LOCK();
      *(int *)local_168 = *(int *)local_168 + -1;
      local_31 = *(int *)local_168 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003f945f;
    }
    QArrayData::deallocate(local_168,2,8);
  }
LAB_1003f945f:
  local_178 = (long *)0x0;
  CBaseNode::toString(SUB81(&local_180,0),SUB81(local_130,0));
  cVar3 = FUN_100067870(lVar6,&local_180,0xbbb,&local_178);
  uVar4 = 0;
  if (cVar3 != '\0') {
    iVar7 = 0;
    if (*(long *)(local_178[2] + 0x80) != 0) {
      pcVar2 = *(char **)(*(long *)(local_178[2] + 0x80) + 0x10);
      iVar7 = 0;
      if (pcVar2 != (char *)0x0) {
        _strlen(pcVar2);
        iVar7 = (int)pcVar2;
      }
    }
    QString::fromUtf8_helper((char *)&local_290,iVar7);
    QString::normalized(&local_288,&local_290,1,0);
    CVmEvent::CVmEvent(local_280,(QTypedArrayData<unsigned_short> *)&local_288);
    if (*(int *)local_288 != -1) {
      if (*(int *)local_288 != 0) {
        LOCK();
        *(int *)local_288 = *(int *)local_288 + -1;
        local_31 = *(int *)local_288 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1003f954c;
      }
      QArrayData::deallocate(local_288,2,8);
    }
LAB_1003f954c:
    if (*(int *)local_290 != -1) {
      if (*(int *)local_290 != 0) {
        LOCK();
        *(int *)local_290 = *(int *)local_290 + -1;
        local_31 = *(int *)local_290 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1003f9582;
      }
      QArrayData::deallocate(local_290,2,8);
    }
LAB_1003f9582:
    local_298 = (QArrayData *)QString::fromAscii_helper("mouumou_disk_name",0x11);
    CVmEvent::getEventParameter((QTypedArrayData<unsigned_short> *)local_280);
    if (*(int *)local_298 != -1) {
      if (*(int *)local_298 != 0) {
        LOCK();
        *(int *)local_298 = *(int *)local_298 + -1;
        local_31 = *(int *)local_298 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1003f95e3;
      }
      QArrayData::deallocate(local_298,2,8);
    }
LAB_1003f95e3:
    local_2a0 = (QArrayData *)QString::fromAscii_helper("unmount_context",0xf);
    lVar6 = CVmEvent::getEventParameter((QTypedArrayData<unsigned_short> *)local_280);
    if (*(int *)local_2a0 != -1) {
      if (*(int *)local_2a0 != 0) {
        LOCK();
        *(int *)local_2a0 = *(int *)local_2a0 + -1;
        local_31 = *(int *)local_2a0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1003f9647;
      }
      QArrayData::deallocate(local_2a0,2,8);
    }
LAB_1003f9647:
    if (lVar6 != 0) {
      CVmEventParameter::getParamValue();
      uVar4 = QString::toInt((bool *)&local_2a8,0);
      *param_2 = uVar4;
      if (*(int *)local_2a8 != -1) {
        if (*(int *)local_2a8 != 0) {
          LOCK();
          *(int *)local_2a8 = *(int *)local_2a8 + -1;
          local_31 = *(int *)local_2a8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1003f96a7;
        }
        QArrayData::deallocate(local_2a8,2,8);
      }
    }
LAB_1003f96a7:
    uVar4 = *param_2;
    QEvent::~QEvent(local_1a0);
    CVmEventBase::~CVmEventBase((CVmEventBase *)local_280);
    uVar4 = uVar4 & 1;
  }
  if (*(int *)local_180 != -1) {
    if (*(int *)local_180 != 0) {
      LOCK();
      *(int *)local_180 = *(int *)local_180 + -1;
      local_31 = *(int *)local_180 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003f96fb;
    }
    QArrayData::deallocate(local_180,2,8);
  }
LAB_1003f96fb:
  if (local_178 != (long *)0x0) {
    LOCK();
    plVar1 = local_178 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)(*local_178 + 0x10))();
    }
  }
  QEvent::~QEvent(local_58);
  CVmEventBase::~CVmEventBase((CVmEventBase *)local_138);
  return uVar4;
}


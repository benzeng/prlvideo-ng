
undefined4
FUN_100264780(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
             int param_5,int param_6)

{
  long *plVar1;
  char *pcVar2;
  char cVar3;
  CVmEventParameter *pCVar4;
  QArrayData *pQVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  undefined4 uVar9;
  QArrayData *pQVar10;
  QArrayData **ppQVar11;
  undefined8 in_stack_fffffffffffffbc0;
  undefined4 uVar13;
  ulong uVar12;
  QArrayData *local_408;
  QArrayData *local_400;
  CVmEvent local_3f8 [224];
  QEvent local_318 [32];
  long *local_2f8;
  QArrayData *local_2f0;
  QArrayData *local_2e8;
  QArrayData *local_2e0;
  QArrayData *local_2d8;
  QArrayData *local_2d0;
  CVmEvent local_2c8 [8];
  undefined1 local_2c0 [216];
  QEvent local_1e8 [32];
  QArrayData *local_1c8;
  QArrayData *local_1c0;
  QArrayData *local_1b8;
  QArrayData *local_1b0;
  QArrayData *local_1a8;
  QArrayData *local_1a0;
  QArrayData *local_198;
  QArrayData *local_190;
  QArrayData *local_188;
  QArrayData *local_180;
  QArrayData *local_178;
  QArrayData *local_170;
  QArrayData *local_168;
  QArrayData *local_160;
  QArrayData *local_158;
  CVmEvent local_150 [8];
  undefined1 local_148 [216];
  QEvent local_70 [32];
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  uVar13 = (undefined4)((ulong)in_stack_fffffffffffffbc0 >> 0x20);
  QString::toUtf8();
  pQVar10 = local_40 + *(long *)(local_40 + 0x10);
  QString::toUtf8();
  pQVar5 = local_48;
  lVar6 = *(long *)(local_48 + 0x10);
  QString::toUtf8();
  uVar12 = CONCAT44(uVar13,param_5);
  FUN_1008e3970("","LocalDevices",0,
                "[CParallelPrinter] UI settings for printer id/name = %s/%s, spool file = %s, pages = %d, copies = %d"
                ,pQVar10,pQVar5 + lVar6,local_50 + *(long *)(local_50 + 0x10),uVar12,param_6);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10026485e;
    }
    QArrayData::deallocate(local_50,1,8);
  }
LAB_10026485e:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10026488e;
    }
    QArrayData::deallocate(local_48,1,8);
  }
LAB_10026488e:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002648be;
    }
    QArrayData::deallocate(local_40,1,8);
  }
LAB_1002648be:
  lVar6 = DAT_1011c3650;
  local_158 = *(QArrayData **)(DAT_1011c3650 + 0x18);
  if (1 < *(int *)local_158 + 1U) {
    LOCK();
    *(int *)local_158 = *(int *)local_158 + 1;
    local_31 = *(int *)local_158 != 0;
    UNLOCK();
  }
  local_160 = (QArrayData *)QString::fromAscii_helper("",0);
  uVar12 = uVar12 & 0xffffffff00000000;
  CVmEvent::CVmEvent(local_150,0x18b55,&local_158,0,100000,1,&local_160,uVar12);
  if (*(int *)local_160 != -1) {
    if (*(int *)local_160 != 0) {
      LOCK();
      *(int *)local_160 = *(int *)local_160 + -1;
      local_31 = *(int *)local_160 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100264968;
    }
    QArrayData::deallocate(local_160,2,8);
  }
LAB_100264968:
  if (*(int *)local_158 != -1) {
    if (*(int *)local_158 != 0) {
      LOCK();
      *(int *)local_158 = *(int *)local_158 + -1;
      local_31 = *(int *)local_158 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10026499e;
    }
    QArrayData::deallocate(local_158,2,8);
  }
LAB_10026499e:
  pCVar4 = operator_new(0xd0);
  local_168 = (QArrayData *)*param_3;
  if (1 < *(int *)local_168 + 1U) {
    LOCK();
    *(int *)local_168 = *(int *)local_168 + 1;
    local_31 = *(int *)local_168 != 0;
    UNLOCK();
  }
  local_170 = (QArrayData *)QString::fromAscii_helper("printer_sys_name",0x10);
  CVmEventParameter::CVmEventParameter(pCVar4,1,&local_168,&local_170);
  CVmEvent::addEventParameter((CVmEventParameter *)local_150);
  if (*(int *)local_170 != -1) {
    if (*(int *)local_170 != 0) {
      LOCK();
      *(int *)local_170 = *(int *)local_170 + -1;
      local_31 = *(int *)local_170 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100264a46;
    }
    QArrayData::deallocate(local_170,2,8);
  }
LAB_100264a46:
  if (*(int *)local_168 != -1) {
    if (*(int *)local_168 != 0) {
      LOCK();
      *(int *)local_168 = *(int *)local_168 + -1;
      local_31 = *(int *)local_168 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100264a7c;
    }
    QArrayData::deallocate(local_168,2,8);
  }
LAB_100264a7c:
  pCVar4 = operator_new(0xd0);
  local_178 = (QArrayData *)*param_2;
  if (1 < *(int *)local_178 + 1U) {
    LOCK();
    *(int *)local_178 = *(int *)local_178 + 1;
    local_31 = *(int *)local_178 != 0;
    UNLOCK();
  }
  local_180 = (QArrayData *)QString::fromAscii_helper("printer_sys_id",0xe);
  CVmEventParameter::CVmEventParameter(pCVar4,1,&local_178,&local_180);
  CVmEvent::addEventParameter((CVmEventParameter *)local_150);
  if (*(int *)local_180 != -1) {
    if (*(int *)local_180 != 0) {
      LOCK();
      *(int *)local_180 = *(int *)local_180 + -1;
      local_31 = *(int *)local_180 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100264b25;
    }
    QArrayData::deallocate(local_180,2,8);
  }
LAB_100264b25:
  if (*(int *)local_178 != -1) {
    if (*(int *)local_178 != 0) {
      LOCK();
      *(int *)local_178 = *(int *)local_178 + -1;
      local_31 = *(int *)local_178 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100264b5b;
    }
    QArrayData::deallocate(local_178,2,8);
  }
LAB_100264b5b:
  pCVar4 = operator_new(0xd0);
  local_188 = (QArrayData *)*param_4;
  if (1 < *(int *)local_188 + 1U) {
    LOCK();
    *(int *)local_188 = *(int *)local_188 + 1;
    local_31 = *(int *)local_188 != 0;
    UNLOCK();
  }
  local_190 = (QArrayData *)QString::fromAscii_helper("spool_file_name",0xf);
  CVmEventParameter::CVmEventParameter(pCVar4,1,&local_188,&local_190);
  CVmEvent::addEventParameter((CVmEventParameter *)local_150);
  if (*(int *)local_190 != -1) {
    if (*(int *)local_190 != 0) {
      LOCK();
      *(int *)local_190 = *(int *)local_190 + -1;
      local_31 = *(int *)local_190 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100264c0a;
    }
    QArrayData::deallocate(local_190,2,8);
  }
LAB_100264c0a:
  if (*(int *)local_188 != -1) {
    if (*(int *)local_188 != 0) {
      LOCK();
      *(int *)local_188 = *(int *)local_188 + -1;
      local_31 = *(int *)local_188 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100264c40;
    }
    QArrayData::deallocate(local_188,2,8);
  }
LAB_100264c40:
  pCVar4 = operator_new(0xd0);
  local_1a0 = (QArrayData *)QString::fromAscii_helper("%1",2);
  QString::arg(&local_198,&local_1a0,(long)param_5,0,10,0x20);
  local_1a8 = (QArrayData *)QString::fromAscii_helper("number_of_pages",0xf);
  CVmEventParameter::CVmEventParameter(pCVar4,2,&local_198,&local_1a8);
  CVmEvent::addEventParameter((CVmEventParameter *)local_150);
  if (*(int *)local_1a8 != -1) {
    if (*(int *)local_1a8 != 0) {
      LOCK();
      *(int *)local_1a8 = *(int *)local_1a8 + -1;
      local_31 = *(int *)local_1a8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100264d0f;
    }
    QArrayData::deallocate(local_1a8,2,8);
  }
LAB_100264d0f:
  if (*(int *)local_198 != -1) {
    if (*(int *)local_198 != 0) {
      LOCK();
      *(int *)local_198 = *(int *)local_198 + -1;
      local_31 = *(int *)local_198 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100264d47;
    }
    QArrayData::deallocate(local_198,2,8);
  }
LAB_100264d47:
  if (*(int *)local_1a0 != -1) {
    if (*(int *)local_1a0 != 0) {
      LOCK();
      *(int *)local_1a0 = *(int *)local_1a0 + -1;
      local_31 = *(int *)local_1a0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100264d7d;
    }
    QArrayData::deallocate(local_1a0,2,8);
  }
LAB_100264d7d:
  pCVar4 = operator_new(0xd0);
  local_1b8 = (QArrayData *)QString::fromAscii_helper("%1",2);
  QString::arg(&local_1b0,&local_1b8,(long)param_6,0,10,0x20);
  local_1c0 = (QArrayData *)QString::fromAscii_helper("number_of_copies",0x10);
  CVmEventParameter::CVmEventParameter(pCVar4,2,&local_1b0,&local_1c0);
  CVmEvent::addEventParameter((CVmEventParameter *)local_150);
  if (*(int *)local_1c0 != -1) {
    if (*(int *)local_1c0 != 0) {
      LOCK();
      *(int *)local_1c0 = *(int *)local_1c0 + -1;
      local_31 = *(int *)local_1c0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100264e4c;
    }
    QArrayData::deallocate(local_1c0,2,8);
  }
LAB_100264e4c:
  if (*(int *)local_1b0 != -1) {
    if (*(int *)local_1b0 != 0) {
      LOCK();
      *(int *)local_1b0 = *(int *)local_1b0 + -1;
      local_31 = *(int *)local_1b0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100264e84;
    }
    QArrayData::deallocate(local_1b0,2,8);
  }
LAB_100264e84:
  if (*(int *)local_1b8 != -1) {
    if (*(int *)local_1b8 != 0) {
      LOCK();
      *(int *)local_1b8 = *(int *)local_1b8 + -1;
      local_31 = *(int *)local_1b8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100264eba;
    }
    QArrayData::deallocate(local_1b8,2,8);
  }
LAB_100264eba:
  CBaseNode::toString(SUB81(&local_1c8,0),SUB81(local_148,0));
  local_2d0 = *(QArrayData **)(lVar6 + 0x18);
  if (1 < *(int *)local_2d0 + 1U) {
    LOCK();
    *(int *)local_2d0 = *(int *)local_2d0 + 1;
    local_31 = *(int *)local_2d0 != 0;
    UNLOCK();
  }
  local_2d8 = (QArrayData *)QString::fromAscii_helper("",0);
  ppQVar11 = &local_2d8;
  CVmEvent::CVmEvent(local_2c8,0x188af,&local_2d0,0,0x188af,1,ppQVar11,uVar12 & 0xffffffff00000000);
  uVar13 = (undefined4)((ulong)ppQVar11 >> 0x20);
  if (*(int *)local_2d8 != -1) {
    if (*(int *)local_2d8 != 0) {
      LOCK();
      *(int *)local_2d8 = *(int *)local_2d8 + -1;
      local_31 = *(int *)local_2d8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100264f71;
    }
    QArrayData::deallocate(local_2d8,2,8);
  }
LAB_100264f71:
  if (*(int *)local_2d0 != -1) {
    if (*(int *)local_2d0 != 0) {
      LOCK();
      *(int *)local_2d0 = *(int *)local_2d0 + -1;
      local_31 = *(int *)local_2d0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100264fa7;
    }
    QArrayData::deallocate(local_2d0,2,8);
  }
LAB_100264fa7:
  pCVar4 = operator_new(0xd0);
  local_2e0 = local_1c8;
  if (1 < *(int *)local_1c8 + 1U) {
    LOCK();
    *(int *)local_1c8 = *(int *)local_1c8 + 1;
    local_31 = *(int *)local_1c8 != 0;
    UNLOCK();
  }
  local_2e8 = (QArrayData *)QString::fromAscii_helper("disp_vm_request_payload",0x17);
  CVmEventParameter::CVmEventParameter(pCVar4,1,&local_2e0,&local_2e8);
  CVmEvent::addEventParameter((CVmEventParameter *)local_2c8);
  if (*(int *)local_2e8 != -1) {
    if (*(int *)local_2e8 != 0) {
      LOCK();
      *(int *)local_2e8 = *(int *)local_2e8 + -1;
      local_31 = *(int *)local_2e8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100265053;
    }
    QArrayData::deallocate(local_2e8,2,8);
  }
LAB_100265053:
  if (*(int *)local_2e0 != -1) {
    if (*(int *)local_2e0 != 0) {
      LOCK();
      *(int *)local_2e0 = *(int *)local_2e0 + -1;
      local_31 = *(int *)local_2e0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100265089;
    }
    QArrayData::deallocate(local_2e0,2,8);
  }
LAB_100265089:
  CBaseNode::toString(SUB81(&local_2f0,0),SUB81(local_2c0,0));
  local_2f8 = (long *)0x0;
  cVar3 = FUN_100067870(lVar6,&local_2f0,0xbbb,&local_2f8);
  if (cVar3 == '\0') {
    uVar9 = 0x80000001;
    FUN_1008e3970("","LocalDevices",0,"[CParallelPrinter] vmSyncSendEvent failed");
  }
  else {
    iVar8 = 0;
    if (*(long *)(local_2f8[2] + 0x80) != 0) {
      pcVar2 = *(char **)(*(long *)(local_2f8[2] + 0x80) + 0x10);
      iVar8 = 0;
      if (pcVar2 != (char *)0x0) {
        _strlen(pcVar2);
        iVar8 = (int)pcVar2;
      }
    }
    QString::fromUtf8_helper((char *)&local_408,iVar8);
    QString::normalized(&local_400,&local_408,1,0);
    CVmEvent::CVmEvent(local_3f8,(QTypedArrayData<unsigned_short> *)&local_400);
    if (*(int *)local_400 != -1) {
      if (*(int *)local_400 != 0) {
        LOCK();
        *(int *)local_400 = *(int *)local_400 + -1;
        local_31 = *(int *)local_400 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100265174;
      }
      QArrayData::deallocate(local_400,2,8);
    }
LAB_100265174:
    if (*(int *)local_408 != -1) {
      if (*(int *)local_408 != 0) {
        LOCK();
        *(int *)local_408 = *(int *)local_408 + -1;
        local_31 = *(int *)local_408 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1002651aa;
      }
      QArrayData::deallocate(local_408,2,8);
    }
LAB_1002651aa:
    pQVar5 = (QArrayData *)QString::fromAscii_helper("disp_vm_request_payload",0x17);
    lVar6 = CVmEvent::getEventParameter((QTypedArrayData<unsigned_short> *)local_3f8);
    if (*(int *)pQVar5 != -1) {
      if (*(int *)pQVar5 != 0) {
        LOCK();
        *(int *)pQVar5 = *(int *)pQVar5 + -1;
        local_31 = *(int *)pQVar5 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10026520e;
      }
      QArrayData::deallocate(pQVar5,2,8);
    }
LAB_10026520e:
    pQVar5 = (QArrayData *)QString::fromAscii_helper("default_answer_on_vm_request",0x1c);
    lVar7 = CVmEvent::getEventParameter((QTypedArrayData<unsigned_short> *)local_3f8);
    if (*(int *)pQVar5 != -1) {
      if (*(int *)pQVar5 != 0) {
        LOCK();
        *(int *)pQVar5 = *(int *)pQVar5 + -1;
        local_31 = *(int *)pQVar5 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100265272;
      }
      QArrayData::deallocate(pQVar5,2,8);
    }
LAB_100265272:
    FUN_1008e3970("","LocalDevices",0,
                  "[CParallelPrinter] vmSyncSendEvent got response. AnswerFromGui: %d; DefaultAnswer %d"
                  ,lVar6 != 0,lVar7 != 0);
    uVar9 = 0;
    if (lVar6 == 0) {
      uVar9 = 0x80000008;
    }
    if (lVar7 == 0 && lVar6 == 0) {
      FUN_1008e3970("","LocalDevices",0,"ASSERT( %s ) occured in %s:%d [%s]","pdef != NULL",
                    "../Ports/Parallel/CParallelDevice.cpp",CONCAT44(uVar13,0x90),"PrintByGUI");
      uVar9 = 0x80000008;
    }
    QEvent::~QEvent(local_318);
    CVmEventBase::~CVmEventBase((CVmEventBase *)local_3f8);
  }
  if (local_2f8 != (long *)0x0) {
    LOCK();
    plVar1 = local_2f8 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)(*local_2f8 + 0x10))();
    }
  }
  if (*(int *)local_2f0 != -1) {
    if (*(int *)local_2f0 != 0) {
      LOCK();
      *(int *)local_2f0 = *(int *)local_2f0 + -1;
      local_31 = *(int *)local_2f0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10026539b;
    }
    QArrayData::deallocate(local_2f0,2,8);
  }
LAB_10026539b:
  QEvent::~QEvent(local_1e8);
  CVmEventBase::~CVmEventBase((CVmEventBase *)local_2c8);
  if (*(int *)local_1c8 != -1) {
    if (*(int *)local_1c8 != 0) {
      LOCK();
      *(int *)local_1c8 = *(int *)local_1c8 + -1;
      local_31 = *(int *)local_1c8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002653e9;
    }
    QArrayData::deallocate(local_1c8,2,8);
  }
LAB_1002653e9:
  QEvent::~QEvent(local_70);
  CVmEventBase::~CVmEventBase((CVmEventBase *)local_150);
  return uVar9;
}


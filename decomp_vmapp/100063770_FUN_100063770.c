
bool FUN_100063770(long param_1,undefined4 param_2,int param_3,long *param_4,int param_5,
                  undefined8 param_6)

{
  long lVar1;
  char cVar2;
  char cVar3;
  CVmEventParameter *pCVar4;
  long *plVar5;
  ulong uVar6;
  bool bVar7;
  long *local_1a0;
  QArrayData *local_198;
  QDataStream local_190 [24];
  undefined4 local_178;
  long local_170 [2];
  QArrayData *local_160;
  QArrayData *local_158;
  QArrayData *local_150;
  QArrayData *local_148;
  QArrayData *local_140;
  CVmEvent local_138 [8];
  undefined1 local_130 [216];
  QEvent local_58 [39];
  undefined1 local_31;
  
  local_140 = *(QArrayData **)(param_1 + 0x18);
  if (1 < *(int *)local_140 + 1U) {
    LOCK();
    *(int *)local_140 = *(int *)local_140 + 1;
    local_31 = *(int *)local_140 != 0;
    UNLOCK();
  }
  local_148 = (QArrayData *)QString::fromAscii_helper("",0);
  CVmEvent::CVmEvent(local_138,param_2,&local_140,0,100000,0,&local_148,0);
  if (*(int *)local_148 != -1) {
    if (*(int *)local_148 != 0) {
      LOCK();
      *(int *)local_148 = *(int *)local_148 + -1;
      local_31 = *(int *)local_148 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100063839;
    }
    QArrayData::deallocate(local_148,2,8);
  }
LAB_100063839:
  if (*(int *)local_140 != -1) {
    if (*(int *)local_140 != 0) {
      LOCK();
      *(int *)local_140 = *(int *)local_140 + -1;
      local_31 = *(int *)local_140 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10006386f;
    }
    QArrayData::deallocate(local_140,2,8);
  }
LAB_10006386f:
  pCVar4 = operator_new(0xd0);
  QString::number((uint)&local_150,param_3);
  local_158 = (QArrayData *)QString::fromAscii_helper("op_rc",5);
  CVmEventParameter::CVmEventParameter(pCVar4,0,&local_150);
  CVmEvent::addEventParameter((CVmEventParameter *)local_138);
  if (*(int *)local_158 != -1) {
    if (*(int *)local_158 != 0) {
      LOCK();
      *(int *)local_158 = *(int *)local_158 + -1;
      local_31 = *(int *)local_158 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10006390d;
    }
    QArrayData::deallocate(local_158,2,8);
  }
LAB_10006390d:
  if (*(int *)local_150 != -1) {
    if (*(int *)local_150 != 0) {
      LOCK();
      *(int *)local_150 = *(int *)local_150 + -1;
      local_31 = *(int *)local_150 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100063943;
    }
    QArrayData::deallocate(local_150,2,8);
  }
LAB_100063943:
  if (param_4[1] != *param_4) {
    uVar6 = 1;
    do {
      CVmEvent::addEventParameter((CVmEventParameter *)local_138);
      bVar7 = uVar6 < (ulong)(param_4[1] - *param_4 >> 3);
      uVar6 = (ulong)((int)uVar6 + 1);
    } while (bVar7);
  }
  if (param_5 == 0xbc0) {
    local_160 = (QArrayData *)PTR_shared_null_100ba20d0;
    QBuffer::QBuffer((QBuffer *)local_170,(QByteArray *)&local_160,(QObject *)0x0);
    cVar2 = QBuffer::open(local_170,3);
    if (cVar2 == '\0') {
      FUN_1008e3970("","vm",0,"Fatal error - couldn\'t to open binary data buffer for read/write");
      cVar3 = '\x01';
    }
    else {
      QDataStream::QDataStream(local_190,(QIODevice *)local_170);
      local_178 = 7;
      CVmEvent::Serialize((QDataStream *)local_138);
      (**(code **)(local_170[0] + 0x98))(local_170);
      cVar3 = FUN_1000646d0(param_1,0xbc0,local_190,*(undefined4 *)(local_160 + 4),param_6);
      QDataStream::~QDataStream(local_190);
    }
    QBuffer::~QBuffer((QBuffer *)local_170);
    if (*(int *)local_160 != -1) {
      if (*(int *)local_160 != 0) {
        LOCK();
        *(int *)local_160 = *(int *)local_160 + -1;
        local_31 = *(int *)local_160 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100063b93;
      }
      QArrayData::deallocate(local_160,1,8);
    }
LAB_100063b93:
    if (cVar2 == '\0') {
      bVar7 = false;
      goto LAB_100063ba1;
    }
  }
  else {
    CBaseNode::toString(SUB81(&local_198,0),SUB81(local_130,0));
    plVar5 = operator_new(0x18,(nothrow_t *)PTR_nothrow_100ba21c8);
    local_1a0 = (long *)0x0;
    if (plVar5 != (long *)0x0) {
      *(undefined4 *)(plVar5 + 1) = 1;
      plVar5[2] = 0;
      *plVar5 = (long)&PTR_FUN_100bef0d0;
      local_1a0 = plVar5;
    }
    cVar3 = FUN_100063e20(param_1,&local_198,param_5,&local_1a0,0);
    if (local_1a0 != (long *)0x0) {
      LOCK();
      plVar5 = local_1a0 + 1;
      lVar1 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar1 == 1) {
        (**(code **)(*local_1a0 + 0x10))();
      }
    }
    if (*(int *)local_198 != -1) {
      if (*(int *)local_198 != 0) {
        LOCK();
        *(int *)local_198 = *(int *)local_198 + -1;
        local_31 = *(int *)local_198 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100063b9b;
      }
      QArrayData::deallocate(local_198,2,8);
    }
  }
LAB_100063b9b:
  bVar7 = cVar3 != '\0';
LAB_100063ba1:
  QEvent::~QEvent(local_58);
  CVmEventBase::~CVmEventBase((CVmEventBase *)local_138);
  return bVar7;
}


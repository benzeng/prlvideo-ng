
undefined1 FUN_10006cec0(long param_1,long *param_2)

{
  char *pcVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  undefined1 uVar5;
  QArrayData *local_158;
  QArrayData *local_150;
  QArrayData *local_148;
  QArrayData *local_140;
  QArrayData *local_138;
  QArrayData *local_130;
  CVmEvent local_128 [8];
  undefined1 local_120 [216];
  QEvent local_48 [39];
  undefined1 local_21;
  
  lVar4 = *(long *)(*(long *)(*param_2 + 0x10) + 0x80);
  iVar2 = 0;
  if (lVar4 != 0) {
    pcVar1 = *(char **)(lVar4 + 0x10);
    iVar2 = 0;
    if (pcVar1 != (char *)0x0) {
      _strlen(pcVar1);
      iVar2 = (int)pcVar1;
    }
  }
  QString::fromUtf8_helper((char *)&local_138,iVar2);
  QString::normalized(&local_130,&local_138,1,0);
  CVmEvent::CVmEvent(local_128,(QTypedArrayData<unsigned_short> *)&local_130);
  if (*(int *)local_130 != -1) {
    if (*(int *)local_130 != 0) {
      LOCK();
      *(int *)local_130 = *(int *)local_130 + -1;
      local_21 = *(int *)local_130 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10006cf74;
    }
    QArrayData::deallocate(local_130,2,8);
  }
LAB_10006cf74:
  if (*(int *)local_138 != -1) {
    if (*(int *)local_138 != 0) {
      LOCK();
      *(int *)local_138 = *(int *)local_138 + -1;
      local_21 = *(int *)local_138 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10006cfaa;
    }
    QArrayData::deallocate(local_138,2,8);
  }
LAB_10006cfaa:
  iVar2 = CVmEventBase::getEventType();
  uVar5 = 1;
  if (iVar2 != 0x186a1) goto LAB_10006d1a1;
  local_140 = (QArrayData *)QString::fromAscii_helper("vminfo_vm_state",0xf);
  lVar4 = CVmEvent::getEventParameter((QTypedArrayData<unsigned_short> *)local_128);
  if (*(int *)local_140 != -1) {
    if (*(int *)local_140 != 0) {
      LOCK();
      *(int *)local_140 = *(int *)local_140 + -1;
      local_21 = *(int *)local_140 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10006d028;
    }
    QArrayData::deallocate(local_140,2,8);
  }
LAB_10006d028:
  if (lVar4 == 0) {
    FUN_1008e3970("","vm",0,"ASSERT( %s ) occured in %s:%d [%s]","pVmStateParam",
                  "CVmCommandsHandler.cpp",0x12a,"vmStateInfo");
    CBaseNode::toString(SUB81(&local_150,0),SUB81(local_120,0));
    QString::toUtf8();
    FUN_1008e3970("","vm",0,"Wrong VM changing state command format [%s]",
                  local_148 + *(long *)(local_148 + 0x10));
    if (*(int *)local_148 != -1) {
      if (*(int *)local_148 != 0) {
        LOCK();
        *(int *)local_148 = *(int *)local_148 + -1;
        local_21 = *(int *)local_148 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_10006d15e;
      }
      QArrayData::deallocate(local_148,1,8);
    }
LAB_10006d15e:
    if (*(int *)local_150 == -1) {
      uVar5 = 0;
    }
    else {
      if (*(int *)local_150 != 0) {
        LOCK();
        *(int *)local_150 = *(int *)local_150 + -1;
        local_21 = *(int *)local_150 != 0;
        UNLOCK();
        if ((bool)local_21) {
          uVar5 = 0;
          goto LAB_10006d1a1;
        }
      }
      QArrayData::deallocate(local_150,2,8);
      uVar5 = 0;
    }
    goto LAB_10006d1a1;
  }
  CVmEventParameter::getParamValue();
  uVar3 = QString::toInt((bool *)&local_158,0);
  if (*(int *)local_158 != -1) {
    if (*(int *)local_158 != 0) {
      LOCK();
      *(int *)local_158 = *(int *)local_158 + -1;
      local_21 = *(int *)local_158 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10006d087;
    }
    QArrayData::deallocate(local_158,2,8);
  }
LAB_10006d087:
  *(undefined4 *)(*(long *)(param_1 + 0x10) + 0x60) = uVar3;
LAB_10006d1a1:
  QEvent::~QEvent(local_48);
  CVmEventBase::~CVmEventBase((CVmEventBase *)local_128);
  return uVar5;
}


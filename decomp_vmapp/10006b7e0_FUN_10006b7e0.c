
undefined1 FUN_10006b7e0(undefined8 param_1,long *param_2)

{
  long lVar1;
  char *pcVar2;
  char cVar3;
  QString QVar4;
  size_t sVar5;
  undefined1 uVar6;
  QArrayData *pQVar7;
  int iVar8;
  QArrayData *local_160;
  QArrayData *local_158;
  QArrayData *local_150;
  QArrayData *local_148;
  QArrayData *local_140;
  QArrayData *local_138;
  QArrayData *local_130;
  QArrayData *local_128;
  CVmEvent local_120 [8];
  undefined1 local_118 [216];
  QEvent local_40 [39];
  undefined1 local_19;
  
  lVar1 = *(long *)(*(long *)(*param_2 + 0x10) + 0x80);
  iVar8 = 0;
  if (lVar1 != 0) {
    pcVar2 = *(char **)(lVar1 + 0x10);
    iVar8 = 0;
    if (pcVar2 != (char *)0x0) {
      _strlen(pcVar2);
      iVar8 = (int)pcVar2;
    }
  }
  QString::fromUtf8_helper((char *)&local_130,iVar8);
  QString::normalized(&local_128,&local_130,1,0);
  CVmEvent::CVmEvent(local_120,(QTypedArrayData<unsigned_short> *)&local_128);
  if (*(int *)local_128 != -1) {
    if (*(int *)local_128 != 0) {
      LOCK();
      *(int *)local_128 = *(int *)local_128 + -1;
      local_19 = *(int *)local_128 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10006b892;
    }
    QArrayData::deallocate(local_128,2,8);
  }
LAB_10006b892:
  if (*(int *)local_130 != -1) {
    if (*(int *)local_130 != 0) {
      LOCK();
      *(int *)local_130 = *(int *)local_130 + -1;
      local_19 = *(int *)local_130 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10006b8c8;
    }
    QArrayData::deallocate(local_130,2,8);
  }
LAB_10006b8c8:
  cVar3 = FUN_10006bda0(param_1,local_120);
  uVar6 = 1;
  if (cVar3 != '\0') goto LAB_10006bb17;
  local_138 = (QArrayData *)QString::fromAscii_helper("encrypted_vm_password_hash",0x1a);
  QVar4.field0_0x0 =
       (QTypedArrayData<unsigned_short> *)
       CVmEvent::getEventParameter((QTypedArrayData<unsigned_short> *)local_120);
  if (*(int *)local_138 != -1) {
    if (*(int *)local_138 != 0) {
      LOCK();
      *(int *)local_138 = *(int *)local_138 + -1;
      local_19 = *(int *)local_138 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10006b945;
    }
    QArrayData::deallocate(local_138,2,8);
  }
LAB_10006b945:
  if (QVar4.field0_0x0 != (QTypedArrayData<unsigned_short> *)0x0) {
    local_140 = (QArrayData *)QString::fromAscii_helper("x",1);
    CVmEventParameter::setParamValue(QVar4);
    if (*(int *)local_140 != -1) {
      if (*(int *)local_140 != 0) {
        LOCK();
        *(int *)local_140 = *(int *)local_140 + -1;
        local_19 = *(int *)local_140 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_10006b9a7;
      }
      QArrayData::deallocate(local_140,2,8);
    }
  }
LAB_10006b9a7:
  FUN_1008e3970("","vm",0,"Can\'t setVmConfigs() package=");
  CBaseNode::toString(SUB81(&local_150,0),SUB81(local_118,0));
  QString::toUtf8();
  pQVar7 = local_148 + *(long *)(local_148 + 0x10);
  CBaseNode::toString(SUB81(&local_160,0),SUB81(local_118,0));
  QString::toUtf8();
  sVar5 = _strlen((char *)(local_158 + *(long *)(local_158 + 0x10)));
  FUN_1008e3f20(pQVar7,sVar5 & 0xffffffff);
  if (*(int *)local_158 != -1) {
    if (*(int *)local_158 != 0) {
      LOCK();
      *(int *)local_158 = *(int *)local_158 + -1;
      local_19 = *(int *)local_158 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10006ba73;
    }
    QArrayData::deallocate(local_158,1,8);
  }
LAB_10006ba73:
  if (*(int *)local_160 != -1) {
    if (*(int *)local_160 != 0) {
      LOCK();
      *(int *)local_160 = *(int *)local_160 + -1;
      local_19 = *(int *)local_160 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10006baa9;
    }
    QArrayData::deallocate(local_160,2,8);
  }
LAB_10006baa9:
  if (*(int *)local_148 != -1) {
    if (*(int *)local_148 != 0) {
      LOCK();
      *(int *)local_148 = *(int *)local_148 + -1;
      local_19 = *(int *)local_148 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10006badf;
    }
    QArrayData::deallocate(local_148,1,8);
  }
LAB_10006badf:
  if (*(int *)local_150 != -1) {
    if (*(int *)local_150 != 0) {
      LOCK();
      *(int *)local_150 = *(int *)local_150 + -1;
      local_19 = *(int *)local_150 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10006bb15;
    }
    QArrayData::deallocate(local_150,2,8);
  }
LAB_10006bb15:
  uVar6 = 0;
LAB_10006bb17:
  QEvent::~QEvent(local_40);
  CVmEventBase::~CVmEventBase((CVmEventBase *)local_120);
  return uVar6;
}


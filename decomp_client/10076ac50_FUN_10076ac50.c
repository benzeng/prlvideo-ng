
undefined8 FUN_10076ac50(undefined8 param_1,long *param_2)

{
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  Data *pDVar4;
  QArrayData *pQVar5;
  int *local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined4 local_190;
  Data_conflict local_188;
  undefined4 local_180;
  undefined1 local_178;
  QArrayData *local_170;
  undefined1 local_168 [16];
  QArrayData *local_158;
  QArrayData *local_150;
  long local_148;
  CSdkEvent local_140 [8];
  QArrayData *local_138;
  CVmEvent local_130 [224];
  QEvent local_50 [39];
  undefined1 local_29;
  
  local_148 = *param_2;
  if (local_148 != 0) {
    _PrlHandle_AddRef();
  }
  CSdkEvent::CSdkEvent(local_140,&local_148);
  CSdkEvent::xmlEventString();
  CVmEvent::CVmEvent(local_130,(QTypedArrayData<unsigned_short> *)&local_138);
  if (*(int *)local_138 != -1) {
    if (*(int *)local_138 != 0) {
      LOCK();
      *(int *)local_138 = *(int *)local_138 + -1;
      local_29 = *(int *)local_138 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10076ace5;
    }
    QArrayData::deallocate(local_138,2,8);
  }
LAB_10076ace5:
  CSdkEvent::~CSdkEvent(local_140);
  if (local_148 != 0) {
    _PrlHandle_Free();
  }
  local_150 = (QArrayData *)QString::fromAscii_helper("reclaim_size",0xc);
  lVar3 = CVmEvent::getEventParameter((QTypedArrayData<unsigned_short> *)local_130);
  if (*(int *)local_150 != -1) {
    if (*(int *)local_150 != 0) {
      LOCK();
      *(int *)local_150 = *(int *)local_150 + -1;
      local_29 = *(int *)local_150 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10076ad66;
    }
    QArrayData::deallocate(local_150,2,8);
  }
LAB_10076ad66:
  if (lVar3 == 0) goto LAB_10076b011;
  CVmEventParameter::getParamValue();
  lVar3 = QString::toLongLong((bool *)(local_168 + 0x10),0);
  if (*(int *)local_158 != -1) {
    if (*(int *)local_158 != 0) {
      LOCK();
      *(int *)local_158 = *(int *)local_158 + -1;
      local_29 = *(int *)local_158 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10076adca;
    }
    QArrayData::deallocate(local_158,2,8);
  }
LAB_10076adca:
  if (lVar3 == 0) goto LAB_10076b011;
  iVar2 = CMessageManager::instance();
  local_168._8_8_ = PTR_shared_null_1021e15e8;
  local_168._0_8_ = PTR_shared_null_1021e15e8;
  FUN_100def650(&local_170,lVar3,1);
  FUN_1000341d0(local_168,&local_170);
  local_1a8 = (int *)0x0;
  uStack_1a0 = 0;
  local_190 = 0;
  local_198 = 0;
  local_180 = 0x80000000;
  local_188.field7 = 0;
  local_178 = 1;
  CMessageManager::showMessageBox
            (iVar2,(QWidget *)0x3c6c,(QStringList *)0x0,(QStringList *)(local_168 + 8),
             (CSlotInfo *)local_168,SUB81(&local_1a8,0));
  QVariant::~QVariant((QVariant *)&local_188);
  if (local_1a8 != (int *)0x0) {
    LOCK();
    *local_1a8 = *local_1a8 + -1;
    local_29 = *local_1a8 != 0;
    UNLOCK();
    if ((!(bool)local_29) && (local_1a8 != (int *)0x0)) {
      operator_delete(local_1a8);
    }
  }
  if (*(int *)local_170 != -1) {
    if (*(int *)local_170 != 0) {
      LOCK();
      *(int *)local_170 = *(int *)local_170 + -1;
      local_29 = *(int *)local_170 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10076aeed;
    }
    QArrayData::deallocate(local_170,2,8);
  }
LAB_10076aeed:
  uVar1 = local_168._0_8_;
  if (*(int *)local_168._0_8_ != -1) {
    if (*(int *)local_168._0_8_ != 0) {
      LOCK();
      *(int *)local_168._0_8_ = *(int *)local_168._0_8_ + -1;
      local_29 = *(int *)local_168._0_8_ != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10076af81;
    }
    iVar2 = *(int *)(local_168._0_8_ + 0xc);
    if (iVar2 != *(int *)(local_168._0_8_ + 8)) {
      lVar3 = (long)*(int *)(local_168._0_8_ + 8) * 8 + (long)iVar2 * -8;
      pDVar4 = (Data *)(local_168._0_8_ + (long)iVar2 * 8 + 8);
      do {
        pQVar5 = *(QArrayData **)pDVar4;
        if (*(int *)pQVar5 == 0) {
LAB_10076af60:
          QArrayData::deallocate(pQVar5,2,8);
        }
        else if (*(int *)pQVar5 != -1) {
          LOCK();
          *(int *)pQVar5 = *(int *)pQVar5 + -1;
          local_29 = *(int *)pQVar5 != 0;
          UNLOCK();
          if (!(bool)local_29) {
            pQVar5 = *(QArrayData **)pDVar4;
            goto LAB_10076af60;
          }
        }
        pDVar4 = pDVar4 + -8;
        lVar3 = lVar3 + 8;
      } while (lVar3 != 0);
    }
    QListData::dispose((Data *)uVar1);
  }
LAB_10076af81:
  uVar1 = local_168._8_8_;
  if (*(int *)local_168._8_8_ != -1) {
    if (*(int *)local_168._8_8_ != 0) {
      LOCK();
      *(int *)local_168._8_8_ = *(int *)local_168._8_8_ + -1;
      local_29 = *(int *)local_168._8_8_ != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10076b011;
    }
    iVar2 = *(int *)(local_168._8_8_ + 0xc);
    if (iVar2 != *(int *)(local_168._8_8_ + 8)) {
      lVar3 = (long)*(int *)(local_168._8_8_ + 8) * 8 + (long)iVar2 * -8;
      pDVar4 = (Data *)(local_168._8_8_ + (long)iVar2 * 8 + 8);
      do {
        pQVar5 = *(QArrayData **)pDVar4;
        if (*(int *)pQVar5 == 0) {
LAB_10076aff0:
          QArrayData::deallocate(pQVar5,2,8);
        }
        else if (*(int *)pQVar5 != -1) {
          LOCK();
          *(int *)pQVar5 = *(int *)pQVar5 + -1;
          local_29 = *(int *)pQVar5 != 0;
          UNLOCK();
          if (!(bool)local_29) {
            pQVar5 = *(QArrayData **)pDVar4;
            goto LAB_10076aff0;
          }
        }
        pDVar4 = pDVar4 + -8;
        lVar3 = lVar3 + 8;
      } while (lVar3 != 0);
    }
    QListData::dispose((Data *)uVar1);
  }
LAB_10076b011:
  QEvent::~QEvent(local_50);
  CVmEventBase::~CVmEventBase((CVmEventBase *)local_130);
  return 1;
}



QString * FUN_100af40c0(QString *param_1,long param_2,undefined8 *param_3,QString *param_4,
                       int *param_5)

{
  long lVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  QString this;
  long lVar8;
  long lVar9;
  bool bVar10;
  QArrayData *local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QString local_70;
  QArrayData *local_68;
  Data *local_60;
  Data *local_58;
  Data *local_50;
  undefined4 local_48;
  QTypedArrayData<unsigned_short> *local_40;
  undefined1 local_31;
  
  local_40 = (QTypedArrayData<unsigned_short> *)0x0;
  local_60 = *(Data **)(param_2 + 0x98);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 == 0) {
      QListData::detach((int)&local_60);
      lVar8 = (long)*(int *)(local_60 + 8);
      lVar1 = *(long *)(param_2 + 0x98);
      if (((Data *)(lVar1 + (long)*(int *)(lVar1 + 8) * 8) != local_60 + lVar8 * 8) &&
         (lVar9 = *(int *)(local_60 + 0xc) - lVar8, lVar9 != 0 && lVar8 <= *(int *)(local_60 + 0xc))
         ) {
        _memcpy(local_60 + lVar8 * 8 + 0x10,(void *)(lVar1 + 0x10 + (long)*(int *)(lVar1 + 8) * 8),
                lVar9 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + 1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
    }
  }
  local_58 = local_60 + (long)*(int *)(local_60 + 8) * 8 + 0x10;
  local_50 = local_60 + (long)*(int *)(local_60 + 0xc) * 8 + 0x10;
  local_48 = 1;
  bVar10 = true;
  if (*(int *)(local_60 + 8) == *(int *)(local_60 + 0xc)) {
    this.field0_0x0 = (QTypedArrayData<unsigned_short> *)0x0;
  }
  else {
    uVar5 = 0;
    do {
      local_48 = 1;
      this.field0_0x0 = *(QTypedArrayData<unsigned_short> **)local_58;
      CDispUsbIdentity::getSystemName();
      iVar3 = FUN_100af51e0(param_2,param_3,&local_68);
      if (*(int *)local_68 != -1) {
        if (*(int *)local_68 != 0) {
          LOCK();
          *(int *)local_68 = *(int *)local_68 + -1;
          local_31 = *(int *)local_68 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100af4217;
        }
        QArrayData::deallocate(local_68,2,8);
      }
LAB_100af4217:
      if (iVar3 != 0) {
        bVar10 = false;
        local_40 = this.field0_0x0;
        goto LAB_100af42d7;
      }
      CDispUsbIdentity::getFriendlyName();
      cVar2 = operator==(param_4,&local_70);
      if (cVar2 == '\0') {
        bVar10 = false;
      }
      else {
        uVar4 = CDispUsbIdentity::getIndex();
        bVar10 = uVar5 < uVar4;
      }
      if (*(int *)local_70.field0_0x0 != -1) {
        if (*(int *)local_70.field0_0x0 != 0) {
          LOCK();
          *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
          local_31 = *(int *)local_70.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100af4282;
        }
        QArrayData::deallocate((QArrayData *)local_70.field0_0x0,2,8);
      }
LAB_100af4282:
      if (bVar10) {
        uVar5 = CDispUsbIdentity::getIndex();
      }
      local_58 = local_58 + 8;
      local_48 = 1;
    } while (local_58 != local_50);
    this.field0_0x0 = (QTypedArrayData<unsigned_short> *)0x0;
    bVar10 = true;
  }
LAB_100af42d7:
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100af42fd;
    }
    QListData::dispose(local_60);
  }
LAB_100af42fd:
  if (bVar10) {
    this.field0_0x0 = operator_new(0xb8);
    CDispUsbIdentity::CDispUsbIdentity((CDispUsbIdentity *)this.field0_0x0);
    local_78 = (QArrayData *)param_4->field0_0x0;
    if (1 < *(int *)local_78 + 1U) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + 1;
      local_31 = *(int *)local_78 != 0;
      UNLOCK();
    }
    local_40 = this.field0_0x0;
    CDispUsbIdentity::setFriendlyName(this);
    if (*(int *)local_78 != -1) {
      if (*(int *)local_78 != 0) {
        LOCK();
        *(int *)local_78 = *(int *)local_78 + -1;
        local_31 = *(int *)local_78 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100af4379;
      }
      QArrayData::deallocate(local_78,2,8);
    }
LAB_100af4379:
    CDispUsbIdentity::setIndex((uint)this.field0_0x0);
    FUN_100af7e80((long *)(param_2 + 0x98),&local_40);
  }
  local_80 = (QArrayData *)*param_3;
  if (1 < *(int *)local_80 + 1U) {
    LOCK();
    *(int *)local_80 = *(int *)local_80 + 1;
    local_31 = *(int *)local_80 != 0;
    UNLOCK();
  }
  CDispUsbIdentity::setSystemName(this);
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_31 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100af43f2;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_100af43f2:
  CDispUsbIdentity::getFriendlyName();
  uVar5 = CDispUsbIdentity::getIndex();
  if (uVar5 < 2) goto LAB_100af44c0;
  local_90 = (QArrayData *)QString::fromAscii_helper(" #%1",4);
  uVar6 = CDispUsbIdentity::getIndex();
  QString::arg(&local_88,&local_90,uVar6,0,10,0x20);
  QString::append(param_1);
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_31 = *(int *)local_88 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100af448a;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_100af448a:
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_31 = *(int *)local_90 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100af44c0;
    }
    QArrayData::deallocate(local_90,2,8);
  }
LAB_100af44c0:
  iVar7 = CDispUsbIdentity::getUsbType();
  iVar3 = *param_5;
  if (iVar3 == 0) {
    *param_5 = iVar7;
  }
  else {
    if ((iVar7 != 0) && (iVar7 != iVar3)) {
      FUN_100df99c0("","pvsHostInfo",0,"Conflicting usb device type (%d, %d)");
      iVar3 = *param_5;
    }
    CDispUsbIdentity::setUsbType(this.field0_0x0,iVar3);
  }
  return param_1;
}


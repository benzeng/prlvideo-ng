
void FUN_100148d00(long param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  QArrayData *pQVar3;
  char cVar4;
  undefined8 uVar5;
  long lVar6;
  QString QVar7;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  uVar5 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) && (uVar5 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0))
  {
    uVar5 = *(undefined8 *)(param_1 + 0x18);
  }
  uVar5 = FUN_10018c2b0(uVar5);
  lVar6 = FUN_10010dec0(uVar5,*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24));
  if ((lVar6 == 0) || (*(int *)(param_1 + 0x20) == 8)) {
    if (DAT_10230ffd0 < 1) {
      return;
    }
    FUN_100df99c0("","prl_client_app",1,"Wrong device type");
    return;
  }
  if (2 < DAT_10230ffd0) {
    local_48 = (QArrayData *)*param_2;
    if (1 < *(int *)local_48 + 1U) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + 1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
    }
    QString::toLocal8Bit();
    FUN_100df99c0("","prl_client_app",3,"Connecting image: %s",local_40 + *(long *)(local_40 + 0x10)
                 );
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        local_31 = *(int *)local_40 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100148e20;
      }
      QArrayData::deallocate(local_40,1,8);
    }
LAB_100148e20:
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        local_31 = *(int *)local_48 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100148e50;
      }
      QArrayData::deallocate(local_48,2,8);
    }
  }
LAB_100148e50:
  uVar1 = *(undefined4 *)(param_1 + 0x20);
  uVar5 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) && (uVar5 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0))
  {
    uVar5 = *(undefined8 *)(param_1 + 0x18);
  }
  uVar5 = FUN_10018c2b0(uVar5);
  cVar4 = FUN_10010dec0(uVar5,*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24));
  CBaseNode::toString(SUB81(&local_50,0),(bool)(cVar4 + '\x10'));
  QVar7.field0_0x0 = (QTypedArrayData<unsigned_short> *)FUN_10010e020(uVar1,&local_50);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100148ed2;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_100148ed2:
  if (QVar7.field0_0x0 == (QTypedArrayData<unsigned_short> *)0x0) {
    return;
  }
  pQVar3 = (QArrayData *)*param_2;
  if (1 < *(int *)pQVar3 + 1U) {
    LOCK();
    *(int *)pQVar3 = *(int *)pQVar3 + 1;
    local_31 = *(int *)pQVar3 != 0;
    UNLOCK();
  }
  CVmDevice::setSystemName(QVar7);
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      local_31 = *(int *)pQVar3 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100148f30;
    }
    QArrayData::deallocate(pQVar3,2,8);
  }
LAB_100148f30:
  uVar2 = *(uint *)(param_1 + 0x20);
  if (uVar2 < 0xc) {
    if ((0x68U >> (uVar2 & 0x1f) & 1) == 0) {
      if ((0xc00U >> (uVar2 & 0x1f) & 1) == 0) goto LAB_10014908a;
      pQVar3 = (QArrayData *)*param_2;
      if (1 < *(int *)pQVar3 + 1U) {
        LOCK();
        *(int *)pQVar3 = *(int *)pQVar3 + 1;
        local_31 = *(int *)pQVar3 != 0;
        UNLOCK();
      }
      CVmDevice::setUserFriendlyName(QVar7);
      if (*(int *)pQVar3 != -1) {
        if (*(int *)pQVar3 != 0) {
          LOCK();
          *(int *)pQVar3 = *(int *)pQVar3 + -1;
          local_31 = *(int *)pQVar3 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100149066;
        }
        QArrayData::deallocate(pQVar3,2,8);
      }
    }
    else {
      pQVar3 = (QArrayData *)*param_2;
      if (1 < *(int *)pQVar3 + 1U) {
        LOCK();
        *(int *)pQVar3 = *(int *)pQVar3 + 1;
        local_31 = *(int *)pQVar3 != 0;
        UNLOCK();
      }
      CVmDevice::setUserFriendlyName(QVar7);
      if (*(int *)pQVar3 != -1) {
        if (*(int *)pQVar3 != 0) {
          LOCK();
          *(int *)pQVar3 = *(int *)pQVar3 + -1;
          local_31 = *(int *)pQVar3 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100148fa0;
        }
        QArrayData::deallocate(pQVar3,2,8);
      }
LAB_100148fa0:
      pQVar3 = (QArrayData *)*param_2;
      if (1 < *(int *)pQVar3 + 1U) {
        LOCK();
        *(int *)pQVar3 = *(int *)pQVar3 + 1;
        local_31 = *(int *)pQVar3 != 0;
        UNLOCK();
      }
      CVmDevice::setSystemName(QVar7);
      if (*(int *)pQVar3 != -1) {
        if (*(int *)pQVar3 != 0) {
          LOCK();
          *(int *)pQVar3 = *(int *)pQVar3 + -1;
          local_31 = *(int *)pQVar3 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100149066;
        }
        QArrayData::deallocate(pQVar3,2,8);
      }
    }
LAB_100149066:
    CVmDevice::setEmulatedType((uint)QVar7.field0_0x0);
    CVmDevice::setRemote(SUB81(QVar7.field0_0x0,0));
    FUN_100147770(param_1,QVar7.field0_0x0);
  }
  else {
LAB_10014908a:
    FUN_100df99c0("","prl_client_app",0,"Error while connecting image");
  }
  (**(code **)(*(long *)QVar7.field0_0x0 + 0x20))(QVar7.field0_0x0);
  return;
}


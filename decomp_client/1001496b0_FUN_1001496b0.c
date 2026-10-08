
void FUN_1001496b0(long param_1,undefined4 param_2)

{
  undefined4 uVar1;
  char cVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  uVar3 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) && (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0))
  {
    uVar3 = *(undefined8 *)(param_1 + 0x18);
  }
  uVar3 = FUN_10018c2b0(uVar3);
  lVar4 = FUN_10010dec0(uVar3,*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24));
  if ((lVar4 == 0) || (*(int *)(param_1 + 0x20) != 8)) {
    if (DAT_10230ffd0 < 1) {
      return;
    }
    FUN_100df99c0("","prl_client_app",1,"Wrong device type");
    return;
  }
  if (2 < DAT_10230ffd0) {
    EnumUtils::enumToString(&local_40,param_2);
    QString::toLocal8Bit();
    FUN_100df99c0("","prl_client_app",3,"Updating network emulation type to %s.",
                  local_38 + *(long *)(local_38 + 0x10));
    if (*(int *)local_38 != -1) {
      if (*(int *)local_38 != 0) {
        LOCK();
        *(int *)local_38 = *(int *)local_38 + -1;
        local_29 = *(int *)local_38 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100149786;
      }
      QArrayData::deallocate(local_38,1,8);
    }
LAB_100149786:
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        local_29 = *(int *)local_40 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1001497b6;
      }
      QArrayData::deallocate(local_40,2,8);
    }
  }
LAB_1001497b6:
  uVar1 = *(undefined4 *)(param_1 + 0x20);
  uVar3 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) && (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0))
  {
    uVar3 = *(undefined8 *)(param_1 + 0x18);
  }
  uVar3 = FUN_10018c2b0(uVar3);
  cVar2 = FUN_10010dec0(uVar3,*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24));
  CBaseNode::toString(SUB81(&local_48,0),(bool)(cVar2 + '\x10'));
  plVar5 = (long *)FUN_10010e020(uVar1,&local_48);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_29 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100149836;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100149836:
  if (plVar5 != (long *)0x0) {
    CVmDevice::setEmulatedType((uint)plVar5);
    FUN_100147770(param_1,plVar5);
    (**(code **)(*plVar5 + 0x20))(plVar5);
  }
  return;
}


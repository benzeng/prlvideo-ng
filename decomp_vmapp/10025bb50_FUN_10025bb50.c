
undefined4 FUN_10025bb50(long *param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  char *pcVar8;
  char *pcVar9;
  char cVar10;
  void *local_78;
  void *pvStack_70;
  undefined8 local_68;
  undefined1 local_58 [24];
  QArrayData *local_40;
  long *local_38;
  undefined1 local_29;
  
  uVar4 = (**(code **)(*(long *)param_1[1] + 0x68))();
  FUN_100259440(&local_38,uVar4,param_2);
  if ((local_38 != (long *)0x0) && (local_38[2] != 0)) {
    iVar5 = CVmDevice::getConnected();
    if ((iVar5 == 0) && (iVar5 = CVmDevice::getConnected(), iVar5 == 1)) {
      QMutex::lock();
      if (local_38 != (long *)0x0) {
        LOCK();
        *(int *)(local_38 + 1) = (int)local_38[1] + 1;
        UNLOCK();
      }
      plVar2 = (long *)param_1[3];
      param_1[3] = (long)local_38;
      if (plVar2 != (long *)0x0) {
        LOCK();
        plVar1 = plVar2 + 1;
        lVar3 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
          (**(code **)(*plVar2 + 0x10))();
        }
      }
      lVar3 = param_1[1];
      cVar10 = '\0';
      if (local_38 != (long *)0x0) {
        cVar10 = (char)local_38[2];
      }
      CBaseNode::toString(SUB81(&local_40,0),(bool)(cVar10 + '\x10'));
      CBaseNode::fromString
                ((CBaseNode *)(lVar3 + 0x10),(QTypedArrayData<unsigned_short> *)&local_40,false,
                 (QString *)0x0,(int *)0x0,(int *)0x0);
      if (*(int *)local_40 != -1) {
        if (*(int *)local_40 != 0) {
          LOCK();
          *(int *)local_40 = *(int *)local_40 + -1;
          local_29 = *(int *)local_40 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_10025bc7b;
        }
        QArrayData::deallocate(local_40,2,8);
      }
LAB_10025bc7b:
      QMutex::unlock();
      uVar4 = (**(code **)(*param_1 + 0x10))(param_1);
      goto LAB_10025be04;
    }
    uVar4 = (**(code **)(*(long *)param_1[1] + 0x68))();
    uVar6 = CVmDevice::getIndex();
    uVar7 = CVmDevice::getConnected();
    if (uVar7 < 3) {
      pcVar9 = (&PTR_s_disconnected_100baeb20)[(int)uVar7];
    }
    else {
      pcVar9 = "unknown";
    }
    uVar7 = CVmDevice::getConnected();
    if (uVar7 < 3) {
      pcVar8 = (&PTR_s_disconnected_100baeb20)[(int)uVar7];
    }
    else {
      pcVar8 = "unknown";
    }
    FUN_1008e3970("","LocalDevices",0,
                  "Connect for device [%u:%u] is not called. Current state \"%s\" trying to set \"%s\""
                  ,uVar4,uVar6,pcVar9,pcVar8);
  }
  FUN_10006a060(local_58);
  QMutex::lock();
  uVar4 = (**(code **)(*(long *)param_1[1] + 0x68))();
  FUN_10006a860(local_58,uVar4,0);
  uVar4 = CVmDevice::getIndex();
  FUN_10006a860(local_58,uVar4,1);
  QMutex::unlock();
  local_78 = (void *)0x0;
  pvStack_70 = (void *)0x0;
  local_68 = 0;
  FUN_1000648b0(DAT_1011c3650,0x80009000,&local_78,local_58);
  if (local_78 != (void *)0x0) {
    if (pvStack_70 != local_78) {
      pvStack_70 = (void *)((~((long)pvStack_70 + (-4 - (long)local_78)) & 0xfffffffffffffffcU) +
                           (long)pvStack_70);
    }
    operator_delete(local_78);
  }
  uVar4 = 0x80009000;
  FUN_10006a680(local_58);
LAB_10025be04:
  if (local_38 != (long *)0x0) {
    LOCK();
    plVar2 = local_38 + 1;
    lVar3 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)(*local_38 + 0x10))();
    }
  }
  return uVar4;
}


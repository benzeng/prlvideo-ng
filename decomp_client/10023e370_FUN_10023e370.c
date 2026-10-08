
void FUN_10023e370(QObject *param_1)

{
  undefined4 uVar1;
  long lVar2;
  QObject *pQVar3;
  undefined8 uVar4;
  QArrayData *pQVar5;
  undefined4 local_48;
  undefined4 local_44;
  undefined1 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined1 local_34;
  QArrayData *local_30;
  QArrayData *local_28;
  undefined1 local_19;
  
  uVar4 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
  }
  lVar2 = FUN_100323e30(uVar4,0);
  if (lVar2 == 0) {
    return;
  }
  pQVar3 = (QObject *)FUN_10037a510(lVar2);
  QObject::disconnect(pQVar3,"2windowDidEnterFullScreen()",param_1,"1onDidEnterNativeFullScreen()");
  pQVar3 = (QObject *)FUN_10037a510(lVar2);
  QObject::disconnect(pQVar3,"2windowDidFailToEnterFullScreen()",param_1,
                      "1onDidFailToEnterNativeFullScreen()");
  uVar4 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
  }
  FUN_100323d90(&local_30,uVar4);
  QString::toLocal8Bit();
  pQVar5 = local_28 + *(long *)(local_28 + 0x10);
  uVar4 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
  }
  uVar1 = FUN_100323e20(uVar4);
  FUN_100df99c0("","prl_client_app",0,"Failed to enter in native fullscreen. Vm [%s], display [%d]",
                pQVar5,uVar1);
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      local_19 = *(int *)local_28 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10023e494;
    }
    QArrayData::deallocate(local_28,1,8);
  }
LAB_10023e494:
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_19 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10023e4c4;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_10023e4c4:
  uVar4 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
  }
  lVar2 = FUN_100323e00(uVar4);
  if (lVar2 != 0) {
    local_48 = 3;
    local_40 = 0;
    local_3c = 0xffff;
    local_38 = 0;
    local_34 = 0;
    local_44 = 0x10000;
    uVar4 = 0;
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
      uVar4 = *(undefined8 *)(param_1 + 0x20);
    }
    uVar4 = FUN_100323e00(uVar4);
    uVar4 = FUN_100319cc0(uVar4);
    FUN_10033fcf0(uVar4,1,&local_48);
  }
  (**(code **)(*(long *)param_1 + 0xb0))(param_1,0x80000009);
  return;
}


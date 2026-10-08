
void FUN_10023e180(QObject *param_1)

{
  undefined4 uVar1;
  long lVar2;
  QObject *pQVar3;
  QArrayData *pQVar4;
  undefined8 uVar5;
  QArrayData *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  uVar5 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar5 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar5 = *(undefined8 *)(param_1 + 0x20);
  }
  lVar2 = FUN_100323e30(uVar5,0);
  if (lVar2 == 0) {
    return;
  }
  uVar5 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar5 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar5 = *(undefined8 *)(param_1 + 0x20);
  }
  FUN_100323d90(&local_38,uVar5);
  QString::toLocal8Bit();
  pQVar4 = local_30 + *(long *)(local_30 + 0x10);
  uVar5 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar5 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar5 = *(undefined8 *)(param_1 + 0x20);
  }
  uVar1 = FUN_100323e20(uVar5);
  FUN_100df99c0("","prl_client_app",0,
                "Finish animate entering in native fullscreen. Vm [%s], display [%d]",pQVar4,uVar1);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10023e264;
    }
    QArrayData::deallocate(local_30,1,8);
  }
LAB_10023e264:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10023e294;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_10023e294:
  pQVar3 = (QObject *)FUN_10037a510(lVar2);
  QObject::disconnect(pQVar3,"2windowDidEnterFullScreen()",param_1,"1onDidEnterNativeFullScreen()");
  pQVar3 = (QObject *)FUN_10037a510(lVar2);
  QObject::disconnect(pQVar3,"2windowDidFailToEnterFullScreen()",param_1,
                      "1onDidFailToEnterNativeFullScreen()");
  FUN_10023ded0(param_1);
  return;
}


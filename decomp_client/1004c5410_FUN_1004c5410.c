
void FUN_1004c5410(long param_1)

{
  long *plVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  char *pcVar7;
  QArrayData *local_40;
  QVariant local_38;
  undefined1 local_21;
  
  lVar5 = FUN_10044e580();
  if (lVar5 == 0) {
    pcVar7 = "(!)Error: Server instance is null.";
LAB_1004c54ad:
    FUN_100df99c0("","prl_client_app",0,pcVar7);
    return;
  }
  lVar5 = FUN_10044e460(param_1);
  if (lVar5 == 0) {
    pcVar7 = "(!)Error: Vm instance is null.";
    goto LAB_1004c54ad;
  }
  uVar6 = FUN_10044e460(param_1);
  iVar4 = FUN_10018a9d0(uVar6);
  if (iVar4 == 0x30000004) {
LAB_1004c5465:
    QWidget::setEnabled(SUB81(*(undefined8 *)(*(long *)(param_1 + 0x38) + 0x78),0));
    lVar5 = *(long *)(param_1 + 0x40);
    if (lVar5 != 0) {
      uVar6 = 0;
LAB_1004c54e0:
      FUN_10013fbb0(lVar5,uVar6);
    }
  }
  else {
    uVar6 = FUN_10044e460(param_1);
    iVar4 = FUN_10018a9d0(uVar6);
    if (iVar4 == 0x30000005) goto LAB_1004c5465;
    QWidget::setEnabled(SUB81(*(undefined8 *)(*(long *)(param_1 + 0x38) + 0x78),0));
    lVar5 = *(long *)(param_1 + 0x40);
    if (lVar5 != 0) {
      uVar6 = 1;
      goto LAB_1004c54e0;
    }
  }
  uVar6 = FUN_10044e660(param_1);
  cVar2 = FUN_1003bed60(uVar6);
  if (cVar2 != '\0') {
    uVar6 = FUN_10044e560(param_1);
    local_40 = (QArrayData *)QString::fromAscii_helper("Settings.Runtime.HypervisorType",0x1f);
    FUN_1003e1800(&local_38,uVar6,&local_40,0);
    QVariant::toInt((bool *)&local_38);
    QVariant::~QVariant(&local_38);
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        local_21 = *(int *)local_40 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1004c5579;
      }
      QArrayData::deallocate(local_40,2,8);
    }
  }
LAB_1004c5579:
  QWidget::setDisabled(SUB81(*(undefined8 *)(*(long *)(param_1 + 0x38) + 0x58),0));
  QWidget::setDisabled(SUB81(*(undefined8 *)(*(long *)(param_1 + 0x38) + 0x68),0));
  uVar6 = FUN_10044e660(param_1);
  uVar3 = FUN_1003bec80(uVar6);
  plVar1 = *(long **)(*(long *)(param_1 + 0x38) + 0x58);
  (**(code **)(*plVar1 + 0x68))(plVar1,uVar3);
  uVar6 = FUN_10044e660(param_1);
  uVar3 = FUN_1003becf0(uVar6);
  plVar1 = *(long **)(*(long *)(param_1 + 0x38) + 0x68);
  (**(code **)(*plVar1 + 0x68))(plVar1,uVar3);
  return;
}


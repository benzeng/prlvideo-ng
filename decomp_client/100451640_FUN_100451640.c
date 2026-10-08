
void FUN_100451640(long param_1)

{
  long *plVar1;
  code *pcVar2;
  char cVar3;
  undefined1 uVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  QArrayData *local_68;
  Data *local_60;
  QArrayData *local_58;
  QVariant local_50;
  QVariant local_40;
  undefined1 local_29;
  
  lVar7 = FUN_10044e460();
  if (lVar7 == 0) {
    FUN_100df99c0("","prl_client_app",0,"(!)Error: Vm instance is null.");
    return;
  }
  uVar8 = FUN_10044e680(param_1);
  cVar3 = FUN_1003e5e80(uVar8);
  uVar8 = FUN_10044e460(param_1);
  iVar5 = FUN_10018a9d0(uVar8);
  iVar6 = QListWidget::currentRow();
  if (((iVar5 == 0x30000009) || (cVar3 == '\x01')) || (iVar6 == -1)) {
    QWidget::setEnabled(SUB81(*(undefined8 *)(*(long *)(param_1 + 0x38) + 0x70),0));
    uVar4 = (undefined1)*(undefined8 *)(*(long *)(param_1 + 0x38) + 0x78);
  }
  else {
    QListWidget::count();
    QWidget::setEnabled(SUB81(*(undefined8 *)(*(long *)(param_1 + 0x38) + 0x70),0));
    uVar4 = (undefined1)*(undefined8 *)(*(long *)(param_1 + 0x38) + 0x78);
  }
  QWidget::setEnabled((bool)uVar4);
  plVar1 = *(long **)(*(long *)(param_1 + 0x38) + 0x48);
  pcVar2 = *(code **)(*plVar1 + 0x68);
  uVar8 = FUN_10044e660(param_1);
  uVar4 = FUN_1003bf590(uVar8);
  (*pcVar2)(plVar1,uVar4);
  plVar1 = *(long **)(*(long *)(param_1 + 0x38) + 0xb0);
  pcVar2 = *(code **)(*plVar1 + 0x68);
  uVar8 = FUN_10044e660(param_1);
  uVar4 = FUN_1003bf5b0(uVar8);
  (*pcVar2)(plVar1,uVar4);
  uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 0xb0);
  uVar9 = FUN_10044e560(param_1);
  local_58 = (QArrayData *)QString::fromAscii_helper("Settings.Startup.Bios.EfiEnabled",0x20);
  FUN_1003e1800(&local_50,uVar9,&local_58,0);
  QVariant::toBool();
  QWidget::setEnabled(SUB81(uVar8,0));
  QVariant::~QVariant(&local_50);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_29 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100451808;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_100451808:
  uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x30);
  QMetaObject::tr((char *)&local_68,PTR_staticMetaObject_1021e1520,
                  (int)PTR_s_External_device_10226e5f0);
  QListWidget::findItems(&local_60,uVar8,&local_68,0);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_29 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100451876;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_100451876:
  if (*(int *)(local_60 + 0xc) != *(int *)(local_60 + 8)) {
    (**(code **)(**(long **)(local_60 + (long)*(int *)(local_60 + 8) * 8 + 0x10) + 0x20))
              (&local_40,*(long **)(local_60 + (long)*(int *)(local_60 + 8) * 8 + 0x10),10);
    QVariant::toInt((bool *)&local_40);
    QVariant::~QVariant(&local_40);
  }
  QWidget::setEnabled(SUB81(*(undefined8 *)(*(long *)(param_1 + 0x38) + 0x40),0));
  QWidget::setEnabled(SUB81(*(undefined8 *)(*(long *)(param_1 + 0x38) + 0x10),0));
  plVar1 = *(long **)(*(long *)(param_1 + 0x38) + 0x40);
  pcVar2 = *(code **)(*plVar1 + 0x68);
  uVar8 = FUN_10044e660(param_1);
  uVar4 = FUN_1003bf640(uVar8);
  (*pcVar2)(plVar1,uVar4);
  plVar1 = *(long **)(*(long *)(param_1 + 0x38) + 0x10);
  pcVar2 = *(code **)(*plVar1 + 0x68);
  uVar8 = FUN_10044e660(param_1);
  uVar4 = FUN_1003bf640(uVar8);
  (*pcVar2)(plVar1,uVar4);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      UNLOCK();
      if (*(int *)local_60 != 0) {
        return;
      }
      local_29 = 0;
    }
    QListData::dispose(local_60);
  }
  return;
}



void FUN_100498c80(long param_1)

{
  long *plVar1;
  code *pcVar2;
  undefined1 uVar3;
  char cVar4;
  undefined1 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  QArrayData *local_60;
  QVariant local_58;
  QArrayData *local_48;
  QVariant local_40;
  undefined1 local_29;
  
  uVar6 = FUN_10044e560();
  local_48 = (QArrayData *)
             QString::fromAscii_helper("Settings.Tools.SharedFolders.GuestSharing.Enabled",0x31);
  FUN_1003e1800(&local_40,uVar6,&local_48,0);
  QVariant::toBool();
  QVariant::~QVariant(&local_40);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_29 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100498d06;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100498d06:
  QWidget::setEnabled(SUB81(*(undefined8 *)(*(long *)(param_1 + 0x38) + 0x108),0));
  QWidget::setEnabled(SUB81(*(undefined8 *)(*(long *)(param_1 + 0x38) + 0x130),0));
  uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x30);
  uVar7 = FUN_10044e560(param_1);
  local_60 = (QArrayData *)QString::fromAscii_helper("Settings.Tools.SharedProfile.Enabled",0x24);
  FUN_1003e1800(&local_58,uVar7,&local_60,0);
  QVariant::toBool();
  QWidget::setEnabled(SUB81(uVar6,0));
  QVariant::~QVariant(&local_58);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_29 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100498db8;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_100498db8:
  plVar1 = *(long **)(*(long *)(param_1 + 0x38) + 200);
  pcVar2 = *(code **)(*plVar1 + 0x68);
  uVar6 = FUN_10044e660(param_1);
  uVar3 = FUN_1003bf030(uVar6);
  (*pcVar2)(plVar1,uVar3);
  plVar1 = *(long **)(*(long *)(param_1 + 0x38) + 0xd0);
  pcVar2 = *(code **)(*plVar1 + 0x68);
  uVar6 = FUN_10044e660(param_1);
  uVar3 = FUN_1003bf090(uVar6);
  (*pcVar2)(plVar1,uVar3);
  plVar1 = *(long **)(*(long *)(param_1 + 0x38) + 0xb8);
  pcVar2 = *(code **)(*plVar1 + 0x68);
  uVar6 = FUN_10044e660(param_1);
  cVar4 = FUN_1003bf030(uVar6);
  uVar5 = 1;
  uVar3 = 1;
  if (cVar4 == '\0') {
    uVar6 = FUN_10044e660(param_1);
    uVar3 = FUN_1003bf090(uVar6);
  }
  (*pcVar2)(plVar1,uVar3);
  plVar1 = *(long **)(*(long *)(param_1 + 0x38) + 0xb0);
  pcVar2 = *(code **)(*plVar1 + 0x68);
  uVar6 = FUN_10044e660(param_1);
  cVar4 = FUN_1003bf030(uVar6);
  if (cVar4 == '\0') {
    uVar6 = FUN_10044e660(param_1);
    uVar5 = FUN_1003bf090(uVar6);
  }
  (*pcVar2)(plVar1,uVar5);
  plVar1 = *(long **)(*(long *)(param_1 + 0x38) + 0x128);
  pcVar2 = *(code **)(*plVar1 + 0x68);
  uVar6 = FUN_10044e660(param_1);
  uVar3 = FUN_1003bf0f0(uVar6);
  (*pcVar2)(plVar1,uVar3);
  plVar1 = *(long **)(*(long *)(param_1 + 0x38) + 0xd8);
  pcVar2 = *(code **)(*plVar1 + 0x68);
  uVar6 = FUN_10044e660(param_1);
  uVar3 = FUN_1003bf150(uVar6);
  (*pcVar2)(plVar1,uVar3);
  return;
}


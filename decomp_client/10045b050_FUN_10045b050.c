
void FUN_10045b050(long param_1)

{
  long *plVar1;
  code *pcVar2;
  QString *pQVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  QArrayData *local_70;
  QVariant local_68;
  QArrayData *local_58;
  QVariant local_50;
  QArrayData *local_40;
  QArrayData *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  uVar5 = FUN_10044e660();
  uVar4 = FUN_1003bf400(uVar5);
  plVar1 = *(long **)(*(long *)(param_1 + 0x38) + 0x10);
  (**(code **)(*plVar1 + 0x68))(plVar1,uVar4);
  plVar1 = *(long **)(*(long *)(param_1 + 0x38) + 0x58);
  (**(code **)(*plVar1 + 0x68))(plVar1,uVar4);
  plVar1 = *(long **)(*(long *)(param_1 + 0x38) + 0x60);
  (**(code **)(*plVar1 + 0x68))(plVar1,uVar4);
  plVar1 = *(long **)(*(long *)(param_1 + 0x38) + 8);
  pcVar2 = *(code **)(*plVar1 + 0x68);
  uVar5 = FUN_10044e660(param_1);
  uVar4 = FUN_1003bf430(uVar5);
  (*pcVar2)(plVar1,uVar4);
  pQVar3 = *(QString **)(*(long *)(param_1 + 0x38) + 8);
  QMetaObject::tr((char *)&local_38,(char *)&PTR_PTR_102213c20,0x1df583f);
  uVar5 = FUN_10044e560(param_1);
  local_58 = (QArrayData *)QString::fromAscii_helper("Settings.General.OsNumber",0x19);
  FUN_1003e1800(&local_50,uVar5,&local_58,0);
  QVariant::toUInt((bool *)&local_50);
  EnumUtils::OsVerToString((uint)&local_40);
  QString::arg(&local_30,&local_38,&local_40,0,0x20);
  QAbstractButton::setText(pQVar3);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10045b18c;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_10045b18c:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_21 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10045b1bc;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_10045b1bc:
  QVariant::~QVariant(&local_50);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_21 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10045b1f5;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_10045b1f5:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10045b225;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_10045b225:
  uVar5 = FUN_10044e560(param_1);
  local_70 = (QArrayData *)
             QString::fromAscii_helper("Settings.Runtime.FullScreen.UseAllDisplays",0x2a);
  FUN_1003e1800(&local_68,uVar5,&local_70,0);
  QVariant::toBool();
  QVariant::~QVariant(&local_68);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_21 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10045b29c;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_10045b29c:
  QWidget::setEnabled(SUB81(*(undefined8 *)(*(long *)(param_1 + 0x38) + 0x58),0));
  QWidget::setEnabled(SUB81(*(undefined8 *)(*(long *)(param_1 + 0x38) + 0x60),0));
  return;
}


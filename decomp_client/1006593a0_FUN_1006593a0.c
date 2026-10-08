
void FUN_1006593a0(long param_1)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  QArrayData *local_50;
  QString local_48;
  QVariant local_40;
  QArrayData *local_30;
  undefined1 local_21;
  
  uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x48) + 0x70);
  QComboBox::currentIndex();
  QComboBox::itemData((int)&local_40,(int)uVar4);
  QVariant::toString();
  QVariant::~QVariant(&local_40);
  UserInfo::countryRegions(&local_48);
  plVar3 = *(long **)(*(long *)(param_1 + 0x48) + 200);
  iVar2 = *(int *)(local_48.field0_0x0 + 0xc);
  (**(code **)(*plVar3 + 0x68))
            (plVar3,iVar2 != *(int *)(local_48.field0_0x0 + 8),iVar2,
             iVar2 != *(int *)(local_48.field0_0x0 + 8));
  plVar3 = *(long **)(*(long *)(param_1 + 0x48) + 0xc0);
  iVar2 = *(int *)(local_48.field0_0x0 + 0xc);
  (**(code **)(*plVar3 + 0x68))
            (plVar3,iVar2 != *(int *)(local_48.field0_0x0 + 8),iVar2,
             iVar2 != *(int *)(local_48.field0_0x0 + 8));
  plVar3 = *(long **)(*(long *)(param_1 + 0x48) + 0xb8);
  iVar2 = *(int *)(local_48.field0_0x0 + 0xc);
  (**(code **)(*plVar3 + 0x68))
            (plVar3,iVar2 != *(int *)(local_48.field0_0x0 + 8),iVar2,
             iVar2 != *(int *)(local_48.field0_0x0 + 8));
  uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x48) + 200);
  UserInfo::selectRegionText();
  FUN_100658400(uVar4,&local_48,&local_50);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_21 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1006594b8;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1006594b8:
  lVar1 = param_1 + 0x110;
  plVar3 = (long *)FUN_10065dff0(lVar1,*(long *)(param_1 + 0x48) + 200);
  if (*plVar3 != 0) {
    FUN_10065dff0(lVar1,*(long *)(param_1 + 0x48) + 200);
    QObject::deleteLater();
  }
  uVar4 = FUN_1006245d0(*(undefined8 *)(*(long *)(param_1 + 0x48) + 200));
  puVar5 = (undefined8 *)FUN_10065dff0(lVar1,*(long *)(param_1 + 0x48) + 200);
  *puVar5 = uVar4;
  FUN_1001e3400(&local_48);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      UNLOCK();
      if (*(int *)local_30 != 0) {
        return;
      }
      local_21 = 0;
    }
    QArrayData::deallocate(local_30,2,8);
  }
  return;
}


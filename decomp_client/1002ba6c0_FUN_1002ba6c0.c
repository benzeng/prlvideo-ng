
undefined8 FUN_1002ba6c0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  if (((*(long *)(param_1 + 0x40) != 0) && (*(int *)(*(long *)(param_1 + 0x40) + 4) != 0)) &&
     (*(long *)(param_1 + 0x48) != 0)) {
    QWidget::hide();
    QObject::deleteLater();
  }
  uVar1 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar1 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
  }
  uVar1 = FUN_10018c280(uVar1);
  FUN_100321a70(uVar1,0,4);
  if (*(char *)(param_1 + 0x70) == '\0') goto LAB_1002ba7b9;
  uVar2 = FUN_100152280();
  uVar1 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar1 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
  }
  FUN_100188480(&local_30,uVar1);
  lVar3 = FUN_1001547d0(uVar2,&local_30);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1002ba7a3;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_1002ba7a3:
  if (lVar3 != 0) {
    FUN_100173e70(lVar3,DAT_100e15310);
  }
LAB_1002ba7b9:
  uVar1 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar1 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
  }
  FUN_10018c250(&local_38,uVar1);
  _PrlVm_InstallUtility(local_38,"parallels:app_packages:modernmix");
  if (local_38 != 0) {
    _PrlHandle_Free();
  }
  return 0;
}


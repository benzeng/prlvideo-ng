
void FUN_100370f60(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  QWidget *pQVar2;
  size_t sVar3;
  int iVar4;
  QArrayData *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  QArrayData *local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined1 local_19;
  
  if (param_2 == 0) {
    return;
  }
  if ((*(byte *)(*(long *)(param_2 + 0x28) + 0xc) & 1) == 0) {
    return;
  }
  local_60._0_8_ = 0;
  local_60._8_8_ = 0xffffffffffffffff;
  local_50 = 0;
  local_48 = 0xffffffffffffffff;
  local_40 = 0;
  local_3c = 0;
  local_30 = (QArrayData *)PTR_shared_null_1021e1288;
  local_28 = 0xffffffff;
  local_24 = 0xffffffff;
  local_60 = QWidget::frameGeometry();
  local_50 = *(undefined8 *)(*(long *)(param_2 + 0x28) + 0x14);
  local_48 = *(undefined8 *)(*(long *)(param_2 + 0x28) + 0x1c);
  pQVar2 = (QWidget *)QApplication::desktop();
  local_3c = QDesktopWidget::screenNumber(pQVar2);
  puVar1 = PTR_s_Console__1__2__3__1022738a0;
  iVar4 = -1;
  if (PTR_s_Console__1__2__3__1022738a0 != (undefined *)0x0) {
    sVar3 = _strlen(PTR_s_Console__1__2__3__1022738a0);
    iVar4 = (int)sVar3;
  }
  local_80 = (QArrayData *)QString::fromAscii_helper(puVar1,iVar4);
  QString::arg(&local_78,&local_80,param_3,0,0x20);
  QString::arg(&local_70,&local_78,0,0,10,0x20);
  QString::arg(&local_68,&local_70,1,0,10,0x20);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_19 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1003710cb;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_1003710cb:
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_19 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1003710fb;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_1003710fb:
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_19 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10037112b;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_10037112b:
  FUN_1003712c0();
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_19 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100371168;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_100371168:
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      UNLOCK();
      if (*(int *)local_30 != 0) {
        return;
      }
      local_19 = 0;
    }
    QArrayData::deallocate(local_30,2,8);
  }
  return;
}


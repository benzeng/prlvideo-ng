
/* Function Stack Size: 0x18 bytes */

QMenu * PDDeviceBarButtonItem::popupMenu_(ID param_1,SEL param_2,char *param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  QMenu *pQVar8;
  undefined8 uVar9;
  QArrayData *local_40;
  undefined1 local_32;
  
  lVar6 = PDBarButtonItem::_vm;
  if (*(long *)(param_1 + PDBarButtonItem::_vm) == 0) {
    return (QMenu *)0x0;
  }
  if (*(int *)(*(long *)(param_1 + PDBarButtonItem::_vm) + 4) == 0) {
    return (QMenu *)0x0;
  }
  lVar5 = *(long *)(PDBarButtonItem::_vm + 8 + param_1);
  if (lVar5 == 0) {
    return (QMenu *)0x0;
  }
  cVar1 = FUN_10018dbd0(lVar5,0);
  if (cVar1 == '\0') {
    return (QMenu *)0x0;
  }
  uVar4 = FUN_100152280();
  uVar9 = 0;
  if ((*(long *)(param_1 + lVar6) != 0) &&
     (uVar9 = 0, *(int *)(*(long *)(param_1 + lVar6) + 4) != 0)) {
    uVar9 = *(undefined8 *)(lVar6 + 8 + param_1);
  }
  FUN_1001884b0(&local_40,uVar9);
  lVar5 = FUN_100152a20(uVar4,&local_40);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_32 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_32) goto LAB_100024ee7;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100024ee7:
  lVar7 = _deviceActionSet;
  if (lVar5 == 0) {
    return (QMenu *)0x0;
  }
  if (*(long *)(param_1 + _deviceActionSet) == 0) {
    return (QMenu *)0x0;
  }
  if (*(int *)(*(long *)(param_1 + _deviceActionSet) + 4) == 0) {
    return (QMenu *)0x0;
  }
  if (*(long *)(_deviceActionSet + 8 + param_1) == 0) {
    return (QMenu *)0x0;
  }
  iVar2 = FUN_1007bd980();
  lVar5 = *(long *)(param_1 + lVar7);
  uVar9 = 0;
  if ((lVar5 != 0) && (uVar9 = 0, *(int *)(lVar5 + 4) != 0)) {
    uVar9 = *(undefined8 *)(lVar7 + 8 + param_1);
  }
  uVar3 = FUN_1007bd990(uVar9);
  lVar5 = _deviceActionSet;
  if (iVar2 < 0x11) {
    if (iVar2 != 8) {
      if (iVar2 != 0xf) goto LAB_10002500d;
      cVar1 = (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_connected_102269708);
      if (cVar1 == '\0') {
        return (QMenu *)0x0;
      }
    }
    uVar9 = 0;
    if ((*(long *)(param_1 + lVar6) != 0) &&
       (uVar9 = 0, *(int *)(*(long *)(param_1 + lVar6) + 4) != 0)) {
      uVar9 = *(undefined8 *)(lVar6 + 8 + param_1);
    }
    lVar6 = FUN_10018f120(uVar9,8,uVar3);
    if ((lVar6 != 0) && (lVar7 = FUN_100146b20(lVar6), lVar7 != 0)) {
      FUN_100146b20(lVar6);
      iVar2 = CVmDevice::getEmulatedType();
      if (iVar2 == 4) {
        return (QMenu *)0x0;
      }
    }
  }
  else {
    if (iVar2 == 0x11) {
      return (QMenu *)0x0;
    }
    if (iVar2 == 0x14) {
      return (QMenu *)0x0;
    }
  }
LAB_10002500d:
  if (param_3 != (char *)0x0) {
    *param_3 = '\0';
  }
  lVar6 = *(long *)(param_1 + lVar5);
  pQVar8 = (QMenu *)0x0;
  if ((lVar6 != 0) && (pQVar8 = (QMenu *)0x0, *(int *)(lVar6 + 4) != 0)) {
    pQVar8 = *(QMenu **)(lVar5 + 8 + param_1);
  }
  return pQVar8;
}


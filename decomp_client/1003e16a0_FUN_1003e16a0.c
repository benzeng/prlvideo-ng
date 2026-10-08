
void FUN_1003e16a0(long param_1,int param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  Data *pDVar6;
  long lVar7;
  Data *local_40;
  undefined1 local_31;
  
  cVar2 = FUN_1003b0b30(*(undefined8 *)(param_1 + 0x18));
  if (cVar2 != '\0') {
    return;
  }
  FUN_1003b1cf0(&local_40,*(undefined8 *)(param_1 + 0x18));
  iVar5 = *(int *)(local_40 + 8);
  iVar3 = *(int *)(local_40 + 0xc);
  if (iVar5 == iVar3) {
    bVar1 = false;
  }
  else {
    pDVar6 = local_40 + (long)iVar5 * 8 + 0x10;
    lVar7 = (long)iVar3 * 8 + (long)iVar5 * -8;
    do {
      bVar1 = true;
      if (**(int **)pDVar6 == param_2) goto LAB_1003e1718;
      pDVar6 = pDVar6 + 8;
      lVar7 = lVar7 + -8;
    } while (lVar7 != 0);
    bVar1 = false;
  }
LAB_1003e1718:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003e177f;
      iVar5 = *(int *)(local_40 + 8);
      iVar3 = *(int *)(local_40 + 0xc);
    }
    if (iVar3 != iVar5) {
      lVar7 = (long)iVar5 * 8 + (long)iVar3 * -8;
      pDVar6 = local_40 + (long)iVar3 * 8 + 8;
      do {
        if (*(void **)pDVar6 != (void *)0x0) {
          operator_delete(*(void **)pDVar6);
        }
        pDVar6 = pDVar6 + -8;
        lVar7 = lVar7 + 8;
      } while (lVar7 != 0);
    }
    QListData::dispose(local_40);
  }
LAB_1003e177f:
  if (bVar1) {
    CMappingController::valueHandler();
    lVar7 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_102210a70);
    if ((lVar7 != 0) && (cVar2 = FUN_1003f9c40(lVar7), cVar2 != '\0')) {
      return;
    }
  }
  uVar4 = FUN_1003b0ad0(*(undefined8 *)(param_1 + 0x18));
  FUN_1003e5c20(uVar4);
  return;
}


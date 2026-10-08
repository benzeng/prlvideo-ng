
void FUN_10020a7e0(long *param_1)

{
  long *plVar1;
  long lVar2;
  QObject *pQVar3;
  undefined8 uVar4;
  int *local_38;
  QObject *local_30;
  undefined1 local_21;
  
  QObject::sender();
  lVar2 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_102200e90);
  if ((*(long *)(lVar2 + 0x18) == 0) || (*(int *)(*(long *)(lVar2 + 0x18) + 4) == 0)) {
    pQVar3 = (QObject *)0x0;
    local_38 = (int *)0x0;
  }
  else {
    pQVar3 = *(QObject **)(lVar2 + 0x20);
    local_38 = (int *)0x0;
    if (pQVar3 != (QObject *)0x0) {
      local_38 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar3);
    }
  }
  local_30 = pQVar3;
  FUN_10020b3a0(param_1 + 0x2c,&local_38);
  if (local_38 != (int *)0x0) {
    LOCK();
    *local_38 = *local_38 + -1;
    local_21 = *local_38 != 0;
    UNLOCK();
    if ((!(bool)local_21) && (local_38 != (int *)0x0)) {
      operator_delete(local_38);
    }
  }
  lVar2 = param_1[0x2c];
  if (*(int *)(lVar2 + 0xc) == *(int *)(lVar2 + 8)) {
    lVar2 = *param_1;
    uVar4 = 0;
  }
  else {
    plVar1 = *(long **)(lVar2 + 0x10 + (long)*(int *)(lVar2 + 8) * 8);
    lVar2 = *plVar1;
    if (((lVar2 != 0) && (*(int *)(lVar2 + 4) != 0)) && (plVar1[1] != 0)) {
      FUN_10020a460(param_1);
      return;
    }
    lVar2 = *param_1;
    uVar4 = 0x80000009;
  }
  (**(code **)(lVar2 + 0xb0))(param_1,uVar4);
  return;
}


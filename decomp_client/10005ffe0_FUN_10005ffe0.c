
void FUN_10005ffe0(long param_1,long *param_2)

{
  QWidget *pQVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  Data *local_58;
  Data *local_50;
  Data *local_48;
  Data *local_40;
  int local_38;
  Connection local_30 [15];
  bool local_21;
  
  if (param_2 != (long *)0x0) {
    lVar4 = FUN_100060320(param_2);
    if ((lVar4 != 0) && (lVar4 != *(long *)PTR_self_1021e1388)) {
      FUN_10005f5d0(param_1,lVar4);
    }
    lVar4 = (**(code **)(*param_2 + 8))(param_2,"CControlCenterWindow");
    if (lVar4 == 0) {
      return;
    }
    QObject::connect(local_30,param_2,"2currentContextChanged()",param_1,
                     "1onMainWindowCurrentContextChanged()",0x80);
    QMetaObject::Connection::~Connection(local_30);
    return;
  }
  lVar4 = *(long *)(*(long *)(param_1 + 0x10) + 0x10);
  lVar6 = *(long *)(lVar4 + 0x18);
  uVar5 = 0;
  if ((lVar6 != 0) && (uVar5 = 0, *(int *)(lVar6 + 4) != 0)) {
    uVar5 = *(undefined8 *)(lVar4 + 0x20);
  }
  iVar3 = FUN_100060e10(uVar5);
  if (iVar3 != 3) {
    return;
  }
  uVar5 = FUN_1001d50a0();
  cVar2 = FUN_1001d50f0(uVar5);
  if (cVar2 != '\0') {
    uVar5 = FUN_1001d50a0();
    cVar2 = FUN_1001d50e0(uVar5);
    if (cVar2 != '\0') {
      return;
    }
  }
  uVar5 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_1021fd420);
  uVar5 = FUN_10018c280(uVar5);
  iVar3 = FUN_100319ae0(uVar5);
  if (iVar3 == 3) {
    return;
  }
  QApplication::topLevelWidgets();
  local_50 = local_58;
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 == 0) {
      QListData::detach((int)&local_50);
      lVar4 = (long)*(int *)(local_50 + 8);
      if ((local_58 + (long)*(int *)(local_58 + 8) * 8 != local_50 + lVar4 * 8) &&
         (lVar6 = *(int *)(local_50 + 0xc) - lVar4, lVar6 != 0 && lVar4 <= *(int *)(local_50 + 0xc))
         ) {
        _memcpy(local_50 + lVar4 * 8 + 0x10,local_58 + (long)*(int *)(local_58 + 8) * 8 + 0x10,
                lVar6 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + 1;
      local_21 = *(int *)local_58 != 0;
      UNLOCK();
    }
  }
  local_48 = local_50 + (long)*(int *)(local_50 + 8) * 8 + 0x10;
  local_40 = local_50 + (long)*(int *)(local_50 + 0xc) * 8 + 0x10;
  local_38 = 1;
  if (*(int *)local_58 == -1) {
LAB_1000601e3:
    for (; local_48 != local_40; local_48 = local_48 + 8) {
      pQVar1 = *(QWidget **)local_48;
      if (((*(byte *)(*(long *)(pQVar1 + 0x28) + 10) & 1) == 0) &&
         (cVar2 = WidgetUtils::isVisibleTopLevelWindow(pQVar1), cVar2 != '\0')) {
        lVar6 = FUN_100060320(pQVar1);
        lVar4 = 0;
        if ((*(long *)(param_1 + 0x18) != 0) &&
           (lVar4 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
          lVar4 = *(long *)(param_1 + 0x20);
        }
        if (lVar6 == lVar4) {
          if (*(int *)local_50 == -1) {
            return;
          }
          if (*(int *)local_50 != 0) {
            LOCK();
            *(int *)local_50 = *(int *)local_50 + -1;
            UNLOCK();
            if (*(int *)local_50 != 0) {
              return;
            }
            local_21 = false;
          }
          QListData::dispose(local_50);
          return;
        }
      }
      local_38 = 1;
    }
    if (*(int *)local_50 == -1) goto LAB_100060293;
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      iVar3 = *(int *)local_50;
      UNLOCK();
LAB_100060284:
      local_21 = iVar3 != 0;
      if (local_21) goto LAB_100060293;
    }
  }
  else {
    if (*(int *)local_58 == 0) {
LAB_1000601b0:
      QListData::dispose(local_58);
    }
    else {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_21 = *(int *)local_58 != 0;
      UNLOCK();
      if (!local_21) goto LAB_1000601b0;
    }
    if (local_38 != 0) goto LAB_1000601e3;
    if (*(int *)local_50 == -1) goto LAB_100060293;
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      iVar3 = *(int *)local_50;
      UNLOCK();
      goto LAB_100060284;
    }
  }
  QListData::dispose(local_50);
LAB_100060293:
  uVar5 = FUN_100152280();
  uVar5 = FUN_1001554a0(uVar5);
  FUN_10005f5d0(param_1,uVar5);
  return;
}


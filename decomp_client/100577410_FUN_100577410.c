
void FUN_100577410(QObject *param_1,long *param_2,undefined8 *param_3,QObject *param_4)

{
  int *piVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long local_40;
  undefined1 local_36;
  undefined1 local_35;
  
  QObject::QObject(param_1,param_4);
  *(undefined ***)param_1 = &PTR_FUN_1021f38f8;
  piVar1 = (int *)*param_2;
  *(int **)(param_1 + 0x10) = piVar1;
  if (*piVar1 != -1) {
    if (*piVar1 == 0) {
      QListData::detach((int)(param_1 + 0x10));
      lVar2 = *(long *)(param_1 + 0x10);
      lVar5 = (long)*(int *)(lVar2 + 8);
      lVar3 = *param_2;
      if ((lVar3 + (long)*(int *)(lVar3 + 8) * 8 != lVar2 + lVar5 * 8) &&
         (lVar6 = *(int *)(lVar2 + 0xc) - lVar5, lVar6 != 0 && lVar5 <= *(int *)(lVar2 + 0xc))) {
        _memcpy((void *)(lVar2 + 0x10 + lVar5 * 8),
                (void *)(lVar3 + 0x10 + (long)*(int *)(lVar3 + 8) * 8),lVar6 * 8);
      }
    }
    else {
      LOCK();
      *piVar1 = *piVar1 + 1;
      local_36 = *piVar1 != 0;
      UNLOCK();
    }
  }
  piVar1 = (int *)*param_3;
  uVar4 = param_3[1];
  *(int **)(param_1 + 0x18) = piVar1;
  *(undefined8 *)(param_1 + 0x20) = uVar4;
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    local_35 = *piVar1 != 0;
    UNLOCK();
  }
  uVar4 = param_3[2];
  *(undefined8 *)(param_1 + 0x30) = param_3[3];
  *(undefined8 *)(param_1 + 0x28) = uVar4;
  QVariant::QVariant((QVariant *)(param_1 + 0x38),(QVariant *)(param_3 + 4));
  param_1[0x48] = *(QObject *)(param_3 + 6);
  QObject::connect(&local_40,*(undefined8 *)PTR_self_1021e1388,"2focusChanged(QWidget*,QWidget*)",
                   param_1,"1onFocusChanged(QWidget*,QWidget*)",0);
  if (local_40 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_40);
  return;
}


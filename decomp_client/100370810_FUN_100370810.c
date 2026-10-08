
void FUN_100370810(long param_1,long *param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  if (*param_2 == 0) {
    return;
  }
  if (*(int *)(*param_2 + 4) == 0) {
    return;
  }
  if (param_2[1] == 0) {
    return;
  }
  uVar2 = FUN_1003782a0();
  lVar4 = 0;
  if ((*param_2 != 0) && (lVar4 = 0, *(int *)(*param_2 + 4) != 0)) {
    lVar4 = param_2[1];
  }
  FUN_100378250(&local_40,lVar4);
  lVar4 = 0;
  if ((*param_2 != 0) && (lVar4 = 0, *(int *)(*param_2 + 4) != 0)) {
    lVar4 = param_2[1];
  }
  FUN_100379810(&local_48,lVar4);
  if (2 < DAT_10230ffd0) {
    QString::toUtf8();
    lVar4 = *(long *)(local_50 + 0x10);
    QString::toUtf8();
    FUN_100df99c0("[CONSOLE_MNG]","prl_client_app",3,
                  "Remove display [%d] console widget for Vm %s server %s",uVar2,local_50 + lVar4,
                  local_58 + *(long *)(local_58 + 0x10));
    if (*(int *)local_58 != -1) {
      if (*(int *)local_58 != 0) {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + -1;
        local_31 = *(int *)local_58 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100370929;
      }
      QArrayData::deallocate(local_58,1,8);
    }
LAB_100370929:
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        local_31 = *(int *)local_50 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100370959;
      }
      QArrayData::deallocate(local_50,1,8);
    }
  }
LAB_100370959:
  uVar3 = FUN_100152280();
  lVar4 = FUN_1001548f0(uVar3,&local_40);
  if (lVar4 != 0) {
    uVar3 = FUN_10018c280(lVar4);
    lVar4 = FUN_1003192a0(uVar3,DAT_100e152b8);
    if ((lVar4 != 0) && (cVar1 = FUN_100326470(lVar4), cVar1 != '\0')) {
      QWidget::hide();
    }
  }
  FUN_100833f70(param_1,&local_48,&local_40,uVar2);
  FUN_100375810(param_1 + 0x10,param_2);
  QWidget::hide();
  if (((*param_2 != 0) && (*(int *)(*param_2 + 4) != 0)) && ((long *)param_2[1] != (long *)0x0)) {
    (**(code **)(*(long *)param_2[1] + 0x20))();
  }
  FUN_100833fd0(param_1,&local_40,uVar2);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100370a4d;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100370a4d:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_40,2,8);
  }
  return;
}


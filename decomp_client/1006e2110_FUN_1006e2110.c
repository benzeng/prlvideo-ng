
undefined1
FUN_1006e2110(undefined8 param_1,QObject *param_2,undefined4 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined1 uVar1;
  QObject *pQVar2;
  QArrayData *pQVar3;
  int *local_108;
  QObject *local_100;
  QArrayData *local_f8;
  QArrayData *local_f0;
  undefined8 local_e8;
  undefined4 local_e0 [2];
  undefined4 *local_d8;
  char *local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  int **local_50;
  char *local_48;
  undefined8 *local_40;
  char *local_38;
  undefined1 local_29;
  
  local_e8 = param_1;
  local_e0[0] = param_3;
  if (DAT_102310988 == (QObject *)0x0) {
    pQVar2 = operator_new(0x10);
    QObject::QObject(pQVar2,(QObject *)0x0);
    *(undefined ***)pQVar2 = &PTR_FUN_1022257d0;
    DAT_102310988 = pQVar2;
  }
  pQVar2 = DAT_102310988;
  FUN_1006e1fc0(&local_f8,local_e8);
  QString::toLatin1();
  pQVar3 = local_f0 + *(long *)(local_f0 + 0x10);
  local_108 = (int *)0x0;
  if (param_2 != (QObject *)0x0) {
    local_108 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(param_2);
  }
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_d8 = local_e0;
  local_d0 = "CMenuBuilder::BuildFlags";
  local_40 = &local_e8;
  local_38 = "QAction*";
  local_50 = &local_108;
  local_48 = "QPointer<QObject>";
  local_100 = param_2;
  uVar1 = QMetaObject::invokeMethod
                    (pQVar2,pQVar3,0,0,0,param_6,local_40,"QAction*",local_50,"QPointer<QObject>",
                     local_d8,"CMenuBuilder::BuildFlags",0,0,0,0,0,0,0,0,0,0,0,0,0,0);
  if (local_108 != (int *)0x0) {
    LOCK();
    *local_108 = *local_108 + -1;
    local_29 = *local_108 != 0;
    UNLOCK();
    if ((!(bool)local_29) && (local_108 != (int *)0x0)) {
      operator_delete(local_108);
    }
  }
  if (*(int *)local_f0 != -1) {
    if (*(int *)local_f0 != 0) {
      LOCK();
      *(int *)local_f0 = *(int *)local_f0 + -1;
      local_29 = *(int *)local_f0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1006e2382;
    }
    QArrayData::deallocate(local_f0,1,8);
  }
LAB_1006e2382:
  if (*(int *)local_f8 != -1) {
    if (*(int *)local_f8 != 0) {
      LOCK();
      *(int *)local_f8 = *(int *)local_f8 + -1;
      UNLOCK();
      if (*(int *)local_f8 != 0) {
        return uVar1;
      }
      local_29 = 0;
    }
    QArrayData::deallocate(local_f8,2,8);
  }
  return uVar1;
}


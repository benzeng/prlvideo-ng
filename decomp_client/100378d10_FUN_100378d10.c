
void FUN_100378d10(QObject *param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  QObject *pQVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined4 local_88;
  undefined4 local_84;
  undefined1 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined1 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined1 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined1 local_5c;
  Connection local_58 [8];
  code *local_50;
  undefined8 local_48;
  code *local_40;
  undefined8 local_38;
  
  if (DAT_102310858 == (QObject *)0x0) {
    pQVar4 = operator_new(0x18);
    FUN_10005ea90(pQVar4);
    DAT_1022738a8 = 1;
    DAT_102310858 = pQVar4;
  }
  local_40 = FUN_100809310;
  local_38 = 0;
  local_50 = FUN_100378d10;
  local_48 = 0;
  QObject::disconnectImpl
            (DAT_102310858,&local_40,param_1,&local_50,
             (QMetaObject *)&PTR_staticMetaObject_1021fef50);
  if (DAT_102310858 == (QObject *)0x0) {
    pQVar4 = operator_new(0x18);
    FUN_10005ea90(pQVar4);
    DAT_1022738a8 = 1;
    DAT_102310858 = pQVar4;
  }
  cVar1 = FUN_10005eaf0(DAT_102310858);
  if (cVar1 == '\0') {
    uVar6 = 0;
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (uVar6 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
      uVar6 = *(undefined8 *)(param_1 + 0x20);
    }
    uVar6 = FUN_100323e00(uVar6);
    iVar3 = FUN_100319ae0(uVar6);
    bVar2 = MacUtils::isWindowInNativeFullScreen(*(QWidget **)(param_1 + 0x10));
    uVar6 = 0;
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (uVar6 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
      uVar6 = *(undefined8 *)(param_1 + 0x20);
    }
    cVar1 = FUN_100325ca0(uVar6);
    if (cVar1 == '\0') {
      if ((iVar3 != 2 & bVar2) == 1) {
        uVar6 = 0;
        if ((*(long *)(param_1 + 0x18) != 0) &&
           (uVar6 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
          uVar6 = *(undefined8 *)(param_1 + 0x20);
        }
        uVar6 = FUN_100323e00(uVar6);
        local_70 = 3;
        local_68 = 0;
        local_6c = 0;
        local_64 = 0xffff;
        local_60 = 0;
        local_5c = 0;
        puVar5 = &local_70;
        uVar7 = 2;
      }
      else {
        if (iVar3 == 1) {
          return;
        }
        if (bVar2 == 1) {
          return;
        }
        uVar6 = 0;
        if ((*(long *)(param_1 + 0x18) != 0) &&
           (uVar6 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
          uVar6 = *(undefined8 *)(param_1 + 0x20);
        }
        uVar6 = FUN_100323e00(uVar6);
        local_88 = 3;
        local_80 = 0;
        local_84 = 0;
        local_7c = 0xffff;
        local_78 = 0;
        local_74 = 0;
        puVar5 = &local_88;
        uVar7 = 1;
      }
      FUN_10031bef0(uVar6,uVar7,puVar5);
    }
  }
  else {
    if (DAT_102310858 == (QObject *)0x0) {
      pQVar4 = operator_new(0x18);
      FUN_10005ea90(pQVar4);
      DAT_1022738a8 = 1;
      DAT_102310858 = pQVar4;
    }
    pQVar4 = DAT_102310858;
    local_40 = FUN_100809310;
    local_38 = 0;
    local_50 = FUN_100378d10;
    local_48 = 0;
    puVar5 = operator_new(0x20);
    *puVar5 = 1;
    *(code **)(puVar5 + 2) = FUN_10037a6a0;
    *(code **)(puVar5 + 4) = FUN_100378d10;
    *(undefined8 *)(puVar5 + 6) = 0;
    QObject::connectImpl
              (local_58,pQVar4,&local_40,param_1,&local_50,puVar5,0,0,
               &PTR_staticMetaObject_1021fef50);
    QMetaObject::Connection::~Connection(local_58);
  }
  return;
}


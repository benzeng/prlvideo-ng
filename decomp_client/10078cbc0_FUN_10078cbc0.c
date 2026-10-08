
undefined8 * FUN_10078cbc0(undefined8 param_1,QObject *param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  QArrayData *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  uVar1 = FUN_1007864b0(param_2);
  switch(uVar1) {
  case 1:
    puVar2 = operator_new(0x30);
    *puVar2 = &PTR_FUN_1021f7380;
    puVar2[1] = param_1;
    uVar3 = 0;
    if (param_2 != (QObject *)0x0) {
      uVar3 = QtSharedPointer::ExternalRefCountData::getAndRef(param_2);
    }
    puVar2[2] = uVar3;
    puVar2[3] = param_2;
    puVar2[5] = 0;
    puVar2[4] = 0;
    ppuVar4 = &PTR_FUN_1021f73a8;
    break;
  case 2:
    puVar2 = operator_new(0x30);
    *puVar2 = &PTR_FUN_1021f7380;
    puVar2[1] = param_1;
    uVar3 = 0;
    if (param_2 != (QObject *)0x0) {
      uVar3 = QtSharedPointer::ExternalRefCountData::getAndRef(param_2);
    }
    puVar2[2] = uVar3;
    puVar2[3] = param_2;
    puVar2[5] = 0;
    puVar2[4] = 0;
    ppuVar4 = &PTR_FUN_1021f7438;
    break;
  case 3:
    puVar2 = operator_new(0x30);
    *puVar2 = &PTR_FUN_1021f7380;
    puVar2[1] = param_1;
    uVar3 = 0;
    if (param_2 != (QObject *)0x0) {
      uVar3 = QtSharedPointer::ExternalRefCountData::getAndRef(param_2);
    }
    puVar2[2] = uVar3;
    puVar2[3] = param_2;
    puVar2[5] = 0;
    puVar2[4] = 0;
    ppuVar4 = &PTR_FUN_1021f73f8;
    break;
  case 4:
    puVar2 = operator_new(0x30);
    *puVar2 = &PTR_FUN_1021f7380;
    puVar2[1] = param_1;
    uVar3 = 0;
    if (param_2 != (QObject *)0x0) {
      uVar3 = QtSharedPointer::ExternalRefCountData::getAndRef(param_2);
    }
    puVar2[2] = uVar3;
    puVar2[3] = param_2;
    puVar2[5] = 0;
    puVar2[4] = 0;
    ppuVar4 = &PTR_FUN_1021f7478;
    break;
  case 5:
    puVar2 = operator_new(0x30);
    *puVar2 = &PTR_FUN_1021f7380;
    puVar2[1] = param_1;
    uVar3 = 0;
    if (param_2 != (QObject *)0x0) {
      uVar3 = QtSharedPointer::ExternalRefCountData::getAndRef(param_2);
    }
    puVar2[2] = uVar3;
    puVar2[3] = param_2;
    puVar2[5] = 0;
    puVar2[4] = 0;
    ppuVar4 = &PTR_FUN_1021f7578;
    break;
  case 6:
    puVar2 = operator_new(0x30);
    *puVar2 = &PTR_FUN_1021f7380;
    puVar2[1] = param_1;
    uVar3 = 0;
    if (param_2 != (QObject *)0x0) {
      uVar3 = QtSharedPointer::ExternalRefCountData::getAndRef(param_2);
    }
    puVar2[2] = uVar3;
    puVar2[3] = param_2;
    puVar2[5] = 0;
    puVar2[4] = 0;
    ppuVar4 = &PTR_FUN_1021f7538;
    break;
  case 7:
    puVar2 = operator_new(0x30);
    *puVar2 = &PTR_FUN_1021f7380;
    puVar2[1] = param_1;
    uVar3 = 0;
    if (param_2 != (QObject *)0x0) {
      uVar3 = QtSharedPointer::ExternalRefCountData::getAndRef(param_2);
    }
    puVar2[2] = uVar3;
    puVar2[3] = param_2;
    puVar2[5] = 0;
    puVar2[4] = 0;
    ppuVar4 = &PTR_FUN_1021f74f8;
    break;
  case 8:
    puVar2 = operator_new(0x30);
    *puVar2 = &PTR_FUN_1021f7380;
    puVar2[1] = param_1;
    uVar3 = 0;
    if (param_2 != (QObject *)0x0) {
      uVar3 = QtSharedPointer::ExternalRefCountData::getAndRef(param_2);
    }
    puVar2[2] = uVar3;
    puVar2[3] = param_2;
    puVar2[5] = 0;
    puVar2[4] = 0;
    ppuVar4 = &PTR_FUN_1021f74b8;
    break;
  case 9:
    puVar2 = operator_new(0x30);
    *puVar2 = &PTR_FUN_1021f7380;
    puVar2[1] = param_1;
    uVar3 = 0;
    if (param_2 != (QObject *)0x0) {
      uVar3 = QtSharedPointer::ExternalRefCountData::getAndRef(param_2);
    }
    puVar2[2] = uVar3;
    puVar2[3] = param_2;
    puVar2[5] = 0;
    puVar2[4] = 0;
    ppuVar4 = &PTR_FUN_1021f75b8;
    break;
  default:
    uVar1 = FUN_1007864b0(param_2);
    FUN_100786690(&local_38,uVar1);
    QString::toUtf8();
    FUN_100df99c0("","prl_client_app",0,"Cannot create reader for an unknown counter %s",
                  local_30 + *(long *)(local_30 + 0x10));
    if (*(int *)local_30 != -1) {
      if (*(int *)local_30 != 0) {
        LOCK();
        *(int *)local_30 = *(int *)local_30 + -1;
        local_21 = *(int *)local_30 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_10078cc5e;
      }
      QArrayData::deallocate(local_30,1,8);
    }
LAB_10078cc5e:
    if (*(int *)local_38 == -1) {
      return (undefined8 *)0x0;
    }
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) {
        return (undefined8 *)0x0;
      }
      local_21 = 0;
    }
    QArrayData::deallocate(local_38,2,8);
    return (undefined8 *)0x0;
  }
  *puVar2 = ppuVar4;
  return puVar2;
}


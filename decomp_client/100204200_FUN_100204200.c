
void FUN_100204200(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  QArrayData *local_50;
  QArrayData *local_48;
  Connection local_40 [8];
  QArrayData *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  if (*(long *)(param_1 + 0x70) == 0) {
    return;
  }
  if (*(int *)(*(long *)(param_1 + 0x70) + 4) == 0) {
    return;
  }
  if (*(long *)(param_1 + 0x78) == 0) {
    return;
  }
  uVar2 = 0;
  if ((*(long *)(param_1 + 0x28) != 0) && (uVar2 = 0, *(int *)(*(long *)(param_1 + 0x28) + 4) != 0))
  {
    uVar2 = *(undefined8 *)(param_1 + 0x30);
  }
  local_30 = (QArrayData *)QString::fromAscii_helper("{2FCD526C-D8E7-4F2C-AE55-1C528FABED14}",0x26);
  local_38 = (QArrayData *)QString::fromAscii_helper("0",1);
  uVar2 = FUN_100198ac0(uVar2,&local_30,&local_38,0x800);
  *(undefined8 *)(param_1 + 0x68) = uVar2;
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1002042be;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1002042be:
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1002042ee;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_1002042ee:
  lVar1 = *(long *)(param_1 + 0x68);
  if (lVar1 != 0) {
    *(undefined1 *)(lVar1 + 0x60) = 1;
    uVar2 = 0;
    QObject::connect(local_40,lVar1,"2jobCompleted(PRL_RESULT)",param_1,
                     "1onRequestProgressFinished(PRL_RESULT)",0);
    QMetaObject::Connection::~Connection(local_40);
    if ((*(long *)(param_1 + 0x70) != 0) &&
       (uVar2 = 0, *(int *)(*(long *)(param_1 + 0x70) + 4) != 0)) {
      uVar2 = *(undefined8 *)(param_1 + 0x78);
    }
    uVar3 = 0;
    FUN_1001a3580(uVar2,0);
    if ((*(long *)(param_1 + 0x70) != 0) &&
       (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x70) + 4) != 0)) {
      uVar3 = *(undefined8 *)(param_1 + 0x78);
    }
    FUN_1001a35a0(uVar3,1);
    uVar2 = 0;
    if ((*(long *)(param_1 + 0x70) != 0) &&
       (uVar2 = 0, *(int *)(*(long *)(param_1 + 0x70) + 4) != 0)) {
      uVar2 = *(undefined8 *)(param_1 + 0x78);
    }
    QMetaObject::tr((char *)&local_48,PTR_staticMetaObject_1021e1520,
                    (int)PTR_s_Calculating_the_required_space___10226fee8);
    FUN_1001a35c0(uVar2,&local_48);
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        local_21 = *(int *)local_48 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1002043e9;
      }
      QArrayData::deallocate(local_48,2,8);
    }
  }
LAB_1002043e9:
  uVar2 = 0;
  if ((*(long *)(param_1 + 0x70) != 0) && (uVar2 = 0, *(int *)(*(long *)(param_1 + 0x70) + 4) != 0))
  {
    uVar2 = *(undefined8 *)(param_1 + 0x78);
  }
  QMetaObject::tr((char *)&local_50,PTR_staticMetaObject_1021e1520,
                  (int)PTR_s_The_original_Boot_Camp_virtual_m_10226fed8);
  FUN_1001a3560(uVar2,&local_50);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      UNLOCK();
      if (*(int *)local_50 != 0) {
        return;
      }
      local_21 = 0;
    }
    QArrayData::deallocate(local_50,2,8);
  }
  return;
}


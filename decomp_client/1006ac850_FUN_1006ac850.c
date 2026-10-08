
void FUN_1006ac850(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  QVariant local_80;
  QArrayData *local_70;
  QVariant local_68;
  QArrayData *local_58;
  QVariant local_50;
  QArrayData *local_40;
  undefined1 local_31;
  
  if (param_3 == 0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    goto LAB_1006ac9c0;
  }
  uVar1 = FUN_100152280();
  QObject::property((char *)&local_50);
  QVariant::toString();
  QObject::property((char *)&local_68);
  QVariant::toString();
  uVar1 = FUN_100154930(uVar1,&local_40,&local_58);
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006ac901;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1006ac901:
  QVariant::~QVariant(&local_68);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006ac93a;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1006ac93a:
  QVariant::~QVariant(&local_50);
  uVar1 = FUN_100152280();
  QObject::property((char *)&local_80);
  QVariant::toString();
  uVar1 = FUN_100152a20(uVar1,&local_70);
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_31 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006ac9ad;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_1006ac9ad:
  QVariant::~QVariant(&local_80);
LAB_1006ac9c0:
  FUN_10069dc90(param_1,param_2,param_3);
  return;
}



void FUN_100697600(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  QVariant local_50;
  QArrayData *local_40;
  undefined1 local_31;
  
  if (param_3 == 0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
    goto LAB_10069769c;
  }
  uVar1 = FUN_100152280();
  QObject::property((char *)&local_50);
  QVariant::toString();
  uVar1 = FUN_100152a20(uVar1,&local_40);
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100697689;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100697689:
  QVariant::~QVariant(&local_50);
LAB_10069769c:
  FUN_1006964f0(param_1,param_2,param_3);
  return;
}


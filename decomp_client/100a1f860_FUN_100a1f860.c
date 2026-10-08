
undefined1  [16] FUN_100a1f860(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined1 auVar4 [12];
  undefined1 auVar5 [16];
  QArrayData *local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  uVar2 = 0;
  uVar3 = 0;
  if (param_1 == (undefined8 *)0x0) goto LAB_100a1f996;
  FUN_100a1f320(&local_38,param_2);
  if (*(int *)(local_38 + 4) == 0) {
    uVar2 = 0;
    uVar3 = 0;
    if (3 < DAT_10230ffd0) {
      QString::toLatin1();
      lVar1 = *(long *)(local_40 + 0x10);
      (**(code **)*param_1)(param_1);
      uVar3 = QMetaObject::className();
      uVar2 = 0;
      FUN_100df99c0("","MetaObjectUtils",4,"No method %s was found for object %s",local_40 + lVar1,
                    uVar3);
      uVar3 = 0;
      if (*(int *)local_40 != -1) {
        if (*(int *)local_40 != 0) {
          LOCK();
          *(int *)local_40 = *(int *)local_40 + -1;
          local_29 = *(int *)local_40 != 0;
          UNLOCK();
          uVar2 = 0;
          uVar3 = 0;
          if ((bool)local_29) goto LAB_100a1f966;
        }
        uVar2 = 0;
        QArrayData::deallocate(local_40,1,8);
        uVar3 = 0;
      }
    }
  }
  else {
    auVar4 = FUN_100a1f530(param_1,&local_38);
    uVar3 = auVar4._0_8_;
    uVar2 = (ulong)auVar4._8_4_;
  }
LAB_100a1f966:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) goto LAB_100a1f996;
      local_29 = 0;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_100a1f996:
  auVar5._8_8_ = uVar2;
  auVar5._0_8_ = uVar3;
  return auVar5;
}


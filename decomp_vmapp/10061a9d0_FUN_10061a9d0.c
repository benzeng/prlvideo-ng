
undefined8 FUN_10061a9d0(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  QArrayData *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  if (param_3 == (undefined8 *)0x0) {
    FUN_1008e3970("","EngAES",0,"Incoming pointer to object is NULL");
    return 0x80000003;
  }
  iVar1 = FUN_1007ea6f0(param_2,&DAT_1011cca80);
  if ((iVar1 == 0) || (iVar1 = FUN_1007ea6f0(param_2,&DAT_1011cca70), iVar1 == 0)) {
    *param_3 = param_1;
    return 0;
  }
  FUN_1007d6a70(&local_38,param_2);
  QString::toUtf8();
  FUN_1008e3970("","EngAES",0,
                "Trying to instanciate non encryption class from encryption object (%s)",
                local_30 + *(long *)(local_30 + 0x10));
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10061aa8e;
    }
    QArrayData::deallocate(local_30,1,8);
  }
LAB_10061aa8e:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) {
        return 0x80042000;
      }
      local_21 = 0;
    }
    QArrayData::deallocate(local_38,2,8);
  }
  return 0x80042000;
}


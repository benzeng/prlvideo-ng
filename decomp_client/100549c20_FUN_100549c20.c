
undefined4 * FUN_100549c20(undefined4 *param_1,long *param_2,QString *param_3)

{
  char cVar1;
  ulong uVar2;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  undefined8 local_48;
  QString local_40;
  undefined1 local_31;
  
  if (*(int *)(param_2[4] + 8) < *(int *)(param_2[4] + 0xc)) {
    uVar2 = 0;
    do {
      CVirtualNetwork::getUuid();
      cVar1 = operator==(&local_40,param_3);
      if (*(int *)local_40.field0_0x0 != -1) {
        if (*(int *)local_40.field0_0x0 != 0) {
          LOCK();
          *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
          local_31 = *(int *)local_40.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100549ca1;
        }
        QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
      }
LAB_100549ca1:
      if (cVar1 != '\0') {
        local_58 = 0xffffffff;
        local_54 = 0xffffffff;
        local_48 = 0;
        local_50 = 0;
        (**(code **)(*param_2 + 0x60))(param_1,param_2,uVar2 & 0xffffffff,0,&local_58);
        return param_1;
      }
      uVar2 = uVar2 + 1;
    } while ((long)uVar2 < (long)*(int *)(param_2[4] + 0xc) - (long)*(int *)(param_2[4] + 8));
  }
  *param_1 = 0xffffffff;
  param_1[1] = 0xffffffff;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  return param_1;
}


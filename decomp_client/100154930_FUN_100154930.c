
undefined8 FUN_100154930(long param_1,QString *param_2,long *param_3)

{
  long lVar1;
  char cVar2;
  undefined8 uVar3;
  long lVar4;
  QString local_60;
  int *local_58;
  long *local_50;
  long *local_48;
  undefined4 local_40;
  undefined1 local_31;
  
  uVar3 = 0;
  if ((*(int *)(param_2->field0_0x0 + 4) != 0) && (uVar3 = 0, *(int *)(*param_3 + 4) != 0)) {
    FUN_100062ec0(&local_58,param_1 + 0x10);
    local_50 = (long *)(local_58 + (long)local_58[2] * 2 + 4);
    local_48 = (long *)(local_58 + (long)local_58[3] * 2 + 4);
    local_40 = 1;
    uVar3 = 0;
    if (local_58[2] != local_58[3]) {
      uVar3 = 0;
      do {
        local_40 = 1;
        lVar1 = *(long *)*local_50;
        lVar4 = 0;
        if ((lVar1 != 0) && (lVar4 = 0, *(int *)(lVar1 + 4) != 0)) {
          lVar4 = ((long *)*local_50)[1];
        }
        FUN_10015aab0(&local_60,lVar4);
        cVar2 = operator==(&local_60,param_2);
        if (*(int *)local_60.field0_0x0 != -1) {
          if (*(int *)local_60.field0_0x0 != 0) {
            LOCK();
            *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
            local_31 = *(int *)local_60.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100154a28;
          }
          QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
        }
LAB_100154a28:
        if (cVar2 != '\0') {
          uVar3 = FUN_10015cb20(lVar4,param_3);
          break;
        }
        local_50 = local_50 + 1;
        local_40 = 1;
      } while (local_50 != local_48);
    }
    if (*local_58 != -1) {
      if (*local_58 != 0) {
        LOCK();
        *local_58 = *local_58 + -1;
        UNLOCK();
        if (*local_58 != 0) {
          return uVar3;
        }
        local_31 = 0;
      }
      FUN_100063050(&local_58,local_58);
    }
  }
  return uVar3;
}


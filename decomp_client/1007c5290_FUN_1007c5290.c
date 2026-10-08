
void FUN_1007c5290(long param_1,QString *param_2)

{
  undefined1 uVar1;
  int iVar2;
  long lVar3;
  QString local_60;
  int *local_58;
  long *local_50;
  long *local_48;
  undefined4 local_40;
  undefined1 local_31;
  
  FUN_1007c5b80(&local_58,param_1 + 0x38);
  local_50 = (long *)(local_58 + (long)local_58[2] * 2 + 4);
  local_48 = (long *)(local_58 + (long)local_58[3] * 2 + 4);
  if (local_58[2] != local_58[3]) {
    do {
      local_40 = 1;
      lVar3 = *(long *)*local_50;
      if ((((lVar3 != 0) && (*(int *)(lVar3 + 4) != 0)) &&
          (lVar3 = ((long *)*local_50)[1], lVar3 != 0)) &&
         ((iVar2 = FUN_1007b57b0(lVar3), iVar2 == 10 &&
          (lVar3 = ___dynamic_cast(lVar3,&PTR_vtable_10222d910,&PTR_vtable_10222dac0,0), lVar3 != 0)
          ))) {
        FUN_1007b5e90(&local_60,lVar3);
        uVar1 = operator==(&local_60,param_2);
        FUN_1001324d0(lVar3,uVar1);
        if (*(int *)local_60.field0_0x0 != -1) {
          if (*(int *)local_60.field0_0x0 != 0) {
            LOCK();
            *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
            local_31 = *(int *)local_60.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1007c5390;
          }
          QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
        }
      }
LAB_1007c5390:
      local_50 = local_50 + 1;
    } while (local_50 != local_48);
  }
  local_40 = 1;
  if (*local_58 != -1) {
    if (*local_58 != 0) {
      LOCK();
      *local_58 = *local_58 + -1;
      UNLOCK();
      if (*local_58 != 0) {
        return;
      }
      local_31 = 0;
    }
    FUN_1007c5ae0(&local_58,local_58);
  }
  return;
}


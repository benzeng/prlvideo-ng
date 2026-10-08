
undefined8 * FUN_100dad8a0(undefined8 *param_1,undefined8 param_2,int param_3,QString *param_4)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  bool bVar7;
  QString local_68;
  long *local_60;
  int *local_58;
  int *local_50;
  int *local_48;
  uint local_40;
  undefined1 local_31;
  
  *param_1 = PTR_shared_null_1021e15e8;
  FUN_100db2070(&local_58);
  local_50 = local_58 + (long)local_58[2] * 2 + 4;
  local_48 = local_58 + (long)local_58[3] * 2 + 4;
  local_40 = 1;
  if (local_58[2] != local_58[3]) {
    do {
      plVar1 = (long *)**(long **)local_50;
      if (plVar1 != (long *)0x0) {
        LOCK();
        *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
        UNLOCK();
      }
      local_60 = plVar1;
      if (local_40 != 0) {
        iVar5 = 0;
        if (((plVar1 != (long *)0x0) && (plVar2 = (long *)plVar1[2], plVar2 != (long *)0x0)) &&
           (iVar5 = (int)plVar2[2], iVar5 == 0)) {
          iVar5 = (**(code **)(*plVar2 + 0x40))(plVar2);
          *(int *)(plVar2 + 2) = iVar5;
        }
        if (iVar5 == param_3) {
          if ((plVar1 == (long *)0x0) || (plVar1[2] == 0)) {
            local_68.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
          }
          else {
            FUN_100dad0b0(&local_68);
          }
          cVar4 = operator==(&local_68,param_4);
          if (*(int *)local_68.field0_0x0 != -1) {
            if (*(int *)local_68.field0_0x0 != 0) {
              LOCK();
              *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
              local_31 = *(int *)local_68.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100dad9b8;
            }
            QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
          }
LAB_100dad9b8:
          if (cVar4 != '\0') {
            FUN_100db1e00(param_1,&local_60);
          }
        }
        local_40 = 0;
      }
      if (plVar1 != (long *)0x0) {
        LOCK();
        plVar2 = plVar1 + 1;
        lVar3 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
          (**(code **)(*plVar1 + 0x10))(plVar1);
        }
      }
      local_50 = local_50 + 2;
      uVar6 = local_40 ^ 1;
      bVar7 = local_40 != 1;
      local_40 = uVar6;
    } while ((bVar7) && (local_50 != local_48));
  }
  if (*local_58 != -1) {
    if (*local_58 != 0) {
      LOCK();
      *local_58 = *local_58 + -1;
      UNLOCK();
      if (*local_58 != 0) {
        return param_1;
      }
      local_31 = 0;
    }
    FUN_100db2200(&local_58,local_58);
  }
  return param_1;
}



void FUN_1006ea770(undefined8 param_1,int param_2,undefined4 param_3,long *param_4)

{
  undefined4 uVar1;
  undefined8 local_70;
  undefined8 local_68;
  QArrayData *local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  QArrayData *local_38;
  QArrayData *local_30;
  QArrayData *local_28;
  undefined1 local_19;
  
  if (param_2 != 0) {
    return;
  }
  switch(param_3) {
  case 0:
    uVar1 = FUN_1006e92b0(param_1,param_4[1],param_4[2]);
    break;
  case 1:
    local_28 = (QArrayData *)PTR_shared_null_1021e1288;
    uVar1 = FUN_1006e92b0(param_1,param_4[1],&local_28);
    if (*(int *)local_28 != -1) {
      if (*(int *)local_28 != 0) {
        LOCK();
        *(int *)local_28 = *(int *)local_28 + -1;
        UNLOCK();
        if (*(int *)local_28 != 0) goto LAB_1006ea7fe;
        local_19 = 0;
      }
      QArrayData::deallocate(local_28,2,8);
    }
LAB_1006ea7fe:
    if ((undefined4 *)*param_4 == (undefined4 *)0x0) {
      return;
    }
    *(undefined4 *)*param_4 = uVar1;
    return;
  case 2:
    local_30 = (QArrayData *)PTR_shared_null_1021e1288;
    local_38 = (QArrayData *)PTR_shared_null_1021e1288;
    uVar1 = FUN_1006e92b0(param_1,&local_30,&local_38);
    if (*(int *)local_38 != -1) {
      if (*(int *)local_38 != 0) {
        LOCK();
        *(int *)local_38 = *(int *)local_38 + -1;
        local_19 = *(int *)local_38 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_1006ea861;
      }
      QArrayData::deallocate(local_38,2,8);
    }
LAB_1006ea861:
    if (*(int *)local_30 != -1) {
      if (*(int *)local_30 != 0) {
        LOCK();
        *(int *)local_30 = *(int *)local_30 + -1;
        UNLOCK();
        if (*(int *)local_30 != 0) goto LAB_1006ea891;
        local_19 = 0;
      }
      QArrayData::deallocate(local_30,2,8);
    }
LAB_1006ea891:
    if ((undefined4 *)*param_4 == (undefined4 *)0x0) {
      return;
    }
    *(undefined4 *)*param_4 = uVar1;
    return;
  case 3:
    uVar1 = FUN_1006e95d0(param_1,param_4[1]);
    break;
  case 4:
    local_48 = 0;
    local_40 = 0xffffffffffffffff;
    uVar1 = FUN_1006e95d0(param_1,&local_48);
    break;
  case 5:
    FUN_1006e9e90(param_1,param_4[1],param_4[2]);
    if ((undefined4 *)*param_4 == (undefined4 *)0x0) {
      return;
    }
    *(undefined4 *)*param_4 = 0x80000013;
    return;
  case 6:
    local_58 = 0;
    local_50 = 0xffffffffffffffff;
    FUN_1006e9e90(param_1,param_4[1],&local_58);
    if ((undefined4 *)*param_4 == (undefined4 *)0x0) {
      return;
    }
    *(undefined4 *)*param_4 = 0x80000013;
    return;
  case 7:
    local_60 = (QArrayData *)PTR_shared_null_1021e1288;
    local_70 = 0;
    local_68 = 0xffffffffffffffff;
    FUN_1006e9e90(param_1,&local_60,&local_70);
    if (*(int *)local_60 != -1) {
      if (*(int *)local_60 != 0) {
        LOCK();
        *(int *)local_60 = *(int *)local_60 + -1;
        UNLOCK();
        if (*(int *)local_60 != 0) goto LAB_1006ea996;
        local_19 = 0;
      }
      QArrayData::deallocate(local_60,2,8);
    }
LAB_1006ea996:
    if ((undefined4 *)*param_4 == (undefined4 *)0x0) {
      return;
    }
    *(undefined4 *)*param_4 = 0x80000013;
    return;
  case 8:
    uVar1 = FUN_1006e9990(param_1,*(undefined1 *)param_4[1]);
    break;
  case 9:
    uVar1 = FUN_1006e9990(param_1,0);
    break;
  case 10:
    uVar1 = FUN_1006ea160();
    break;
  case 0xb:
    FUN_1006e94d0(param_1,*(undefined4 *)param_4[1]);
    return;
  case 0xc:
    FUN_1006e97f0(param_1,*(undefined4 *)param_4[1]);
    return;
  case 0xd:
    FUN_1006e9fc0(param_1,*(undefined4 *)param_4[1]);
    return;
  default:
    goto switchD_1006ea79f_default;
  }
  if ((undefined4 *)*param_4 != (undefined4 *)0x0) {
    *(undefined4 *)*param_4 = uVar1;
  }
switchD_1006ea79f_default:
  return;
}


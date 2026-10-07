
undefined8 FUN_100524270(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 local_18;
  long *local_10;
  
  uVar3 = 0xf0000016;
  switch(*(int *)(param_2 + 8)) {
  case 0x8020:
    *(undefined1 *)(param_1 + 0x68) = 1;
    local_10 = (long *)0x100000001;
    break;
  case 0x8021:
    *(undefined1 *)(param_1 + 0x68) = 0;
    local_10 = (long *)0x200000001;
    break;
  case 0x8022:
  case 0x8027:
    uVar3 = FUN_100524430(param_1,param_2,*(int *)(param_2 + 8) == 0x8027);
    return uVar3;
  case 0x8023:
    uVar3 = FUN_100524610(param_1);
    return uVar3;
  case 0x8024:
    local_18 = 0;
    FUN_100525550(&local_10,param_1,&local_18);
    if (local_10 != (long *)0x0) {
      LOCK();
      plVar1 = local_10 + 1;
      lVar2 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar2 == 1) {
        (**(code **)(*local_10 + 0x10))();
      }
    }
    goto LAB_100524366;
  case 0x8025:
    uVar3 = FUN_1005249e0(param_1);
    return uVar3;
  case 0x8026:
    local_10 = (long *)CONCAT44(local_10._4_4_,6);
    uVar3 = 4;
    goto LAB_10052435e;
  case 0x8028:
    uVar3 = FUN_100524c30(param_1);
    return uVar3;
  case 0x8029:
    uVar3 = FUN_100524d70(param_1);
    return uVar3;
  default:
    goto switchD_1005242a0_default;
  }
  uVar3 = 8;
LAB_10052435e:
  FUN_1005253a0(param_1,&local_10,uVar3);
LAB_100524366:
  uVar3 = 0;
switchD_1005242a0_default:
  return uVar3;
}


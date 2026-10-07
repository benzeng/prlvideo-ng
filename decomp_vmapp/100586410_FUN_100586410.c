
undefined8 FUN_100586410(long param_1)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 local_50 [2];
  QArrayData *local_40;
  undefined1 local_29;
  
  local_40 = (QArrayData *)PTR_shared_null_100ba20d0;
  uVar4 = *(long *)(param_1 + 0x58) + *(long *)(param_1 + 0x60);
  lVar1 = *(long *)(param_1 + 0x40);
  uVar3 = uVar4 >> 9;
  lVar5 = 0;
  lVar6 = *(long *)(lVar1 + uVar3 * 8);
  if (*(long *)(param_1 + 0x48) != lVar1) {
    lVar5 = lVar6 + (uVar4 & 0x1ff) * 8;
  }
  if (lVar5 == lVar6) {
    lVar6 = lVar1 + -8 + uVar3 * 8;
    lVar5 = *(long *)(lVar1 + -8 + uVar3 * 8) + 0x1000;
  }
  else {
    lVar6 = lVar1 + uVar3 * 8;
  }
  plVar2 = *(long **)(lVar5 + -8);
  (**(code **)(*plVar2 + 0x38))(plVar2,local_50);
  (**(code **)(*plVar2 + 0x28))(plVar2);
  (**(code **)(*plVar2 + 0x20))(plVar2);
  FUN_100598920(param_1 + 0x38,lVar6,lVar5 + -8);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return local_50[0];
      }
      local_29 = 0;
    }
    QArrayData::deallocate(local_40,2,8);
  }
  return local_50[0];
}


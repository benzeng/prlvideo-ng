
undefined8 FUN_100693060(long param_1)

{
  void *pvVar1;
  ulong uVar2;
  undefined4 uVar3;
  long *plVar4;
  ulong uVar5;
  int iVar6;
  long lVar7;
  QArrayData *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined8 *)(param_1 + 0x18) = 0x40;
  pvVar1 = (void *)(param_1 + 0x4c);
  iVar6 = FUN_10069d720(*(undefined8 *)(param_1 + 0x38),pvVar1,0x40);
  if (iVar6 < 0) {
    FUN_1008e3970("","dimg",0,"Read metadata failed!");
    return 0x80021029;
  }
  uVar3 = *(undefined4 *)(param_1 + 0x68);
  *(undefined4 *)(param_1 + 0x10) = uVar3;
  iVar6 = _memcmp(pvVar1,"WithoutFreeSpace",0x10);
  if (iVar6 == 0) {
    *(ulong *)(param_1 + 0x70) = (ulong)*(uint *)(param_1 + 0x70);
  }
  else {
    iVar6 = _memcmp(pvVar1,"WithouFreSpacExt",0x10);
    if (iVar6 != 0) {
      plVar4 = *(long **)(param_1 + 0x38);
      (**(code **)(*(long *)((long)plVar4 + *(long *)(*plVar4 + -0x18)) + 0xd0))
                (&local_38,(long)plVar4 + *(long *)(*plVar4 + -0x18));
      QString::toUtf8();
      FUN_1008e3970("","dimg",0,"Image %s has invalid format",local_30 + *(long *)(local_30 + 0x10))
      ;
      if (*(int *)local_30 != -1) {
        if (*(int *)local_30 != 0) {
          LOCK();
          *(int *)local_30 = *(int *)local_30 + -1;
          local_21 = *(int *)local_30 != 0;
          UNLOCK();
          if ((bool)local_21) goto LAB_10069315e;
        }
        QArrayData::deallocate(local_30,1,8);
      }
LAB_10069315e:
      if (*(int *)local_38 == -1) {
        return 0x80021033;
      }
      if (*(int *)local_38 != 0) {
        LOCK();
        *(int *)local_38 = *(int *)local_38 + -1;
        UNLOCK();
        if (*(int *)local_38 != 0) {
          return 0x80021033;
        }
        local_21 = 0;
      }
      QArrayData::deallocate(local_38,2,8);
      return 0x80021033;
    }
    *(undefined4 *)(param_1 + 0xc) = uVar3;
  }
  *(ulong *)(param_1 + 0x40) = (ulong)*(uint *)(param_1 + 0x6c) * 4 + 0x40;
  uVar5 = *(ulong *)(*(long *)(**(long **)(param_1 + 0x38) + -0x18) + 0x38 +
                    (long)*(long **)(param_1 + 0x38));
  if ((ulong)*(uint *)(param_1 + 0x7c) == 0) {
    uVar2 = (ulong)*(uint *)(param_1 + 0x6c) * 4 + 0x3f + uVar5;
    lVar7 = uVar2 - uVar2 % uVar5;
  }
  else {
    lVar7 = *(uint *)(param_1 + 0x7c) * uVar5;
  }
  *(long *)(param_1 + 0x20) = lVar7;
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_1 + 0x78);
  return 0;
}


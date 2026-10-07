
undefined4 FUN_100590880(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined4 uVar2;
  long *plVar3;
  long local_58 [2];
  QArrayData *local_48;
  undefined1 local_31;
  
  local_48 = (QArrayData *)PTR_shared_null_100ba20d0;
  uVar2 = 0x80021021;
  if (((*(char *)(param_1 + 0x7c) != '\0') && (*(ulong *)(param_1 + 0x60) != 0)) &&
     (uVar2 = 0x80021035, *(ulong *)(param_1 + 0x60) < 2)) {
    plVar3 = *(long **)(*(long *)(*(long *)(param_1 + 0x40) + (*(ulong *)(param_1 + 0x58) >> 9) * 8)
                       + (*(ulong *)(param_1 + 0x58) & 0x1ff) * 8);
    if (plVar3 == (long *)0x0) {
      FUN_1008e3970("ChangeCapacity","vdisk",0,"ASSERT( %s ) occured in %s:%d [%s]","pImage",
                    "Storage.cpp",0x9a6,"DecreaseCapacity");
    }
    uVar2 = (**(code **)(*plVar3 + 0x50))(plVar3,param_2,param_3);
    (**(code **)(*plVar3 + 0x38))(plVar3,local_58);
    *(long *)(param_1 + 0x10) = local_58[0] + *(long *)(param_1 + 8);
    lVar1 = *(long *)(*(long *)(param_1 + 0x70) + 8);
    plVar3 = (long *)0x0;
    if (lVar1 != 0) {
      plVar3 = *(long **)(lVar1 + 0x10);
    }
    (**(code **)(*plVar3 + 0x158))(plVar3,param_1 + 0x68);
  }
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      UNLOCK();
      if (*(int *)local_48 != 0) {
        return uVar2;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_48,2,8);
  }
  return uVar2;
}


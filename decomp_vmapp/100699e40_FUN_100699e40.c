
undefined4 FUN_100699e40(long param_1,ulong param_2)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  char cVar4;
  undefined4 uVar5;
  
  uVar5 = 0;
  if (*(ulong *)(param_1 + 0x38) != param_2) {
    if ((*(ulong *)(param_1 + 0x38) != 0xffffffffffffffff) && (*(char *)(param_1 + 0x40) != '\0')) {
      plVar1 = *(long **)(*(long *)(**(long **)(param_1 + 0x30) + -0x18) + 8 +
                         (long)*(long **)(param_1 + 0x30));
      cVar4 = (**(code **)(*plVar1 + 0x48))(plVar1,*(undefined8 *)(param_1 + 8),0x1000,0);
      if (cVar4 == '\0') {
        uVar2 = *(undefined8 *)(param_1 + 0x38);
        uVar5 = FUN_100768f60();
        FUN_1008e3970("","dimg",0,"FlushOffsets failed. Write [Offset %llu] Error %d",uVar2,uVar5);
      }
      else {
        *(undefined1 *)(param_1 + 0x40) = 0;
      }
    }
    if ((param_2 & 0xfff) != 0) {
      FUN_1008e3970("","dimg",0,"ASSERT( %s ) occured in %s:%d [%s]","0 == (BATOffset % PAGE_SIZE)",
                    "StructuredBase.cpp",0x895,"Read");
    }
    plVar1 = *(long **)(*(long *)(**(long **)(param_1 + 0x30) + -0x18) + 8 +
                       (long)*(long **)(param_1 + 0x30));
    cVar4 = (**(code **)(*plVar1 + 0x40))(plVar1,*(undefined8 *)(param_1 + 8),0x1000,0,param_2);
    if (cVar4 == '\0') {
      uVar5 = FUN_100768f60();
      FUN_1008e3970("","dimg",0,"ReadOffsets failed. Read [Offset %llu] Error %u",param_2,uVar5);
      *(undefined8 *)(param_1 + 0x38) = 0xffffffffffffffff;
      uVar5 = 0x80021029;
    }
    else {
      *(ulong *)(param_1 + 0x38) = param_2;
      lVar3 = *(long *)(*(long *)(param_1 + 0x30) + 0x20);
      if (param_2 == 0) {
        lVar3 = *(long *)(lVar3 + 0x18);
        *(int *)(param_1 + 0x20) = (int)lVar3;
        *(undefined4 *)(param_1 + 0x1c) = 0;
        uVar5 = 0;
        *(int *)(param_1 + 0x18) =
             (int)(((ulong)*(uint *)(param_1 + 0x10) - lVar3) / (ulong)*(uint *)(param_1 + 0x14));
      }
      else {
        *(undefined4 *)(param_1 + 0x20) = 0;
        uVar5 = 0;
        *(uint *)(param_1 + 0x1c) =
             (uint)((int)param_2 - *(int *)(lVar3 + 0x18)) / *(uint *)(lVar3 + 8);
        *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x10) / *(uint *)(param_1 + 0x14);
      }
    }
  }
  return uVar5;
}


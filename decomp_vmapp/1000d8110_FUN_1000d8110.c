
undefined8 FUN_1000d8110(long param_1)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  uint local_20;
  undefined1 local_19;
  
  local_19 = 1;
  uVar3 = 6;
  if (*(char *)(param_1 + 0x20) != '\0') {
    uVar3 = 0xd;
  }
  iVar2 = FUN_1000ed430(uVar3);
  if (((iVar2 != 0) && (iVar2 = FUN_1000ed5c0(param_1 + 0x38,1), iVar2 != 0)) &&
     (iVar2 = FUN_1000ed5c0(&local_19,1), iVar2 != 0)) {
    iVar2 = FUN_1000ed5c0((char *)(param_1 + 0x20),1);
    if (iVar2 != 0) {
      if (*(char *)(param_1 + 0x20) != '\0') {
        iVar2 = FUN_1000ed5c0(*(undefined8 *)(param_1 + 0x28),4);
        if ((((iVar2 == 0) || (iVar2 = FUN_1000ed5c0(*(long *)(param_1 + 0x28) + 4,4), iVar2 == 0))
            || ((iVar2 = FUN_1000ed5c0(*(long *)(param_1 + 0x28) + 8,4), iVar2 == 0 ||
                ((iVar2 = FUN_1000ed5c0(*(long *)(param_1 + 0x28) + 0xc,4), iVar2 == 0 ||
                 (iVar2 = FUN_1000ed5c0(*(long *)(param_1 + 0x28) + 0x10,4), iVar2 == 0)))))) ||
           (iVar2 = FUN_1000ed5c0(*(long *)(param_1 + 0x28) + 0x14,4), iVar2 == 0))
        goto LAB_1000d828e;
        lVar1 = *(long *)(param_1 + 0x28);
        iVar2 = FUN_1000ed5c0(lVar1 + 0x18,*(int *)(lVar1 + 0x10) * *(int *)(lVar1 + 0x14) * 4);
        if (iVar2 == 0) goto LAB_1000d828e;
      }
      local_20 = (uint)*(byte *)(param_1 + 0x40);
      iVar2 = FUN_1000ed5c0(&local_20,4);
      if ((((iVar2 != 0) && (iVar2 = FUN_1000ed5c0(&DAT_1011c374c,4), iVar2 != 0)) &&
          (iVar2 = FUN_1000ed5c0(param_1 + 0x10,8), iVar2 != 0)) &&
         (iVar2 = FUN_1000ed7d0(), iVar2 != 0)) {
        return 0;
      }
    }
  }
LAB_1000d828e:
  FUN_1008e3970("","vm",0,"  Suspending Sliding Mouse: Error.\n");
  return 1;
}


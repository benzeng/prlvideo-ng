
undefined8 FUN_1000d82e0(long param_1)

{
  long lVar1;
  int iVar2;
  int local_24;
  undefined1 local_1d;
  undefined4 local_1c;
  
  local_1c = 0;
  iVar2 = FUN_1000ec2a0();
  if (((iVar2 != 0) && (iVar2 = FUN_1000ec3b0(param_1 + 0x38,1,&local_1c,0), iVar2 != 0)) &&
     (iVar2 = FUN_1000ec3b0(&local_1d,1,&local_1c,0), iVar2 != 0)) {
    iVar2 = FUN_1000ec3b0((char *)(param_1 + 0x20),1,&local_1c,0);
    if (iVar2 != 0) {
      if (*(char *)(param_1 + 0x20) != '\0') {
        iVar2 = FUN_1000ec3b0(*(undefined8 *)(param_1 + 0x28),4,&local_1c,0);
        if ((((iVar2 == 0) ||
             (iVar2 = FUN_1000ec3b0(*(long *)(param_1 + 0x28) + 4,4,&local_1c,0), iVar2 == 0)) ||
            ((iVar2 = FUN_1000ec3b0(*(long *)(param_1 + 0x28) + 8,4,&local_1c,0), iVar2 == 0 ||
             ((iVar2 = FUN_1000ec3b0(*(long *)(param_1 + 0x28) + 0xc,4,&local_1c,0), iVar2 == 0 ||
              (iVar2 = FUN_1000ec3b0(*(long *)(param_1 + 0x28) + 0x10,4,&local_1c,0), iVar2 == 0))))
            )) || (iVar2 = FUN_1000ec3b0(*(long *)(param_1 + 0x28) + 0x14,4,&local_1c,0), iVar2 == 0
                  )) goto LAB_1000d84e2;
        lVar1 = *(long *)(param_1 + 0x28);
        if (((0x80 < *(uint *)(lVar1 + 0x10)) || (0x80 < *(uint *)(lVar1 + 0x14))) ||
           (iVar2 = FUN_1000ec3b0(lVar1 + 0x18,*(uint *)(lVar1 + 0x10) * *(uint *)(lVar1 + 0x14) * 4
                                  ,&local_1c,0), iVar2 == 0)) goto LAB_1000d84e2;
      }
      local_24 = 0;
      iVar2 = FUN_1000ec3b0(&local_24,4,&local_1c,0);
      if (iVar2 != 0) {
        *(bool *)(param_1 + 0x40) = local_24 != 0;
        iVar2 = FUN_1000ec3b0(&DAT_1011c374c,4,&local_1c,0);
        if (iVar2 == 0) {
          DAT_1011c374c = 0;
        }
        else {
          iVar2 = FUN_1000ec3b0((undefined8 *)(param_1 + 0x10),8,&local_1c,0);
          if (iVar2 == 0) {
            *(undefined8 *)(param_1 + 0x10) = 0xffffffffffffffff;
          }
        }
        iVar2 = FUN_1000ec640();
        if (iVar2 != 0) {
          *(undefined4 *)(param_1 + 0x3c) = 1;
          return 0;
        }
      }
    }
  }
LAB_1000d84e2:
  FUN_1008e3970("","vm",0,"  Resuming Sliding Mouse: Error.\n");
  return 1;
}


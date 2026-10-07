
void FUN_100290e70(long *param_1)

{
  long lVar1;
  undefined8 in_stack_ffffffffffffffc8;
  undefined4 uVar2;
  
  uVar2 = (undefined4)((ulong)in_stack_ffffffffffffffc8 >> 0x20);
  if (*(char *)((long)param_1 + 0xfed) == '\x01') {
    *(long *)(param_1[500] + 0xf0) = *(long *)(param_1[500] + 0xf0) + 1;
    (**(code **)(*param_1 + 0xa0))(param_1);
    (**(code **)(*param_1 + 0xd8))(param_1);
    if (*(int *)((ulong)*(ushort *)((long)param_1 + 0xfee) * 0x80 + param_1[0x200] + 0x4310 +
                (ulong)*(ushort *)(param_1 + 0x1fe) * 4) == 0) {
      if (*(int *)((long)param_1 + 0x1014) != 0) {
        FUN_1008e3970("","LocalDevices",0,"ASSERT( %s ) occured in %s:%d [%s]","m_active == 0",
                      "../Ahci/sata_dev.cpp",CONCAT44(uVar2,0x2a7),"process_activate");
      }
    }
    else {
      lVar1 = *(long *)param_1[0x1ff];
      if (lVar1 == 0) {
        FUN_1008e3970("","LocalDevices",0,"[AHCI][%d] base == 0");
        return;
      }
      if (param_1[0x204] != lVar1) {
        FUN_10008d2d0(param_1 + 0x203,lVar1,0x400);
      }
      if (param_1[0x203] != 0) {
        FUN_1002912a0(param_1);
        return;
      }
      FUN_1008e3970("","LocalDevices",0,"[AHCI][%d] mem read failed (0x%0llX, %lu)",
                    (short)param_1[0x1fe],lVar1,0x400);
    }
  }
  else if ((*(int *)((ulong)*(ushort *)((long)param_1 + 0xfee) * 0x80 + param_1[0x200] + 0x4310 +
                    (ulong)*(ushort *)(param_1 + 0x1fe) * 4) != 0 ||
            *(int *)((long)param_1 + 0x1014) != 0) && ((int)param_1[0x202] == 0)) {
    FUN_1008e3970("","LocalDevices",0,"[AHCI] Dropping activity for %u:%u");
    return;
  }
  return;
}


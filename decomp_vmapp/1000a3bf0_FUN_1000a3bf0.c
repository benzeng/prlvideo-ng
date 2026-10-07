
undefined8 FUN_1000a3bf0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  uint uVar3;
  long *plVar4;
  uint uVar5;
  undefined4 uVar6;
  long *local_60;
  void *local_58;
  void *pvStack_50;
  undefined8 local_48;
  char local_39;
  undefined8 local_38;
  undefined8 local_30;
  
  (**(code **)(**(long **)(param_1 + 0x1950) + 0x130))
            (*(long **)(param_1 + 0x1950),&local_30,&local_38);
  FUN_100087300(param_1 + 0x140,param_1 + 0x110,local_30,local_38);
  local_39 = '\0';
  FUN_100094840(param_1 + 0x110,&local_39);
  if (*(char *)(param_1 + 0x10a0) != '\0') {
    FUN_1008e3970("","vm",0,"VM runs BootCamp partition.");
  }
  FUN_1008e3970("","vm",0,"IsBootable=%u",local_39);
  uVar3 = *(uint *)(param_1 + 0x5c0);
  if (((uVar3 != 0x8ff) && (0x805 < uVar3)) && ((uVar3 & 0xffffff00) == 0x800)) {
    uVar3 = *(uint *)(param_1 + 0xaf0);
    if (((ulong)(long)(int)uVar3 < 5) && ((0x1bU >> (uVar3 & 0x1f) & 1) != 0)) {
      uVar6 = *(undefined4 *)(&DAT_100b2dcd0 + (long)(int)uVar3 * 4);
    }
    else {
      local_39 = '\0';
      uVar6 = 100000;
    }
    FUN_1008e3970("","vm",0,"SendUpgradeEvnt=%u",local_39);
    uVar2 = DAT_1011c3650;
    if (local_39 != '\0') {
      local_58 = (void *)0x0;
      pvStack_50 = (void *)0x0;
      local_48 = 0;
      plVar4 = operator_new(0x18,(nothrow_t *)PTR_nothrow_100ba21c8);
      local_60 = (long *)0x0;
      if (plVar4 != (long *)0x0) {
        *(undefined4 *)(plVar4 + 1) = 1;
        plVar4[2] = 0;
        *plVar4 = (long)&PTR_FUN_100bef0d0;
        local_60 = plVar4;
      }
      FUN_100063770(uVar2,uVar6,0,&local_58,0xbbb,&local_60);
      if (local_60 != (long *)0x0) {
        LOCK();
        plVar4 = local_60 + 1;
        lVar1 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar1 == 1) {
          (**(code **)(*local_60 + 0x10))();
        }
      }
      if (local_58 != (void *)0x0) {
        if (pvStack_50 != local_58) {
          pvStack_50 = (void *)((~((long)pvStack_50 + (-8 - (long)local_58)) & 0xfffffffffffffff8U)
                               + (long)pvStack_50);
        }
        operator_delete(local_58);
      }
    }
  }
  FUN_1008e3970("","vm",0,"VM Compatibility Level is 0x%x",*(undefined4 *)(param_1 + 0xaf0));
  uVar3 = *(uint *)(*(long *)(param_1 + 0x109c8) + 0x1f0);
  uVar5 = 1;
  if ((uVar3 & 0x8000000) == 0) {
    uVar5 = (uint)(((byte)(uVar3 >> 0x18) & 2) >> 1);
  }
  *(uint *)(param_1 + 0xaec) = uVar5;
  *(undefined4 *)(param_1 + 0x10968) = 0;
  *(undefined1 *)(param_1 + 0x10970) = 1;
  *(undefined1 *)(param_1 + 0x10971) = 1;
  *(undefined4 *)(param_1 + 0x1096c) = 0xf;
  *(undefined1 *)(param_1 + 0x10972) = 0;
  uVar3 = FUN_1007da300("kernel.generate_mem_dump",3);
  *(uint *)(param_1 + 0x117c) = *(uint *)(param_1 + 0x117c) & 0xfffffffc | uVar3 & 3;
  uVar3 = FUN_1007da300("kernel.mem_dump_format_windbg",0);
  uVar3 = *(uint *)(param_1 + 0x117c) & 0xfffffff3 | (uVar3 & 3) << 2;
  *(uint *)(param_1 + 0x117c) = uVar3;
  *(uint *)(param_1 + 0x1178) = uVar3;
  *(undefined4 *)(param_1 + 0xb88) = 0x30a4;
  return 1;
}


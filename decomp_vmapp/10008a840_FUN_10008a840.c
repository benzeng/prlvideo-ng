
void FUN_10008a840(undefined8 *param_1,long param_2)

{
  long lVar1;
  void *pvVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  QArrayData *local_58;
  undefined1 local_49;
  undefined8 local_48;
  undefined8 local_40;
  long local_38;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  *(undefined4 *)((long)param_1 + 0x24) = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  *(undefined1 *)((long)param_1 + 0x34) = 0;
  *(undefined8 *)((long)param_1 + 0x2c) = 0;
  *(undefined1 *)((long)param_1 + 0x22) = 0;
  *(undefined2 *)(param_1 + 4) = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  local_38 = lVar1;
  FUN_1007d6870((long)param_1 + 0x39);
  auVar8._8_4_ = (int)PTR_shared_null_100ba20d0;
  auVar8._0_8_ = PTR_shared_null_100ba20d0;
  auVar8._12_4_ = (int)((ulong)PTR_shared_null_100ba20d0 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 10) = auVar8;
  param_1[0xc] = 0;
  param_1[0xd] = &PTR_FUN_100ba8730;
  param_1[0xe] = param_2;
  *(undefined4 *)(param_1 + 0xf) = 0;
  *(undefined1 *)(param_1 + 0x15) = 0;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  param_1[0x1a] = 0;
  param_1[0x19] = 0;
  *(undefined1 *)(param_1 + 0x1b) = 1;
  param_1[0x1e] = 0;
  param_1[0x1d] = 0;
  param_1[0x1c] = 0;
  iVar6 = *(int *)(param_2 + 0x109e0);
  if ((DAT_1011c3688 != (void *)0x0) &&
     (FUN_1008e3970("","vm",0,"[GuestMem::GuestMem()] previous instance is not deleted"),
     pvVar2 = DAT_1011c3688, DAT_1011c3688 != (void *)0x0)) {
    FUN_10008ad60(DAT_1011c3688);
    operator_delete(pvVar2);
  }
  DAT_1011c3688 = param_1;
  uVar7 = FUN_1007da520("vm.mem_map_limit",0x2000000000);
  param_1[3] = uVar7;
  uVar4 = FUN_1007da300("vm.mem_use_madvise",(iVar6 == 1) * '\x02');
  *(undefined4 *)((long)param_1 + 0x24) = uVar4;
  iVar5 = FUN_1007da300("vm.mem_skip_zero_pages",1);
  *(bool *)(param_1 + 6) = iVar5 != 0;
  cVar3 = FUN_1000b2290(param_2);
  if (cVar3 == '\0') goto LAB_10008aa60;
  *(undefined1 *)(param_1 + 7) = 1;
  FUN_1000b2920(&local_48,param_2);
  *(undefined8 *)((long)param_1 + 0x41) = local_40;
  *(undefined8 *)((long)param_1 + 0x39) = local_48;
  FUN_1000b26c0(&local_58,param_2);
  QByteArray::operator=((QByteArray *)(param_1 + 10),(QByteArray *)&local_58);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_49 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_49) goto LAB_10008aa50;
    }
    QArrayData::deallocate(local_58,1,8);
  }
LAB_10008aa50:
  QByteArray::operator=((QByteArray *)(param_1 + 0xb),"1jwwh1kjxhqw4yr83cwjehc8q4f");
LAB_10008aa60:
  iVar5 = FUN_1007da300("vm.snapshot.compressed",1);
  *(bool *)(param_1 + 0x1f) = iVar5 != 0;
  iVar6 = FUN_1007da300("vm.snapshot.async_copy",iVar6 == 1 && iVar5 != 0);
  *(bool *)((long)param_1 + 0xd9) = iVar6 != 0;
  if (lVar1 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}


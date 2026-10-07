
undefined8 FUN_100405950(undefined8 *param_1)

{
  uint uVar1;
  long lVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  void *pvVar6;
  void *pvVar7;
  undefined8 uVar8;
  undefined1 local_b0 [16];
  long local_a0;
  undefined1 local_88 [48];
  QArrayData *local_58;
  QArrayData *local_40;
  long local_38;
  
  lVar2 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_38 = lVar2;
  FUN_100098d30(local_b0);
  uVar3 = FUN_1007da300("devices.hdd.pcache.prefetch",1);
  *(undefined4 *)((long)param_1 + 0x44) = uVar3;
  iVar4 = FUN_1007da300("devices.hdd.pcache.readahead",0x100);
  *(int *)(param_1 + 9) = iVar4 << 10;
  uVar3 = FUN_1007da300("devices.hdd.pcache.align4k",1);
  *(undefined4 *)((long)param_1 + 0x4c) = uVar3;
  iVar4 = FUN_1007da300("devices.hdd.pcache.size",0x2000);
  *(int *)(param_1 + 10) = iVar4 << 10;
  iVar4 = (**(code **)(*(long *)*param_1 + 0x90))((long *)*param_1,local_b0);
  if (iVar4 < 0) {
    uVar8 = 0xffffffff;
    FUN_1008e3970("","PCache",0,"PCACHE: failed to get disk parameters");
  }
  else {
    lVar5 = (**(code **)(*(long *)*param_1 + 0x2e0))();
    param_1[0xf] = lVar5 * local_a0;
    iVar4 = FUN_1007dabd0(*(undefined4 *)(param_1 + 10),0x1000);
    pvVar6 = _malloc((long)iVar4);
    param_1[0xd] = pvVar6;
    uVar8 = 0xffffffff;
    if (pvVar6 != (void *)0x0) {
      uVar1 = *(uint *)(param_1 + 10);
      pvVar7 = _valloc((ulong)uVar1);
      param_1[0xe] = pvVar7;
      if (pvVar7 == (void *)0x0) {
        _free(pvVar6);
      }
      else {
        uVar8 = 0;
        FUN_1007dac00(pvVar6,pvVar7,(ulong)uVar1,0x1000);
      }
    }
  }
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) goto LAB_100405b5a;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100405b5a:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      UNLOCK();
      if (*(int *)local_58 != 0) goto LAB_100405b90;
    }
    QArrayData::deallocate(local_58,1,8);
  }
LAB_100405b90:
  FUN_100098f20(local_88);
  if (lVar2 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar8;
}


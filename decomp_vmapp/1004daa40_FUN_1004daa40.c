
undefined8
FUN_1004daa40(long param_1,undefined8 param_2,uint param_3,undefined4 param_4,undefined1 param_5)

{
  long *plVar1;
  long *plVar2;
  undefined4 uVar3;
  long *plVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 *local_60;
  uint local_58 [2];
  undefined8 *local_50;
  undefined8 *local_48;
  undefined1 local_40 [16];
  
  FUN_1004ef740(local_40,*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x50),param_2);
  QMutex::lock();
  if (*(long **)(param_1 + 0x50) != (long *)0x0) {
    plVar2 = *(long **)(param_1 + 0x50);
    plVar4 = (long *)(param_1 + 0x50);
    do {
      while (plVar5 = plVar2, param_3 <= *(uint *)(plVar5 + 4)) {
        plVar2 = (long *)*plVar5;
        plVar4 = plVar5;
        if ((long *)*plVar5 == (long *)0x0) goto LAB_1004daac0;
      }
      plVar1 = plVar5 + 1;
      plVar2 = (long *)*plVar1;
      plVar5 = plVar4;
    } while ((long *)*plVar1 != (long *)0x0);
LAB_1004daac0:
    if ((plVar5 != (long *)(param_1 + 0x50)) && (*(uint *)(plVar5 + 4) <= param_3)) {
      puVar6 = (undefined8 *)plVar5[5];
      local_60 = (undefined8 *)plVar5[6];
      if (local_60 != (undefined8 *)0x0) {
        std::__shared_weak_count::__add_shared();
      }
      QMutex::unlock();
      goto LAB_1004dabc4;
    }
  }
  uVar3 = FUN_1004ef6c0(local_40);
  local_60 = operator_new(0x88);
  local_60[2] = 0;
  local_60[1] = 0;
  *local_60 = &PTR_FUN_10111cd78;
  puVar6 = local_60 + 3;
  FUN_1004ee480(puVar6,uVar3,param_4,param_5);
  local_58[0] = param_3;
  local_50 = puVar6;
  local_48 = local_60;
  std::__shared_weak_count::__add_shared();
  FUN_1004dc320(param_1 + 0x48,local_58);
  if (local_48 != (undefined8 *)0x0) {
    std::__shared_weak_count::__release_shared();
  }
  QMutex::unlock();
  FUN_1004edcb0(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x10) + 0x50) + 0x30),param_1 + 0x18,
                puVar6);
LAB_1004dabc4:
  FUN_1004ee550(puVar6,local_40);
  if (local_60 != (undefined8 *)0x0) {
    std::__shared_weak_count::__release_shared();
  }
  FUN_1004ef6b0(local_40);
  return 0xffffffff;
}


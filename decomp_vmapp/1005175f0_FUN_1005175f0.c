
undefined8 FUN_1005175f0(undefined8 param_1,long param_2)

{
  ulong uVar1;
  long *plVar2;
  uint uVar3;
  undefined4 *puVar4;
  long lVar5;
  void *pvVar6;
  undefined8 uVar7;
  long *local_38;
  
  uVar7 = 0xf0000003;
  if (*(short *)(param_2 + 0x16) != 0) {
    lVar5 = FUN_1002a6120(param_2,0,0);
    uVar3 = *(uint *)(lVar5 + 8);
    uVar1 = (ulong)uVar3 + 8;
    pvVar6 = operator_new__(uVar1,(nothrow_t *)PTR_nothrow_100ba21c8);
    local_38 = operator_new(0x18);
    *(undefined4 *)(local_38 + 1) = 1;
    local_38[2] = (long)pvVar6;
    *local_38 = (long)&PTR_FUN_100bef320;
    if (pvVar6 == (void *)0x0) {
      uVar7 = 0xf0000004;
    }
    else {
      puVar4 = (undefined4 *)local_38[2];
      *puVar4 = 1;
      puVar4[1] = (int)uVar1;
      FUN_1002a5990(lVar5,0,puVar4 + 2,(ulong)uVar3);
      FUN_100517280(param_1,&local_38,uVar1);
      uVar7 = 0;
    }
    if (local_38 != (long *)0x0) {
      LOCK();
      plVar2 = local_38 + 1;
      lVar5 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)(*local_38 + 0x10))(local_38);
      }
    }
  }
  return uVar7;
}



void FUN_10009fe80(undefined8 *param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  undefined4 *puVar3;
  long lVar4;
  char cVar5;
  void *pvVar6;
  undefined8 uVar7;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined2 local_88;
  long *local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined2 local_44;
  long local_38;
  
  lVar2 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_70 = 0x58;
  local_38 = lVar2;
  pvVar6 = operator_new__(0x58,(nothrow_t *)PTR_nothrow_1021e1620);
  local_78 = operator_new(0x18);
  *(undefined4 *)(local_78 + 1) = 1;
  local_78[2] = (long)pvVar6;
  *local_78 = (long)&PTR_FUN_102282990;
  if (pvVar6 != (void *)0x0) {
    puVar3 = (undefined4 *)local_78[2];
    *puVar3 = 1;
    puVar3[1] = 3;
    puVar3[2] = 3;
    puVar3[3] = 0;
    *(undefined8 *)(puVar3 + 4) = 0;
    uVar7 = FUN_100319cd0(*param_1);
    FUN_100347150(&local_98,uVar7);
    local_58 = 0;
    uStack_50 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_44 = 0;
    local_48 = 0;
    *(undefined8 *)(puVar3 + 6) = 0;
    puVar3[8] = local_98;
    puVar3[9] = uStack_94;
    puVar3[10] = uStack_90;
    puVar3[0xb] = uStack_8c;
    *(char *)(puVar3 + 0xc) = (char)local_88;
    *(char *)((long)puVar3 + 0x31) = (char)((ushort)local_88 >> 8);
    *(undefined2 *)((long)puVar3 + 0x56) = 0;
    *(undefined4 *)((long)puVar3 + 0x52) = 0;
    *(undefined8 *)((long)puVar3 + 0x4a) = 0;
    *(undefined8 *)((long)puVar3 + 0x42) = 0;
    *(undefined8 *)((long)puVar3 + 0x3a) = 0;
    *(undefined8 *)((long)puVar3 + 0x32) = 0;
    puVar3[6] = *(undefined4 *)(param_3 + 4);
    puVar3[7] = *(undefined4 *)(param_3 + 8);
    cVar5 = FUN_10009fca0(param_1,&local_78,&local_70);
    if (cVar5 != '\0') {
      (**(code **)(*(long *)(param_1[2] + 0x28) + 0x10))
                (param_1[2] + 0x28,param_2,&local_78,local_70);
    }
  }
  if (local_78 != (long *)0x0) {
    LOCK();
    plVar1 = local_78 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)(*local_78 + 0x10))(local_78);
    }
  }
  if (lVar2 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}


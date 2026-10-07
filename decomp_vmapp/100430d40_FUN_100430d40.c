
void FUN_100430d40(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  void *param_5,uint param_6)

{
  long *plVar1;
  long lVar2;
  undefined4 *puVar3;
  long *local_38;
  
  puVar3 = operator_new__((ulong)(param_6 + 0xc));
  local_38 = operator_new(0x18);
  *(undefined4 *)(local_38 + 1) = 1;
  local_38[2] = (long)puVar3;
  *local_38 = (long)&PTR_FUN_100bef320;
  *puVar3 = param_3;
  puVar3[1] = param_4;
  puVar3[2] = param_6;
  if (param_6 != 0) {
    _memcpy(puVar3 + 3,param_5,(ulong)param_6);
  }
  FUN_100434a40(param_1,param_2,0x18969,&local_38,param_6 + 0xc,&DAT_1011ccb98,0);
  if (local_38 != (long *)0x0) {
    LOCK();
    plVar1 = local_38 + 1;
    lVar2 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)(*local_38 + 0x10))();
    }
  }
  return;
}


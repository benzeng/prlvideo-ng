
void FUN_1000f9f60(undefined8 param_1,ulong param_2,undefined4 param_3)

{
  long lVar1;
  long *plVar2;
  char *pcVar3;
  long *local_20;
  
  FUN_100259060(&local_20);
  if (*(long *)(local_20[2] + 8) != 0) {
    plVar2 = (long *)___dynamic_cast(*(long *)(local_20[2] + 8),&PTR_vtable_100baea70,
                                     &PTR_vtable_100bef130,0xfffffffffffffffe);
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x18))(plVar2,0,0);
      if ((uint)(param_2 & 0xff) < 3) {
        pcVar3 = (&PTR_s_ide_100ba9140)[param_2 & 0xff];
      }
      else {
        pcVar3 = "unknown";
      }
      FUN_1008e3970("","vm",0,"hdd: SF: disconnected [%s%u]",pcVar3,param_3);
      goto LAB_1000fa03b;
    }
  }
  if ((uint)(param_2 & 0xff) < 3) {
    pcVar3 = (&PTR_s_ide_100ba9140)[param_2 & 0xff];
  }
  else {
    pcVar3 = "unknown";
  }
  FUN_1008e3970("","vm",0,"hdd: SF ERROR: device [%s%u] not found",pcVar3,param_3);
LAB_1000fa03b:
  if (local_20 != (long *)0x0) {
    LOCK();
    plVar2 = local_20 + 1;
    lVar1 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar1 == 1) {
      (**(code **)(*local_20 + 0x10))();
    }
  }
  return;
}


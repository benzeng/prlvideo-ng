
undefined8 FUN_1004ceea0(long *param_1,long param_2,uint param_3)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long *local_38;
  
  uVar4 = 0;
  if (param_3 != 0) {
    uVar6 = 0;
    uVar5 = 0;
    do {
      FUN_1004cf050(&local_38,*param_1 + 0x48,*(undefined4 *)(param_2 + uVar6 * 4));
      plVar3 = local_38;
      uVar4 = 0xf0000012;
      if (local_38 != (long *)0x0) {
        (**(code **)(*local_38 + 0x50))(local_38);
        local_38 = (long *)0x0;
        LOCK();
        plVar1 = plVar3 + 1;
        lVar2 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        uVar4 = uVar5;
        if ((int)lVar2 == 1) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
      uVar6 = uVar6 + 1;
      uVar5 = uVar4;
    } while (uVar6 < param_3);
  }
  return uVar4;
}


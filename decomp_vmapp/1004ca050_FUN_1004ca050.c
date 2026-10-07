
undefined4 FUN_1004ca050(long *param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  undefined4 uVar4;
  long *in_RAX;
  undefined4 *puVar5;
  long *local_28;
  
  uVar4 = 0xf0000003;
  if ((0xb < *(ushort *)(param_2 + 0x14)) && (*(short *)(param_2 + 0x16) == 0)) {
    local_28 = in_RAX;
    puVar5 = (undefined4 *)FUN_1002a6010(param_2);
    FUN_1004cf180(&local_28,*param_1 + 0x48,*puVar5);
    uVar4 = 0xf0000012;
    if (local_28 != (long *)0x0) {
      iVar3 = (**(code **)(*local_28 + 0x18))(local_28);
      uVar4 = 0xf0000010;
      if ((iVar3 != 2) && (uVar4 = 0xf000000f, *(char *)((long)local_28 + 0x29) == '\0')) {
        uVar4 = (**(code **)(*local_28 + 0x30))(local_28,puVar5 + 1);
      }
      LOCK();
      plVar1 = local_28 + 1;
      lVar2 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar2 == 1) {
        (**(code **)(*local_28 + 0x10))(local_28);
      }
    }
  }
  return uVar4;
}


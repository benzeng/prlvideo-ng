
undefined4 FUN_1004c9ea0(long *param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  undefined4 uVar3;
  long *in_RAX;
  undefined4 *puVar4;
  undefined8 extraout_RDX;
  long *local_28;
  
  uVar3 = 0xf0000003;
  if ((*(short *)(param_2 + 0x16) == 0) && (7 < *(ushort *)(param_2 + 0x14))) {
    local_28 = in_RAX;
    puVar4 = (undefined4 *)FUN_1002a6010(param_2);
    FUN_1004cf180(&local_28,*param_1 + 0x48,*puVar4);
    uVar3 = 0xf0000012;
    if (local_28 != (long *)0x0) {
      uVar3 = (**(code **)(*local_28 + 0x20))(local_28,puVar4[1] != 0,extraout_RDX,puVar4[1] != 0);
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
  return uVar3;
}


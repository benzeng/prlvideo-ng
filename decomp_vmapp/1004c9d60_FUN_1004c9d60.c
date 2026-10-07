
undefined4 FUN_1004c9d60(long *param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  long *local_38;
  long *local_30;
  
  uVar5 = 0xf0000003;
  if ((3 < *(ushort *)(param_2 + 0x14)) && (*(short *)(param_2 + 0x16) == 0)) {
    piVar4 = (int *)FUN_1002a6010(param_2);
    uVar5 = 0;
    if (*piVar4 != 0) {
      FUN_1004cf360(&local_30,*param_1 + 0x48);
      uVar5 = 0xf0000012;
      if (local_30 != (long *)0x0) {
        uVar5 = 0;
        LOCK();
        plVar1 = local_30 + 1;
        lVar2 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar2 == 1) {
          (**(code **)(*local_30 + 0x10))();
        }
      }
    }
    if ((((0xb < *(ushort *)(param_2 + 0x14)) && (piVar4[1] != 0)) && (piVar4[2] != 0)) &&
       (FUN_1004cf180(&local_38,*param_1 + 0x48), local_38 != (long *)0x0)) {
      iVar3 = (**(code **)(*local_38 + 0x18))(local_38);
      if (iVar3 == 2) {
        FUN_1004dac70(local_38,piVar4[2]);
      }
      LOCK();
      plVar1 = local_38 + 1;
      lVar2 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar2 == 1) {
        (**(code **)(*local_38 + 0x10))(local_38);
      }
    }
  }
  return uVar5;
}



undefined4 FUN_1004ca8b0(long *param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  long *local_30;
  
  uVar4 = 0xf0000003;
  if (((0x17 < *(ushort *)(param_2 + 0x14)) && (*(short *)(param_2 + 0x16) != 0)) &&
     (DAT_10111cc70 != 0)) {
    puVar5 = (undefined4 *)FUN_1002a6010(param_2);
    FUN_1004cf180(&local_30,*param_1 + 0x48,*puVar5);
    uVar4 = 0xf0000012;
    if (local_30 != (long *)0x0) {
      iVar3 = (**(code **)(*local_30 + 0x18))(local_30);
      uVar4 = 0xf0000015;
      if ((iVar3 == 2) && (uVar4 = 0xf000000f, *(char *)((long)local_30 + 0x29) == '\0')) {
        uVar4 = 0;
        if ((puVar5[2] & 2) != 0) {
          uVar4 = puVar5[3];
        }
        uVar4 = FUN_1004daa40(local_30,param_2,uVar4,puVar5[1],puVar5[2] & 1);
      }
      LOCK();
      plVar1 = local_30 + 1;
      lVar2 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar2 == 1) {
        (**(code **)(*local_30 + 0x10))(local_30);
      }
    }
  }
  return uVar4;
}


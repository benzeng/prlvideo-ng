
undefined4 FUN_1004ca9d0(long *param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  long *local_20;
  
  if (*(ushort *)(param_2 + 0x14) < 4) {
    return 0xf0000003;
  }
  puVar5 = (undefined4 *)FUN_1002a6010(param_2);
  FUN_1004cf180(&local_20,*param_1 + 0x48,*puVar5);
  if (local_20 == (long *)0x0) {
    return 0xf0000012;
  }
  iVar3 = (**(code **)(*local_20 + 0x18))(local_20);
  if (iVar3 != 0) {
    iVar3 = (**(code **)(*local_20 + 0x18))(local_20);
    uVar4 = 0xf0000010;
    if (iVar3 != 1) goto LAB_1004caa58;
  }
  uVar4 = 0xf000000f;
  if (*(char *)((long)local_20 + 0x29) == '\0') {
    uVar4 = (**(code **)(*local_20 + 0x78))(local_20);
  }
LAB_1004caa58:
  LOCK();
  plVar1 = local_20 + 1;
  lVar2 = *plVar1;
  *(int *)plVar1 = (int)*plVar1 + -1;
  UNLOCK();
  if ((int)lVar2 == 1) {
    (**(code **)(*local_20 + 0x10))(local_20);
  }
  return uVar4;
}



undefined4 FUN_1004ca6a0(long *param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  undefined8 local_40;
  long *local_38;
  
  if (*(ushort *)(param_2 + 0x14) < 0xc) {
    return 0xf0000003;
  }
  if (*(short *)(param_2 + 0x16) != 0) {
    return 0xf0000003;
  }
  puVar5 = (undefined4 *)FUN_1002a6010(param_2);
  FUN_1004cf180(&local_38,*param_1 + 0x48,*puVar5);
  if (local_38 == (long *)0x0) {
    return 0xf0000012;
  }
  iVar3 = (**(code **)(*local_38 + 0x18))(local_38);
  if (iVar3 != 0) {
    iVar3 = (**(code **)(*local_38 + 0x18))(local_38);
    uVar4 = 0xf0000010;
    if (iVar3 != 1) goto LAB_1004ca763;
  }
  uVar4 = 0xf000000f;
  if (*(char *)((long)local_38 + 0x29) == '\0') {
    uVar4 = (**(code **)(*local_38 + 0x80))(local_38,*(undefined8 *)(puVar5 + 1),&local_40);
    puVar6 = (undefined8 *)FUN_1002a6010(param_2);
    *puVar6 = local_40;
  }
LAB_1004ca763:
  LOCK();
  plVar1 = local_38 + 1;
  lVar2 = *plVar1;
  *(int *)plVar1 = (int)*plVar1 + -1;
  UNLOCK();
  if ((int)lVar2 == 1) {
    (**(code **)(*local_38 + 0x10))(local_38);
  }
  return uVar4;
}


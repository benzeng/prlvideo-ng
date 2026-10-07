
void FUN_1007150d0(long param_1,void *param_2)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  
  _memcpy(param_2,(void *)(param_1 + 0x184),0x50);
  iVar2 = 6;
  if (*(int *)(param_1 + 0x1d8) != 5) {
    iVar2 = *(int *)(param_1 + 0x1d8);
  }
  *(int *)((long)param_2 + 0x54) = iVar2;
  *(undefined8 *)((long)param_2 + 0xd8) = 0;
  *(undefined4 *)((long)param_2 + 0xec) = *(undefined4 *)(param_1 + 0x1d4);
  *(long *)((long)param_2 + 0xe0) = (long)*(int *)(param_1 + 0x180);
  if (iVar2 == 7) {
    uVar1 = FUN_100719100();
    *(ulong *)((long)param_2 + 0xd8) = uVar1;
    lVar3 = *(ulong *)(param_1 + 0xf8) - uVar1;
    if (*(ulong *)(param_1 + 0xf8) < uVar1 || lVar3 == 0) {
      *(byte *)((long)param_2 + 0xee) = *(byte *)((long)param_2 + 0xee) | 0x10;
      *(long *)((long)param_2 + 0xe0) = *(long *)((long)param_2 + 0xe0) + lVar3;
    }
  }
  if (*(char *)(param_1 + 0x1e8) != '\0') {
    ___snprintf_chk((long)param_2 + 0x58,0x7f,0,0xffffffffffffffff,"%s",param_1 + 0x1e8);
    return;
  }
  return;
}


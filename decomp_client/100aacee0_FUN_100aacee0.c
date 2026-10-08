
int FUN_100aacee0(long param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  
  uVar2 = *(undefined4 *)(param_1 + 8);
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = uVar2;
  iVar3 = *(int *)(param_1 + 0xc);
  *(int *)((long)param_2 + 0xc) = iVar3;
  lVar4 = *(long *)(param_1 + 0x10);
  param_2[2] = lVar4;
  if (lVar4 != 0) {
    LOCK();
    piVar1 = (int *)(lVar4 + 8);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  return iVar3;
}


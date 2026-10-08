
undefined4 FUN_1009cefd0(undefined8 param_1,undefined4 *param_2,int param_3,undefined8 *param_4)

{
  int *piVar1;
  size_t sVar2;
  size_t in_RAX;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  int iVar6;
  short local_34;
  short local_32;
  
  if (param_3 != 0) {
    iVar6 = 0;
    do {
      FUN_1009d0f80(*param_2,&local_34);
      if (local_34 == 0) {
        return 0;
      }
      lVar4 = 2;
      if (local_32 == 0) {
        lVar4 = 1;
      }
      sVar2 = lVar4 * 2;
      piVar1 = (int *)*param_4;
      uVar5 = (ulong)(uint)(*(int *)(param_4 + 1) + 4 + (int)sVar2 * iVar6);
      if (*(ulong *)(piVar1 + 4) < uVar5 + lVar4 * 2) {
        return 0;
      }
      uVar3 = _lseek(*piVar1,uVar5,0);
      if (uVar3 != uVar5) {
        return 0;
      }
      in_RAX = _write(*piVar1,&local_34,sVar2);
      if (in_RAX != sVar2) {
        return 0;
      }
      param_3 = param_3 + -1;
      param_2 = param_2 + 1;
      iVar6 = iVar6 + (int)lVar4;
    } while (param_3 != 0);
  }
  return (int)CONCAT71((int7)(in_RAX >> 8),1);
}


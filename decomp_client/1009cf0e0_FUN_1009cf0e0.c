
undefined1 FUN_1009cf0e0(undefined8 param_1,long param_2,int param_3,undefined8 *param_4)

{
  int *piVar1;
  size_t sVar2;
  int iVar3;
  ulong uVar4;
  size_t sVar5;
  long lVar6;
  ulong uVar7;
  bool bVar8;
  int local_38;
  undefined1 local_34 [2];
  short local_32;
  
  if (param_3 != 0) {
    local_38 = 0;
    do {
      iVar3 = FUN_1009d0e00(param_2,param_3,local_34);
      if (iVar3 == 0) {
        return 0;
      }
      lVar6 = 2;
      if (local_32 == 0) {
        lVar6 = 1;
      }
      sVar2 = lVar6 * 2;
      piVar1 = (int *)*param_4;
      uVar7 = (ulong)(uint)(*(int *)(param_4 + 1) + 4 + (int)sVar2 * local_38);
      if (*(ulong *)(piVar1 + 4) < uVar7 + lVar6 * 2) {
        return 0;
      }
      uVar4 = _lseek(*piVar1,uVar7,0);
      if (uVar4 != uVar7) {
        return 0;
      }
      sVar5 = _write(*piVar1,local_34,sVar2);
      if (sVar5 != sVar2) {
        return 0;
      }
      param_2 = param_2 + iVar3;
      local_38 = local_38 + (int)lVar6;
      bVar8 = param_3 != iVar3;
      param_3 = param_3 - iVar3;
    } while (bVar8);
  }
  return 1;
}


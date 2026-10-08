
undefined8 FUN_100c2b920(long *param_1,ulong param_2)

{
  ulong uVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  bool bVar6;
  
  uVar3 = 1;
  if (param_2 != 0) {
    iVar2 = (int)param_1[1];
    lVar5 = (long)iVar2;
    if (lVar5 == 0) {
      uVar3 = FUN_100c26db0(param_1,param_2);
      return uVar3;
    }
    if ((int)param_1[2] == 0) {
      lVar4 = 0;
      do {
        if (lVar5 <= lVar4) {
          if ((int)lVar4 != iVar2) {
            return 1;
          }
          if (*(int *)((long)param_1 + 0xc) <= iVar2) {
            lVar4 = FUN_100c26b00(param_1,iVar2 + 1);
            if (lVar4 == 0) {
              return 0;
            }
            iVar2 = (int)param_1[1];
          }
          *(int *)(param_1 + 1) = iVar2 + 1;
          *(ulong *)(*param_1 + lVar5 * 8) = param_2;
          return 1;
        }
        uVar1 = *(ulong *)(*param_1 + lVar4 * 8);
        bVar6 = CARRY8(param_2,uVar1);
        *(ulong *)(*param_1 + lVar4 * 8) = param_2 + uVar1;
        lVar4 = lVar4 + 1;
        param_2 = -(ulong)CARRY8(param_2,uVar1) & 1;
      } while (bVar6);
    }
    else {
      *(undefined4 *)(param_1 + 2) = 0;
      uVar3 = FUN_100c2ba20(param_1,param_2);
      if ((int)param_1[1] != 0) {
        *(uint *)(param_1 + 2) = (uint)((int)param_1[2] == 0);
      }
    }
  }
  return uVar3;
}


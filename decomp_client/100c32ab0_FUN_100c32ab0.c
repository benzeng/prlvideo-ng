
bool FUN_100c32ab0(long *param_1,undefined8 *param_2,undefined8 *param_3,long param_4,
                  undefined8 param_5)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  bool bVar7;
  
  uVar4 = *(uint *)(param_4 + 0x28);
  uVar6 = (ulong)(int)uVar4;
  if (((1 < (long)uVar6) && (*(uint *)(param_2 + 1) == uVar4)) && (*(uint *)(param_3 + 1) == uVar4))
  {
    if ((*(int *)((long)param_1 + 0xc) < (int)uVar4) &&
       (lVar2 = FUN_100c26b00(param_1,uVar4), lVar2 == 0)) {
      return false;
    }
    iVar1 = _bn_mul_mont(*param_1,*param_2,*param_3,*(undefined8 *)(param_4 + 0x20),param_4 + 0x50,
                         uVar4);
    if (iVar1 != 0) {
      *(uint *)(param_1 + 2) = *(uint *)(param_3 + 2) ^ *(uint *)(param_2 + 2);
      *(uint *)(param_1 + 1) = uVar4;
      if (0 < (int)uVar4) {
        plVar3 = (long *)(*param_1 + -8 + uVar6 * 8);
        do {
          uVar5 = (uint)uVar6;
          uVar4 = uVar5;
          if (*plVar3 != 0) break;
          plVar3 = plVar3 + -1;
          uVar4 = uVar5 - 1;
          uVar6 = (ulong)uVar4;
        } while (1 < (int)uVar5);
      }
      *(uint *)(param_1 + 1) = uVar4;
      return true;
    }
  }
  FUN_100c27c60(param_5);
  lVar2 = FUN_100c27e20(param_5);
  bVar7 = false;
  if (lVar2 != 0) {
    if (param_2 == param_3) {
      iVar1 = FUN_100c2e720(lVar2,param_2,param_5);
    }
    else {
      iVar1 = FUN_100c297a0(lVar2,param_2,param_3,param_5);
    }
    if (iVar1 != 0) {
      iVar1 = FUN_100c32c10(param_1,lVar2,param_4);
      bVar7 = iVar1 != 0;
    }
  }
  FUN_100c27d40(param_5);
  return bVar7;
}


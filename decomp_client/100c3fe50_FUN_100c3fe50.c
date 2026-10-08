
undefined8 FUN_100c3fe50(long param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  int iVar6;
  undefined8 uVar7;
  
  lVar5 = FUN_100c26b50(param_1 + 0x68,param_2 + 0x68);
  uVar7 = 0;
  if (lVar5 != 0) {
    plVar1 = (long *)(param_1 + 0x98);
    lVar5 = FUN_100c26b50(plVar1,param_2 + 0x98);
    if (lVar5 != 0) {
      plVar2 = (long *)(param_1 + 0xb0);
      lVar5 = FUN_100c26b50(plVar2,param_2 + 0xb0);
      if (lVar5 != 0) {
        iVar4 = *(int *)(param_2 + 0x80);
        *(int *)(param_1 + 0x80) = iVar4;
        *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)(param_2 + 0x84);
        *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_2 + 0x88);
        *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)(param_2 + 0x8c);
        *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(param_2 + 0x90);
        *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)(param_2 + 0x94);
        if (*(int *)(param_1 + 0xa4) <
            (int)(iVar4 + 0x3f + ((uint)(iVar4 + 0x3f >> 0x1f) >> 0x1a)) >> 6) {
          lVar5 = FUN_100c26b00(plVar1);
          if (lVar5 == 0) {
            return 0;
          }
          iVar4 = *(int *)(param_1 + 0x80);
        }
        if ((*(int *)(param_1 + 0xbc) <
             (int)(iVar4 + 0x3f + ((uint)(iVar4 + 0x3f >> 0x1f) >> 0x1a)) >> 6) &&
           (lVar5 = FUN_100c26b00(plVar2), lVar5 == 0)) {
          return 0;
        }
        iVar4 = *(int *)(param_1 + 0xa0);
        iVar3 = *(int *)(param_1 + 0xa4);
        if (iVar4 < iVar3) {
          iVar6 = iVar4 + 1;
          if (iVar4 + 1 <= iVar3) {
            iVar6 = iVar3;
          }
          ___bzero(*plVar1 + (long)iVar4 * 8,(ulong)(uint)((iVar6 + -1) - iVar4) * 8 + 8);
        }
        iVar4 = *(int *)(param_1 + 0xb8);
        iVar3 = *(int *)(param_1 + 0xbc);
        uVar7 = 1;
        if (iVar4 < iVar3) {
          iVar6 = iVar4 + 1;
          if (iVar4 + 1 <= iVar3) {
            iVar6 = iVar3;
          }
          ___bzero(*plVar2 + (long)iVar4 * 8,(ulong)(uint)((iVar6 + -1) - iVar4) * 8 + 8);
        }
      }
    }
  }
  return uVar7;
}


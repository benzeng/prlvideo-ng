
undefined8 FUN_100c3ffe0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  undefined8 uVar8;
  
  lVar5 = FUN_100c26b50(param_1 + 0x68);
  uVar8 = 0;
  if (lVar5 != 0) {
    lVar5 = param_1 + 0x80;
    uVar3 = FUN_100c34530(param_1 + 0x68,lVar5,6);
    if ((uVar3 | 2) == 6) {
      plVar1 = (long *)(param_1 + 0x98);
      iVar4 = FUN_100c34010(plVar1,param_3,lVar5);
      if (iVar4 == 0) {
        uVar8 = 0;
      }
      else {
        iVar4 = *(int *)(param_1 + 0xa4);
        if (iVar4 < (int)(*(int *)(param_1 + 0x80) + 0x3f +
                         ((uint)(*(int *)(param_1 + 0x80) + 0x3f >> 0x1f) >> 0x1a)) >> 6) {
          lVar6 = FUN_100c26b00(plVar1);
          if (lVar6 == 0) {
            return 0;
          }
          iVar4 = *(int *)(param_1 + 0xa4);
        }
        iVar2 = *(int *)(param_1 + 0xa0);
        if (iVar2 < iVar4) {
          iVar7 = iVar2 + 1;
          if (iVar2 + 1 <= iVar4) {
            iVar7 = iVar4;
          }
          ___bzero(*plVar1 + (long)iVar2 * 8,(ulong)(uint)((iVar7 + -1) - iVar2) * 8 + 8);
        }
        plVar1 = (long *)(param_1 + 0xb0);
        iVar4 = FUN_100c34010(plVar1,param_4,lVar5);
        if (iVar4 == 0) {
          uVar8 = 0;
        }
        else {
          iVar4 = *(int *)(param_1 + 0xbc);
          if (iVar4 < (int)(*(int *)(param_1 + 0x80) + 0x3f +
                           ((uint)(*(int *)(param_1 + 0x80) + 0x3f >> 0x1f) >> 0x1a)) >> 6) {
            lVar5 = FUN_100c26b00(plVar1);
            if (lVar5 == 0) {
              return 0;
            }
            iVar4 = *(int *)(param_1 + 0xbc);
          }
          iVar2 = *(int *)(param_1 + 0xb8);
          uVar8 = 1;
          if (iVar2 < iVar4) {
            iVar7 = iVar2 + 1;
            if (iVar2 + 1 <= iVar4) {
              iVar7 = iVar4;
            }
            ___bzero(*plVar1 + (long)iVar2 * 8,(ulong)(uint)((iVar7 + -1) - iVar2) * 8 + 8);
          }
        }
      }
    }
    else {
      FUN_100c62ee0(0x10,0xc3,0x83,"ec2_smpl.c",0xdb);
      uVar8 = 0;
    }
  }
  return uVar8;
}


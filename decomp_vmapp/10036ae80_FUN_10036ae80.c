
int FUN_10036ae80(long param_1,long param_2,undefined8 param_3,long param_4,int param_5,int param_6,
                 undefined4 param_7,undefined4 param_8,undefined4 param_9)

{
  byte bVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined8 uVar7;
  
  lVar3 = *(long *)(param_2 + 0x650);
  iVar4 = FUN_10036a210(param_1,param_2,param_3,param_8,param_9,lVar3 == 0,param_7);
  if (iVar4 == 0) {
    if (lVar3 == 0) {
      FUN_10036a6e0(param_1);
      if ((param_4 != 0) && (*(int *)(param_4 + 8) != 0)) {
        uVar7 = 0x8e14;
        if (*(int *)(param_4 + 4) != 5) {
          uVar7 = 0x8e13;
        }
        (*DAT_1011c74a0)(*(int *)(param_4 + 8),uVar7);
      }
      if (*(int *)(param_1 + 0x228) != 0) {
        lVar3 = **(long **)(*(long *)(param_1 + 0x278) + 0x38);
        iVar4 = *(byte *)(*(long *)(*(long *)(param_1 + 0x278) + 0x88) + 3) - 1;
        *(int *)(lVar3 + 0x34) = iVar4;
        *(int *)(lVar3 + 0x2c) = iVar4;
        (*DAT_1011c74a8)(*(undefined4 *)(lVar3 + 0x24));
        (*DAT_1011c56e0)(0x8c87,*(undefined4 *)(lVar3 + 0x30));
        (*DAT_1011c56e0)(0x8c88,*(undefined4 *)(lVar3 + 0x28));
      }
      (*DAT_1011c7558)(*(undefined4 *)(param_1 + 0x14),0,param_5,*(undefined4 *)(param_1 + 0xc));
    }
    else {
      uVar2 = *(uint *)(param_2 + 0x658);
      FUN_10036a6e0(param_1);
      if ((ulong)uVar2 == 0x3f) {
        iVar4 = 0xffff;
        uVar5 = 0x1403;
      }
      else {
        if (uVar2 != 0x31) {
          return 1;
        }
        iVar4 = -1;
        uVar5 = 0x1405;
      }
      if (param_5 == 0) {
        return 0;
      }
      bVar1 = (&DAT_100b3cfd7)[(ulong)uVar2 * 8];
      iVar6 = param_6 * (uint)bVar1 + *(int *)(param_2 + 0x65c);
      if (*(uint *)(lVar3 + 0xc) < (uint)bVar1 * param_5 + iVar6) {
        FUN_1008e3970("","LocalDevices",0,"indices are out of index buffer bounds %d %d %d %d\n",
                      iVar6,bVar1,param_5,*(uint *)(lVar3 + 0xc));
      }
      (*DAT_1011c5708)(0x8893,**(undefined4 **)(lVar3 + 0x58));
      if (iVar4 != *(int *)(param_1 + 8)) {
        (*DAT_1011c76f8)(iVar4);
        *(int *)(param_1 + 8) = iVar4;
      }
      if ((param_4 != 0) && (*(int *)(param_4 + 8) != 0)) {
        uVar7 = 0x8e14;
        if (*(int *)(param_4 + 4) != 5) {
          uVar7 = 0x8e13;
        }
        (*DAT_1011c74a0)(*(int *)(param_4 + 8),uVar7);
      }
      if (*(int *)(param_1 + 0x228) != 0) {
        lVar3 = **(long **)(*(long *)(param_1 + 0x278) + 0x38);
        iVar4 = *(byte *)(*(long *)(*(long *)(param_1 + 0x278) + 0x88) + 3) - 1;
        *(int *)(lVar3 + 0x34) = iVar4;
        *(int *)(lVar3 + 0x2c) = iVar4;
        (*DAT_1011c74a8)(*(undefined4 *)(lVar3 + 0x24));
        (*DAT_1011c56e0)(0x8c87,*(undefined4 *)(lVar3 + 0x30));
        (*DAT_1011c56e0)(0x8c88,*(undefined4 *)(lVar3 + 0x28));
      }
      (*DAT_1011c5c30)(*(undefined4 *)(param_1 + 0x14),param_5,uVar5,iVar6,
                       *(undefined4 *)(param_1 + 0xc),param_7);
    }
    iVar4 = 0;
    if (*(int *)(param_1 + 0x228) != 0) {
      (*DAT_1011c5cb8)(0x8c87);
      (*DAT_1011c5cb8)(0x8c88);
      (*DAT_1011c7590)();
    }
    if ((param_4 != 0) && (*(int *)(param_4 + 8) != 0)) {
      (*DAT_1011c7588)();
    }
  }
  return iVar4;
}


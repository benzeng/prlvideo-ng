
undefined8 FUN_1002e7b20(long param_1)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  iVar2 = FUN_100410280(param_1 + 0x12f,param_1 + 0x168,*(undefined4 *)(param_1 + 0x98));
  uVar5 = 6;
  if (-1 < iVar2) {
    uVar1 = *(ulong *)(param_1 + 0x168);
    if (*(uint *)(param_1 + 0x128) < uVar1) {
      uVar5 = 7;
    }
    else {
      if (*(int *)(param_1 + 0x178) == 1) {
        if (*(char *)(param_1 + 300) < '\0') {
          return 7;
        }
        if (DAT_1011ccc18 != (code *)0x0) {
          (*DAT_1011ccc18)(1,0x22,*(long *)(param_1 + 0x170) << 0x20 | (uVar1 & 0xffffff) << 8 | 5);
        }
        lVar3 = (**(code **)(**(long **)(*(long *)(param_1 + 8) + 0x28) + 0x70))();
        FUN_10025b2f0(lVar3 + 0x68,2);
        if (*(char *)(param_1 + 0x180) == '\0') {
          lVar3 = *(long *)(param_1 + 0x168);
          lVar4 = *(long *)(*(long *)(param_1 + 0x70) + 0xf0);
          if (lVar4 < lVar3) {
            lVar4 = lVar3;
          }
          *(long *)(*(long *)(param_1 + 0x70) + 0xf0) = lVar4;
          *(long *)(*(long *)(param_1 + 0x78) + 0xf0) = lVar3;
          return 3;
        }
        uVar5 = 0x72700;
      }
      else {
        if (*(int *)(param_1 + 0x178) != 0) {
          return 6;
        }
        if (-1 < *(char *)(param_1 + 300)) {
          return 7;
        }
        if (DAT_1011ccc18 != (code *)0x0) {
          (*DAT_1011ccc18)(1,0x22,*(long *)(param_1 + 0x170) << 0x20 | (uVar1 & 0xffffff) << 8 | 4);
        }
        lVar3 = (**(code **)(**(long **)(*(long *)(param_1 + 8) + 0x28) + 0x70))();
        FUN_10025b2f0(lVar3 + 0x68,1);
        lVar3 = *(long *)(param_1 + 0x168);
        lVar4 = *(long *)(*(long *)(param_1 + 0x60) + 0xf0);
        if (lVar4 < lVar3) {
          lVar4 = lVar3;
        }
        *(long *)(*(long *)(param_1 + 0x60) + 0xf0) = lVar4;
        *(long *)(*(long *)(param_1 + 0x68) + 0xf0) = lVar3;
        if (*(int *)(param_1 + 0x184) != 0) {
          if (*(int *)(param_1 + 0x184) == 1) {
            uVar5 = FUN_1002e7d70(param_1);
            return uVar5;
          }
          if (-1 < DAT_1011c568c) {
            FUN_1008e3970("","USB",0,"[MSC] Unsupported read mode: %u");
            lVar3 = *(long *)(param_1 + 0x168);
          }
        }
        if (lVar3 == 0) {
          return 2;
        }
        iVar2 = (**(code **)(**(long **)(param_1 + 0x40) + 0x98))
                          (*(long **)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x50),lVar3,
                           *(undefined8 *)(param_1 + 0x170));
        if (-1 < iVar2) {
          return 2;
        }
        uVar5 = 0x31100;
      }
      FUN_1004103f0(uVar5,param_1 + 0x150,0x12,0);
      uVar5 = 5;
    }
  }
  return uVar5;
}


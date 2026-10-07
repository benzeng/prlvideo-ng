
void FUN_1002e90b0(long param_1)

{
  int iVar1;
  long lVar2;
  undefined4 uVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  undefined4 *local_38;
  
  if (DAT_1011ccc18 != (code *)0x0) {
    (*DAT_1011ccc18)(1,0x22,param_1 * 0x100 + 0x19000U | 8);
  }
  if ((*(byte *)(param_1 + 0x198) & 0xfc) != 0) {
    FUN_1004103f0(0x31100,param_1 + 0x150,0x12,0);
    *(undefined4 *)(param_1 + 0x14c) = 5;
  }
  if (*(int *)(*(long *)(param_1 + 0x9e8) + 0xc) != *(int *)(*(long *)(param_1 + 0x9e8) + 8)) {
    do {
      local_38 = (undefined4 *)(param_1 + 0x14c);
      piVar7 = (int *)(param_1 + 0x14c);
      lVar4 = FUN_1002e9520((long *)(param_1 + 0x9e8));
      lVar2 = *(long *)(*(long *)(param_1 + 8) + 0x40 + (ulong)*(byte *)(lVar4 + 0x44c) * 8);
      if (lVar2 == 0) {
        *piVar7 = 6;
      }
      else {
        iVar1 = *piVar7;
        if (iVar1 == 8) {
          uVar6 = *(int *)(param_1 + 0x128) - *(uint *)(param_1 + 0x147);
          if (*(uint *)(lVar4 + 0x43c) < uVar6) {
            uVar6 = *(uint *)(lVar4 + 0x43c);
          }
          _memcpy((void *)(lVar4 + 0x4d8),
                  (void *)((ulong)*(uint *)(param_1 + 0x147) + *(long *)(param_1 + 0x50)),
                  (ulong)uVar6);
          uVar5 = *(int *)(param_1 + 0x147) + uVar6;
          *(uint *)(param_1 + 0x147) = uVar5;
          *(undefined4 *)(lVar4 + 0x468) = 0;
          *(uint *)(lVar4 + 0x454) = uVar6;
          uVar3 = 4;
          if (uVar5 < *(uint *)(param_1 + 0x128)) {
            uVar3 = *local_38;
          }
          *local_38 = uVar3;
        }
        else {
          *(undefined4 *)(lVar4 + 0x468) = 7;
          if (iVar1 == 4) {
            *piVar7 = 6;
          }
        }
        if ((1 < DAT_1011c568c) && (*(int *)(lVar4 + 0x450) == 0x69)) {
          FUN_1002da980(2,lVar4);
        }
        uVar6 = *(uint *)(lVar4 + 0x470);
        *(undefined4 *)(lVar4 + 0x464) = 1;
        LOCK();
        piVar7 = (int *)(*(long *)(lVar2 + 0xc0) + 8);
        *piVar7 = *piVar7 + -1;
        UNLOCK();
        LOCK();
        *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + -1;
        UNLOCK();
        if ((uVar6 & 4) != 0) {
          FUN_1002c9070(lVar4);
        }
      }
      lVar2 = *(long *)(param_1 + 0x9e8);
    } while (*(int *)(lVar2 + 0xc) != *(int *)(lVar2 + 8));
  }
  if (*(int *)(param_1 + 0x14c) == 8) {
    *(int *)(param_1 + 0x14c) = 2;
  }
  *(undefined8 *)(param_1 + 0x1a0) = 0;
  return;
}


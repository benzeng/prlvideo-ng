
void FUN_100366800(long param_1,int param_2,long param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  void *pvVar4;
  int iVar5;
  long lVar6;
  int *piVar7;
  uint uVar8;
  int iVar9;
  long lVar10;
  ulong uVar11;
  uint uVar12;
  int iVar13;
  
  if (*(int *)(param_3 + 0x8294) == 1) {
    iVar9 = 0;
    if (param_2 - 1U < 6) {
      iVar9 = *(int *)((long)&PTR___mh_execute_header_100b3d490 + (long)(int)(param_2 - 1U) * 4);
    }
    if (*(uint *)(param_1 + 0x22c) != 0) {
      iVar3 = 0;
      uVar11 = 0;
      uVar12 = *(uint *)(param_1 + 0x22c);
      do {
        if ((uVar12 & 1) != 0) {
          lVar10 = uVar11 * 0x20;
          iVar1 = *(int *)(param_1 + 0x14 + lVar10);
          iVar13 = *(int *)(param_1 + 0x18 + lVar10) * iVar9;
          iVar5 = iVar1 - iVar13;
          if (iVar1 < iVar13) {
            piVar7 = (int *)(param_1 + 0x10 + lVar10);
            if (iVar3 != *(int *)(param_1 + 0x10 + lVar10)) {
              (*DAT_1011c5708)(0x8892);
              pvVar4 = (void *)(*DAT_1011c64a0)(0x8892,35000);
              uVar2 = *(uint *)(param_1 + 0x2c + lVar10);
              uVar8 = uVar2 + iVar13;
              lVar6 = *(long *)(param_1 + 0x240);
              if ((ulong)(*(long *)(param_1 + 0x248) - lVar6) < (ulong)uVar8) {
                FUN_10005a320((long *)(param_1 + 0x240));
                lVar6 = *(long *)(param_1 + 0x240);
                uVar2 = *(uint *)(param_1 + 0x2c + lVar10);
              }
              _memcpy((void *)(iVar13 + lVar6),pvVar4,(ulong)uVar2);
              (*DAT_1011c6ed0)(0x8892);
              (*DAT_1011c5708)(0x8892,*(undefined4 *)(param_1 + 600));
              (*DAT_1011c57d8)(0x8892,(ulong)uVar8,*(undefined8 *)(param_1 + 0x240),0x88e0);
              iVar3 = *piVar7;
            }
            iVar5 = *(int *)(param_1 + 600);
          }
          else {
            piVar7 = (int *)(param_1 + 0x14 + lVar10);
          }
          *piVar7 = iVar5;
        }
        uVar11 = (ulong)((int)uVar11 + 1);
        uVar2 = uVar12 >> 1;
        uVar12 = uVar12 >> 1;
      } while (uVar2 != 0);
    }
  }
  return;
}


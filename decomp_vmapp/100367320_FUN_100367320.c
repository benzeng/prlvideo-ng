
void * FUN_100367320(long param_1,int param_2,long param_3,void *param_4)

{
  long *plVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  void *pvVar8;
  ulong uVar9;
  uint uVar10;
  int iVar11;
  
  pvVar8 = param_4;
  if (*(int *)(param_3 + 0x8294) == 1) {
    iVar6 = 0;
    if (param_2 - 1U < 6) {
      iVar6 = *(int *)((long)&PTR___mh_execute_header_100b3d490 + (long)(int)(param_2 - 1U) * 4);
    }
    if (*(uint *)(param_1 + 0x22c) != 0) {
      plVar1 = (long *)(param_1 + 0x240);
      bVar3 = false;
      uVar9 = 0;
      uVar10 = *(uint *)(param_1 + 0x22c);
      do {
        if ((uVar10 & 1) != 0) {
          lVar5 = uVar9 * 0x20;
          iVar2 = *(int *)(param_1 + 0x14 + lVar5);
          iVar11 = *(int *)(param_1 + 0x18 + lVar5) * iVar6;
          *(int *)(param_1 + 0x14 + lVar5) = iVar2 - iVar11;
          if ((!bVar3) && (iVar2 < iVar11)) {
            uVar4 = *(uint *)(param_1 + 0x2c + lVar5);
            lVar7 = *(long *)(param_1 + 0x240);
            if ((ulong)(*(long *)(param_1 + 0x248) - lVar7) < (ulong)(uVar4 + iVar11)) {
              FUN_10005a320(plVar1);
              lVar7 = *plVar1;
              uVar4 = *(uint *)(param_1 + 0x2c + lVar5);
            }
            _memcpy((void *)(lVar7 + iVar11),param_4,(ulong)uVar4);
            pvVar8 = (void *)((long)iVar11 + *plVar1);
            bVar3 = true;
          }
        }
        uVar9 = (ulong)((int)uVar9 + 1);
        uVar4 = uVar10 >> 1;
        uVar10 = uVar10 >> 1;
      } while (uVar4 != 0);
    }
  }
  return pvVar8;
}


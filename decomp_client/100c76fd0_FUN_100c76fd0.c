
undefined4
FUN_100c76fd0(long param_1,undefined8 *param_2,code *param_3,undefined4 param_4,undefined4 param_5,
             int param_6)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  void *pvVar6;
  void *pvVar7;
  ulong uVar8;
  int *piVar9;
  long lVar10;
  int iVar11;
  void *local_38;
  
  uVar4 = 0;
  if (param_1 != 0) {
    iVar2 = FUN_100c60800(param_1);
    iVar11 = 0;
    if (0 < iVar2) {
      iVar2 = iVar2 + 1;
      iVar11 = 0;
      do {
        uVar5 = FUN_100c60820(param_1,iVar2 + -2);
        iVar3 = (*param_3)(uVar5,0);
        iVar11 = iVar11 + iVar3;
        iVar2 = iVar2 + -1;
      } while (1 < iVar2);
    }
    uVar4 = FUN_100c8aea0(1,iVar11,param_4);
    if (param_2 != (undefined8 *)0x0) {
      local_38 = (void *)*param_2;
      FUN_100c8ad50(&local_38,1,iVar11,param_4,param_5);
      if ((param_6 == 0) || (iVar2 = FUN_100c60800(param_1), pvVar1 = local_38, iVar2 < 2)) {
        iVar2 = FUN_100c60800(param_1);
        if (0 < iVar2) {
          iVar2 = 0;
          do {
            uVar5 = FUN_100c60820(param_1,iVar2);
            (*param_3)(uVar5,&local_38);
            iVar2 = iVar2 + 1;
            iVar11 = FUN_100c60800(param_1);
          } while (iVar2 < iVar11);
        }
        *param_2 = local_38;
      }
      else {
        iVar2 = FUN_100c60800(param_1);
        pvVar6 = (void *)FUN_100bf3540(iVar2 << 4,"a_set.c",0x7c);
        if (pvVar6 == (void *)0x0) {
          uVar5 = 0x7e;
        }
        else {
          iVar2 = FUN_100c60800(param_1);
          if (0 < iVar2) {
            piVar9 = (int *)((long)pvVar6 + 8);
            uVar8 = 0;
            do {
              *(void **)(piVar9 + -2) = local_38;
              uVar5 = FUN_100c60820(param_1,uVar8 & 0xffffffff);
              (*param_3)(uVar5,&local_38);
              *piVar9 = (int)local_38 - piVar9[-2];
              uVar8 = uVar8 + 1;
              iVar2 = FUN_100c60800(param_1);
              piVar9 = piVar9 + 4;
            } while ((long)uVar8 < (long)iVar2);
          }
          *param_2 = local_38;
          uVar8 = (long)local_38 - (long)pvVar1;
          iVar2 = FUN_100c60800(param_1);
          _qsort(pvVar6,(long)iVar2,0x10,(int *)FUN_100c77290);
          pvVar7 = (void *)FUN_100bf3540(uVar8 & 0xffffffff,"a_set.c",0x90);
          if (pvVar7 != (void *)0x0) {
            local_38 = pvVar7;
            iVar2 = FUN_100c60800(param_1);
            if (0 < iVar2) {
              piVar9 = (int *)((long)pvVar6 + 8);
              lVar10 = 0;
              do {
                _memcpy(local_38,*(void **)(piVar9 + -2),(long)*piVar9);
                local_38 = (void *)((long)local_38 + (long)*piVar9);
                lVar10 = lVar10 + 1;
                iVar2 = FUN_100c60800(param_1);
                piVar9 = piVar9 + 4;
              } while (lVar10 < iVar2);
            }
            _memcpy(pvVar1,pvVar7,(long)(int)uVar8);
            FUN_100bf3910(pvVar7);
            FUN_100bf3910(pvVar6);
            return uVar4;
          }
          uVar5 = 0x91;
        }
        FUN_100c62ee0(0xd,0xbc,0x41,"a_set.c",uVar5);
        uVar4 = 0;
      }
    }
  }
  return uVar4;
}


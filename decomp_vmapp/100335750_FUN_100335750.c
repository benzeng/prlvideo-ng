
ulong FUN_100335750(long param_1,ulong param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  void *pvVar4;
  undefined8 *puVar5;
  ulong *puVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  uint local_2c;
  
  lVar3 = (ulong)*(ushort *)(param_2 + 2) * 0xc + 4;
  if ((param_2 < *(ulong *)(param_1 + 0xbbf8)) ||
     (uVar11 = lVar3 + param_2, *(ulong *)(param_1 + 0xbc00) < uVar11)) {
    puVar6 = (ulong *)___cxa_allocate_exception(0x10);
    *puVar6 = param_2;
    *(int *)(puVar6 + 1) = (int)lVar3;
                    /* WARNING: Subroutine does not return */
    ___cxa_throw(puVar6,&PTR_vtable_101117a68,0);
  }
  switch(*(undefined4 *)(param_2 + 4)) {
  case 0:
    local_2c = *(uint *)(param_2 + 8);
    plVar2 = (long *)(param_1 + 0xbba8);
    plVar7 = *(long **)(param_1 + 0xbba8);
    plVar9 = plVar7;
    plVar10 = plVar2;
    if (plVar7 == (long *)0x0) {
      plVar7 = (long *)0x0;
    }
    else {
      do {
        while (plVar8 = plVar9, local_2c <= *(uint *)(plVar8 + 4)) {
          plVar9 = (long *)*plVar8;
          plVar10 = plVar8;
          if ((long *)*plVar8 == (long *)0x0) goto LAB_100335889;
        }
        plVar1 = plVar8 + 1;
        plVar9 = (long *)*plVar1;
        plVar8 = plVar10;
      } while ((long *)*plVar1 != (long *)0x0);
LAB_100335889:
      if ((plVar8 != plVar2) && (*(uint *)(plVar8 + 4) <= local_2c)) {
        FUN_10033d850(plVar8[5]);
        local_2c = *(uint *)(param_2 + 8);
        plVar7 = (long *)*plVar2;
      }
    }
    *(uint *)(param_1 + 0xbb98) = local_2c;
    plVar9 = plVar2;
    if (plVar7 == (long *)0x0) {
LAB_1003358ea:
      pvVar4 = operator_new(0xe8);
      ___bzero(pvVar4,0xe8);
      puVar5 = (undefined8 *)FUN_10033f8c0(param_1 + 0xbba0,&local_2c);
      *puVar5 = pvVar4;
    }
    else {
      do {
        while (plVar10 = plVar7, local_2c <= *(uint *)(plVar10 + 4)) {
          plVar7 = (long *)*plVar10;
          plVar9 = plVar10;
          if ((long *)*plVar10 == (long *)0x0) goto LAB_1003358e0;
        }
        plVar8 = plVar10 + 1;
        plVar7 = (long *)*plVar8;
        plVar10 = plVar9;
      } while ((long *)*plVar8 != (long *)0x0);
LAB_1003358e0:
      if ((plVar10 == plVar2) || (local_2c < *(uint *)(plVar10 + 4))) goto LAB_1003358ea;
      FUN_10033d850(plVar10[5]);
    }
    *(long *)(param_1 + 0xbbb8) = param_1 + 0xbb90;
    break;
  case 1:
    if (*(long *)(param_1 + 0xbbb8) == param_1 + 0xbb90) {
      *(long *)(param_1 + 0xbbb8) = param_1;
    }
    break;
  case 2:
    FUN_10033a940(param_1 + 0xbb90,*(undefined4 *)(param_2 + 8));
    *(long *)(param_1 + 0xbbb8) = param_1;
    break;
  case 3:
    FUN_10033a9e0(param_1 + 0xbb90,*(undefined4 *)(param_2 + 8),param_1);
    break;
  case 4:
    FUN_10033ae00(param_1 + 0xbb90,*(undefined4 *)(param_2 + 8),param_1);
    break;
  case 5:
    FUN_10033b320(param_1 + 0xbb90,*(undefined4 *)(param_2 + 8),*(undefined4 *)(param_2 + 0xc),
                  param_1);
  }
  return uVar11;
}


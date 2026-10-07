
void FUN_1003fc770(long param_1)

{
  undefined4 *puVar1;
  ulong uVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  bool bVar16;
  undefined8 uVar17;
  
  uVar17 = 0xffffffff;
  QTime::start();
  puVar9 = _malloc(*(long *)(param_1 + 0x68) << 4);
  if (puVar9 != (undefined4 *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x18) + 0x18))
              (*(long **)(param_1 + 0x18),param_1 + 0x10,3,0,0x200,0,uVar17);
    cVar6 = (**(code **)(**(long **)(param_1 + 0x18) + 0x98))();
    if (cVar6 == '\0') {
      uVar8 = FUN_100768f60();
      FUN_1008e3970("[RH]","HddUtils",0,"can\'t create drh file: error %d",uVar8);
    }
    else {
      if ((0x4fff < *(ulong *)(param_1 + 0x48)) &&
         (uVar13 = *(ulong *)(param_1 + 0x50), uVar13 != 0)) {
        uVar7 = *(uint *)(param_1 + 0x78);
        if (uVar7 == 0) {
          uVar15 = (ulong)*(uint *)(param_1 + 0x74);
          if (uVar15 <= uVar13 && uVar13 - uVar15 != 0) {
            _qsort((void *)(uVar15 * 0x10 + *(long *)(param_1 + 0x38)),uVar13 - uVar15,0x10,
                   (int *)FUN_1003fc740);
            uVar13 = *(ulong *)(param_1 + 0x50);
          }
        }
        else {
          uVar15 = 0;
          do {
            uVar10 = uVar13 - uVar15;
            if ((ulong)uVar7 <= uVar13 - uVar15) {
              uVar10 = (ulong)uVar7;
            }
            _qsort((void *)(uVar15 * 0x10 + *(long *)(param_1 + 0x38)),uVar10,0x10,
                   (int *)FUN_1003fc740);
            uVar7 = *(uint *)(param_1 + 0x78);
            uVar15 = (ulong)((int)uVar15 + uVar7);
            uVar13 = *(ulong *)(param_1 + 0x50);
          } while (uVar15 < uVar13);
        }
        puVar1 = *(undefined4 **)(param_1 + 0x38);
        uVar8 = puVar1[1];
        uVar4 = puVar1[2];
        uVar5 = puVar1[3];
        *puVar9 = *puVar1;
        puVar9[1] = uVar8;
        puVar9[2] = uVar4;
        puVar9[3] = uVar5;
        uVar15 = 0;
        if (1 < uVar13) {
          uVar7 = *(uint *)(param_1 + 0x70);
          uVar15 = 0;
          uVar10 = 1;
          uVar14 = 2;
          do {
            uVar2 = *(ulong *)(puVar9 + uVar15 * 4);
            uVar12 = *(long *)(puVar9 + uVar15 * 4 + 2) + uVar2;
            uVar11 = *(ulong *)(puVar1 + uVar10 * 4);
            lVar3 = *(long *)(puVar1 + uVar10 * 4 + 2);
            uVar10 = lVar3 + uVar11;
            if (uVar11 < uVar2) {
              if (uVar7 + uVar10 < uVar2) goto LAB_1003fc959;
LAB_1003fc980:
              if (uVar2 < uVar11) {
                uVar11 = uVar2;
              }
              *(ulong *)(puVar9 + uVar15 * 4) = uVar11;
              if (uVar10 < uVar12) {
                uVar10 = uVar12;
              }
              *(ulong *)(puVar9 + uVar15 * 4 + 2) = uVar10 - uVar11;
            }
            else {
              if (uVar11 <= uVar7 + uVar12) goto LAB_1003fc980;
LAB_1003fc959:
              uVar15 = uVar15 + 1;
              *(ulong *)(puVar9 + uVar15 * 4) = uVar11;
              *(long *)(puVar9 + uVar15 * 4 + 2) = lVar3;
              if (*(char *)(param_1 + 0x28) != '\0') goto LAB_1003fc895;
            }
            bVar16 = uVar14 < uVar13;
            uVar10 = uVar14;
            uVar14 = (ulong)((int)uVar14 + 1);
          } while (bVar16);
        }
        FUN_1008e3970("[RH]","HddUtils",0,"rh total reqs %lld / %lld",uVar13,uVar13 - uVar15);
        (**(code **)(**(long **)(param_1 + 0x18) + 0x70))(*(long **)(param_1 + 0x18),0);
        cVar6 = (**(code **)(**(long **)(param_1 + 0x18) + 0x38))
                          (*(long **)(param_1 + 0x18),puVar9,(uVar15 & 0xfffffff) << 4,
                           &stack0xffffffffffffffcc);
        if (cVar6 == '\0') {
          FUN_1008e3970("[RH]","HddUtils",0,"can\'t write drh file");
        }
        (**(code **)(**(long **)(param_1 + 0x18) + 0x28))();
        _free(puVar9);
        uVar8 = QTime::elapsed();
        FUN_1008e3970("[RH]","HddUtils",0,"rh saved in %d msec",uVar8);
        return;
      }
      (**(code **)(**(long **)(param_1 + 0x18) + 0x70))(*(long **)(param_1 + 0x18),0);
LAB_1003fc895:
      (**(code **)(**(long **)(param_1 + 0x18) + 0x28))();
    }
    _free(puVar9);
  }
  return;
}


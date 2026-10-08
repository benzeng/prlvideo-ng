
void FUN_100db6090(void *param_1)

{
  int *piVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  void *pvVar8;
  uint uVar9;
  uint *puVar10;
  ulong uVar11;
  
  uVar5 = *(uint *)((long)param_1 + 8);
  if ((uVar5 & 0x100) != 0) {
    pvVar8 = *(void **)((long)param_1 + 0x10);
    if ((uVar5 & 0xfc) == 0) {
      iVar4 = (**(code **)((long)pvVar8 + 8))(param_1);
      uVar5 = *(uint *)((long)param_1 + 8);
      if (iVar4 < 0) {
        uVar5 = uVar5 | 0x80;
        *(uint *)((long)param_1 + 8) = uVar5;
      }
    }
    *(uint *)((long)param_1 + 8) = uVar5 & 0xfffffeff;
    *(undefined8 *)((long)param_1 + 0x10) = *(undefined8 *)((long)pvVar8 + 0x10);
    _free(pvVar8);
    uVar5 = *(uint *)((long)param_1 + 8);
  }
  lVar3 = *(long *)((long)param_1 + 0x10);
  if ((uVar5 & 0xfc) != 0) {
    *(uint *)(lVar3 + 8) = *(uint *)(lVar3 + 8) | uVar5 & 0xfc;
    uVar5 = *(uint *)((long)param_1 + 8);
  }
  if ((uVar5 & 1) == 0) {
    uVar5 = *(uint *)(lVar3 + 0x54);
    if (uVar5 != 0) {
      uVar2 = *(uint *)((long)param_1 + 0x60);
      pvVar8 = *(void **)((long)param_1 + 0x58);
      puVar10 = (uint *)(lVar3 + 0x60);
      uVar11 = 0;
      uVar7 = 0;
      do {
        uVar6 = *puVar10;
        uVar9 = uVar6 + uVar7;
        if (uVar9 != 0) {
          if (uVar2 <= uVar7) break;
          if (uVar2 < uVar9) {
            uVar6 = (uVar6 + uVar2) - uVar9;
          }
          _memcpy(*(void **)(puVar10 + -2),pvVar8,(ulong)uVar6);
          pvVar8 = (void *)((long)pvVar8 + (ulong)uVar6);
          uVar5 = *(uint *)(lVar3 + 0x54);
        }
        uVar11 = uVar11 + 1;
        puVar10 = puVar10 + 4;
        uVar7 = uVar9;
      } while (uVar11 < uVar5);
    }
  }
  _free(*(void **)((long)param_1 + 0x58));
  piVar1 = (int *)(lVar3 + 0x38);
  *piVar1 = *piVar1 + -1;
  if ((*piVar1 == 0) && (*(code **)(lVar3 + 0x48) != (code *)0x0)) {
    (**(code **)(lVar3 + 0x48))();
  }
  _free(param_1);
  return;
}


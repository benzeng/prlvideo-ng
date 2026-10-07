
/* WARNING: Removing unreachable block (ram,0x000100557496) */

undefined1 FUN_100557270(long *param_1,ulong param_2,char param_3)

{
  uint *puVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  void *pvVar5;
  uint uVar6;
  void *pvVar7;
  ulong uVar8;
  void *pvVar9;
  undefined1 uVar10;
  ulong uVar11;
  
  uVar11 = param_2 & 0xffffffff;
  uVar10 = 0;
  cVar3 = FUN_100557140(param_1,param_2,0);
  if ((cVar3 != '\0') && (uVar10 = 1, (char)param_1[0x14] != '\0')) {
    lVar2 = param_1[2];
    if (7 < *(uint *)(lVar2 + 0x24)) {
      uVar6 = *(uint *)(lVar2 + 0x24) >> 3;
      uVar8 = 0;
      do {
        if (*(char *)((ulong)(uVar6 * (uint)param_2) + *(long *)(lVar2 + 0x48) + uVar8) != -1) {
          return 1;
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 < uVar6);
    }
    if (param_3 == '\0') {
      uVar6 = *(uint *)(lVar2 + 4);
      pvVar5 = (void *)(**(code **)(*param_1 + 0x68))(param_1);
      if (pvVar5 == (void *)0x0) {
        iVar4 = FUN_1008e38f0(&DAT_10111db78);
        if (iVar4 != 0) {
          FUN_1008e3970("","TransMem",0,"Not enough memory for deferred copy");
        }
      }
      else {
        lVar2 = *(long *)(*(long *)(param_1[3] + 8) + 0x20);
        pvVar9 = (void *)0x0;
        if (lVar2 != 0) {
          pvVar7 = (void *)(lVar2 + uVar6 * uVar11);
          pvVar9 = (void *)0x0;
          if (pvVar7 != (void *)0x0) {
            pvVar9 = pvVar7;
          }
        }
        _memcpy(pvVar5,pvVar9,(ulong)uVar6);
        *(void **)(param_1[0xc] + 8 + uVar11 * 0x10) = pvVar5;
        *(int *)((long)param_1 + 0xa4) = *(int *)((long)param_1 + 0xa4) + 1;
        puVar1 = (uint *)(param_1[0xf] + (ulong)((uint)param_2 >> 5) * 4);
        *puVar1 = *puVar1 | 1 << ((byte)uVar11 & 0x1f);
        *(int *)(param_1 + 0x10) = (int)param_1[0x10] + 1;
        QWaitCondition::wakeAll();
      }
    }
  }
  return uVar10;
}


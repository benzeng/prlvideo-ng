
undefined8 * FUN_1001d7e96(undefined8 *param_1)

{
  long *plVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  xmlChar *pxVar10;
  undefined1 *puVar11;
  long lVar12;
  undefined1 *puVar13;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  undefined1 *local_40;
  
  puVar6 = (undefined8 *)(*(code *)_xmlMalloc)(0x60);
  if (puVar6 == (undefined8 *)0x0) {
    FUN_1001d7cf4(param_1,"compiling regexp");
    return (undefined8 *)0x0;
  }
  _memset(puVar6,0,0x60);
  *puVar6 = *param_1;
  *(undefined4 *)(puVar6 + 1) = *(undefined4 *)((long)param_1 + 0x4c);
  puVar6[2] = param_1[10];
  *(undefined4 *)(puVar6 + 3) = *(undefined4 *)((long)param_1 + 0x3c);
  puVar6[4] = param_1[8];
  *(undefined4 *)(puVar6 + 5) = *(undefined4 *)((long)param_1 + 0x5c);
  puVar6[6] = param_1[0xc];
  *(undefined4 *)(puVar6 + 7) = *(undefined4 *)(param_1 + 0xd);
  if (((((*(int *)(puVar6 + 7) != 0) && (*(int *)(puVar6 + 5) == 0)) &&
       (*(int *)((long)param_1 + 0x6c) == 0)) && ((puVar6[4] != 0 && (*(long *)puVar6[4] != 0)))) &&
     (*(int *)(*(long *)puVar6[4] + 4) == 5)) {
    local_60 = 0;
    local_5c = 0;
    lVar7 = (*(code *)_xmlMalloc)((long)*(int *)(puVar6 + 1) * 4);
    if (lVar7 == 0) {
      FUN_1001d7cf4(param_1,"compiling regexp");
      (*(code *)_xmlFree)(puVar6);
      return (undefined8 *)0x0;
    }
    for (local_68 = 0; local_68 < *(int *)(puVar6 + 1); local_68 = local_68 + 1) {
      if (*(long *)(puVar6[2] + (long)local_68 * 8) == 0) {
        *(undefined4 *)((long)local_68 * 4 + lVar7) = 0xffffffff;
      }
      else {
        *(int *)((long)local_68 * 4 + lVar7) = local_60;
        local_60 = local_60 + 1;
      }
    }
    lVar8 = (*(code *)_xmlMalloc)((long)*(int *)(puVar6 + 3) * 8);
    if (lVar8 == 0) {
      FUN_1001d7cf4(param_1,"compiling regexp");
      (*(code *)_xmlFree)(lVar7);
      (*(code *)_xmlFree)(puVar6);
      return (undefined8 *)0x0;
    }
    lVar9 = (*(code *)_xmlMalloc)((long)*(int *)(puVar6 + 3) * 4);
    if (lVar9 == 0) {
      FUN_1001d7cf4(param_1,"compiling regexp");
      (*(code *)_xmlFree)(lVar8);
      (*(code *)_xmlFree)(lVar7);
      (*(code *)_xmlFree)(puVar6);
      return (undefined8 *)0x0;
    }
    for (local_68 = 0; local_68 < *(int *)(puVar6 + 3); local_68 = local_68 + 1) {
      if ((*(int *)(*(long *)(puVar6[4] + (long)local_68 * 8) + 4) != 5) ||
         (*(int *)(*(long *)(puVar6[4] + (long)local_68 * 8) + 8) != 2)) {
        (*(code *)_xmlFree)(lVar7);
        (*(code *)_xmlFree)(lVar9);
        for (local_68 = 0; local_68 < local_5c; local_68 = local_68 + 1) {
          (*(code *)_xmlFree)(*(undefined8 *)((long)local_68 * 8 + lVar8));
        }
        (*(code *)_xmlFree)(lVar8);
        (*(code *)_xmlFree)(puVar6);
        return (undefined8 *)0x0;
      }
      pxVar10 = *(xmlChar **)(*(long *)(puVar6[4] + (long)local_68 * 8) + 0x18);
      for (local_64 = 0; local_64 < local_5c; local_64 = local_64 + 1) {
        iVar5 = _xmlStrEqual(*(xmlChar **)((long)local_64 * 8 + lVar8),pxVar10);
        if (iVar5 != 0) {
          *(int *)((long)local_68 * 4 + lVar9) = local_64;
          break;
        }
      }
      if (local_5c <= local_64) {
        *(int *)((long)local_68 * 4 + lVar9) = local_5c;
        pxVar10 = _xmlStrdup(pxVar10);
        *(xmlChar **)((long)local_5c * 8 + lVar8) = pxVar10;
        if (*(long *)((long)local_5c * 8 + lVar8) == 0) {
          for (local_68 = 0; local_68 < local_5c; local_68 = local_68 + 1) {
            (*(code *)_xmlFree)(*(undefined8 *)((long)local_68 * 8 + lVar8));
          }
          (*(code *)_xmlFree)(lVar9);
          (*(code *)_xmlFree)(lVar8);
          (*(code *)_xmlFree)(lVar7);
          (*(code *)_xmlFree)(puVar6);
          return (undefined8 *)0x0;
        }
        local_5c = local_5c + 1;
      }
    }
    puVar11 = (undefined1 *)(*(code *)_xmlMalloc)((long)((local_5c + 1) * (local_60 + 1)) * 4);
    if (puVar11 == (undefined1 *)0x0) {
      (*(code *)_xmlFree)(lVar7);
      (*(code *)_xmlFree)(lVar9);
      (*(code *)_xmlFree)(lVar8);
      (*(code *)_xmlFree)(puVar6);
      return (undefined8 *)0x0;
    }
    puVar13 = puVar11;
    for (lVar12 = (long)((local_5c + 1) * (local_60 + 1)) * 4; lVar12 != 0; lVar12 = lVar12 + -1) {
      *puVar13 = 0;
      puVar13 = puVar13 + 1;
    }
    local_40 = (undefined1 *)0x0;
    for (local_68 = 0; local_68 < *(int *)(puVar6 + 1); local_68 = local_68 + 1) {
      iVar5 = *(int *)((long)local_68 * 4 + lVar7);
      if (iVar5 != -1) {
        puVar4 = *(undefined4 **)(puVar6[2] + (long)local_68 * 8);
        *(undefined4 *)(puVar11 + (long)((local_5c + 1) * iVar5) * 4) = *puVar4;
        for (local_64 = 0; local_64 < (int)puVar4[5]; local_64 = local_64 + 1) {
          plVar1 = (long *)(*(long *)(puVar4 + 6) + (long)local_64 * 0x18);
          if (((int)plVar1[1] != -1) && (*plVar1 != 0)) {
            iVar2 = *(int *)((long)*(int *)*plVar1 * 4 + lVar9);
            if ((*(long *)(*plVar1 + 0x50) != 0) && (local_40 == (undefined1 *)0x0)) {
              local_40 = (undefined1 *)(*(code *)_xmlMalloc)((long)(local_60 * local_5c) * 8);
              if (local_40 == (undefined1 *)0x0) {
                FUN_1001d7cf4(param_1,"compiling regexp");
                break;
              }
              puVar13 = local_40;
              for (lVar12 = (long)(local_60 * local_5c) * 8; lVar12 != 0; lVar12 = lVar12 + -1) {
                *puVar13 = 0;
                puVar13 = puVar13 + 1;
              }
            }
            iVar3 = *(int *)((long)(int)plVar1[1] * 4 + lVar7);
            if (*(int *)(puVar11 + (long)((local_5c + 1) * iVar5 + iVar2) * 4 + 4) == 0) {
              *(int *)(puVar11 + (long)((local_5c + 1) * iVar5 + iVar2) * 4 + 4) = iVar3 + 1;
              if (local_40 != (undefined1 *)0x0) {
                *(undefined8 *)(local_40 + (long)(iVar5 * local_5c + iVar2) * 8) =
                     *(undefined8 *)(*plVar1 + 0x50);
              }
            }
            else if (iVar3 + 1 != *(int *)(puVar11 + (long)((local_5c + 1) * iVar5 + iVar2) * 4 + 4)
                    ) {
              *(undefined4 *)(puVar6 + 7) = 0;
              *(undefined4 *)(puVar6 + 7) = 0;
              if (local_40 != (undefined1 *)0x0) {
                (*(code *)_xmlFree)(local_40);
              }
              (*(code *)_xmlFree)(puVar11);
              (*(code *)_xmlFree)(lVar7);
              (*(code *)_xmlFree)(lVar9);
              for (local_68 = 0; local_68 < local_5c; local_68 = local_68 + 1) {
                (*(code *)_xmlFree)(*(undefined8 *)((long)local_68 * 8 + lVar8));
              }
              (*(code *)_xmlFree)(lVar8);
              goto LAB_1001d8843;
            }
          }
        }
      }
    }
    *(undefined4 *)(puVar6 + 7) = 1;
    if (puVar6[2] != 0) {
      for (local_68 = 0; local_68 < *(int *)(puVar6 + 1); local_68 = local_68 + 1) {
        FUN_1001d8c32(*(undefined8 *)(puVar6[2] + (long)local_68 * 8));
      }
      (*(code *)_xmlFree)(puVar6[2]);
    }
    puVar6[2] = 0;
    *(undefined4 *)(puVar6 + 1) = 0;
    if (puVar6[4] != 0) {
      for (local_68 = 0; local_68 < *(int *)(puVar6 + 3); local_68 = local_68 + 1) {
        FUN_1001d8aaa(*(undefined8 *)(puVar6[4] + (long)local_68 * 8));
      }
      (*(code *)_xmlFree)(puVar6[4]);
    }
    puVar6[4] = 0;
    *(undefined4 *)(puVar6 + 3) = 0;
    puVar6[8] = puVar11;
    puVar6[9] = local_40;
    puVar6[0xb] = lVar8;
    *(int *)(puVar6 + 10) = local_5c;
    *(int *)((long)puVar6 + 0x3c) = local_60;
    (*(code *)_xmlFree)(lVar7);
    (*(code *)_xmlFree)(lVar9);
  }
LAB_1001d8843:
  *param_1 = 0;
  *(undefined4 *)((long)param_1 + 0x4c) = 0;
  param_1[10] = 0;
  *(undefined4 *)((long)param_1 + 0x3c) = 0;
  param_1[8] = 0;
  *(undefined4 *)((long)param_1 + 0x5c) = 0;
  param_1[0xc] = 0;
  return puVar6;
}


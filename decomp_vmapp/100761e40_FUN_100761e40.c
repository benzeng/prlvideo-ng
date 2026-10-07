
long FUN_100761e40(int param_1,undefined8 *param_2,int param_3,long param_4,size_t param_5,
                  int *param_6)

{
  bool bVar1;
  ssize_t sVar2;
  int *piVar3;
  size_t sVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  void *pvVar8;
  void *pvVar9;
  uint *puVar10;
  long local_38;
  
  if (param_3 == 1) {
    pvVar8 = (void *)*param_2;
    sVar4 = param_2[1];
    local_38 = 0;
    while( true ) {
      while( true ) {
        sVar2 = _pread(param_1,pvVar8,sVar4,param_4);
        if (-1 < sVar2) break;
        piVar3 = ___error();
        if (*piVar3 != 4) {
          return -8;
        }
      }
      if (sVar2 == 0) break;
      local_38 = local_38 + sVar2;
      sVar4 = sVar4 - sVar2;
      if (sVar4 == 0) {
        return local_38;
      }
      if (2 < DAT_1011b55f8) {
        FUN_1008e3970("","HostFile",3,
                      "recovered partial read: fd %d, offs %llx, size %llx, res %llx",param_1,
                      param_4,sVar4,sVar2);
      }
      param_4 = param_4 + sVar2;
      pvVar8 = (void *)((long)pvVar8 + sVar2);
    }
    return local_38;
  }
  pvVar8 = _valloc(param_5);
  if (pvVar8 == (void *)0x0) {
    piVar3 = ___error();
    *piVar3 = 0xc;
    return -4;
  }
  if (param_6 != (int *)0x0) {
    *param_6 = *param_6 + 1;
  }
  local_38 = 0;
  pvVar9 = pvVar8;
LAB_100761f70:
  do {
    sVar2 = _pread(param_1,pvVar9,param_5,param_4);
    if (-1 < sVar2) {
      if (sVar2 != 0) {
        local_38 = local_38 + sVar2;
        param_5 = param_5 - sVar2;
        if (param_5 != 0) {
          if (2 < DAT_1011b55f8) {
            FUN_1008e3970("","HostFile",3,
                          "recovered partial read: fd %d, offs %llx, size %llx, res %llx",param_1,
                          param_4,param_5,sVar2);
          }
          param_4 = param_4 + sVar2;
          pvVar9 = (void *)((long)pvVar9 + sVar2);
          goto LAB_100761f70;
        }
      }
      lVar7 = local_38;
      if ((0 < local_38) && (0 < param_3)) {
        puVar10 = (uint *)(param_2 + 1);
        lVar6 = 1;
        pvVar9 = pvVar8;
        goto LAB_100762040;
      }
      break;
    }
    piVar3 = ___error();
    lVar7 = -8;
  } while (*piVar3 == 4);
  goto LAB_100762077;
  while( true ) {
    pvVar9 = (void *)((long)pvVar9 + uVar5);
    puVar10 = puVar10 + 4;
    bVar1 = param_3 <= lVar6;
    lVar6 = lVar6 + 1;
    local_38 = local_38 - uVar5;
    if (bVar1) break;
LAB_100762040:
    uVar5 = (ulong)*puVar10;
    _memcpy(*(void **)(puVar10 + -2),pvVar9,uVar5);
    if (local_38 - uVar5 == 0 || local_38 < (long)uVar5) break;
  }
LAB_100762077:
  _free(pvVar8);
  return lVar7;
}


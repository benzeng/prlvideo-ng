
undefined8
FUN_10040f290(undefined8 param_1,uint *param_2,long param_3,undefined8 param_4,long param_5)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  uint uVar4;
  undefined8 local_38;
  undefined8 local_30;
  int local_28;
  uint local_24;
  
  lVar3 = *(long *)(param_5 + 8);
  if ((*(int *)(lVar3 + 0x68) - *(int *)(lVar3 + 100) & *(uint *)(lVar3 + 0x70)) < *param_2) {
    lVar3 = *(long *)(param_5 + 8);
    uVar4 = *(int *)(lVar3 + 0x68) - *(int *)(lVar3 + 100) & *(uint *)(lVar3 + 0x70);
    *param_2 = uVar4;
  }
  else {
    uVar4 = *param_2;
  }
  if (uVar4 == 0) {
    *(undefined4 *)(param_3 + 0xc) = 0;
    *(undefined8 *)(param_3 + 0x10) = 0;
    uVar2 = 0xffffffff;
  }
  else {
    if ((*(char *)(param_5 + 0x40) == '\0') || (*(char *)(param_5 + 0x41) != '\0')) {
      FUN_1007d7220(*(long *)(param_5 + 8) + 0x5c,uVar4,&local_30,&local_24,&local_38,&local_28);
      *param_2 = local_24;
      if (*(char *)(param_5 + 0x40) != '\0') {
        lVar3 = 0;
        if ((*(char *)(param_5 + 0x31) == '\0') && (lVar3 = 0, *(char *)(param_5 + 0x32) != '\0')) {
          lVar3 = param_5 + 0x10;
        }
        FUN_10040e3c0(local_30,*(undefined4 *)(param_5 + 0x50),*(undefined4 *)(param_5 + 0x48),
                      local_30,*(undefined4 *)(param_5 + 0x4c),*(undefined4 *)(param_5 + 0x44),lVar3
                      ,*(undefined4 *)(*(long *)(param_5 + 8) + 8),local_24);
      }
      *(undefined8 *)(param_3 + 0x10) = local_30;
      lVar3 = *(long *)(param_5 + 8);
      *(uint *)(param_3 + 0xc) = *(int *)(lVar3 + 0x60) * local_24;
    }
    else {
      uVar1 = *(uint *)(param_5 + 0x54);
      if (uVar1 < uVar4) {
        *param_2 = uVar1;
        uVar4 = uVar1;
      }
      FUN_1007d7220(*(long *)(param_5 + 8) + 0x5c,uVar4,&local_30,&local_24,&local_38,&local_28);
      lVar3 = 0;
      if ((*(char *)(param_5 + 0x31) == '\0') && (lVar3 = 0, *(char *)(param_5 + 0x32) != '\0')) {
        lVar3 = param_5 + 0x10;
      }
      FUN_10040e3c0(*(undefined8 *)(param_5 + 0x38),*(undefined4 *)(param_5 + 0x50),
                    *(undefined4 *)(param_5 + 0x48),local_30,*(undefined4 *)(param_5 + 0x4c),
                    *(undefined4 *)(param_5 + 0x44),lVar3,
                    *(undefined4 *)(*(long *)(param_5 + 8) + 8),local_24);
      if (local_28 == 0) {
        local_28 = 0;
      }
      else {
        lVar3 = 0;
        if ((*(char *)(param_5 + 0x31) == '\0') && (lVar3 = 0, *(char *)(param_5 + 0x32) != '\0')) {
          lVar3 = param_5 + 0x10;
        }
        FUN_10040e3c0((ulong)(*(int *)(param_5 + 0x58) * local_24) + *(long *)(param_5 + 0x38),
                      *(undefined4 *)(param_5 + 0x50),*(undefined4 *)(param_5 + 0x48),local_38,
                      *(undefined4 *)(param_5 + 0x4c),*(undefined4 *)(param_5 + 0x44),lVar3,
                      *(undefined4 *)(*(long *)(param_5 + 8) + 8),local_28);
      }
      *(undefined8 *)(param_3 + 0x10) = *(undefined8 *)(param_5 + 0x38);
      local_24 = local_28 + local_24;
      *(uint *)(param_3 + 0xc) = *(int *)(param_5 + 0x58) * local_24;
      lVar3 = *(long *)(param_5 + 8);
    }
    *(uint *)(lVar3 + 100) = local_24 + *(int *)(lVar3 + 100) & *(uint *)(lVar3 + 0x70);
    uVar2 = 0;
  }
  return uVar2;
}


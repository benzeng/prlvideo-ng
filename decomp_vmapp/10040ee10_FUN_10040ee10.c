
/* WARNING: Type propagation algorithm not settling */

undefined1 FUN_10040ee10(long param_1,long param_2,uint *param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  bool bVar6;
  uint local_4c [3];
  undefined4 local_40;
  int local_3c;
  long local_38;
  
  if ((*(char *)(param_1 + 0x40) == '\0') || (*(char *)(param_1 + 0x41) != '\0')) {
    local_4c[1] = 1;
    local_40 = *(undefined4 *)(*(long *)(param_1 + 8) + 8);
    local_3c = *(int *)(*(long *)(param_1 + 8) + 0x60) * *param_3;
    local_38 = param_2;
    iVar1 = _AudioConverterFillComplexBuffer
                      (*(undefined8 *)(param_1 + 0x60),FUN_10040f080,param_1,param_3,local_4c + 1,0)
    ;
    if (1 < iVar1 + 1U) {
      iVar2 = FUN_1008e38f0(&DAT_101119cd0);
      if (iVar2 != 0) {
        FUN_1008e3970("","PrlAudioCore",0,"Failed to convert audio data (%d)",iVar1);
        return 0;
      }
      return 0;
    }
    if (*(char *)(param_1 + 0x40) != '\0') {
      lVar4 = 0;
      if ((*(char *)(param_1 + 0x31) == '\0') && (lVar4 = 0, *(char *)(param_1 + 0x32) != '\0')) {
        lVar4 = param_1 + 0x10;
      }
      FUN_10040e3c0(param_2,*(undefined4 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x48),param_2,
                    *(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x44),lVar4,
                    *(undefined4 *)(*(long *)(param_1 + 8) + 8),*param_3);
    }
    uVar3 = *param_3;
  }
  else {
    uVar3 = 0;
    uVar5 = 0;
    if (*param_3 != 0) {
      lVar4 = *(long *)(param_1 + 8);
      uVar3 = *param_3;
      while( true ) {
        local_4c[0] = *(uint *)(param_1 + 0x54);
        if (uVar3 <= *(uint *)(param_1 + 0x54)) {
          local_4c[0] = uVar3;
        }
        local_4c[1] = 1;
        local_40 = *(undefined4 *)(lVar4 + 8);
        local_3c = local_4c[0] * *(int *)(param_1 + 0x58);
        local_38 = *(undefined8 *)(param_1 + 0x38);
        iVar1 = _AudioConverterFillComplexBuffer
                          (*(undefined8 *)(param_1 + 0x60),FUN_10040f080,param_1,local_4c,
                           local_4c + 1,0);
        if (1 < iVar1 + 1U) {
          iVar2 = FUN_1008e38f0(&DAT_101119cc8);
          if (iVar2 != 0) {
            FUN_1008e3970("","PrlAudioCore",0,"Failed to convert audio data (%d)",iVar1);
            return 0;
          }
          return 0;
        }
        uVar5 = uVar3;
        if (local_4c[0] == 0) break;
        lVar4 = 0;
        if ((*(char *)(param_1 + 0x31) == '\0') && (lVar4 = 0, *(char *)(param_1 + 0x32) != '\0')) {
          lVar4 = param_1 + 0x10;
        }
        FUN_10040e3c0(param_2,*(undefined4 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x48),
                      *(undefined8 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x4c),
                      *(undefined4 *)(param_1 + 0x44),lVar4,
                      *(undefined4 *)(*(long *)(param_1 + 8) + 8),local_4c[0]);
        uVar5 = uVar3 - local_4c[0];
        lVar4 = *(long *)(param_1 + 8);
        if ((iVar1 == -1) ||
           (param_2 = param_2 + (ulong)(*(int *)(lVar4 + 0x60) * local_4c[0]),
           bVar6 = uVar3 == local_4c[0], uVar3 = uVar5, bVar6)) break;
      }
      uVar3 = *param_3;
    }
    uVar3 = uVar3 - uVar5;
    *param_3 = uVar3;
  }
  if (uVar3 != 0) {
    lVar4 = *(long *)(param_1 + 8);
    *(uint *)(lVar4 + 0x68) = uVar3 + *(int *)(lVar4 + 0x68) & *(uint *)(lVar4 + 0x70);
  }
  return 1;
}


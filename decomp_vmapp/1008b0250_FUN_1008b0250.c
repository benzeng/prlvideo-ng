
int * FUN_1008b0250(undefined8 *param_1,long *param_2,long param_3,int param_4,undefined4 param_5)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  long lVar4;
  void *pvVar5;
  int iVar6;
  undefined4 uVar7;
  void *local_b8;
  int local_b0;
  undefined4 local_ac;
  uint local_a8;
  int iStack_a4;
  undefined4 local_a0;
  long local_98;
  long local_90;
  void *local_88;
  long *local_80;
  undefined1 local_70 [4];
  int local_6c;
  long local_68;
  void *local_60;
  undefined8 local_58;
  long lStack_50;
  undefined8 local_48;
  int *local_38;
  
  if (((param_1 == (undefined8 *)0x0) || (piVar3 = (int *)*param_1, piVar3 == (int *)0x0)) &&
     (piVar3 = (int *)FUN_1008afd00(), piVar3 == (int *)0x0)) {
    return (int *)0x0;
  }
  local_60 = (void *)*param_2;
  uVar1 = FUN_1008af630(&local_60,&local_68,&local_6c,local_70,param_3);
  uVar7 = 0x66;
  if (((uVar1 & 0x80) == 0) && (uVar7 = 0xa8, local_6c == param_4)) {
    if ((uVar1 & 0x20) != 0) {
      local_b8 = local_60;
      local_98 = local_68;
      iVar6 = 0;
      local_90 = 0;
      if (param_3 != 0) {
        local_90 = (long)local_60 + param_3;
      }
      local_38 = (int *)0x0;
      local_58 = 0;
      lStack_50 = 0;
      local_48 = 0;
      local_a8 = uVar1;
      iStack_a4 = param_4;
      local_a0 = param_5;
      local_80 = param_2;
      do {
        if ((local_a8 & 1) == 0) {
          if (local_98 < 1) {
LAB_1008b04b1:
            iVar2 = FUN_1008af9d0(&local_b8);
            if (iVar2 == 0) goto LAB_1008b05dd;
            *piVar3 = iVar6;
            if (*(long *)(piVar3 + 2) != 0) {
              FUN_10081e1a0();
            }
            *(long *)(piVar3 + 2) = lStack_50;
            if (local_38 != (int *)0x0) {
              FUN_1008afd70();
            }
            local_60 = local_b8;
            goto LAB_1008b05b9;
          }
        }
        else {
          local_b0 = FUN_1008af5f0(&local_b8,local_90 - (long)local_b8);
          if (local_b0 != 0) goto LAB_1008b04b1;
        }
        local_88 = local_b8;
        lVar4 = FUN_1008b0250(&local_38,&local_b8,local_90 - (long)local_b8,iStack_a4,local_a0);
        if (lVar4 == 0) {
          local_ac = 0xd;
          goto LAB_1008b05dd;
        }
        iVar2 = FUN_10087ce60(&local_58,(long)*local_38 + (long)iVar6);
        if (iVar2 == 0) goto LAB_1008b052a;
        _memcpy((void *)(iVar6 + lStack_50),*(void **)(local_38 + 2),(long)*local_38);
        if ((local_a8 & 1) == 0) {
          local_98 = (long)local_88 + (local_98 - (long)local_b8);
        }
        iVar6 = iVar6 + *local_38;
      } while( true );
    }
    if (local_68 == 0) {
      lVar4 = 0;
      if (*(long *)(piVar3 + 2) == 0) {
        pvVar5 = (void *)0x0;
      }
      else {
        FUN_10081e1a0();
        pvVar5 = (void *)0x0;
        lVar4 = local_68;
      }
      goto LAB_1008b05a9;
    }
    pvVar5 = *(void **)(piVar3 + 2);
    if (*piVar3 < local_68) {
      if (pvVar5 != (void *)0x0) {
        FUN_10081e1a0(pvVar5);
      }
LAB_1008b0543:
      pvVar5 = (void *)FUN_10081ddd0((int)local_68 + 1,"a_bytes.c",0xcd);
      uVar7 = 0x41;
      if (pvVar5 == (void *)0x0) goto LAB_1008b0618;
    }
    else if (pvVar5 == (void *)0x0) goto LAB_1008b0543;
    _memcpy(pvVar5,local_60,(long)(int)local_68);
    *(undefined1 *)((long)pvVar5 + local_68) = 0;
    local_60 = (void *)((long)local_60 + local_68);
    lVar4 = local_68;
LAB_1008b05a9:
    *piVar3 = (int)lVar4;
    *(void **)(piVar3 + 2) = pvVar5;
    piVar3[1] = param_4;
LAB_1008b05b9:
    if (param_1 != (undefined8 *)0x0) {
      *param_1 = piVar3;
    }
    *param_2 = (long)local_60;
    return piVar3;
  }
  goto LAB_1008b0622;
LAB_1008b052a:
  local_ac = 7;
LAB_1008b05dd:
  FUN_100887ce0(0xd,0x69,local_ac,"a_bytes.c",300);
  if (local_38 != (int *)0x0) {
    FUN_1008afd70();
  }
  if (lStack_50 != 0) {
    FUN_10081e1a0();
  }
  uVar7 = 0;
LAB_1008b0618:
  if (piVar3 == (int *)0x0) goto LAB_1008b063f;
LAB_1008b0622:
  if ((param_1 == (undefined8 *)0x0) || ((int *)*param_1 != piVar3)) {
    FUN_1008afd70();
  }
LAB_1008b063f:
  FUN_100887ce0(0xd,0x8f,uVar7,"a_bytes.c",0xe9);
  return (int *)0x0;
}


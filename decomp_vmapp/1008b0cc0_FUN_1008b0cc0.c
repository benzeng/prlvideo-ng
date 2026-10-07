
int FUN_1008b0cc0(int *param_1,undefined8 *param_2,void *param_3,int param_4)

{
  int iVar1;
  long lVar2;
  int *piVar3;
  undefined8 uVar4;
  long lVar5;
  long local_88;
  int local_80;
  undefined4 local_7c;
  byte local_78;
  long local_68;
  long local_60;
  long local_58;
  long *local_50;
  undefined4 local_48;
  long local_40;
  long local_38;
  
  lVar5 = 0;
  if (*param_1 == 0x10) {
    piVar3 = *(int **)(param_1 + 2);
    lVar5 = 0;
    if (piVar3 != (int *)0x0) {
      local_88 = *(long *)(piVar3 + 2);
      local_40 = (long)*piVar3;
      local_50 = &local_38;
      local_60 = local_88 + local_40;
      local_7c = 0x6d;
      local_38 = local_88;
      iVar1 = FUN_1008afa40(&local_88,&local_40);
      if (iVar1 == 0) {
        local_48 = 0xa3;
        lVar5 = 0;
      }
      else {
        local_58 = local_88;
        lVar2 = FUN_1008a81c0(0,&local_88,local_68);
        lVar5 = 0;
        if (lVar2 != 0) {
          local_68 = (local_58 - local_88) + local_68;
          local_58 = local_88;
          piVar3 = (int *)FUN_1008a8340(0,&local_88);
          lVar5 = lVar2;
          if (piVar3 != (int *)0x0) {
            local_68 = (local_58 - local_88) + local_68;
            if ((local_78 & 1) == 0) {
              if (0 < local_68) goto LAB_1008b0e40;
LAB_1008b0e03:
              if (param_2 != (undefined8 *)0x0) {
                uVar4 = FUN_10089b410(lVar2);
                *param_2 = uVar4;
              }
              iVar1 = *piVar3;
              if (param_3 != (void *)0x0) {
                if (iVar1 <= param_4) {
                  param_4 = iVar1;
                }
                _memcpy(param_3,*(void **)(piVar3 + 2),(long)param_4);
              }
            }
            else {
              local_80 = FUN_1008af5f0(&local_88);
              if (local_80 != 0) goto LAB_1008b0e03;
LAB_1008b0e40:
              FUN_100887ce0(0xd,0x86,0x6d,"evp_asn1.c",0xbc);
              iVar1 = -1;
            }
            FUN_1008afd70(piVar3);
            goto LAB_1008b0dd5;
          }
        }
      }
    }
  }
  FUN_100887ce0(0xd,0x86,0x6d,"evp_asn1.c",0xbc);
  iVar1 = -1;
LAB_1008b0dd5:
  if (lVar5 != 0) {
    FUN_1008afd70(lVar5);
  }
  return iVar1;
}


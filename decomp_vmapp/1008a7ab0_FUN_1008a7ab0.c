
undefined8 FUN_1008a7ab0(int *param_1,undefined8 *param_2,char *param_3,uint param_4,int param_5)

{
  byte in_AL;
  byte bVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  byte local_58;
  char *local_50;
  char *local_48;
  char *local_40;
  undefined1 local_38 [4];
  undefined1 local_34 [4];
  
  pcVar10 = (char *)*param_2;
  if ((param_1 == (int *)0x0) && ((param_4 & 1) == 0)) {
    *param_2 = pcVar10 + (long)param_3;
    return 1;
  }
  local_50 = pcVar10;
  if (0 < (long)param_3) {
    pcVar8 = param_3;
    pcVar9 = pcVar10;
    if (param_5 < 5) {
      local_58 = in_AL;
      do {
        if (((1 < (long)pcVar8) && (*pcVar9 == '\0')) && (pcVar9[1] == '\0')) goto LAB_1008a7e28;
        local_48 = pcVar9;
        bVar1 = FUN_1008af630(&local_48,&local_40,local_34,local_38,pcVar8);
        if ((bVar1 & 0x80) == 0) {
          in_AL = bVar1 & 1;
          if ((bVar1 & 1) != 0) {
            local_40 = pcVar9 + ((long)pcVar8 - (long)local_48);
          }
          local_58 = bVar1 & 0x20;
          local_50 = local_48;
          bVar4 = false;
          param_3 = local_40;
          pcVar10 = local_48;
          pcVar11 = local_48;
        }
        else {
          FUN_100887ce0(0xd,0x68,0x66,"tasn_dec.c",0x4a5);
          bVar4 = true;
          pcVar11 = pcVar9;
        }
        if (bVar4) goto LAB_1008a7dce;
        if (local_58 == 0) {
          if (param_3 != (char *)0x0) {
            if (param_1 != (int *)0x0) {
              iVar3 = *param_1;
              iVar2 = FUN_10087ce60(param_1,param_3 + iVar3);
              if (iVar2 == 0) goto LAB_1008a7e0a;
              _memcpy((void *)((long)iVar3 + *(long *)(param_1 + 2)),pcVar11,(size_t)param_3);
            }
            local_50 = pcVar11 + (long)param_3;
            pcVar10 = local_50;
            pcVar11 = local_50;
          }
        }
        else {
          iVar3 = FUN_1008a7ab0(param_1,&local_50,param_3,(int)(char)in_AL,param_5 + 1);
          pcVar10 = local_50;
          pcVar11 = local_50;
          if (iVar3 == 0) {
            return 0;
          }
        }
        pcVar8 = pcVar9 + ((long)pcVar8 - (long)pcVar11);
        pcVar9 = pcVar11;
      } while (0 < (long)pcVar8);
    }
    else {
      do {
        if (((1 < (long)pcVar8) && (*pcVar9 == '\0')) && (pcVar9[1] == '\0')) goto LAB_1008a7e28;
        local_48 = pcVar9;
        bVar1 = FUN_1008af630(&local_48,&local_40,local_34,local_38,pcVar8);
        if ((bVar1 & 0x80) == 0) {
          if ((bVar1 & 1) != 0) {
            local_40 = pcVar9 + ((long)pcVar8 - (long)local_48);
          }
          bVar1 = bVar1 & 0x20;
          local_50 = local_48;
          bVar4 = false;
          param_3 = local_40;
          pcVar10 = local_48;
          pcVar11 = local_48;
        }
        else {
          FUN_100887ce0(0xd,0x68,0x66,"tasn_dec.c",0x4a5);
          bVar4 = true;
          bVar1 = 0;
          pcVar11 = pcVar9;
        }
        if (bVar4) goto LAB_1008a7dce;
        if (bVar1 != 0) {
          uVar6 = 0x6a;
          uVar5 = 0xc5;
          uVar7 = 0x447;
          goto LAB_1008a7e64;
        }
        if (param_3 != (char *)0x0) {
          if (param_1 != (int *)0x0) {
            iVar3 = *param_1;
            iVar2 = FUN_10087ce60(param_1,param_3 + iVar3);
            if (iVar2 == 0) goto LAB_1008a7e0a;
            _memcpy((void *)((long)iVar3 + *(long *)(param_1 + 2)),pcVar11,(size_t)param_3);
          }
          pcVar10 = pcVar11 + (long)param_3;
          pcVar11 = pcVar10;
          local_50 = pcVar10;
        }
        pcVar8 = pcVar9 + ((long)pcVar8 - (long)pcVar11);
        pcVar9 = pcVar11;
      } while (0 < (long)pcVar8);
    }
  }
  if ((param_4 & 1) == 0) goto LAB_1008a7e3a;
  uVar6 = 0x6a;
  uVar5 = 0x89;
  uVar7 = 0x451;
LAB_1008a7e64:
  FUN_100887ce0(0xd,uVar6,uVar5,"tasn_dec.c",uVar7);
  return 0;
LAB_1008a7e28:
  pcVar10 = pcVar9 + 2;
  if ((param_4 & 1) != 0) {
LAB_1008a7e3a:
    *param_2 = pcVar10;
    return 1;
  }
  uVar6 = 0x6a;
  uVar5 = 0x9f;
  uVar7 = 0x437;
  local_50 = pcVar10;
  goto LAB_1008a7e64;
LAB_1008a7dce:
  uVar6 = 0x6a;
  uVar5 = 0x3a;
  uVar7 = 0x440;
  goto LAB_1008a7e64;
LAB_1008a7e0a:
  uVar6 = 0x8c;
  uVar5 = 0x41;
  uVar7 = 0x45e;
  goto LAB_1008a7e64;
}


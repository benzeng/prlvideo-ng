
undefined4 FUN_1004a5b40(long param_1,long param_2,long *param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  int *piVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  uint *puVar7;
  undefined4 *puVar8;
  long lVar9;
  undefined4 uVar10;
  undefined1 local_60 [8];
  uint *local_58;
  undefined1 local_50 [8];
  uint *local_48;
  undefined1 local_40 [8];
  uint *local_38;
  
  if (*(short *)(param_2 + 0x16) != 1) {
    return 0xf0000003;
  }
  lVar6 = FUN_1002a6120(param_2,0,1);
  if ((lVar6 == 0) || (*(uint *)(lVar6 + 8) < 0x800)) {
    if (DAT_1011b55f8 < 1) {
      return 0xf0000003;
    }
    FUN_1008e3970("SIAHOST","SIAServer",1,"kSIACmd_WaitCommand command: invalid buffer size");
    return 0xf0000003;
  }
  QMutex::lock();
  if ((*(long *)(param_1 + 0x48) != 0) && (*param_3 = *(long *)(param_1 + 0x48), 0 < DAT_1011b55f8))
  {
    FUN_1008e3970("SIAHOST","SIAServer",1,"cancelled old kSIACmd_WaitCommand command");
  }
  puVar7 = *(uint **)(param_1 + 0x58);
  if (puVar7[3] == puVar7[2]) {
    *(long *)(param_1 + 0x48) = param_2;
    uVar10 = 0xffffffff;
  }
  else {
    puVar1 = (undefined8 *)(param_1 + 0x58);
    *(undefined8 *)(param_1 + 0x48) = 0;
    if (1 < *puVar7) {
      FUN_1004a8500(puVar1,puVar7[1]);
      puVar7 = (uint *)*puVar1;
    }
    piVar3 = *(int **)(puVar7 + (long)(int)puVar7[2] * 2 + 4);
    if (*piVar3 == 2) {
      iVar5 = piVar3[4];
      lVar6 = *(long *)(piVar3 + 2);
      lVar4 = *(long *)(lVar6 + 0x10);
      uVar2 = *(uint *)(lVar6 + 4);
      puVar8 = (undefined4 *)FUN_1002a6010(param_2);
      *puVar8 = 0x20000;
      puVar8[1] = 2;
      puVar8[2] = iVar5;
      puVar8[3] = uVar2 & 0xffffff;
      lVar9 = FUN_1002a6120(param_2,0,1);
      if (*(uint *)(lVar9 + 8) < uVar2) {
        iVar5 = *(int *)(param_1 + 0x50) + 1;
        *(int *)(param_1 + 0x50) = iVar5;
        uVar10 = 0xf0000009;
        if (iVar5 == 2) {
          *(undefined4 *)(param_1 + 0x50) = 0;
          local_38 = *(uint **)(param_1 + 0x58);
          if (1 < *local_38) {
            FUN_1004a8500(puVar1,local_38[1]);
            local_38 = (uint *)*puVar1;
          }
          local_38 = local_38 + (long)(int)local_38[2] * 2 + 4;
          FUN_1004a86c0(local_40,puVar1,&local_38);
        }
        goto LAB_1004a5dd0;
      }
      FUN_1002a5a50(lVar9,0,lVar6 + lVar4,uVar2);
      *(uint *)(lVar9 + 0x10) = uVar2;
      *(undefined4 *)(param_1 + 0x50) = 0;
      local_48 = *(uint **)(param_1 + 0x58);
      if (1 < *local_48) {
        FUN_1004a8500(puVar1,local_48[1]);
        local_48 = (uint *)*puVar1;
      }
      local_48 = local_48 + (long)(int)local_48[2] * 2 + 4;
      FUN_1004a86c0(local_50,puVar1,&local_48);
    }
    else {
      puVar8 = (undefined4 *)FUN_1002a6010(param_2);
      *puVar8 = 0x20000;
      puVar8[1] = 4;
      puVar8[2] = 0;
      puVar8[3] = 0;
      lVar6 = FUN_1002a6120(param_2,0,1);
      *(undefined4 *)(lVar6 + 0x10) = 0;
      local_58 = (uint *)*puVar1;
      if (1 < *local_58) {
        FUN_1004a8500(puVar1,local_58[1]);
        local_58 = (uint *)*puVar1;
      }
      local_58 = local_58 + (long)(int)local_58[2] * 2 + 4;
      FUN_1004a86c0(local_60,puVar1,&local_58);
    }
    uVar10 = 0;
  }
LAB_1004a5dd0:
  QMutex::unlock();
  return uVar10;
}


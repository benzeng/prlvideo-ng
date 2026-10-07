
void FUN_10040e590(undefined8 *param_1,int *param_2,double *param_3,char param_4)

{
  uint uVar1;
  int iVar2;
  double *pdVar3;
  void *pvVar4;
  int iVar5;
  undefined8 *puVar6;
  int *piVar7;
  double *pdVar8;
  uint uVar9;
  bool bVar10;
  double local_58;
  undefined4 local_50;
  undefined4 local_4c;
  int local_48;
  undefined4 local_44;
  int local_40;
  uint local_3c;
  undefined4 local_38;
  
  *param_1 = &PTR____cxa_pure_virtual_100bbffa0;
  param_1[1] = param_2;
  *(undefined1 *)((long)param_1 + 0x32) = 1;
  *(undefined2 *)(param_1 + 6) = 0x101;
  local_3c = param_2[2];
  if (local_3c != 0) {
    puVar6 = param_1 + 2;
    piVar7 = param_2 + 0xc;
    uVar9 = local_3c;
    do {
      uVar1 = piVar7[-8];
      bVar10 = *piVar7 != 0;
      if ((ulong)uVar1 == 0) {
        *(undefined4 *)puVar6 = 0x3f800000;
      }
      else {
        *(undefined1 *)((long)param_1 + 0x31) = 0;
        if (uVar1 < 0x1f) {
          *(undefined4 *)puVar6 = (&DAT_100b40a90)[uVar1];
        }
        else {
          *(undefined4 *)puVar6 = 0;
          bVar10 = true;
        }
      }
      if (*(char *)(param_1 + 6) == '\0') {
        bVar10 = false;
      }
      *(bool *)(param_1 + 6) = bVar10;
      puVar6 = (undefined8 *)((long)puVar6 + 4);
      piVar7 = piVar7 + 1;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  *param_1 = &PTR_FUN_100bc00c0;
  param_1[7] = 0;
  *(undefined4 *)((long)param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[0xc] = 0;
  local_50 = 0x6c70636d;
  local_4c = 9;
  local_38 = 0x20;
  local_58 = (double)(uint)param_2[3];
  local_44 = 1;
  local_48 = (local_3c & 0x7ffffff) << 2;
  pdVar8 = &local_58;
  pdVar3 = param_3;
  if (param_4 == '\0') {
    pdVar8 = param_3;
    pdVar3 = &local_58;
  }
  local_40 = local_48;
  iVar2 = _AudioConverterNew(pdVar3,pdVar8,param_1 + 0xc);
  if (iVar2 == 0) {
    bVar10 = param_4 != '\0';
    pdVar3 = (double *)(param_2 + 1);
    if (bVar10) {
      pdVar3 = param_3 + 4;
    }
    *(int *)((long)param_1 + 0x44) = *(int *)pdVar3;
    pdVar3 = param_3 + 4;
    if (bVar10) {
      pdVar3 = (double *)(param_2 + 1);
    }
    *(int *)(param_1 + 9) = *(int *)pdVar3;
    iVar5 = 2;
    iVar2 = *param_2;
    if (bVar10) {
      iVar5 = *param_2;
      iVar2 = 2;
    }
    *(int *)((long)param_1 + 0x4c) = iVar2;
    *(int *)(param_1 + 10) = iVar5;
    uVar9 = 4;
    if (param_2[1] != 0x18) {
      uVar9 = (uint)param_2[1] >> 3;
    }
    uVar1 = *(uint *)(param_3 + 4);
    *(bool *)((long)param_1 + 0x41) = uVar9 == uVar1 >> 3;
    if (*param_2 == 2) {
      *(undefined1 *)(param_1 + 8) = 0;
    }
    else {
      iVar2 = (uVar1 >> 3) * param_2[2];
      *(int *)(param_1 + 0xb) = iVar2;
      uVar9 = param_2[3];
      *(uint *)((long)param_1 + 0x54) = uVar9 / 100;
      pvVar4 = operator_new__((ulong)(iVar2 * (uVar9 / 100)));
      param_1[7] = pvVar4;
      *(undefined1 *)(param_1 + 8) = 1;
    }
  }
  else {
    FUN_1008e3970("","PrlAudioCore",0,"Failed to create the audio converter: %d");
    param_1[0xc] = 0;
  }
  return;
}


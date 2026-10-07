
void FUN_100298ab0(undefined8 *param_1,undefined8 param_2,ulong param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  undefined8 uVar7;
  char *pcVar8;
  int iVar9;
  uint uVar10;
  bool bVar11;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  FUN_1002578b0(param_1,3,param_3,0);
  *param_1 = &PTR_FUN_100bb18c0;
  param_1[1] = &PTR_metaObject_100bb19c0;
  param_1[0xd] = &PTR_FUN_100bb1a38;
  *(undefined1 *)(param_1 + 0xe) = 1;
  *(undefined8 *)((long)param_1 + 0x74) = 0x1f40000000a;
  QMutex::QMutex((QMutex *)(param_1 + 0x12),0);
  *(undefined4 *)((long)param_1 + 0xac) = 0;
  *(undefined1 *)(param_1 + 0x16) = 0;
  *(undefined1 *)(param_1 + 0x15) = 0;
  param_1[0x14] = 0;
  param_1[0x13] = 0;
  param_1[0x21] = param_2;
  QMutex::QMutex((QMutex *)(param_1 + 0x22),0);
  param_1[0x23] = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  param_1[0x25] = 0;
  lVar5 = DAT_1011c3698;
  lVar4 = FUN_1002f0000(3,0,0xffff);
  param_1[0x20] = lVar4;
  if (lVar4 == 0) {
    FUN_1008e3970("AudioAS","LocalDevices",0,"Failed to open sound mainqueue");
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
    FUN_100408ff0(lVar5 + 0x10b0,0x80000001,&local_48);
    FUN_10002d9d0(&local_48);
    return;
  }
  CVmConfiguration::getVmSettings();
  CVmSettings::getVmCommonOptions();
  CVmCommonOptions::getOsType();
  iVar1 = 0xffff;
  if ((*(byte *)(*(long *)(lVar5 + 0x109c8) + 499) & 2) == 0) {
    iVar1 = FUN_100060640();
  }
  uVar7 = 0xa971;
  if (iVar1 == 0) {
    uVar7 = 1;
  }
  uVar2 = FUN_1007da300("devices.audio.pv_flags",uVar7);
  lVar4 = FUN_100257d80(param_1);
  *(undefined4 *)(lVar4 + 0x31c04) = uVar2;
  iVar1 = FUN_100060640();
  uVar7 = 0xa971;
  if (iVar1 == 0) {
    uVar7 = 1;
  }
  uVar3 = FUN_1007da300("devices.audio.pv_flags",uVar7);
  uVar10 = 0;
  if ((uVar3 & 1) != 0) {
    uVar10 = uVar3;
  }
  if ((int)param_3 == 1) {
    uVar3 = uVar10 & 0xc000;
    if (uVar3 == 0xc000) {
      iVar9 = 0x5dc00;
    }
    else if (uVar3 == 0x8000) {
      iVar9 = 0x2ee00;
    }
    else {
      iVar9 = 48000;
      if (uVar3 == 0x4000) {
        iVar9 = 96000;
      }
    }
    iVar6 = 6;
    if ((uVar10 & 0x20) == 0) {
      iVar6 = (uVar10 >> 3 & 2) + 2;
    }
    iVar1 = 8;
    if ((uVar10 & 0x40) == 0) {
      iVar1 = iVar6;
    }
    bVar11 = (uVar10 & 0xf00) != 0;
    iVar6 = bVar11 + 2 + (uint)bVar11;
    pcVar8 = "pcm_out";
    uVar3 = 0x400000;
  }
  else {
    uVar3 = 0;
    if ((int)param_3 != 0) goto LAB_100298dac;
    uVar10 = uVar10 & 0x3000;
    pcVar8 = "pcm_in";
    uVar3 = 0x80000;
    iVar1 = 2;
    if (uVar10 == 0x3000) {
      iVar9 = 0x5dc00;
      iVar6 = 2;
    }
    else if (uVar10 == 0x2000) {
      iVar9 = 0x2ee00;
      iVar6 = 2;
    }
    else {
      iVar9 = 48000;
      if (uVar10 == 0x1000) {
        iVar9 = 96000;
        iVar6 = 2;
      }
      else {
        iVar6 = 2;
      }
    }
  }
  uVar10 = iVar9 * iVar1 * iVar6;
  if (uVar3 < uVar10) {
    uVar10 = uVar3;
  }
  if (1 < DAT_1011b55f8) {
    FUN_1008e3970("AudioAS","LocalDevices",2,"[sound.%s] buffer size: allocated = %u, maximum = %u",
                  pcVar8,uVar10,uVar3);
  }
  uVar3 = uVar10 + 0xfff & 0xfffff000;
LAB_100298dac:
  lVar4 = FUN_1000e9a40(*(undefined8 *)(lVar5 + 0x1158),600,0);
  if (lVar4 == 0) {
    FUN_1000e9b50(*(undefined8 *)(lVar5 + 0x1158),600,3,uVar3 + 0x1000,0,0x805);
  }
  FUN_1000a4cd0(lVar5,600,param_3 & 0xffffffff,0);
  lVar5 = FUN_1000e99d0(*(undefined8 *)(lVar5 + 0x1158),600,param_3 & 0xffff);
  param_1[0x14] = lVar5;
  *(uint *)(lVar5 + 0x58) = uVar3;
  return;
}


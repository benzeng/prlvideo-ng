
void FUN_1002a8320(undefined8 *param_1,long param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  QThread *this;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  bool bVar9;
  char local_a8 [64];
  undefined8 local_68;
  long local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  FUN_1002a4f20();
  *param_1 = &PTR_FUN_100bb2ca0;
  *(undefined4 *)(param_1 + 0x108) = 0;
  *(undefined1 *)((long)param_1 + 0x844) = 0;
  param_1[0x10b] = 0;
  param_1[0x10a] = 0;
  param_1[0x109] = 0;
  *(undefined4 *)(param_1 + 0x10c) = 0xffffffff;
  param_1[0x10d] = 0;
  *(undefined1 *)(param_1 + 0x10e) = 0;
  QMutex::QMutex((QMutex *)(param_1 + 0x10f));
  QMutex::QMutex((QMutex *)(param_1 + 0x110));
  QWaitCondition::QWaitCondition((QWaitCondition *)(param_1 + 0x111));
  QWaitCondition::QWaitCondition((QWaitCondition *)(param_1 + 0x112));
  QWaitCondition::QWaitCondition((QWaitCondition *)(param_1 + 0x113));
  this = operator_new(0x18);
  QThread::QThread(this,(QObject *)0x0);
  *(undefined ***)this = &PTR_metaObject_100bb2c28;
  *(undefined8 **)(this + 0x10) = param_1;
  param_1[0x114] = this;
  param_1[0x117] = PTR_shared_null_100ba20d0;
  *(undefined4 *)(param_1 + 0x118) = 0xffffffff;
  param_1[0x11b] = 0;
  *(undefined2 *)(param_1 + 0x11a) = 0;
  param_1[0x119] = 0;
  param_1[0x11c] = param_1 + 0x11b;
  param_1[0x11e] = &PTR_FUN_100bb2bf0;
  param_1[0x11f] = param_1;
  param_1[0x121] = 0;
  param_1[0x120] = 0;
  uVar4 = FUN_1000e99d0(*(undefined8 *)(param_2 + 0x1158),0x67,0);
  param_1[0x122] = uVar4;
  uVar4 = FUN_1000e99d0(*(undefined8 *)(param_2 + 0x1158),0x68,0);
  param_1[0x123] = uVar4;
  lVar5 = *(long *)(*(long *)(param_2 + 0x1940) + 0x60);
  param_1[0x124] = *(undefined8 *)(lVar5 + 0x28);
  *(undefined4 *)(param_1 + 0x125) = *(undefined4 *)(lVar5 + 0x18);
  *(undefined4 *)(param_1 + 0x1c1) = 0;
  *(undefined4 *)((long)param_1 + 0xe0c) = 0;
  *(undefined4 *)(param_1 + 0x242) = 0;
  *(undefined4 *)((long)param_1 + 0x1214) = 0;
  *(undefined4 *)(param_1 + 0x2df) = 0;
  *(undefined4 *)((long)param_1 + 0x16fc) = 0;
  *(undefined4 *)(param_1 + 0x360) = 0;
  *(undefined4 *)((long)param_1 + 0x1b04) = 0;
  *(undefined4 *)(param_1 + 0x3fd) = 0;
  *(undefined4 *)((long)param_1 + 0x1fec) = 0;
  *(undefined4 *)(param_1 + 0x47e) = 0;
  *(undefined4 *)((long)param_1 + 0x23f4) = 0;
  *(undefined4 *)(param_1 + 0x51b) = 0;
  *(undefined4 *)((long)param_1 + 0x28dc) = 0;
  *(undefined4 *)(param_1 + 0x59c) = 0;
  *(undefined4 *)((long)param_1 + 0x2ce4) = 0;
  *(undefined4 *)(param_1 + 0x639) = 0;
  *(undefined4 *)((long)param_1 + 0x31cc) = 0;
  *(undefined4 *)(param_1 + 0x6ba) = 0;
  *(undefined4 *)((long)param_1 + 0x35d4) = 0;
  *(undefined4 *)(param_1 + 0x757) = 0;
  *(undefined4 *)((long)param_1 + 0x3abc) = 0;
  *(undefined4 *)(param_1 + 0x7d8) = 0;
  *(undefined4 *)((long)param_1 + 0x3ec4) = 0;
  *(undefined4 *)(param_1 + 0x875) = 0;
  *(undefined4 *)((long)param_1 + 0x43ac) = 0;
  *(undefined4 *)(param_1 + 0x8f6) = 0;
  *(undefined4 *)((long)param_1 + 0x47b4) = 0;
  *(undefined4 *)(param_1 + 0x993) = 0;
  *(undefined4 *)((long)param_1 + 0x4c9c) = 0;
  *(undefined4 *)(param_1 + 0xa14) = 0;
  *(undefined4 *)((long)param_1 + 0x50a4) = 0;
  *(undefined4 *)(param_1 + 0xab1) = 0;
  *(undefined4 *)((long)param_1 + 0x558c) = 0;
  *(undefined4 *)(param_1 + 0xb32) = 0;
  *(undefined4 *)((long)param_1 + 0x5994) = 0;
  *(undefined4 *)(param_1 + 0xbcf) = 0;
  *(undefined4 *)((long)param_1 + 0x5e7c) = 0;
  *(undefined4 *)(param_1 + 0xc50) = 0;
  *(undefined4 *)((long)param_1 + 0x6284) = 0;
  *(undefined4 *)(param_1 + 0xced) = 0;
  *(undefined4 *)((long)param_1 + 0x676c) = 0;
  *(undefined4 *)(param_1 + 0xd6e) = 0;
  *(undefined4 *)((long)param_1 + 0x6b74) = 0;
  *(undefined4 *)(param_1 + 0xe0b) = 0;
  *(undefined4 *)((long)param_1 + 0x705c) = 0;
  *(undefined4 *)(param_1 + 0xe8c) = 0;
  *(undefined4 *)((long)param_1 + 0x7464) = 0;
  *(undefined4 *)(param_1 + 0xf29) = 0;
  *(undefined4 *)((long)param_1 + 0x794c) = 0;
  *(undefined4 *)(param_1 + 0xfaa) = 0;
  *(undefined4 *)((long)param_1 + 0x7d54) = 0;
  *(undefined4 *)(param_1 + 0x1047) = 0;
  *(undefined4 *)((long)param_1 + 0x823c) = 0;
  *(undefined4 *)(param_1 + 0x10c8) = 0;
  *(undefined4 *)((long)param_1 + 0x8644) = 0;
  *(undefined4 *)(param_1 + 0x1165) = 0;
  *(undefined4 *)((long)param_1 + 0x8b2c) = 0;
  *(undefined4 *)(param_1 + 0x11e6) = 0;
  *(undefined4 *)((long)param_1 + 0x8f34) = 0;
  *(undefined4 *)(param_1 + 0x1283) = 0;
  *(undefined4 *)((long)param_1 + 0x941c) = 0;
  *(undefined4 *)(param_1 + 0x1304) = 0;
  *(undefined4 *)((long)param_1 + 0x9824) = 0;
  *(undefined4 *)((long)param_1 + 0x9834) = 1;
  *(undefined4 *)((long)param_1 + 0x9844) = 0xffffffff;
  param_1[0x230a] = 0;
  param_1[0x230b] = 0xffffffff;
  param_1[0x230c] = 0;
  *(undefined4 *)((long)param_1 + 0x1186c) = 0;
  *(undefined1 *)((long)param_1 + 0x118a2) = 0;
  *(undefined2 *)(param_1 + 0x2314) = 0;
  param_1[0x2313] = 0;
  param_1[0x2312] = 0;
  param_1[0x2311] = 0;
  CVmConfiguration::getVmHardwareList();
  CVmHardware::getVideo();
  local_68 = 0x4d430002;
  local_60 = (long)param_1 + 0x984c;
  local_58 = 0x8000;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  uVar2 = FUN_1007da300("devices.video.ipi",1);
  *(undefined4 *)(param_1 + 0x230e) = uVar2;
  ___bzero(param_1 + 0x126,0x8f00);
  lVar5 = param_1[0x122];
  param_1[0x129] = lVar5 + 0x3dcc;
  param_1[0x247] = lVar5 + 0x38;
  param_1[0x365] = lVar5 + 0x44c;
  param_1[0x483] = lVar5 + 0x860;
  param_1[0x5a1] = lVar5 + 0xc74;
  param_1[0x6bf] = lVar5 + 0x1088;
  param_1[0x7dd] = lVar5 + 0x149c;
  param_1[0x8fb] = lVar5 + 0x18b0;
  param_1[0xa19] = lVar5 + 0x1cc4;
  param_1[0xb37] = lVar5 + 0x20d8;
  param_1[0xc55] = lVar5 + 0x24ec;
  param_1[0xd73] = lVar5 + 0x2900;
  param_1[0xe91] = lVar5 + 0x2d14;
  param_1[0xfaf] = lVar5 + 0x3128;
  param_1[0x10cd] = lVar5 + 0x353c;
  param_1[0x11eb] = lVar5 + 0x3950;
  iVar3 = CVmVideo::getMaxDisplays();
  *(int *)(param_1 + 0x1306) = iVar3;
  if (iVar3 == 0) {
    uVar2 = FUN_100659070();
    *(undefined4 *)(param_1 + 0x1306) = uVar2;
  }
  iVar3 = FUN_1007da300("video.refresh_rate",0x1e);
  if (99 < iVar3 - 1U) {
    iVar3 = 0x1e;
  }
  *(int *)((long)param_1 + 0x8c4) = iVar3;
  bVar9 = *(int *)(DAT_1011c3698 + 0xb90) == 0;
  *(bool *)((long)param_1 + 0x844) = bVar9;
  if (bVar9) {
    lVar5 = _CFBundleGetMainBundle();
    if (lVar5 != 0) {
      uVar4 = _CFBundleGetInfoDictionary(lVar5);
      _CFDictionaryAddValue
                (uVar4,&cf_NSSupportsAutomaticGraphicsSwitching,
                 *(undefined8 *)PTR__kCFBooleanTrue_100ba23c8);
    }
  }
  iVar3 = FUN_1007da300("video.showFPS",0);
  *(bool *)((long)param_1 + 0x871) = iVar3 != 0;
  uVar1 = CVmVideo::isEnableVSync();
  uVar2 = FUN_1007da300("video.vsync",uVar1);
  *(undefined4 *)(param_1 + 0x1307) = uVar2;
  uVar2 = FUN_1007da300("video.hw_pointer",1);
  *(undefined4 *)((long)param_1 + 0x983c) = uVar2;
  uVar2 = FUN_1007da300("video.force_vesa_refresh",0);
  *(undefined4 *)(param_1 + 0x1308) = uVar2;
  iVar3 = FUN_1007da300("video.adaptive_priority",1);
  *(bool *)(param_1 + 0x230d) = iVar3 != 0;
  puVar8 = param_1 + 0x140;
  uVar7 = 0;
  do {
    *(undefined1 *)((long)puVar8 + -0x24) = 1;
    _snprintf(local_a8,0x40,"I@video.display%u.scan_refresh",uVar7 & 0xffffffff);
    puVar6 = &DAT_1011b98f0;
    if (uVar7 < *(uint *)(param_1 + 0x1306)) {
      puVar6 = (undefined *)FUN_10070e6f0(local_a8);
    }
    puVar8[-0x12] = puVar6;
    _snprintf(local_a8,0x40,"I@video.display%u.client_refresh",uVar7 & 0xffffffff);
    puVar6 = &DAT_1011b98f0;
    if (uVar7 < *(uint *)(param_1 + 0x1306)) {
      puVar6 = (undefined *)FUN_10070e6f0(local_a8);
    }
    puVar8[-0x11] = puVar6;
    _snprintf(local_a8,0x40,"I@video.display%u.texture_refresh",uVar7 & 0xffffffff);
    puVar6 = &DAT_1011b98f0;
    if (uVar7 < *(uint *)(param_1 + 0x1306)) {
      puVar6 = (undefined *)FUN_10070e6f0(local_a8);
    }
    puVar8[-3] = puVar6;
    _snprintf(local_a8,0x40,"I@video.display%u.surface_refresh",uVar7 & 0xffffffff);
    puVar6 = &DAT_1011b98f0;
    if (uVar7 < *(uint *)(param_1 + 0x1306)) {
      puVar6 = (undefined *)FUN_10070e6f0(local_a8);
    }
    puVar8[-2] = puVar6;
    *(bool *)(puVar8 + -1) = *(int *)(param_1 + 0x1307) == 0;
    uVar4 = FUN_1007d87f0();
    *puVar8 = uVar4;
    uVar7 = uVar7 + 1;
    puVar8 = puVar8 + 0x11e;
  } while (uVar7 < 0x10);
  uVar4 = FUN_10070e6f0("I@video.reqs");
  param_1[0x11d] = uVar4;
  uVar4 = FUN_10070e6f0("I@video.worker_idle");
  param_1[0x115] = uVar4;
  uVar4 = FUN_10070e6f0("I@video.worker_busy");
  param_1[0x116] = uVar4;
  FUN_1002a8d30(param_1);
  if (*(int *)(param_1[1] + 0xb90) != 0) {
    FUN_1002a8f60(param_1);
  }
  if (*(long *)PTR____stack_chk_guard_100ba2320 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}


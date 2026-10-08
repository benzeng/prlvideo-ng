
undefined1 FUN_100cdc800(long *param_1,int param_2,undefined8 param_3)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  short *psVar7;
  bool bVar8;
  
  cVar1 = (**(code **)(*param_1 + 0x80))();
  if (cVar1 == '\0') {
    return 0;
  }
  uVar4 = _CGEventCreateData(*(undefined8 *)PTR__kCFAllocatorDefault_1021e18d0,param_3);
  if (param_2 != 0xb8) {
    lVar5 = _CFDataGetLength(uVar4);
    if (lVar5 < 0xb0) {
      if ((lVar5 != 0x90) && (lVar5 != 0xa0)) {
LAB_100cdc878:
        if (2 < DAT_10230ffd0) {
          uVar6 = _CFDataGetLength(uVar4);
          FUN_100df99c0("","hid",3,"[CHIDMacHook] Unknown Event Type %lu",uVar6);
        }
      }
    }
    else if ((lVar5 != 0xb0) && (lVar5 != 0xf8)) goto LAB_100cdc878;
  }
  lVar5 = _CFDataGetLength(uVar4);
  uVar2 = 0;
  if (lVar5 < 0xb0) {
    if ((lVar5 != 0x90) && (lVar5 != 0xa0)) goto LAB_100cdca93;
  }
  else if ((lVar5 != 0xb0) && (uVar2 = 0, lVar5 != 0xf8)) goto LAB_100cdca93;
  lVar5 = _CFDataGetLength(uVar4);
  uVar2 = 0;
  if (lVar5 < 0xb0) {
    if (lVar5 == 0x90) {
      lVar5 = _CFDataGetBytePtr(uVar4);
      goto LAB_100cdc952;
    }
    if (lVar5 != 0xa0) goto LAB_100cdca93;
    lVar5 = _CFDataGetBytePtr(uVar4);
    psVar7 = (short *)(lVar5 + 0x5f);
  }
  else {
    if (lVar5 == 0xb0) {
      lVar5 = _CFDataGetBytePtr(uVar4);
    }
    else {
      if (lVar5 != 0xf8) goto LAB_100cdca93;
      lVar5 = _CFDataGetBytePtr(uVar4);
    }
LAB_100cdc952:
    psVar7 = (short *)(lVar5 + 0x6f);
  }
  if (*psVar7 != 8) {
    uVar2 = 0;
    goto LAB_100cdca93;
  }
  lVar5 = _CFDataGetLength(uVar4);
  uVar2 = 0xff;
  if (lVar5 < 0xb0) {
    if (lVar5 == 0x90) {
      lVar5 = _CFDataGetBytePtr(uVar4);
      goto LAB_100cdc9c4;
    }
    if (lVar5 == 0xa0) {
      lVar5 = _CFDataGetBytePtr(uVar4);
      lVar5 = lVar5 + 0x5f;
      goto LAB_100cdc9c8;
    }
  }
  else {
    if (lVar5 == 0xb0) {
      lVar5 = _CFDataGetBytePtr(uVar4);
    }
    else {
      if (lVar5 != 0xf8) goto LAB_100cdc9cc;
      lVar5 = _CFDataGetBytePtr(uVar4);
    }
LAB_100cdc9c4:
    lVar5 = lVar5 + 0x6f;
LAB_100cdc9c8:
    uVar2 = *(undefined1 *)(lVar5 + 6);
  }
LAB_100cdc9cc:
  iVar3 = FUN_100cdf770(uVar2,3);
  if (iVar3 != 0x88) {
    uVar2 = 0;
    goto LAB_100cdca93;
  }
  lVar5 = _CFDataGetLength(uVar4);
  bVar8 = false;
  if (lVar5 < 0xb0) {
    if (lVar5 == 0x90) {
      lVar5 = _CFDataGetBytePtr(uVar4);
      goto LAB_100cdca40;
    }
    if (lVar5 == 0xa0) {
      lVar5 = _CFDataGetBytePtr(uVar4);
      lVar5 = lVar5 + 0x5f;
      goto LAB_100cdca44;
    }
  }
  else {
    if (lVar5 == 0xb0) {
      lVar5 = _CFDataGetBytePtr(uVar4);
    }
    else {
      if (lVar5 != 0xf8) goto LAB_100cdca4e;
      lVar5 = _CFDataGetBytePtr(uVar4);
    }
LAB_100cdca40:
    lVar5 = lVar5 + 0x6f;
LAB_100cdca44:
    bVar8 = *(short *)(lVar5 + 7) == 10;
  }
LAB_100cdca4e:
  cVar1 = FUN_100cd3900(param_1,0x88,bVar8);
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    uVar2 = (**(code **)(*param_1 + 0xc0))(param_1,0x88,bVar8);
  }
LAB_100cdca93:
  _CFRelease(uVar4);
  return uVar2;
}



undefined1 FUN_100ac0440(long param_1,undefined8 param_2,int param_3,int param_4)

{
  char cVar1;
  undefined1 uVar2;
  void *pvVar3;
  undefined8 uVar4;
  void *pvVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  undefined8 in_stack_ffffffffffffff38;
  undefined4 uVar11;
  undefined8 uVar10;
  void *local_68;
  void *pvStack_60;
  undefined8 local_58;
  void *local_48;
  void *pvStack_40;
  undefined8 local_38;
  
  uVar11 = (undefined4)((ulong)in_stack_ffffffffffffff38 >> 0x20);
  lVar8 = param_1 + 0x60;
  FUN_100ac1dd0(lVar8);
  _CGImageRelease(*(undefined8 *)(param_1 + 0x50));
  if (*(long *)(param_1 + 0x58) != 0) {
    _CGImageRelease();
    *(undefined8 *)(param_1 + 0x58) = 0;
  }
  cVar1 = FUN_100abd1f0(*(undefined8 *)(param_1 + 0x20));
  if (cVar1 == '\0') {
    pvVar3 = (void *)FUN_100ac1fb0(lVar8);
    uVar9 = (ulong)(param_3 * 4 * param_4 & 0x1ffffffc);
    pvVar5 = operator_new__(uVar9);
    _memcpy(pvVar5,pvVar3,uVar9);
    uVar6 = _CGDataProviderCreateWithData(0,pvVar5,uVar9,FUN_100ac0c90);
    uVar7 = _CGColorSpaceCreateDeviceRGB();
    lVar8 = _CGImageCreate((long)param_3,(long)param_4,8,0x20,param_3 * 4 & 0x1ffffffc,uVar7,
                           CONCAT44(uVar11,0x2004),uVar6,0,0,4);
    _CGDataProviderRelease(uVar6);
    _CGColorSpaceRelease(uVar7);
    *(long *)(param_1 + 0x50) = lVar8;
  }
  else {
    local_48 = (void *)0x0;
    pvStack_40 = (void *)0x0;
    local_38 = 0;
    cVar1 = FUN_100abd1e0(*(undefined8 *)(param_1 + 0x20));
    if (cVar1 == '\0') {
      local_68 = (void *)0x0;
      pvStack_60 = (void *)0x0;
      local_58 = 0;
      FUN_100ac1fc0(lVar8,&local_68);
      pvVar3 = local_68;
      uVar9 = (ulong)(param_3 * 4 * param_4 & 0x1ffffffc);
      pvVar5 = operator_new__(uVar9);
      _memcpy(pvVar5,pvVar3,uVar9);
      uVar6 = _CGDataProviderCreateWithData(0,pvVar5,uVar9,FUN_100ac0c90);
      uVar7 = _CGColorSpaceCreateDeviceRGB();
      uVar10 = CONCAT44(uVar11,0x2004);
      uVar4 = _CGImageCreate((long)param_3,(long)param_4,8,0x20,param_3 * 4 & 0x1ffffffc,uVar7,
                             uVar10,uVar6,0,0,4);
      uVar11 = (undefined4)((ulong)uVar10 >> 0x20);
      _CGDataProviderRelease(uVar6);
      _CGColorSpaceRelease(uVar7);
      *(undefined8 *)(param_1 + 0x58) = uVar4;
      FUN_100ac2110(lVar8,&local_48);
      if (local_68 != (void *)0x0) {
        if (pvStack_60 != local_68) {
          pvStack_60 = local_68;
        }
        operator_delete(local_68);
      }
    }
    else {
      FUN_100ac1fc0(lVar8,&local_48);
      uVar9 = (ulong)(param_3 * 4 * param_4 & 0x1ffffffc);
    }
    pvVar3 = local_48;
    pvVar5 = operator_new__(uVar9);
    _memcpy(pvVar5,pvVar3,uVar9);
    uVar6 = _CGDataProviderCreateWithData(0,pvVar5,uVar9,FUN_100ac0c90);
    uVar7 = _CGColorSpaceCreateDeviceRGB();
    lVar8 = _CGImageCreate((long)param_3,(long)param_4,8,0x20,param_3 * 4 & 0x1ffffffc,uVar7,
                           CONCAT44(uVar11,0x2004),uVar6,0,0,4);
    _CGDataProviderRelease(uVar6);
    _CGColorSpaceRelease(uVar7);
    *(long *)(param_1 + 0x50) = lVar8;
    if (local_48 != (void *)0x0) {
      if (pvStack_40 != local_48) {
        pvStack_40 = local_48;
      }
      operator_delete(local_48);
      lVar8 = *(long *)(param_1 + 0x50);
    }
  }
  if (lVar8 == 0) {
    if (DAT_10230ffd0 < 1) {
      uVar2 = 0;
    }
    else {
      uVar2 = 0;
      FUN_100df99c0("","ShellIntClient",1,"failed to create the %ux%u %p image for a status icon",
                    param_3,param_4,param_2);
    }
  }
  else if (*(char *)(param_1 + 0x38) == '\0') {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_100abade0(param_1 + 0x10,lVar8,*(undefined8 *)(param_1 + 0x58));
  }
  return uVar2;
}


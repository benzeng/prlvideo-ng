
undefined8 FUN_1001e5630(long param_1)

{
  undefined8 uVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  uint uVar9;
  pthread_t local_38;
  
  uVar8 = 0;
  cVar2 = FUN_100d80680();
  if (cVar2 != '\0') {
    iVar5 = FUN_1001e4dd0(*(undefined8 *)(param_1 + 0x10));
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    bVar3 = MacUtils::isIntel64BitMachine();
    if (bVar3 == 0) {
      FUN_100df99c0("[INIT_THREAD]","prl_client_app",0);
      uVar8 = 0x80015462;
    }
    FUN_1001e50a0(uVar1,1,uVar8);
    uVar8 = *(undefined8 *)(param_1 + 0x10);
    bVar4 = MacUtils::isSafeBoot();
    uVar9 = 0;
    uVar7 = 0x80015433;
    if (bVar4 == 0) {
      uVar7 = 0;
    }
    else {
      FUN_100df99c0("[INIT_THREAD]","prl_client_app",0);
    }
    FUN_1001e50a0(uVar8,3,uVar7);
    uVar6 = FUN_1001e5240(*(undefined8 *)(param_1 + 0x10));
    uVar8 = *(undefined8 *)(param_1 + 0x10);
    cVar2 = FUN_100d80630(1);
    if (cVar2 != '\0') {
      cVar2 = FUN_1001e6650();
      uVar9 = 0x80000013;
      if (cVar2 == '\0') {
        uVar9 = 0;
      }
    }
    FUN_1001e50a0(uVar8,6,uVar9);
    uVar8 = 0;
    if (((-1 < iVar5 & bVar3) == 1) && ((~bVar4 & -1 < (int)(uVar6 | uVar9)) != 0)) {
      _pthread_create(&local_38,(pthread_attr_t *)0x0,(void **)FUN_1001e44b0,
                      *(void **)(param_1 + 0x10));
      _pthread_detach(local_38);
      uVar8 = 1;
    }
  }
  return uVar8;
}


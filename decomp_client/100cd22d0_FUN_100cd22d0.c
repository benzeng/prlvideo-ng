
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100cd22d0(QObject *param_1,undefined8 param_2)

{
  long *plVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  char *pcVar7;
  bool bVar8;
  QObject *local_48;
  QObject *local_40;
  
  QObject::QObject(param_1,(QObject *)0x0);
  *(undefined **)param_1 = &DAT_102259dc0;
  *(undefined8 *)(param_1 + 0x10) = param_2;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined **)(param_1 + 0x20) = PTR_shared_null_1021e15e8;
  param_1[0x30] = (QObject)0x0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x3b0) = 0xffff;
  *(undefined4 *)(param_1 + 0x3b4) = 0;
  param_1[0x3b8] = (QObject)0x0;
  *(undefined4 *)(param_1 + 0x3bc) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x3d8) = 0;
  *(undefined8 *)(param_1 + 0x3d0) = 0;
  *(undefined8 *)(param_1 + 0x3c8) = 0;
  *(undefined8 *)(param_1 + 0x3c0) = 0;
  ___bzero(param_1 + 0x38,0x304);
  if ((DAT_102311934 == 0) && (bVar2 = true, DAT_102311928 != 0)) {
LAB_100cd23ed:
    lVar6 = DAT_102311928;
    lVar5 = *(long *)(DAT_102311928 + 0xf8);
    if ((lVar5 < 0x8bf) && (lVar5 != 0)) {
      pcVar7 = (char *)(DAT_102311928 + 0x108);
      do {
        if (*(long *)(pcVar7 + 0xf8) != 0) {
          iVar3 = _strcmp(pcVar7,"A@mouse.grabbed");
          uVar4 = 0xffffffee;
          if (iVar3 == 0) goto LAB_100cd24bd;
        }
        lVar5 = lVar5 + -1;
        pcVar7 = pcVar7 + 0x100;
      } while (lVar5 != 0);
    }
    LOCK();
    plVar1 = (long *)(lVar6 + 0xf8);
    lVar5 = *plVar1;
    *plVar1 = *plVar1 + 1;
    UNLOCK();
    if (lVar5 < 0x8be) {
      lVar5 = lVar5 * 0x100;
      pcVar7 = (char *)(lVar6 + 0x108 + lVar5);
      *(undefined8 *)(lVar6 + 0x110 + lVar5) = 0x64656262617267;
      *(undefined8 *)(lVar6 + 0x108 + lVar5) = 0x2e6573756f6d4041;
      *(undefined8 *)(lVar6 + 0x200 + lVar5) = 1;
      uVar4 = 0;
    }
    else {
      LOCK();
      *(long *)(lVar6 + 0xf8) = *(long *)(lVar6 + 0xf8) + -1;
      UNLOCK();
      uVar4 = 0xffffffed;
      pcVar7 = (char *)0x0;
    }
LAB_100cd24bd:
    bVar8 = DAT_102311934 == 0;
    _DAT_102311930 = uVar4;
    *(char **)(param_1 + 0x340) = pcVar7;
    if (bVar8) goto LAB_100cd26af;
LAB_100cd24e1:
    *(undefined8 *)(param_1 + 0x348) = 0;
LAB_100cd24f7:
    *(undefined8 *)(param_1 + 0x350) = 0;
LAB_100cd250d:
    *(undefined8 *)(param_1 + 0x358) = 0;
LAB_100cd251f:
    *(undefined8 *)(param_1 + 0x360) = 0;
LAB_100cd2531:
    *(undefined8 *)(param_1 + 0x368) = 0;
LAB_100cd2543:
    *(undefined8 *)(param_1 + 0x370) = 0;
LAB_100cd2555:
    *(undefined8 *)(param_1 + 0x378) = 0;
LAB_100cd2567:
    *(undefined8 *)(param_1 + 0x380) = 0;
LAB_100cd2579:
    *(undefined8 *)(param_1 + 0x388) = 0;
LAB_100cd258b:
    *(undefined8 *)(param_1 + 0x390) = 0;
    *(undefined8 *)(param_1 + 0x398) = 0;
    *(undefined8 *)(param_1 + 0x3a0) = 0;
    *(undefined8 *)(param_1 + 0x3a8) = 0;
    if (bVar2) {
      return;
    }
  }
  else {
    DAT_102311934 = FUN_100db7d40("hidhook",&DAT_102311920,DAT_102311938);
    if (DAT_102311934 != 0) {
      *(undefined8 *)(param_1 + 0x340) = 0;
      bVar2 = false;
      goto LAB_100cd24e1;
    }
    if (DAT_102311928 != 0) {
      bVar2 = false;
      goto LAB_100cd23ed;
    }
    *(undefined8 *)(param_1 + 0x340) = 0;
    bVar2 = false;
LAB_100cd26af:
    lVar5 = DAT_102311928;
    if (DAT_102311928 == 0) {
      *(undefined8 *)(param_1 + 0x348) = 0;
    }
    else {
      lVar6 = *(long *)(DAT_102311928 + 0xf8);
      if ((lVar6 < 0x8bf) && (lVar6 != 0)) {
        pcVar7 = (char *)(DAT_102311928 + 0x108);
        do {
          if (*(long *)(pcVar7 + 0xf8) != 0) {
            iVar3 = _strcmp(pcVar7,"I@mouse.sent");
            uVar4 = 0xffffffee;
            if (iVar3 == 0) goto LAB_100cd27ac;
          }
          lVar6 = lVar6 + -1;
          pcVar7 = pcVar7 + 0x100;
        } while (lVar6 != 0);
      }
      LOCK();
      plVar1 = (long *)(lVar5 + 0xf8);
      lVar6 = *plVar1;
      *plVar1 = *plVar1 + 1;
      UNLOCK();
      if (lVar6 < 0x8be) {
        lVar6 = lVar6 * 0x100;
        pcVar7 = (char *)(lVar5 + 0x108 + lVar6);
        *(undefined8 *)(lVar5 + 0x108 + lVar6) = 0x2e6573756f6d4049;
        *(undefined1 *)(lVar5 + 0x114 + lVar6) = 0;
        *(undefined4 *)(lVar5 + 0x110 + lVar6) = 0x746e6573;
        *(undefined8 *)(lVar5 + 0x200 + lVar6) = 1;
        uVar4 = 0;
      }
      else {
        LOCK();
        *(long *)(lVar5 + 0xf8) = *(long *)(lVar5 + 0xf8) + -1;
        UNLOCK();
        uVar4 = 0xffffffed;
        pcVar7 = (char *)0x0;
      }
LAB_100cd27ac:
      bVar8 = DAT_102311934 != 0;
      _DAT_102311930 = uVar4;
      *(char **)(param_1 + 0x348) = pcVar7;
      if (bVar8) goto LAB_100cd24f7;
    }
    lVar5 = DAT_102311928;
    if (DAT_102311928 == 0) {
      *(undefined8 *)(param_1 + 0x350) = 0;
    }
    else {
      lVar6 = *(long *)(DAT_102311928 + 0xf8);
      if ((lVar6 < 0x8bf) && (lVar6 != 0)) {
        pcVar7 = (char *)(DAT_102311928 + 0x108);
        do {
          if (*(long *)(pcVar7 + 0xf8) != 0) {
            iVar3 = _strcmp(pcVar7,"I@mouse.processed");
            uVar4 = 0xffffffee;
            if (iVar3 == 0) goto LAB_100cd28e4;
          }
          lVar6 = lVar6 + -1;
          pcVar7 = pcVar7 + 0x100;
        } while (lVar6 != 0);
      }
      LOCK();
      plVar1 = (long *)(lVar5 + 0xf8);
      lVar6 = *plVar1;
      *plVar1 = *plVar1 + 1;
      UNLOCK();
      if (lVar6 < 0x8be) {
        lVar6 = lVar6 * 0x100;
        pcVar7 = (char *)(lVar5 + 0x108 + lVar6);
        *(undefined8 *)(lVar5 + 0x110 + lVar6) = 0x65737365636f7270;
        *(undefined8 *)(lVar5 + 0x108 + lVar6) = 0x2e6573756f6d4049;
        *(undefined2 *)(lVar5 + 0x118 + lVar6) = 100;
        *(undefined8 *)(lVar5 + 0x200 + lVar6) = 1;
        uVar4 = 0;
      }
      else {
        LOCK();
        *(long *)(lVar5 + 0xf8) = *(long *)(lVar5 + 0xf8) + -1;
        UNLOCK();
        uVar4 = 0xffffffed;
        pcVar7 = (char *)0x0;
      }
LAB_100cd28e4:
      bVar8 = DAT_102311934 != 0;
      _DAT_102311930 = uVar4;
      *(char **)(param_1 + 0x350) = pcVar7;
      if (bVar8) goto LAB_100cd250d;
    }
    lVar5 = DAT_102311928;
    if (DAT_102311928 == 0) {
      *(undefined8 *)(param_1 + 0x358) = 0;
    }
    else {
      lVar6 = *(long *)(DAT_102311928 + 0xf8);
      if ((lVar6 < 0x8bf) && (lVar6 != 0)) {
        pcVar7 = (char *)(DAT_102311928 + 0x108);
        do {
          if (*(long *)(pcVar7 + 0xf8) != 0) {
            iVar3 = _strcmp(pcVar7,"I@mouse.hooked");
            uVar4 = 0xffffffee;
            if (iVar3 == 0) goto LAB_100cd2a13;
          }
          lVar6 = lVar6 + -1;
          pcVar7 = pcVar7 + 0x100;
        } while (lVar6 != 0);
      }
      LOCK();
      plVar1 = (long *)(lVar5 + 0xf8);
      lVar6 = *plVar1;
      *plVar1 = *plVar1 + 1;
      UNLOCK();
      if (lVar6 < 0x8be) {
        lVar6 = lVar6 * 0x100;
        pcVar7 = (char *)(lVar5 + 0x108 + lVar6);
        *(undefined8 *)(lVar5 + 0x108 + lVar6) = 0x2e6573756f6d4049;
        *(undefined1 *)(lVar5 + 0x116 + lVar6) = 0;
        *(undefined2 *)(lVar5 + 0x114 + lVar6) = 0x6465;
        *(undefined4 *)(lVar5 + 0x110 + lVar6) = 0x6b6f6f68;
        *(undefined8 *)(lVar5 + 0x200 + lVar6) = 1;
        uVar4 = 0;
      }
      else {
        LOCK();
        *(long *)(lVar5 + 0xf8) = *(long *)(lVar5 + 0xf8) + -1;
        UNLOCK();
        uVar4 = 0xffffffed;
        pcVar7 = (char *)0x0;
      }
LAB_100cd2a13:
      bVar8 = DAT_102311934 != 0;
      _DAT_102311930 = uVar4;
      *(char **)(param_1 + 0x358) = pcVar7;
      if (bVar8) goto LAB_100cd251f;
    }
    lVar5 = DAT_102311928;
    if (DAT_102311928 == 0) {
      *(undefined8 *)(param_1 + 0x360) = 0;
    }
    else {
      lVar6 = *(long *)(DAT_102311928 + 0xf8);
      if ((lVar6 < 0x8bf) && (lVar6 != 0)) {
        pcVar7 = (char *)(DAT_102311928 + 0x108);
        do {
          if (*(long *)(pcVar7 + 0xf8) != 0) {
            iVar3 = _strcmp(pcVar7,"I@mouse.injected");
            uVar4 = 0xffffffee;
            if (iVar3 == 0) goto LAB_100cd2b48;
          }
          lVar6 = lVar6 + -1;
          pcVar7 = pcVar7 + 0x100;
        } while (lVar6 != 0);
      }
      LOCK();
      plVar1 = (long *)(lVar5 + 0xf8);
      lVar6 = *plVar1;
      *plVar1 = *plVar1 + 1;
      UNLOCK();
      if (lVar6 < 0x8be) {
        lVar6 = lVar6 * 0x100;
        pcVar7 = (char *)(lVar5 + 0x108 + lVar6);
        *(undefined8 *)(lVar5 + 0x110 + lVar6) = 0x64657463656a6e69;
        *(undefined8 *)(lVar5 + 0x108 + lVar6) = 0x2e6573756f6d4049;
        *(undefined1 *)(lVar5 + 0x118 + lVar6) = 0;
        *(undefined8 *)(lVar5 + 0x200 + lVar6) = 1;
        uVar4 = 0;
      }
      else {
        LOCK();
        *(long *)(lVar5 + 0xf8) = *(long *)(lVar5 + 0xf8) + -1;
        UNLOCK();
        uVar4 = 0xffffffed;
        pcVar7 = (char *)0x0;
      }
LAB_100cd2b48:
      bVar8 = DAT_102311934 != 0;
      _DAT_102311930 = uVar4;
      *(char **)(param_1 + 0x360) = pcVar7;
      if (bVar8) goto LAB_100cd2531;
    }
    lVar5 = DAT_102311928;
    if (DAT_102311928 == 0) {
      *(undefined8 *)(param_1 + 0x368) = 0;
    }
    else {
      lVar6 = *(long *)(DAT_102311928 + 0xf8);
      if ((lVar6 < 0x8bf) && (lVar6 != 0)) {
        pcVar7 = (char *)(DAT_102311928 + 0x108);
        do {
          if (*(long *)(pcVar7 + 0xf8) != 0) {
            iVar3 = _strcmp(pcVar7,"A@keyboard.grabbed");
            uVar4 = 0xffffffee;
            if (iVar3 == 0) goto LAB_100cd2c89;
          }
          lVar6 = lVar6 + -1;
          pcVar7 = pcVar7 + 0x100;
        } while (lVar6 != 0);
      }
      LOCK();
      plVar1 = (long *)(lVar5 + 0xf8);
      lVar6 = *plVar1;
      *plVar1 = *plVar1 + 1;
      UNLOCK();
      if (lVar6 < 0x8be) {
        lVar6 = lVar6 * 0x100;
        pcVar7 = (char *)(lVar5 + 0x108 + lVar6);
        *(undefined8 *)(lVar5 + 0x110 + lVar6) = 0x62626172672e6472;
        *(undefined8 *)(lVar5 + 0x108 + lVar6) = 0x616f6279656b4041;
        *(undefined1 *)(lVar5 + 0x11a + lVar6) = 0;
        *(undefined2 *)(lVar5 + 0x118 + lVar6) = 0x6465;
        *(undefined8 *)(lVar5 + 0x200 + lVar6) = 1;
        uVar4 = 0;
      }
      else {
        LOCK();
        *(long *)(lVar5 + 0xf8) = *(long *)(lVar5 + 0xf8) + -1;
        UNLOCK();
        uVar4 = 0xffffffed;
        pcVar7 = (char *)0x0;
      }
LAB_100cd2c89:
      bVar8 = DAT_102311934 != 0;
      _DAT_102311930 = uVar4;
      *(char **)(param_1 + 0x368) = pcVar7;
      if (bVar8) goto LAB_100cd2543;
    }
    lVar5 = DAT_102311928;
    if (DAT_102311928 == 0) {
      *(undefined8 *)(param_1 + 0x370) = 0;
    }
    else {
      lVar6 = *(long *)(DAT_102311928 + 0xf8);
      if ((lVar6 < 0x8bf) && (lVar6 != 0)) {
        pcVar7 = (char *)(DAT_102311928 + 0x108);
        do {
          if (*(long *)(pcVar7 + 0xf8) != 0) {
            iVar3 = _strcmp(pcVar7,"I@keyboard.sent");
            uVar4 = 0xffffffee;
            if (iVar3 == 0) goto LAB_100cd2db1;
          }
          lVar6 = lVar6 + -1;
          pcVar7 = pcVar7 + 0x100;
        } while (lVar6 != 0);
      }
      LOCK();
      plVar1 = (long *)(lVar5 + 0xf8);
      lVar6 = *plVar1;
      *plVar1 = *plVar1 + 1;
      UNLOCK();
      if (lVar6 < 0x8be) {
        lVar6 = lVar6 * 0x100;
        pcVar7 = (char *)(lVar5 + 0x108 + lVar6);
        *(undefined8 *)(lVar5 + 0x110 + lVar6) = 0x746e65732e6472;
        *(undefined8 *)(lVar5 + 0x108 + lVar6) = 0x616f6279656b4049;
        *(undefined8 *)(lVar5 + 0x200 + lVar6) = 1;
        uVar4 = 0;
      }
      else {
        LOCK();
        *(long *)(lVar5 + 0xf8) = *(long *)(lVar5 + 0xf8) + -1;
        UNLOCK();
        uVar4 = 0xffffffed;
        pcVar7 = (char *)0x0;
      }
LAB_100cd2db1:
      bVar8 = DAT_102311934 != 0;
      _DAT_102311930 = uVar4;
      *(char **)(param_1 + 0x370) = pcVar7;
      if (bVar8) goto LAB_100cd2555;
    }
    lVar5 = DAT_102311928;
    if (DAT_102311928 == 0) {
      *(undefined8 *)(param_1 + 0x378) = 0;
    }
    else {
      lVar6 = *(long *)(DAT_102311928 + 0xf8);
      if ((lVar6 < 0x8bf) && (lVar6 != 0)) {
        pcVar7 = (char *)(DAT_102311928 + 0x108);
        do {
          if (*(long *)(pcVar7 + 0xf8) != 0) {
            iVar3 = _strcmp(pcVar7,"I@keyboard.processed");
            uVar4 = 0xffffffee;
            if (iVar3 == 0) goto LAB_100cd2ef0;
          }
          lVar6 = lVar6 + -1;
          pcVar7 = pcVar7 + 0x100;
        } while (lVar6 != 0);
      }
      LOCK();
      plVar1 = (long *)(lVar5 + 0xf8);
      lVar6 = *plVar1;
      *plVar1 = *plVar1 + 1;
      UNLOCK();
      if (lVar6 < 0x8be) {
        lVar6 = lVar6 * 0x100;
        pcVar7 = (char *)(lVar5 + 0x108 + lVar6);
        *(undefined8 *)(lVar5 + 0x110 + lVar6) = 0x65636f72702e6472;
        *(undefined8 *)(lVar5 + 0x108 + lVar6) = 0x616f6279656b4049;
        *(undefined1 *)(lVar5 + 0x11c + lVar6) = 0;
        *(undefined4 *)(lVar5 + 0x118 + lVar6) = 0x64657373;
        *(undefined8 *)(lVar5 + 0x200 + lVar6) = 1;
        uVar4 = 0;
      }
      else {
        LOCK();
        *(long *)(lVar5 + 0xf8) = *(long *)(lVar5 + 0xf8) + -1;
        UNLOCK();
        uVar4 = 0xffffffed;
        pcVar7 = (char *)0x0;
      }
LAB_100cd2ef0:
      bVar8 = DAT_102311934 != 0;
      _DAT_102311930 = uVar4;
      *(char **)(param_1 + 0x378) = pcVar7;
      if (bVar8) goto LAB_100cd2567;
    }
    lVar5 = DAT_102311928;
    if (DAT_102311928 == 0) {
      *(undefined8 *)(param_1 + 0x380) = 0;
    }
    else {
      lVar6 = *(long *)(DAT_102311928 + 0xf8);
      if ((lVar6 < 0x8bf) && (lVar6 != 0)) {
        pcVar7 = (char *)(DAT_102311928 + 0x108);
        do {
          if (*(long *)(pcVar7 + 0xf8) != 0) {
            iVar3 = _strcmp(pcVar7,"I@keyboard.dropped");
            uVar4 = 0xffffffee;
            if (iVar3 == 0) goto LAB_100cd303a;
          }
          lVar6 = lVar6 + -1;
          pcVar7 = pcVar7 + 0x100;
        } while (lVar6 != 0);
      }
      LOCK();
      plVar1 = (long *)(lVar5 + 0xf8);
      lVar6 = *plVar1;
      *plVar1 = *plVar1 + 1;
      UNLOCK();
      if (lVar6 < 0x8be) {
        lVar6 = lVar6 * 0x100;
        pcVar7 = (char *)(lVar5 + 0x108 + lVar6);
        *(undefined8 *)(lVar5 + 0x110 + lVar6) = 0x70706f72642e6472;
        *(undefined8 *)(lVar5 + 0x108 + lVar6) = 0x616f6279656b4049;
        *(undefined1 *)(lVar5 + 0x11a + lVar6) = 0;
        *(undefined2 *)(lVar5 + 0x118 + lVar6) = 0x6465;
        *(undefined8 *)(lVar5 + 0x200 + lVar6) = 1;
        uVar4 = 0;
      }
      else {
        LOCK();
        *(long *)(lVar5 + 0xf8) = *(long *)(lVar5 + 0xf8) + -1;
        UNLOCK();
        uVar4 = 0xffffffed;
        pcVar7 = (char *)0x0;
      }
LAB_100cd303a:
      bVar8 = DAT_102311934 != 0;
      _DAT_102311930 = uVar4;
      *(char **)(param_1 + 0x380) = pcVar7;
      if (bVar8) goto LAB_100cd2579;
    }
    lVar5 = DAT_102311928;
    if (DAT_102311928 == 0) {
      *(undefined8 *)(param_1 + 0x388) = 0;
    }
    else {
      lVar6 = *(long *)(DAT_102311928 + 0xf8);
      if ((lVar6 < 0x8bf) && (lVar6 != 0)) {
        pcVar7 = (char *)(DAT_102311928 + 0x108);
        do {
          if (*(long *)(pcVar7 + 0xf8) != 0) {
            iVar3 = _strcmp(pcVar7,"I@keyboard.hooked");
            uVar4 = 0xffffffee;
            if (iVar3 == 0) goto LAB_100cd3184;
          }
          lVar6 = lVar6 + -1;
          pcVar7 = pcVar7 + 0x100;
        } while (lVar6 != 0);
      }
      LOCK();
      plVar1 = (long *)(lVar5 + 0xf8);
      lVar6 = *plVar1;
      *plVar1 = *plVar1 + 1;
      UNLOCK();
      if (lVar6 < 0x8be) {
        lVar6 = lVar6 * 0x100;
        pcVar7 = (char *)(lVar5 + 0x108 + lVar6);
        *(undefined8 *)(lVar5 + 0x110 + lVar6) = 0x656b6f6f682e6472;
        *(undefined8 *)(lVar5 + 0x108 + lVar6) = 0x616f6279656b4049;
        *(undefined2 *)(lVar5 + 0x118 + lVar6) = 100;
        *(undefined8 *)(lVar5 + 0x200 + lVar6) = 1;
        uVar4 = 0;
      }
      else {
        LOCK();
        *(long *)(lVar5 + 0xf8) = *(long *)(lVar5 + 0xf8) + -1;
        UNLOCK();
        uVar4 = 0xffffffed;
        pcVar7 = (char *)0x0;
      }
LAB_100cd3184:
      bVar8 = DAT_102311934 != 0;
      _DAT_102311930 = uVar4;
      *(char **)(param_1 + 0x388) = pcVar7;
      if (bVar8) goto LAB_100cd258b;
    }
    lVar5 = DAT_102311928;
    if (DAT_102311928 == 0) {
      *(undefined8 *)(param_1 + 0x390) = 0;
LAB_100cd332b:
      lVar5 = DAT_102311928;
      if (DAT_102311928 == 0) {
        *(undefined8 *)(param_1 + 0x398) = 0;
      }
      else {
        lVar6 = *(long *)(DAT_102311928 + 0xf8);
        if ((lVar6 < 0x8bf) && (lVar6 != 0)) {
          pcVar7 = (char *)(DAT_102311928 + 0x108);
          do {
            if (*(long *)(pcVar7 + 0xf8) != 0) {
              iVar3 = _strcmp(pcVar7,"I@action.acted");
              uVar4 = 0xffffffee;
              if (iVar3 == 0) goto LAB_100cd343e;
            }
            lVar6 = lVar6 + -1;
            pcVar7 = pcVar7 + 0x100;
          } while (lVar6 != 0);
        }
        LOCK();
        plVar1 = (long *)(lVar5 + 0xf8);
        lVar6 = *plVar1;
        *plVar1 = *plVar1 + 1;
        UNLOCK();
        if (lVar6 < 0x8be) {
          lVar6 = lVar6 * 0x100;
          pcVar7 = (char *)(lVar5 + 0x108 + lVar6);
          *(undefined8 *)(lVar5 + 0x108 + lVar6) = 0x6e6f697463614049;
          *(undefined1 *)(lVar5 + 0x116 + lVar6) = 0;
          *(undefined2 *)(lVar5 + 0x114 + lVar6) = 0x6465;
          *(undefined4 *)(lVar5 + 0x110 + lVar6) = 0x7463612e;
          *(undefined8 *)(lVar5 + 0x200 + lVar6) = 1;
          uVar4 = 0;
        }
        else {
          LOCK();
          *(long *)(lVar5 + 0xf8) = *(long *)(lVar5 + 0xf8) + -1;
          UNLOCK();
          uVar4 = 0xffffffed;
          pcVar7 = (char *)0x0;
        }
LAB_100cd343e:
        bVar8 = DAT_102311934 != 0;
        _DAT_102311930 = uVar4;
        *(char **)(param_1 + 0x398) = pcVar7;
        if (bVar8) {
          *(undefined8 *)(param_1 + 0x3a0) = 0;
          *(undefined8 *)(param_1 + 0x3a8) = 0;
          goto joined_r0x000100cd3315;
        }
      }
      lVar5 = DAT_102311928;
      if (DAT_102311928 == 0) {
        *(undefined8 *)(param_1 + 0x3a0) = 0;
LAB_100cd35f5:
        lVar5 = DAT_102311928;
        if (DAT_102311928 == 0) goto LAB_100cd36e0;
        lVar6 = *(long *)(DAT_102311928 + 0xf8);
        if ((lVar6 < 0x8bf) && (lVar6 != 0)) {
          pcVar7 = (char *)(DAT_102311928 + 0x108);
          do {
            if (*(long *)(pcVar7 + 0xf8) != 0) {
              iVar3 = _strcmp(pcVar7,"I@action.ignored");
              uVar4 = 0xffffffee;
              if (iVar3 == 0) goto LAB_100cd374d;
            }
            lVar6 = lVar6 + -1;
            pcVar7 = pcVar7 + 0x100;
          } while (lVar6 != 0);
        }
        LOCK();
        plVar1 = (long *)(lVar5 + 0xf8);
        lVar6 = *plVar1;
        *plVar1 = *plVar1 + 1;
        UNLOCK();
        if (lVar6 < 0x8be) {
          lVar6 = lVar6 * 0x100;
          pcVar7 = (char *)(lVar5 + 0x108 + lVar6);
          *(undefined8 *)(lVar5 + 0x110 + lVar6) = 0x6465726f6e67692e;
          *(undefined8 *)(lVar5 + 0x108 + lVar6) = 0x6e6f697463614049;
          *(undefined1 *)(lVar5 + 0x118 + lVar6) = 0;
          *(undefined8 *)(lVar5 + 0x200 + lVar6) = 1;
          uVar4 = 0;
        }
        else {
          LOCK();
          *(long *)(lVar5 + 0xf8) = *(long *)(lVar5 + 0xf8) + -1;
          UNLOCK();
          uVar4 = 0xffffffed;
          pcVar7 = (char *)0x0;
        }
LAB_100cd374d:
        _DAT_102311930 = uVar4;
        *(char **)(param_1 + 0x3a8) = pcVar7;
      }
      else {
        lVar6 = *(long *)(DAT_102311928 + 0xf8);
        if ((lVar6 < 0x8bf) && (lVar6 != 0)) {
          pcVar7 = (char *)(DAT_102311928 + 0x108);
          do {
            if (*(long *)(pcVar7 + 0xf8) != 0) {
              iVar3 = _strcmp(pcVar7,"I@action.delayed");
              uVar4 = 0xffffffee;
              if (iVar3 == 0) goto LAB_100cd35cd;
            }
            lVar6 = lVar6 + -1;
            pcVar7 = pcVar7 + 0x100;
          } while (lVar6 != 0);
        }
        LOCK();
        plVar1 = (long *)(lVar5 + 0xf8);
        lVar6 = *plVar1;
        *plVar1 = *plVar1 + 1;
        UNLOCK();
        if (lVar6 < 0x8be) {
          lVar6 = lVar6 * 0x100;
          pcVar7 = (char *)(lVar5 + 0x108 + lVar6);
          *(undefined8 *)(lVar5 + 0x110 + lVar6) = 0x646579616c65642e;
          *(undefined8 *)(lVar5 + 0x108 + lVar6) = 0x6e6f697463614049;
          *(undefined1 *)(lVar5 + 0x118 + lVar6) = 0;
          *(undefined8 *)(lVar5 + 0x200 + lVar6) = 1;
          uVar4 = 0;
        }
        else {
          LOCK();
          *(long *)(lVar5 + 0xf8) = *(long *)(lVar5 + 0xf8) + -1;
          UNLOCK();
          uVar4 = 0xffffffed;
          pcVar7 = (char *)0x0;
        }
LAB_100cd35cd:
        bVar8 = DAT_102311934 == 0;
        _DAT_102311930 = uVar4;
        *(char **)(param_1 + 0x3a0) = pcVar7;
        if (bVar8) goto LAB_100cd35f5;
LAB_100cd36e0:
        *(undefined8 *)(param_1 + 0x3a8) = 0;
        pcVar7 = (char *)0x0;
      }
      if (bVar2) {
        return;
      }
      goto LAB_100cd25c1;
    }
    lVar6 = *(long *)(DAT_102311928 + 0xf8);
    if ((lVar6 < 0x8bf) && (lVar6 != 0)) {
      pcVar7 = (char *)(DAT_102311928 + 0x108);
      do {
        if (*(long *)(pcVar7 + 0xf8) != 0) {
          iVar3 = _strcmp(pcVar7,"I@keyboard.injected");
          uVar4 = 0xffffffee;
          if (iVar3 == 0) goto LAB_100cd32c0;
        }
        lVar6 = lVar6 + -1;
        pcVar7 = pcVar7 + 0x100;
      } while (lVar6 != 0);
    }
    LOCK();
    plVar1 = (long *)(lVar5 + 0xf8);
    lVar6 = *plVar1;
    *plVar1 = *plVar1 + 1;
    UNLOCK();
    if (lVar6 < 0x8be) {
      lVar6 = lVar6 * 0x100;
      pcVar7 = (char *)(lVar5 + 0x108 + lVar6);
      *(undefined8 *)(lVar5 + 0x110 + lVar6) = 0x63656a6e692e6472;
      *(undefined8 *)(lVar5 + 0x108 + lVar6) = 0x616f6279656b4049;
      *(undefined4 *)(lVar5 + 0x118 + lVar6) = 0x646574;
      *(undefined8 *)(lVar5 + 0x200 + lVar6) = 1;
      uVar4 = 0;
    }
    else {
      LOCK();
      *(long *)(lVar5 + 0xf8) = *(long *)(lVar5 + 0xf8) + -1;
      UNLOCK();
      uVar4 = 0xffffffed;
      pcVar7 = (char *)0x0;
    }
LAB_100cd32c0:
    bVar8 = DAT_102311934 == 0;
    _DAT_102311930 = uVar4;
    *(char **)(param_1 + 0x390) = pcVar7;
    if (bVar8) goto LAB_100cd332b;
    *(undefined8 *)(param_1 + 0x398) = 0;
    *(undefined8 *)(param_1 + 0x3a0) = 0;
    *(undefined8 *)(param_1 + 0x3a8) = 0;
joined_r0x000100cd3315:
    if (bVar2) {
      return;
    }
  }
  pcVar7 = (char *)0x0;
LAB_100cd25c1:
  local_40 = param_1 + 0x350;
  local_48 = param_1 + 0x348;
  *(undefined8 *)(*(long *)(param_1 + 0x340) + 0xf0) = 0;
  *(undefined8 *)(*(long *)local_48 + 0xf0) = 0;
  *(undefined8 *)(*(long *)local_40 + 0xf0) = 0;
  *(undefined8 *)(*(long *)(param_1 + 0x358) + 0xf0) = 0;
  *(undefined8 *)(*(long *)(param_1 + 0x360) + 0xf0) = 0;
  *(undefined8 *)(*(long *)(param_1 + 0x368) + 0xf0) = 0;
  *(undefined8 *)(*(long *)(param_1 + 0x370) + 0xf0) = 0;
  *(undefined8 *)(*(long *)(param_1 + 0x378) + 0xf0) = 0;
  *(undefined8 *)(*(long *)(param_1 + 0x380) + 0xf0) = 0;
  *(undefined8 *)(*(long *)(param_1 + 0x388) + 0xf0) = 0;
  *(undefined8 *)(*(long *)(param_1 + 0x390) + 0xf0) = 0;
  *(undefined8 *)(*(long *)(param_1 + 0x398) + 0xf0) = 0;
  *(undefined8 *)(*(long *)(param_1 + 0x3a0) + 0xf0) = 0;
  pcVar7[0xf0] = '\0';
  pcVar7[0xf1] = '\0';
  pcVar7[0xf2] = '\0';
  pcVar7[0xf3] = '\0';
  pcVar7[0xf4] = '\0';
  pcVar7[0xf5] = '\0';
  pcVar7[0xf6] = '\0';
  pcVar7[0xf7] = '\0';
  return;
}


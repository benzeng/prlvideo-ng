
void FUN_1002adeb0(long *param_1)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  char cVar5;
  byte bVar6;
  int iVar7;
  uint uVar8;
  long lVar9;
  uint *puVar10;
  ulong uVar11;
  short sVar12;
  uint uVar13;
  int local_b4;
  long local_a0;
  int local_8c;
  ulong local_88 [5];
  short local_60;
  ushort local_5e;
  short local_5c;
  short local_5a;
  uint local_58;
  undefined4 local_54;
  undefined2 local_50;
  undefined2 local_4e;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined1 local_3c [4];
  undefined1 local_38 [4];
  int local_34;
  
  local_b4 = FUN_1007d8850();
  FUN_1002a50a0(param_1,0x100,0x11f,param_1 + 0x11e);
  FUN_1002a50a0(param_1,0x8100,0x811f,param_1 + 0x11e);
  QMutex::lock();
  FUN_1002a9af0(param_1,local_38,local_3c);
  sVar12 = 1;
  lVar9 = 0x34;
  do {
    lVar2 = param_1[0x122];
    bVar6 = *(byte *)(lVar2 + -0x10 + lVar9);
    local_5e = (ushort)bVar6;
    local_5c = *(short *)(lVar2 + -0xe + lVar9);
    local_5a = *(short *)(lVar2 + -0xc + lVar9);
    local_58 = (uint)*(ushort *)(lVar2 + -10 + lVar9);
    local_54 = 0x3c;
    local_50 = 0;
    local_4e = 0;
    local_4c = *(undefined4 *)(lVar2 + -8 + lVar9);
    local_48 = *(undefined4 *)(lVar2 + -4 + lVar9);
    local_44 = *(undefined4 *)(lVar2 + lVar9);
    local_60 = sVar12;
    if ((local_5c != 0 || bVar6 != 0) || local_5a != 0) {
      FUN_1002aa010(param_1,&local_60);
    }
    lVar9 = lVar9 + 0x414;
    sVar12 = sVar12 + 1;
  } while (lVar9 != 0x3d60);
  QWaitCondition::wakeAll();
  local_a0 = rdtsc();
  local_8c = local_b4;
  while( true ) {
    while( true ) {
      while( true ) {
        iVar7 = FUN_1007d8850();
        uVar13 = 0xffffffff;
        if ((*(char *)((long)param_1 + 0x844) != '\0') &&
           (uVar13 = local_b4 - iVar7, 999 < uVar13 - 1)) {
          iVar7 = _CGMainDisplayID();
          local_34 = 0;
          if ((int)param_1[0x10b] != iVar7) {
            *(int *)(param_1 + 0x10b) = iVar7;
            _CGLGetVirtualScreen(param_1[0x10d],&local_34);
            iVar7 = FUN_1002ad820(param_1);
            if ((iVar7 != local_34) &&
               ((**(code **)(*param_1 + 0x38))(param_1), (char)param_1[0x10e] != '\0')) {
              QMutex::lock();
              QMutex::unlock();
              FUN_1004b2b10(DAT_1011cc7f0);
              QMutex::unlock();
              QMutex::lock();
            }
          }
          iVar7 = FUN_1007d8850();
          local_b4 = iVar7 + 1000;
          uVar13 = 1000;
        }
        uVar8 = *(uint *)(param_1 + 0x119);
        uVar11 = 0;
        puVar10 = (uint *)((long)param_1 + 0x95c);
        if (uVar8 != 0) {
          while( true ) {
            if (((uVar8 >> ((uint)uVar11 & 0x1f) & 1) != 0) &&
               (cVar5 = FUN_1002ae740(param_1,uVar11 & 0xffffffff), cVar5 != '\0')) {
              if (puVar10[-3] != 0) {
                puVar10[-3] = 0;
              }
              if (puVar10[-2] != 0) {
                puVar10[-2] = 0;
              }
              if (puVar10[-1] < 0x3fff) {
                puVar10[-1] = 0x3fff;
              }
              if (*puVar10 < 0x3fff) {
                *puVar10 = 0x3fff;
              }
              local_8c = FUN_1007d8850();
              iVar7 = local_8c;
            }
            if (uVar11 == 0xf) break;
            uVar11 = uVar11 + 1;
            uVar8 = *(uint *)(param_1 + 0x119);
            puVar10 = puVar10 + 0x23c;
          }
          *(undefined4 *)(param_1 + 0x119) = 0;
          QWaitCondition::wakeAll();
        }
        if (*(char *)((long)param_1 + 0x8d1) != '\0') {
          *(undefined1 *)((long)param_1 + 0x8d1) = 0;
          QMutex::lock();
          QMutex::unlock();
          FUN_1004b2770(DAT_1011cc7f0);
          FUN_1004b2ad0(DAT_1011cc7f0);
          QMutex::unlock();
          QMutex::lock();
          iVar7 = FUN_1007d8850();
        }
        if ((0 < (int)param_1[0x118]) && ((char)param_1[0x2314] == '\0')) {
          if (1000 < uVar13) {
            uVar13 = 1000;
          }
          if ((0xd < *(uint *)(param_1[1] + 0xa4)) && (uVar13 = local_8c - iVar7, 999 < uVar13 - 1))
          {
            QMutex::lock();
            QMutex::unlock();
            uVar13 = *(uint *)((long)param_1 + 0x8c4);
            bVar6 = (**(code **)(*param_1 + 0x30))(param_1);
            uVar13 = (uint)(1000 / (ulong)uVar13) >> (bVar6 & 0x1f);
            local_8c = FUN_1007d8850();
            local_8c = local_8c + uVar13;
            QMutex::unlock();
            QMutex::lock();
          }
        }
        if ((param_1[0x10d] != 0) && (uVar8 = 0, (char)param_1[0x2314] == '\0')) {
          do {
            if ((*(uint *)((long)param_1 + 0x8cc) >> (uVar8 & 0x1f) & 1) != 0) {
              FUN_1002aeb50(param_1,uVar8);
            }
            uVar8 = uVar8 + 1;
          } while (uVar8 != 0x10);
        }
        if (*(int *)((long)param_1 + 0x8cc) != 0) {
          QWaitCondition::wakeAll();
        }
        *(undefined4 *)((long)param_1 + 0x8cc) = 0;
        lVar9 = rdtsc();
        *(long *)(param_1[0x116] + 0xf0) = (*(long *)(param_1[0x116] + 0xf0) - local_a0) + lVar9;
        plVar3 = (long *)param_1[0x11b];
        local_a0 = lVar9;
        if (plVar3 == (long *)0x0) break;
        lVar9 = plVar3[1];
        plVar4 = (long *)plVar3[2];
        plVar3[2] = 0;
        plVar3[1] = 0;
        QMutex::unlock();
        iVar7 = (**(code **)(*plVar4 + 0x20))(plVar4);
        if (iVar7 != -1) {
          FUN_1002a5590(param_1,lVar9,iVar7);
        }
        QMutex::lock();
        param_1[0x11b] = *plVar3;
        if ((long *)param_1[0x11c] == plVar3) {
          param_1[0x11c] = (long)(param_1 + 0x11b);
        }
        operator_delete(plVar3);
      }
      lVar2 = param_1[0x121];
      if (lVar2 == 0) break;
      param_1[0x121] = 0;
      QMutex::lock();
      QMutex::unlock();
      if (param_1[0x120] == lVar2) {
        param_1[300] = 0;
        param_1[0x24a] = 0;
        param_1[0x368] = 0;
        param_1[0x486] = 0;
        param_1[0x5a4] = 0;
        param_1[0x6c2] = 0;
        param_1[0x7e0] = 0;
        param_1[0x8fe] = 0;
        param_1[0xa1c] = 0;
        param_1[0xb3a] = 0;
        param_1[0xc58] = 0;
        param_1[0xd76] = 0;
        param_1[0xe94] = 0;
        param_1[0xfb2] = 0;
        param_1[0x10d0] = 0;
        param_1[0x11ee] = 0;
        FUN_1000d76e0(*(undefined8 *)(param_1[1] + 0x107f8),0);
        FUN_1002a5590(param_1,param_1[0x120],0xf0000000);
        param_1[0x120] = 0;
      }
      QMutex::unlock();
      QMutex::lock();
    }
    if ((int)param_1[0x118] < 0) break;
    if ((char)param_1[0x230d] != '\0') {
      iVar7 = *(int *)((long)param_1 + 0x1186c);
      if (uVar13 < (uint)(1000 / (ulong)*(uint *)((long)param_1 + 0x8c4))) {
        if (iVar7 < 0) {
          FUN_100257850(3);
        }
        *(undefined4 *)((long)param_1 + 0x1186c) = 0;
      }
      else if ((-1 < iVar7) && (*(int *)((long)param_1 + 0x1186c) = iVar7 + 1, 1 < iVar7)) {
        FUN_100257850(2);
        *(undefined4 *)((long)param_1 + 0x1186c) = 0xffffffff;
      }
    }
    QWaitCondition::wait((QMutex *)(param_1 + 0x111),(ulong)(param_1 + 0x10f));
    local_a0 = rdtsc();
    *(long *)(param_1[0x115] + 0xf0) = (*(long *)(param_1[0x115] + 0xf0) - lVar9) + local_a0;
  }
  lVar9 = 0x3940;
  uVar11 = 0xf;
  do {
    local_88[2] = 0;
    local_88[3] = 0;
    local_88[1] = 0;
    uVar1 = uVar11 - 1;
    local_88[0] = uVar11 & 0xffff;
    lVar2 = param_1[0x122];
    if (((*(char *)(lVar2 + -4 + lVar9) != '\0') || (*(short *)(lVar2 + -2 + lVar9) != 0)) ||
       (*(short *)(lVar2 + lVar9) != 0)) {
      FUN_1002aa010(param_1,local_88);
    }
    lVar9 = lVar9 + -0x414;
    uVar11 = uVar1;
  } while (uVar1 != 0);
  QMutex::unlock();
  FUN_1002a53f0(param_1,0x100,0x11f);
  FUN_1002a53f0(param_1,0x8100,0x811f);
  return;
}



void FUN_100436d60(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  int *piVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  
  piVar4 = (int *)*param_2;
  *param_1 = piVar4;
  if (1 < *piVar4 + 1U) {
    LOCK();
    *piVar4 = *piVar4 + 1;
    UNLOCK();
  }
  *(undefined1 *)((long)param_1 + 0xc) = *(undefined1 *)((long)param_2 + 0xc);
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  plVar1 = param_1 + 3;
  piVar4 = (int *)param_2[3];
  if (*piVar4 == 0) {
    if (piVar4[2] < 0) {
      lVar3 = QArrayData::allocate(8,8,piVar4[2] & 0x7fffffff,0);
      *plVar1 = lVar3;
      if (lVar3 == 0) {
        qBadAlloc();
        lVar3 = *plVar1;
      }
      *(byte *)(lVar3 + 0xb) = *(byte *)(lVar3 + 0xb) | 0x80;
    }
    else {
      lVar3 = QArrayData::allocate(8,8,(long)piVar4[1],0);
      *plVar1 = lVar3;
      if (lVar3 == 0) {
        qBadAlloc();
      }
    }
    lVar3 = *plVar1;
    if ((*(uint *)(lVar3 + 8) & 0x7fffffff) != 0) {
      lVar7 = param_2[3];
      lVar8 = (long)*(int *)(lVar7 + 4) << 3;
      if (lVar8 != 0) {
        plVar6 = (long *)(lVar7 + *(long *)(lVar7 + 0x10));
        plVar5 = (long *)(lVar3 + *(long *)(lVar3 + 0x10));
        do {
          lVar3 = *plVar6;
          *plVar5 = lVar3;
          if (lVar3 != 0) {
            LOCK();
            *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
            UNLOCK();
          }
          plVar5 = plVar5 + 1;
          plVar6 = plVar6 + 1;
          lVar8 = lVar8 + -8;
        } while (lVar8 != 0);
        lVar7 = param_2[3];
        lVar3 = *plVar1;
      }
      *(undefined4 *)(lVar3 + 4) = *(undefined4 *)(lVar7 + 4);
    }
  }
  else if (*piVar4 == -1) {
    *plVar1 = (long)piVar4;
  }
  else {
    LOCK();
    *piVar4 = *piVar4 + 1;
    UNLOCK();
    *plVar1 = param_2[3];
  }
  param_1[9] = param_2[9];
  param_1[8] = param_2[8];
  param_1[7] = param_2[7];
  param_1[6] = param_2[6];
  uVar2 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar2;
  plVar1 = param_1 + 10;
  piVar4 = (int *)param_2[10];
  if (*piVar4 == 0) {
    if (piVar4[2] < 0) {
      lVar3 = QArrayData::allocate(8,8,piVar4[2] & 0x7fffffff,0);
      *plVar1 = lVar3;
      if (lVar3 == 0) {
        qBadAlloc();
        lVar3 = *plVar1;
      }
      *(byte *)(lVar3 + 0xb) = *(byte *)(lVar3 + 0xb) | 0x80;
    }
    else {
      lVar3 = QArrayData::allocate(8,8,(long)piVar4[1],0);
      *plVar1 = lVar3;
      if (lVar3 == 0) {
        qBadAlloc();
      }
    }
    lVar3 = *plVar1;
    if ((*(uint *)(lVar3 + 8) & 0x7fffffff) != 0) {
      lVar7 = param_2[10];
      lVar8 = (long)*(int *)(lVar7 + 4) << 3;
      if (lVar8 != 0) {
        plVar6 = (long *)(lVar7 + *(long *)(lVar7 + 0x10));
        plVar5 = (long *)(lVar3 + *(long *)(lVar3 + 0x10));
        do {
          lVar3 = *plVar6;
          *plVar5 = lVar3;
          if (lVar3 != 0) {
            LOCK();
            *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
            UNLOCK();
          }
          plVar5 = plVar5 + 1;
          plVar6 = plVar6 + 1;
          lVar8 = lVar8 + -8;
        } while (lVar8 != 0);
        lVar7 = param_2[10];
        lVar3 = *plVar1;
      }
      *(undefined4 *)(lVar3 + 4) = *(undefined4 *)(lVar7 + 4);
    }
  }
  else {
    if (*piVar4 != -1) {
      LOCK();
      *piVar4 = *piVar4 + 1;
      UNLOCK();
      piVar4 = (int *)param_2[10];
    }
    *plVar1 = (long)piVar4;
  }
  param_1[0x10] = param_2[0x10];
  param_1[0xf] = param_2[0xf];
  param_1[0xe] = param_2[0xe];
  param_1[0xd] = param_2[0xd];
  uVar2 = param_2[0xb];
  param_1[0xc] = param_2[0xc];
  param_1[0xb] = uVar2;
  plVar1 = param_1 + 0x11;
  piVar4 = (int *)param_2[0x11];
  if (*piVar4 == 0) {
    if (piVar4[2] < 0) {
      lVar3 = QArrayData::allocate(8,8,piVar4[2] & 0x7fffffff,0);
      *plVar1 = lVar3;
      if (lVar3 == 0) {
        qBadAlloc();
        lVar3 = *plVar1;
      }
      *(byte *)(lVar3 + 0xb) = *(byte *)(lVar3 + 0xb) | 0x80;
    }
    else {
      lVar3 = QArrayData::allocate(8,8,(long)piVar4[1],0);
      *plVar1 = lVar3;
      if (lVar3 == 0) {
        qBadAlloc();
      }
    }
    lVar3 = *plVar1;
    if ((*(uint *)(lVar3 + 8) & 0x7fffffff) != 0) {
      lVar7 = param_2[0x11];
      lVar8 = (long)*(int *)(lVar7 + 4) << 3;
      if (lVar8 != 0) {
        plVar6 = (long *)(lVar7 + *(long *)(lVar7 + 0x10));
        plVar5 = (long *)(lVar3 + *(long *)(lVar3 + 0x10));
        do {
          lVar3 = *plVar6;
          *plVar5 = lVar3;
          if (lVar3 != 0) {
            LOCK();
            *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
            UNLOCK();
          }
          plVar5 = plVar5 + 1;
          plVar6 = plVar6 + 1;
          lVar8 = lVar8 + -8;
        } while (lVar8 != 0);
        lVar7 = param_2[0x11];
        lVar3 = *plVar1;
      }
      *(undefined4 *)(lVar3 + 4) = *(undefined4 *)(lVar7 + 4);
    }
  }
  else if (*piVar4 == -1) {
    *plVar1 = (long)piVar4;
  }
  else {
    LOCK();
    *piVar4 = *piVar4 + 1;
    UNLOCK();
    *plVar1 = param_2[0x11];
  }
  param_1[0x17] = param_2[0x17];
  param_1[0x16] = param_2[0x16];
  param_1[0x15] = param_2[0x15];
  param_1[0x14] = param_2[0x14];
  uVar2 = param_2[0x12];
  param_1[0x13] = param_2[0x13];
  param_1[0x12] = uVar2;
  plVar1 = param_1 + 0x18;
  piVar4 = (int *)param_2[0x18];
  if (*piVar4 == 0) {
    if (piVar4[2] < 0) {
      lVar3 = QArrayData::allocate(8,8,piVar4[2] & 0x7fffffff,0);
      *plVar1 = lVar3;
      if (lVar3 == 0) {
        qBadAlloc();
        lVar3 = *plVar1;
      }
      *(byte *)(lVar3 + 0xb) = *(byte *)(lVar3 + 0xb) | 0x80;
    }
    else {
      lVar3 = QArrayData::allocate(8,8,(long)piVar4[1],0);
      *plVar1 = lVar3;
      if (lVar3 == 0) {
        qBadAlloc();
      }
    }
    lVar3 = *plVar1;
    if ((*(uint *)(lVar3 + 8) & 0x7fffffff) != 0) {
      lVar7 = param_2[0x18];
      lVar8 = (long)*(int *)(lVar7 + 4) << 3;
      if (lVar8 != 0) {
        plVar6 = (long *)(lVar7 + *(long *)(lVar7 + 0x10));
        plVar5 = (long *)(lVar3 + *(long *)(lVar3 + 0x10));
        do {
          lVar3 = *plVar6;
          *plVar5 = lVar3;
          if (lVar3 != 0) {
            LOCK();
            *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
            UNLOCK();
          }
          plVar5 = plVar5 + 1;
          plVar6 = plVar6 + 1;
          lVar8 = lVar8 + -8;
        } while (lVar8 != 0);
        lVar7 = param_2[0x18];
        lVar3 = *plVar1;
      }
      *(undefined4 *)(lVar3 + 4) = *(undefined4 *)(lVar7 + 4);
    }
  }
  else if (*piVar4 == -1) {
    *plVar1 = (long)piVar4;
  }
  else {
    LOCK();
    *piVar4 = *piVar4 + 1;
    UNLOCK();
    *plVar1 = param_2[0x18];
  }
  param_1[0x1e] = param_2[0x1e];
  param_1[0x1d] = param_2[0x1d];
  param_1[0x1c] = param_2[0x1c];
  param_1[0x1b] = param_2[0x1b];
  uVar2 = param_2[0x19];
  param_1[0x1a] = param_2[0x1a];
  param_1[0x19] = uVar2;
  plVar1 = param_1 + 0x1f;
  piVar4 = (int *)param_2[0x1f];
  if (*piVar4 == 0) {
    if (piVar4[2] < 0) {
      lVar3 = QArrayData::allocate(8,8,piVar4[2] & 0x7fffffff,0);
      *plVar1 = lVar3;
      if (lVar3 == 0) {
        qBadAlloc();
        lVar3 = *plVar1;
      }
      *(byte *)(lVar3 + 0xb) = *(byte *)(lVar3 + 0xb) | 0x80;
    }
    else {
      lVar3 = QArrayData::allocate(8,8,(long)piVar4[1],0);
      *plVar1 = lVar3;
      if (lVar3 == 0) {
        qBadAlloc();
      }
    }
    lVar3 = *plVar1;
    if ((*(uint *)(lVar3 + 8) & 0x7fffffff) != 0) {
      lVar7 = param_2[0x1f];
      lVar8 = (long)*(int *)(lVar7 + 4) << 3;
      if (lVar8 != 0) {
        plVar6 = (long *)(lVar7 + *(long *)(lVar7 + 0x10));
        plVar5 = (long *)(lVar3 + *(long *)(lVar3 + 0x10));
        do {
          lVar3 = *plVar6;
          *plVar5 = lVar3;
          if (lVar3 != 0) {
            LOCK();
            *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
            UNLOCK();
          }
          plVar5 = plVar5 + 1;
          plVar6 = plVar6 + 1;
          lVar8 = lVar8 + -8;
        } while (lVar8 != 0);
        lVar7 = param_2[0x1f];
        lVar3 = *plVar1;
      }
      *(undefined4 *)(lVar3 + 4) = *(undefined4 *)(lVar7 + 4);
    }
  }
  else if (*piVar4 == -1) {
    *plVar1 = (long)piVar4;
  }
  else {
    LOCK();
    *piVar4 = *piVar4 + 1;
    UNLOCK();
    *plVar1 = param_2[0x1f];
  }
  param_1[0x25] = param_2[0x25];
  param_1[0x24] = param_2[0x24];
  param_1[0x23] = param_2[0x23];
  param_1[0x22] = param_2[0x22];
  uVar2 = param_2[0x20];
  param_1[0x21] = param_2[0x21];
  param_1[0x20] = uVar2;
  plVar1 = param_1 + 0x26;
  piVar4 = (int *)param_2[0x26];
  if (*piVar4 == 0) {
    if (piVar4[2] < 0) {
      lVar3 = QArrayData::allocate(8,8,piVar4[2] & 0x7fffffff,0);
      *plVar1 = lVar3;
      if (lVar3 == 0) {
        qBadAlloc();
        lVar3 = *plVar1;
      }
      *(byte *)(lVar3 + 0xb) = *(byte *)(lVar3 + 0xb) | 0x80;
    }
    else {
      lVar3 = QArrayData::allocate(8,8,(long)piVar4[1],0);
      *plVar1 = lVar3;
      if (lVar3 == 0) {
        qBadAlloc();
      }
    }
    lVar3 = *plVar1;
    if ((*(uint *)(lVar3 + 8) & 0x7fffffff) != 0) {
      lVar7 = param_2[0x26];
      lVar8 = (long)*(int *)(lVar7 + 4) << 3;
      if (lVar8 != 0) {
        plVar6 = (long *)(lVar7 + *(long *)(lVar7 + 0x10));
        plVar5 = (long *)(lVar3 + *(long *)(lVar3 + 0x10));
        do {
          lVar3 = *plVar6;
          *plVar5 = lVar3;
          if (lVar3 != 0) {
            LOCK();
            *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
            UNLOCK();
          }
          plVar5 = plVar5 + 1;
          plVar6 = plVar6 + 1;
          lVar8 = lVar8 + -8;
        } while (lVar8 != 0);
        lVar7 = param_2[0x26];
        lVar3 = *plVar1;
      }
      *(undefined4 *)(lVar3 + 4) = *(undefined4 *)(lVar7 + 4);
    }
  }
  else if (*piVar4 == -1) {
    *plVar1 = (long)piVar4;
  }
  else {
    LOCK();
    *piVar4 = *piVar4 + 1;
    UNLOCK();
    *plVar1 = param_2[0x26];
  }
  param_1[0x2c] = param_2[0x2c];
  param_1[0x2b] = param_2[0x2b];
  param_1[0x2a] = param_2[0x2a];
  param_1[0x29] = param_2[0x29];
  uVar2 = param_2[0x27];
  param_1[0x28] = param_2[0x28];
  param_1[0x27] = uVar2;
  plVar1 = param_1 + 0x2d;
  piVar4 = (int *)param_2[0x2d];
  if (*piVar4 == 0) {
    if (piVar4[2] < 0) {
      lVar3 = QArrayData::allocate(8,8,piVar4[2] & 0x7fffffff,0);
      *plVar1 = lVar3;
      if (lVar3 == 0) {
        qBadAlloc();
        lVar3 = *plVar1;
      }
      *(byte *)(lVar3 + 0xb) = *(byte *)(lVar3 + 0xb) | 0x80;
    }
    else {
      lVar3 = QArrayData::allocate(8,8,(long)piVar4[1],0);
      *plVar1 = lVar3;
      if (lVar3 == 0) {
        qBadAlloc();
      }
    }
    lVar3 = *plVar1;
    if ((*(uint *)(lVar3 + 8) & 0x7fffffff) != 0) {
      lVar7 = param_2[0x2d];
      lVar8 = (long)*(int *)(lVar7 + 4) << 3;
      if (lVar8 != 0) {
        plVar6 = (long *)(lVar7 + *(long *)(lVar7 + 0x10));
        plVar5 = (long *)(lVar3 + *(long *)(lVar3 + 0x10));
        do {
          lVar3 = *plVar6;
          *plVar5 = lVar3;
          if (lVar3 != 0) {
            LOCK();
            *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
            UNLOCK();
          }
          plVar5 = plVar5 + 1;
          plVar6 = plVar6 + 1;
          lVar8 = lVar8 + -8;
        } while (lVar8 != 0);
        lVar7 = param_2[0x2d];
        lVar3 = *plVar1;
      }
      *(undefined4 *)(lVar3 + 4) = *(undefined4 *)(lVar7 + 4);
    }
  }
  else if (*piVar4 == -1) {
    *plVar1 = (long)piVar4;
  }
  else {
    LOCK();
    *piVar4 = *piVar4 + 1;
    UNLOCK();
    *plVar1 = param_2[0x2d];
  }
  param_1[0x33] = param_2[0x33];
  param_1[0x32] = param_2[0x32];
  param_1[0x31] = param_2[0x31];
  param_1[0x30] = param_2[0x30];
  uVar2 = param_2[0x2e];
  param_1[0x2f] = param_2[0x2f];
  param_1[0x2e] = uVar2;
  plVar1 = param_1 + 0x34;
  piVar4 = (int *)param_2[0x34];
  if (*piVar4 == 0) {
    if (piVar4[2] < 0) {
      lVar3 = QArrayData::allocate(8,8,piVar4[2] & 0x7fffffff,0);
      *plVar1 = lVar3;
      if (lVar3 == 0) {
        qBadAlloc();
        lVar3 = *plVar1;
      }
      *(byte *)(lVar3 + 0xb) = *(byte *)(lVar3 + 0xb) | 0x80;
    }
    else {
      lVar3 = QArrayData::allocate(8,8,(long)piVar4[1],0);
      *plVar1 = lVar3;
      if (lVar3 == 0) {
        qBadAlloc();
      }
    }
    lVar3 = *plVar1;
    if ((*(uint *)(lVar3 + 8) & 0x7fffffff) != 0) {
      lVar7 = param_2[0x34];
      lVar8 = (long)*(int *)(lVar7 + 4) << 3;
      if (lVar8 != 0) {
        plVar6 = (long *)(lVar7 + *(long *)(lVar7 + 0x10));
        plVar5 = (long *)(lVar3 + *(long *)(lVar3 + 0x10));
        do {
          lVar3 = *plVar6;
          *plVar5 = lVar3;
          if (lVar3 != 0) {
            LOCK();
            *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
            UNLOCK();
          }
          plVar5 = plVar5 + 1;
          plVar6 = plVar6 + 1;
          lVar8 = lVar8 + -8;
        } while (lVar8 != 0);
        lVar7 = param_2[0x34];
        lVar3 = *plVar1;
      }
      *(undefined4 *)(lVar3 + 4) = *(undefined4 *)(lVar7 + 4);
    }
  }
  else if (*piVar4 == -1) {
    *plVar1 = (long)piVar4;
  }
  else {
    LOCK();
    *piVar4 = *piVar4 + 1;
    UNLOCK();
    *plVar1 = param_2[0x34];
  }
  param_1[0x3a] = param_2[0x3a];
  param_1[0x39] = param_2[0x39];
  param_1[0x38] = param_2[0x38];
  param_1[0x37] = param_2[0x37];
  uVar2 = param_2[0x35];
  param_1[0x36] = param_2[0x36];
  param_1[0x35] = uVar2;
  plVar1 = param_1 + 0x3b;
  piVar4 = (int *)param_2[0x3b];
  if (*piVar4 == 0) {
    if (piVar4[2] < 0) {
      lVar3 = QArrayData::allocate(8,8,piVar4[2] & 0x7fffffff,0);
      *plVar1 = lVar3;
      if (lVar3 == 0) {
        qBadAlloc();
        lVar3 = *plVar1;
      }
      *(byte *)(lVar3 + 0xb) = *(byte *)(lVar3 + 0xb) | 0x80;
    }
    else {
      lVar3 = QArrayData::allocate(8,8,(long)piVar4[1],0);
      *plVar1 = lVar3;
      if (lVar3 == 0) {
        qBadAlloc();
      }
    }
    lVar3 = *plVar1;
    if ((*(uint *)(lVar3 + 8) & 0x7fffffff) != 0) {
      lVar7 = param_2[0x3b];
      lVar8 = (long)*(int *)(lVar7 + 4) << 3;
      if (lVar8 != 0) {
        plVar6 = (long *)(lVar7 + *(long *)(lVar7 + 0x10));
        plVar5 = (long *)(lVar3 + *(long *)(lVar3 + 0x10));
        do {
          lVar3 = *plVar6;
          *plVar5 = lVar3;
          if (lVar3 != 0) {
            LOCK();
            *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
            UNLOCK();
          }
          plVar5 = plVar5 + 1;
          plVar6 = plVar6 + 1;
          lVar8 = lVar8 + -8;
        } while (lVar8 != 0);
        lVar7 = param_2[0x3b];
        lVar3 = *plVar1;
      }
      *(undefined4 *)(lVar3 + 4) = *(undefined4 *)(lVar7 + 4);
    }
  }
  else if (*piVar4 == -1) {
    *plVar1 = (long)piVar4;
  }
  else {
    LOCK();
    *piVar4 = *piVar4 + 1;
    UNLOCK();
    *plVar1 = param_2[0x3b];
  }
  param_1[0x41] = param_2[0x41];
  param_1[0x40] = param_2[0x40];
  param_1[0x3f] = param_2[0x3f];
  param_1[0x3e] = param_2[0x3e];
  uVar2 = param_2[0x3c];
  param_1[0x3d] = param_2[0x3d];
  param_1[0x3c] = uVar2;
  plVar1 = param_1 + 0x42;
  piVar4 = (int *)param_2[0x42];
  if (*piVar4 == 0) {
    if (piVar4[2] < 0) {
      lVar3 = QArrayData::allocate(8,8,piVar4[2] & 0x7fffffff,0);
      *plVar1 = lVar3;
      if (lVar3 == 0) {
        qBadAlloc();
        lVar3 = *plVar1;
      }
      *(byte *)(lVar3 + 0xb) = *(byte *)(lVar3 + 0xb) | 0x80;
    }
    else {
      lVar3 = QArrayData::allocate(8,8,(long)piVar4[1],0);
      *plVar1 = lVar3;
      if (lVar3 == 0) {
        qBadAlloc();
      }
    }
    lVar3 = *plVar1;
    if ((*(uint *)(lVar3 + 8) & 0x7fffffff) != 0) {
      lVar7 = param_2[0x42];
      lVar8 = (long)*(int *)(lVar7 + 4) << 3;
      if (lVar8 != 0) {
        plVar6 = (long *)(lVar7 + *(long *)(lVar7 + 0x10));
        plVar5 = (long *)(lVar3 + *(long *)(lVar3 + 0x10));
        do {
          lVar3 = *plVar6;
          *plVar5 = lVar3;
          if (lVar3 != 0) {
            LOCK();
            *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
            UNLOCK();
          }
          plVar5 = plVar5 + 1;
          plVar6 = plVar6 + 1;
          lVar8 = lVar8 + -8;
        } while (lVar8 != 0);
        lVar7 = param_2[0x42];
        lVar3 = *plVar1;
      }
      *(undefined4 *)(lVar3 + 4) = *(undefined4 *)(lVar7 + 4);
    }
  }
  else if (*piVar4 == -1) {
    *plVar1 = (long)piVar4;
  }
  else {
    LOCK();
    *piVar4 = *piVar4 + 1;
    UNLOCK();
    *plVar1 = param_2[0x42];
  }
  param_1[0x48] = param_2[0x48];
  param_1[0x47] = param_2[0x47];
  param_1[0x46] = param_2[0x46];
  param_1[0x45] = param_2[0x45];
  uVar2 = param_2[0x43];
  param_1[0x44] = param_2[0x44];
  param_1[0x43] = uVar2;
  plVar1 = param_1 + 0x49;
  piVar4 = (int *)param_2[0x49];
  if (*piVar4 == 0) {
    if (piVar4[2] < 0) {
      lVar3 = QArrayData::allocate(8,8,piVar4[2] & 0x7fffffff,0);
      *plVar1 = lVar3;
      if (lVar3 == 0) {
        qBadAlloc();
        lVar3 = *plVar1;
      }
      *(byte *)(lVar3 + 0xb) = *(byte *)(lVar3 + 0xb) | 0x80;
    }
    else {
      lVar3 = QArrayData::allocate(8,8,(long)piVar4[1],0);
      *plVar1 = lVar3;
      if (lVar3 == 0) {
        qBadAlloc();
      }
    }
    lVar3 = *plVar1;
    if ((*(uint *)(lVar3 + 8) & 0x7fffffff) != 0) {
      lVar7 = param_2[0x49];
      lVar8 = (long)*(int *)(lVar7 + 4) << 3;
      if (lVar8 != 0) {
        plVar6 = (long *)(lVar7 + *(long *)(lVar7 + 0x10));
        plVar5 = (long *)(lVar3 + *(long *)(lVar3 + 0x10));
        do {
          lVar3 = *plVar6;
          *plVar5 = lVar3;
          if (lVar3 != 0) {
            LOCK();
            *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
            UNLOCK();
          }
          plVar5 = plVar5 + 1;
          plVar6 = plVar6 + 1;
          lVar8 = lVar8 + -8;
        } while (lVar8 != 0);
        lVar7 = param_2[0x49];
        lVar3 = *plVar1;
      }
      *(undefined4 *)(lVar3 + 4) = *(undefined4 *)(lVar7 + 4);
    }
  }
  else if (*piVar4 == -1) {
    *plVar1 = (long)piVar4;
  }
  else {
    LOCK();
    *piVar4 = *piVar4 + 1;
    UNLOCK();
    *plVar1 = param_2[0x49];
  }
  param_1[0x4f] = param_2[0x4f];
  param_1[0x4e] = param_2[0x4e];
  param_1[0x4d] = param_2[0x4d];
  param_1[0x4c] = param_2[0x4c];
  uVar2 = param_2[0x4a];
  param_1[0x4b] = param_2[0x4b];
  param_1[0x4a] = uVar2;
  plVar1 = param_1 + 0x50;
  piVar4 = (int *)param_2[0x50];
  if (*piVar4 == 0) {
    if (piVar4[2] < 0) {
      lVar3 = QArrayData::allocate(8,8,piVar4[2] & 0x7fffffff,0);
      *plVar1 = lVar3;
      if (lVar3 == 0) {
        qBadAlloc();
        lVar3 = *plVar1;
      }
      *(byte *)(lVar3 + 0xb) = *(byte *)(lVar3 + 0xb) | 0x80;
    }
    else {
      lVar3 = QArrayData::allocate(8,8,(long)piVar4[1],0);
      *plVar1 = lVar3;
      if (lVar3 == 0) {
        qBadAlloc();
      }
    }
    lVar3 = *plVar1;
    if ((*(uint *)(lVar3 + 8) & 0x7fffffff) != 0) {
      lVar7 = param_2[0x50];
      lVar8 = (long)*(int *)(lVar7 + 4) << 3;
      if (lVar8 != 0) {
        plVar6 = (long *)(lVar7 + *(long *)(lVar7 + 0x10));
        plVar5 = (long *)(lVar3 + *(long *)(lVar3 + 0x10));
        do {
          lVar3 = *plVar6;
          *plVar5 = lVar3;
          if (lVar3 != 0) {
            LOCK();
            *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
            UNLOCK();
          }
          plVar5 = plVar5 + 1;
          plVar6 = plVar6 + 1;
          lVar8 = lVar8 + -8;
        } while (lVar8 != 0);
        lVar7 = param_2[0x50];
        lVar3 = *plVar1;
      }
      *(undefined4 *)(lVar3 + 4) = *(undefined4 *)(lVar7 + 4);
    }
  }
  else if (*piVar4 == -1) {
    *plVar1 = (long)piVar4;
  }
  else {
    LOCK();
    *piVar4 = *piVar4 + 1;
    UNLOCK();
    *plVar1 = param_2[0x50];
  }
  param_1[0x56] = param_2[0x56];
  param_1[0x55] = param_2[0x55];
  param_1[0x54] = param_2[0x54];
  param_1[0x53] = param_2[0x53];
  uVar2 = param_2[0x51];
  param_1[0x52] = param_2[0x52];
  param_1[0x51] = uVar2;
  plVar1 = param_1 + 0x57;
  piVar4 = (int *)param_2[0x57];
  if (*piVar4 == 0) {
    if (piVar4[2] < 0) {
      lVar3 = QArrayData::allocate(8,8,piVar4[2] & 0x7fffffff,0);
      *plVar1 = lVar3;
      if (lVar3 == 0) {
        qBadAlloc();
        lVar3 = *plVar1;
      }
      *(byte *)(lVar3 + 0xb) = *(byte *)(lVar3 + 0xb) | 0x80;
    }
    else {
      lVar3 = QArrayData::allocate(8,8,(long)piVar4[1],0);
      *plVar1 = lVar3;
      if (lVar3 == 0) {
        qBadAlloc();
      }
    }
    lVar3 = *plVar1;
    if ((*(uint *)(lVar3 + 8) & 0x7fffffff) != 0) {
      lVar7 = param_2[0x57];
      lVar8 = (long)*(int *)(lVar7 + 4) << 3;
      if (lVar8 != 0) {
        plVar6 = (long *)(lVar7 + *(long *)(lVar7 + 0x10));
        plVar5 = (long *)(lVar3 + *(long *)(lVar3 + 0x10));
        do {
          lVar3 = *plVar6;
          *plVar5 = lVar3;
          if (lVar3 != 0) {
            LOCK();
            *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
            UNLOCK();
          }
          plVar5 = plVar5 + 1;
          plVar6 = plVar6 + 1;
          lVar8 = lVar8 + -8;
        } while (lVar8 != 0);
        lVar7 = param_2[0x57];
        lVar3 = *plVar1;
      }
      *(undefined4 *)(lVar3 + 4) = *(undefined4 *)(lVar7 + 4);
    }
  }
  else if (*piVar4 == -1) {
    *plVar1 = (long)piVar4;
  }
  else {
    LOCK();
    *piVar4 = *piVar4 + 1;
    UNLOCK();
    *plVar1 = param_2[0x57];
  }
  param_1[0x5d] = param_2[0x5d];
  param_1[0x5c] = param_2[0x5c];
  param_1[0x5b] = param_2[0x5b];
  param_1[0x5a] = param_2[0x5a];
  uVar2 = param_2[0x58];
  param_1[0x59] = param_2[0x59];
  param_1[0x58] = uVar2;
  plVar1 = param_1 + 0x5e;
  piVar4 = (int *)param_2[0x5e];
  if (*piVar4 == 0) {
    if (piVar4[2] < 0) {
      lVar3 = QArrayData::allocate(8,8,piVar4[2] & 0x7fffffff,0);
      *plVar1 = lVar3;
      if (lVar3 == 0) {
        qBadAlloc();
        lVar3 = *plVar1;
      }
      *(byte *)(lVar3 + 0xb) = *(byte *)(lVar3 + 0xb) | 0x80;
    }
    else {
      lVar3 = QArrayData::allocate(8,8,(long)piVar4[1],0);
      *plVar1 = lVar3;
      if (lVar3 == 0) {
        qBadAlloc();
      }
    }
    lVar3 = *plVar1;
    if ((*(uint *)(lVar3 + 8) & 0x7fffffff) != 0) {
      lVar7 = param_2[0x5e];
      lVar8 = (long)*(int *)(lVar7 + 4) << 3;
      if (lVar8 != 0) {
        plVar6 = (long *)(lVar7 + *(long *)(lVar7 + 0x10));
        plVar5 = (long *)(lVar3 + *(long *)(lVar3 + 0x10));
        do {
          lVar3 = *plVar6;
          *plVar5 = lVar3;
          if (lVar3 != 0) {
            LOCK();
            *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
            UNLOCK();
          }
          plVar5 = plVar5 + 1;
          plVar6 = plVar6 + 1;
          lVar8 = lVar8 + -8;
        } while (lVar8 != 0);
        lVar7 = param_2[0x5e];
        lVar3 = *plVar1;
      }
      *(undefined4 *)(lVar3 + 4) = *(undefined4 *)(lVar7 + 4);
    }
  }
  else if (*piVar4 == -1) {
    *plVar1 = (long)piVar4;
  }
  else {
    LOCK();
    *piVar4 = *piVar4 + 1;
    UNLOCK();
    *plVar1 = param_2[0x5e];
  }
  param_1[100] = param_2[100];
  param_1[99] = param_2[99];
  param_1[0x62] = param_2[0x62];
  param_1[0x61] = param_2[0x61];
  uVar2 = param_2[0x5f];
  param_1[0x60] = param_2[0x60];
  param_1[0x5f] = uVar2;
  plVar1 = param_1 + 0x65;
  piVar4 = (int *)param_2[0x65];
  if (*piVar4 == 0) {
    if (piVar4[2] < 0) {
      lVar3 = QArrayData::allocate(8,8,piVar4[2] & 0x7fffffff,0);
      *plVar1 = lVar3;
      if (lVar3 == 0) {
        qBadAlloc();
        lVar3 = *plVar1;
      }
      *(byte *)(lVar3 + 0xb) = *(byte *)(lVar3 + 0xb) | 0x80;
    }
    else {
      lVar3 = QArrayData::allocate(8,8,(long)piVar4[1],0);
      *plVar1 = lVar3;
      if (lVar3 == 0) {
        qBadAlloc();
      }
    }
    lVar3 = *plVar1;
    if ((*(uint *)(lVar3 + 8) & 0x7fffffff) != 0) {
      lVar7 = param_2[0x65];
      lVar8 = (long)*(int *)(lVar7 + 4) << 3;
      if (lVar8 != 0) {
        plVar6 = (long *)(lVar7 + *(long *)(lVar7 + 0x10));
        plVar5 = (long *)(lVar3 + *(long *)(lVar3 + 0x10));
        do {
          lVar3 = *plVar6;
          *plVar5 = lVar3;
          if (lVar3 != 0) {
            LOCK();
            *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
            UNLOCK();
          }
          plVar5 = plVar5 + 1;
          plVar6 = plVar6 + 1;
          lVar8 = lVar8 + -8;
        } while (lVar8 != 0);
        lVar7 = param_2[0x65];
        lVar3 = *plVar1;
      }
      *(undefined4 *)(lVar3 + 4) = *(undefined4 *)(lVar7 + 4);
    }
  }
  else if (*piVar4 == -1) {
    *plVar1 = (long)piVar4;
  }
  else {
    LOCK();
    *piVar4 = *piVar4 + 1;
    UNLOCK();
    *plVar1 = param_2[0x65];
  }
  param_1[0x6b] = param_2[0x6b];
  param_1[0x6a] = param_2[0x6a];
  param_1[0x69] = param_2[0x69];
  param_1[0x68] = param_2[0x68];
  uVar2 = param_2[0x66];
  param_1[0x67] = param_2[0x67];
  param_1[0x66] = uVar2;
  plVar1 = param_1 + 0x6c;
  piVar4 = (int *)param_2[0x6c];
  if (*piVar4 == 0) {
    if (piVar4[2] < 0) {
      lVar3 = QArrayData::allocate(8,8,piVar4[2] & 0x7fffffff,0);
      *plVar1 = lVar3;
      if (lVar3 == 0) {
        qBadAlloc();
        lVar3 = *plVar1;
      }
      *(byte *)(lVar3 + 0xb) = *(byte *)(lVar3 + 0xb) | 0x80;
    }
    else {
      lVar3 = QArrayData::allocate(8,8,(long)piVar4[1],0);
      *plVar1 = lVar3;
      if (lVar3 == 0) {
        qBadAlloc();
      }
    }
    lVar3 = *plVar1;
    if ((*(uint *)(lVar3 + 8) & 0x7fffffff) != 0) {
      lVar7 = param_2[0x6c];
      lVar8 = (long)*(int *)(lVar7 + 4) << 3;
      if (lVar8 != 0) {
        plVar6 = (long *)(lVar7 + *(long *)(lVar7 + 0x10));
        plVar5 = (long *)(lVar3 + *(long *)(lVar3 + 0x10));
        do {
          lVar3 = *plVar6;
          *plVar5 = lVar3;
          if (lVar3 != 0) {
            LOCK();
            *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
            UNLOCK();
          }
          plVar5 = plVar5 + 1;
          plVar6 = plVar6 + 1;
          lVar8 = lVar8 + -8;
        } while (lVar8 != 0);
        lVar7 = param_2[0x6c];
        lVar3 = *plVar1;
      }
      *(undefined4 *)(lVar3 + 4) = *(undefined4 *)(lVar7 + 4);
    }
  }
  else if (*piVar4 == -1) {
    *plVar1 = (long)piVar4;
  }
  else {
    LOCK();
    *piVar4 = *piVar4 + 1;
    UNLOCK();
    *plVar1 = param_2[0x6c];
  }
  param_1[0x72] = param_2[0x72];
  param_1[0x71] = param_2[0x71];
  param_1[0x70] = param_2[0x70];
  param_1[0x6f] = param_2[0x6f];
  uVar2 = param_2[0x6d];
  param_1[0x6e] = param_2[0x6e];
  param_1[0x6d] = uVar2;
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  lVar3 = param_2[0x73];
  param_1[0x73] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  return;
}


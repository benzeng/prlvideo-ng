
void FUN_1007a2540(long *param_1,long *param_2)

{
  int *piVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  
  piVar1 = (int *)*param_2;
  if (*piVar1 == 0) {
    if (piVar1[2] < 0) {
      lVar2 = QArrayData::allocate(8,8,piVar1[2] & 0x7fffffff,0);
      *param_1 = lVar2;
      if (lVar2 == 0) {
        qBadAlloc();
        lVar2 = *param_1;
      }
      *(byte *)(lVar2 + 0xb) = *(byte *)(lVar2 + 0xb) | 0x80;
    }
    else {
      lVar2 = QArrayData::allocate(8,8,(long)piVar1[1],0);
      *param_1 = lVar2;
      if (lVar2 == 0) {
        qBadAlloc();
      }
    }
    lVar2 = *param_1;
    if ((*(uint *)(lVar2 + 8) & 0x7fffffff) != 0) {
      lVar4 = *param_2;
      lVar6 = (long)*(int *)(lVar4 + 4) << 3;
      if (lVar6 != 0) {
        plVar3 = (long *)(lVar4 + *(long *)(lVar4 + 0x10));
        plVar5 = (long *)(lVar2 + *(long *)(lVar2 + 0x10));
        do {
          piVar1 = (int *)*plVar3;
          if (*piVar1 == 0) {
            if (piVar1[2] < 0) {
              lVar2 = QArrayData::allocate(8,8,piVar1[2] & 0x7fffffff,0);
              *plVar5 = lVar2;
              if (lVar2 == 0) {
                qBadAlloc();
                lVar2 = *plVar5;
              }
              *(byte *)(lVar2 + 0xb) = *(byte *)(lVar2 + 0xb) | 0x80;
            }
            else {
              lVar2 = QArrayData::allocate(8,8,(long)piVar1[1],0);
              *plVar5 = lVar2;
              if (lVar2 == 0) {
                qBadAlloc();
              }
            }
            lVar2 = *plVar5;
            if ((*(uint *)(lVar2 + 8) & 0x7fffffff) != 0) {
              lVar4 = *plVar3;
              _memcpy((void *)(lVar2 + *(long *)(lVar2 + 0x10)),
                      (void *)(*(long *)(lVar4 + 0x10) + lVar4),(long)*(int *)(lVar4 + 4) << 3);
              *(undefined4 *)(*plVar5 + 4) = *(undefined4 *)(*plVar3 + 4);
            }
          }
          else if (*piVar1 == -1) {
            *plVar5 = (long)piVar1;
          }
          else {
            LOCK();
            *piVar1 = *piVar1 + 1;
            UNLOCK();
            *plVar5 = *plVar3;
          }
          plVar5 = plVar5 + 1;
          plVar3 = plVar3 + 1;
          lVar6 = lVar6 + -8;
        } while (lVar6 != 0);
        lVar4 = *param_2;
        lVar2 = *param_1;
      }
      *(undefined4 *)(lVar2 + 4) = *(undefined4 *)(lVar4 + 4);
    }
  }
  else if (*piVar1 == -1) {
    *param_1 = (long)piVar1;
  }
  else {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    *param_1 = *param_2;
  }
  return;
}


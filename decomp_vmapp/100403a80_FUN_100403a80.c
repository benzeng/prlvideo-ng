
void FUN_100403a80(long *param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  int iVar5;
  long lVar6;
  
  QMutex::lock();
  plVar1 = param_1 + 1;
  if (param_1[1] != 0) {
    FUN_1007d9880(&DAT_1011bbcf0,plVar1);
    *plVar1 = 0;
  }
  lVar6 = 0x7fffffffffffffff;
  *param_1 = param_2;
  if (param_2 != 0x7fffffffffffffff) {
    lVar2 = 0;
    lVar3 = DAT_1011bbcf0;
    if (DAT_1011bbcf0 == 0) {
      plVar4 = &DAT_1011bbcf0;
    }
    else {
      do {
        lVar2 = lVar3;
        plVar4 = (long *)(lVar2 + -8);
        if (plVar4 == param_1) goto LAB_100403b82;
        iVar5 = (int)param_2 - *(int *)plVar4;
        if (iVar5 == 0) {
          iVar5 = (int)param_1 - (int)plVar4;
        }
        if (iVar5 < 0) {
          plVar4 = (long *)(lVar2 + 0x10);
        }
        else {
          if (iVar5 < 1) {
            if (lVar2 == 0) goto LAB_100403b4b;
            goto LAB_100403b82;
          }
          plVar4 = (long *)(lVar2 + 8);
        }
        lVar3 = *plVar4;
      } while (*plVar4 != 0);
    }
    param_1[1] = lVar2;
    param_1[3] = 0;
    param_1[2] = 0;
    *plVar4 = (long)plVar1;
    FUN_1007d95d0(&DAT_1011bbcf0,plVar1);
  }
LAB_100403b4b:
  lVar3 = FUN_1007d99e0(&DAT_1011bbcf0);
  if (lVar3 != 0) {
    lVar6 = *(long *)(lVar3 + -8);
  }
  if (lVar6 != DAT_101119c98) {
    DAT_101119c98 = lVar6;
    FUN_1000b3d40(DAT_1011c3698,lVar6);
  }
LAB_100403b82:
  QMutex::unlock();
  return;
}


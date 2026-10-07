
void FUN_10036ba00(undefined1 *param_1,undefined8 param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = FUN_10038ebb0(param_2,param_3,1);
  lVar4 = FUN_10038ebb0(param_2,param_3,0);
  if ((lVar3 != 0) &&
     ((iVar2 = FUN_10038eb50(lVar3,"cresbeznaprgrfg\\cg.rkr"), iVar2 == 0 ||
      (iVar2 = FUN_10038eb50(lVar3,"cresbeznaprgrfg/cg.rkr"), iVar2 == 0)))) {
    *param_1 = 1;
  }
  if (lVar4 != 0) {
    iVar2 = FUN_10038eb50(lVar4,"q2q1.qyy");
    if (iVar2 == 0) {
      param_1[2] = 1;
    }
    else {
      iVar2 = FUN_10038eb50(lVar4,"snepel.rkr");
      if (iVar2 == 0) {
        param_1[1] = 1;
      }
      else {
        iVar2 = FUN_10038eb50(lVar4,"cpznex05.rkr");
        if (iVar2 == 0) {
          *param_1 = 1;
        }
        else {
          iVar2 = FUN_10038eb50(lVar4,"3qznexvpsqrzb.rkr");
          if ((iVar2 == 0) || (iVar2 = FUN_10038eb50(lVar4,"3qznexvpsjbexybnq.rkr"), iVar2 == 0)) {
            uVar1 = *DAT_1011c8478;
            if (((uVar1 == 0x36000) || (uVar1 == 0x48000)) || (uVar1 == 0x4a600)) {
              param_1[3] = DAT_1011c8478[0x1e] != 2;
            }
          }
          else {
            iVar2 = FUN_10038eb50(lVar4,"sp3_oybbqqentba.rkr");
            if ((iVar2 == 0) && ((char)DAT_1011c8478[0xb] != '\0')) {
              param_1[4] = 1;
            }
          }
        }
      }
    }
    *(undefined4 *)(param_1 + 8) = 0x101;
    if ((*DAT_1011c8478 | 0x4000) == 0x36000) {
      *(undefined4 *)(param_1 + 8) = 0xff;
      iVar2 = FUN_10038eb50(lVar4,"jvgpure.rkr");
      if (iVar2 == 0) {
        *(undefined4 *)(param_1 + 8) = 0xfa;
      }
    }
    return;
  }
  return;
}


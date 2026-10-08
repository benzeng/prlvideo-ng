
bool FUN_10031a7f0(long param_1,int param_2)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  bool bVar5;
  
  if (param_2 == 3) {
    bVar5 = false;
  }
  else {
    uVar4 = 0;
    if ((*(long *)(param_1 + 0x10) != 0) &&
       (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0)) {
      uVar4 = *(undefined8 *)(param_1 + 0x18);
    }
    cVar1 = FUN_10018ecf0(uVar4);
    if (cVar1 == '\0') {
      bVar5 = false;
    }
    else {
      uVar4 = 0;
      if ((*(long *)(param_1 + 0x10) != 0) &&
         (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0)) {
        uVar4 = *(undefined8 *)(param_1 + 0x18);
      }
      iVar2 = FUN_10018bce0(uVar4);
      if (iVar2 == 2) {
        bVar5 = false;
      }
      else {
        uVar4 = 0;
        if ((*(long *)(param_1 + 0x10) != 0) &&
           (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0)) {
          uVar4 = *(undefined8 *)(param_1 + 0x18);
        }
        iVar2 = FUN_10018a9d0(uVar4);
        if (iVar2 == 0x30000004) {
          bVar5 = false;
        }
        else {
          uVar4 = 0;
          if ((*(long *)(param_1 + 0x10) != 0) &&
             (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0)) {
            uVar4 = *(undefined8 *)(param_1 + 0x18);
          }
          cVar1 = FUN_100124db0(uVar4);
          if (cVar1 == '\0') {
            bVar5 = false;
          }
          else {
            bVar5 = true;
            if (1 < param_2 - 1U) {
              uVar4 = 0;
              if ((*(long *)(param_1 + 0x10) != 0) &&
                 (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0)) {
                uVar4 = *(undefined8 *)(param_1 + 0x18);
              }
              iVar2 = FUN_10018a9d0(uVar4);
              if (iVar2 == 0x30000005) {
                uVar4 = 0;
                if ((*(long *)(param_1 + 0x10) != 0) &&
                   (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0)) {
                  uVar4 = *(undefined8 *)(param_1 + 0x18);
                }
                cVar1 = FUN_10018ffd0(uVar4);
                if (cVar1 != '\0') {
                  return true;
                }
              }
              uVar4 = 0;
              if ((*(long *)(param_1 + 0x10) != 0) &&
                 (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0)) {
                uVar4 = *(undefined8 *)(param_1 + 0x18);
              }
              FUN_10018c2b0(uVar4);
              lVar3 = CVmConfiguration::getVmSettings();
              if (lVar3 == 0) {
                bVar5 = false;
              }
              else {
                lVar3 = CVmSettings::getVmStartupOptions();
                if (lVar3 == 0) {
                  bVar5 = false;
                }
                else {
                  iVar2 = CVmStartupOptionsBase::getAutoStart();
                  bVar5 = iVar2 == 4;
                }
              }
            }
          }
        }
      }
    }
  }
  return bVar5;
}



/* WARNING: Type propagation algorithm not settling */

undefined1 FUN_10040be50(long param_1,char param_2)

{
  long lVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  long *plVar5;
  char *pcVar6;
  undefined1 uVar7;
  float extraout_XMM0_Da;
  float local_3c [3];
  undefined4 local_30;
  
  local_3c[1] = 1.20407766e+33;
  local_3c[2] = 7.596459e+28;
  if (param_2 != '\0') {
    local_3c[2] = 1.8015962e+25;
  }
  local_30 = 0;
  plVar5 = (long *)(param_1 + 0x38);
  if (param_2 != '\0') {
    plVar5 = (long *)(param_1 + 0x30);
  }
  lVar1 = *plVar5;
  if (lVar1 == 0) {
    uVar7 = 0;
  }
  else {
    FUN_10040d640(lVar1);
    uVar7 = 1;
    if (0.0 <= extraout_XMM0_Da) {
      local_3c[0] = extraout_XMM0_Da;
      cVar2 = _AudioObjectHasProperty(*(undefined4 *)(lVar1 + 0x40),local_3c + 1);
      if (cVar2 == '\0') {
        if (DAT_1011b55f8 < 1) {
          uVar7 = 0;
        }
        else {
          pcVar6 = "output";
          if (param_2 != '\0') {
            pcVar6 = "input";
          }
          uVar7 = 0;
          FUN_1008e3970("","PrlAudioCore",1,"Audio %s device doesn\'t have a volume property",pcVar6
                       );
        }
      }
      else {
        iVar3 = _AudioObjectSetPropertyData
                          (*(undefined4 *)(lVar1 + 0x40),local_3c + 1,0,0,4,local_3c);
        if (iVar3 != 0) {
          iVar4 = FUN_1008e38f0(&DAT_101119cb0);
          if (iVar4 == 0) {
            uVar7 = 0;
          }
          else {
            pcVar6 = "output";
            if (param_2 != '\0') {
              pcVar6 = "input";
            }
            uVar7 = 0;
            FUN_1008e3970("","PrlAudioCore",0,"Can\'t set volume for %s device (%d)",pcVar6,iVar3);
          }
        }
      }
    }
  }
  return uVar7;
}


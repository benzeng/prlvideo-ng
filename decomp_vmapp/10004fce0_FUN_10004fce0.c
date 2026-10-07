
void FUN_10004fce0(undefined8 param_1,undefined8 param_2,long *param_3,uint param_4)

{
  int *piVar1;
  int *piVar2;
  undefined8 uVar3;
  char *pcVar4;
  ulong uVar5;
  int iVar6;
  
  if (param_4 < 0x10) {
    if (DAT_1011b55f8 < 1) {
      return;
    }
    piVar2 = (int *)0x0;
    if (*param_3 != 0) {
      piVar2 = *(int **)(*param_3 + 0x10);
    }
    iVar6 = 0x10;
    pcVar4 = "Warning: bad size of UIEMU request: ptr=%p, size=%u (<%u)";
  }
  else {
    piVar1 = *(int **)(*param_3 + 0x10);
    iVar6 = *piVar1;
    if (iVar6 == 1) {
      if (piVar1[2] != 1) {
        return;
      }
      if (param_4 < 0x18) {
        if (DAT_1011b55f8 < 1) {
          return;
        }
        uVar3 = 0x18;
        uVar5 = (ulong)param_4;
        pcVar4 = "UIEMU_CMD_CTL does not contains data, uSize=%u (<%u)";
      }
      else {
        uVar5 = (ulong)param_4 - 0x18;
        if (3 < uVar5) {
          FUN_10004fe60(param_1,param_2,piVar1 + 6,uVar5,piVar1[4] != 0,piVar1[5] != 0);
          return;
        }
        if (DAT_1011b55f8 < 1) {
          return;
        }
        pcVar4 = "UIEMU_CMD_CTL does not contains header, ctlSz=%u (<%u)";
        uVar3 = 4;
        uVar5 = uVar5 & 0xffffffff;
      }
      FUN_1008e3970("UIEMU","vm",1,pcVar4,uVar5,uVar3);
      return;
    }
    if (DAT_1011b55f8 < 1) {
      return;
    }
    piVar2 = (int *)0x0;
    if (*param_3 != 0) {
      piVar2 = piVar1;
    }
    pcVar4 = 
    "Warning: unsupported UIEMU request: ptr=%p, size=%u, ver={%u, %u} (must be {%u, [%u]})";
  }
  FUN_1008e3970("UIEMU","vm",1,pcVar4,piVar2,param_4,iVar6);
  return;
}


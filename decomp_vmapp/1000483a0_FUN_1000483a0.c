
void FUN_1000483a0(undefined8 param_1,undefined8 param_2,long *param_3,uint param_4)

{
  int *piVar1;
  int *piVar2;
  char *pcVar3;
  int iVar4;
  
  if (param_4 < 0x10) {
    if (DAT_1011b55f8 < 1) {
      return;
    }
    piVar2 = (int *)0x0;
    if (*param_3 != 0) {
      piVar2 = *(int **)(*param_3 + 0x10);
    }
    iVar4 = 0x10;
    pcVar3 = "Warning: bad size of SHAShellExt request: ptr=%p, size=%u (<%u)";
  }
  else {
    piVar1 = *(int **)(*param_3 + 0x10);
    iVar4 = *piVar1;
    if (iVar4 == 1) {
      return;
    }
    if (DAT_1011b55f8 < 1) {
      return;
    }
    piVar2 = (int *)0x0;
    if (*param_3 != 0) {
      piVar2 = piVar1;
    }
    pcVar3 = 
    "Warning: unsupported SHAShellExt request: ptr=%p, size=%u, ver={%u, %u} (must be {%u, [%u]})";
  }
  FUN_1008e3970("GSHEXT","vm",1,pcVar3,piVar2,param_4,iVar4);
  return;
}


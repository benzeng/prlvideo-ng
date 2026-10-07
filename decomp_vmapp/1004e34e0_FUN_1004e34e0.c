
int FUN_1004e34e0(long param_1,off_t param_2,off_t *param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  off_t oVar4;
  
  if (*(int *)(param_1 + 0x10) == -1) {
    return -0xfffffe4;
  }
  iVar1 = _ftruncate(*(int *)(param_1 + 0x10),param_2);
  iVar2 = 0;
  if (iVar1 != -1) goto switchD_1004e3531_caseD_2;
  piVar3 = ___error();
  iVar1 = *piVar3;
  if (iVar1 < 0x3f) {
    iVar2 = -0xfffffe7;
    switch(iVar1) {
    case 1:
      iVar2 = -0xffffff9;
      break;
    case 2:
      break;
    default:
      goto switchD_1004e3531_caseD_3;
    case 9:
      iVar2 = -0xfffffee;
      break;
    case 0xd:
    case 0x1e:
      iVar2 = -0xffffff9;
      break;
    case 0xe:
      iVar2 = -0xffffffa;
      break;
    case 0x11:
      iVar2 = -0xfffffe9;
      break;
    case 0x14:
      iVar2 = -0xfffffeb;
      break;
    case 0x16:
    case 0x1d:
      iVar2 = -0xffffffd;
      break;
    case 0x17:
    case 0x18:
      iVar2 = -0xfffffe5;
      break;
    case 0x1c:
      iVar2 = -0xffffff4;
    }
  }
  else {
    if (iVar1 == 0x3f) {
      iVar2 = -0xfffffe8;
      goto switchD_1004e3531_caseD_2;
    }
    if (iVar1 == 0x42) {
      iVar2 = -0xffffff5;
      goto switchD_1004e3531_caseD_2;
    }
switchD_1004e3531_caseD_3:
    iVar2 = -0xfffffe4;
  }
switchD_1004e3531_caseD_2:
  oVar4 = 0;
  if (iVar2 == 0) {
    oVar4 = param_2;
  }
  *param_3 = oVar4;
  return iVar2;
}


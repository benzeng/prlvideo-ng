
int FUN_1004e33a0(long param_1,off_t *param_2)

{
  off_t oVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  off_t oVar5;
  
  if (*(int *)(param_1 + 0x10) == -1) {
    return -0xfffffe4;
  }
  oVar1 = *param_2;
  iVar2 = _ftruncate(*(int *)(param_1 + 0x10),oVar1);
  iVar3 = 0;
  if (iVar2 != -1) goto switchD_1004e33f1_caseD_2;
  piVar4 = ___error();
  iVar2 = *piVar4;
  if (iVar2 < 0x3f) {
    iVar3 = -0xfffffe7;
    switch(iVar2) {
    case 1:
      iVar3 = -0xffffff9;
      break;
    case 2:
      break;
    default:
      goto switchD_1004e33f1_caseD_3;
    case 9:
      iVar3 = -0xfffffee;
      break;
    case 0xd:
    case 0x1e:
      iVar3 = -0xffffff9;
      break;
    case 0xe:
      iVar3 = -0xffffffa;
      break;
    case 0x11:
      iVar3 = -0xfffffe9;
      break;
    case 0x14:
      iVar3 = -0xfffffeb;
      break;
    case 0x16:
    case 0x1d:
      iVar3 = -0xffffffd;
      break;
    case 0x17:
    case 0x18:
      iVar3 = -0xfffffe5;
      break;
    case 0x1c:
      iVar3 = -0xffffff4;
    }
  }
  else {
    if (iVar2 == 0x3f) {
      iVar3 = -0xfffffe8;
      goto switchD_1004e33f1_caseD_2;
    }
    if (iVar2 == 0x42) {
      iVar3 = -0xffffff5;
      goto switchD_1004e33f1_caseD_2;
    }
switchD_1004e33f1_caseD_3:
    iVar3 = -0xfffffe4;
  }
switchD_1004e33f1_caseD_2:
  oVar5 = 0;
  if (iVar3 == 0) {
    oVar5 = oVar1;
  }
  *param_2 = oVar5;
  return iVar3;
}


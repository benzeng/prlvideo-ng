
int FUN_1007ffdf0(long param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  ulong uVar5;
  long lVar6;
  code *pcVar7;
  time_t local_38;
  
  local_38 = _time((time_t *)0x0);
  FUN_100886e60(0,&local_38,8);
  FUN_100888070();
  piVar4 = ___error();
  *piVar4 = 0;
  pcVar7 = *(code **)(param_1 + 0x150);
  if (pcVar7 == (code *)0x0) {
    pcVar7 = *(code **)(*(long *)(param_1 + 0x170) + 0x108);
  }
  *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
  uVar5 = FUN_10080ee80(param_1);
  if (((uVar5 & 0x3000) == 0) || (uVar5 = FUN_10080ee80(param_1), (uVar5 & 0x4000) != 0)) {
    FUN_10080d4e0(param_1);
  }
  iVar1 = *(int *)(param_1 + 0x48);
  iVar3 = -1;
  iVar2 = iVar1;
  if (pcVar7 != (code *)0x0) {
LAB_1007fff5c:
    iVar1 = iVar2;
    if (iVar1 < 0x4000) {
      if ((iVar1 != 0x2000) && (iVar1 != 0x2003)) goto joined_r0x000100800031;
    }
    else if ((iVar1 != 0x4000) && (iVar1 != 0x6000)) goto LAB_10080005e;
    *(undefined4 *)(param_1 + 0x38) = 1;
    (*pcVar7)(param_1,0x10,1);
    *(undefined4 *)(param_1 + 4) = 0x2000;
    if (*(long *)(param_1 + 0x50) == 0) {
      lVar6 = FUN_10087ccc0();
      if (lVar6 == 0) goto LAB_100800085;
      iVar2 = FUN_10087cd60(lVar6,0x4000);
      if (iVar2 == 0) goto LAB_10080001c;
      *(long *)(param_1 + 0x50) = lVar6;
    }
    FUN_1007fa490(param_1);
    *(undefined4 *)(param_1 + 0x48) = 0x2210;
    piVar4 = (int *)(*(long *)(param_1 + 0x170) + 0x74);
    *piVar4 = *piVar4 + 1;
    *(undefined4 *)(param_1 + 0x60) = 0;
    iVar2 = 0x2210;
    if (iVar1 != 0x2210) {
      *(int *)(param_1 + 0x48) = iVar1;
      (*pcVar7)(param_1,0x2001,1);
      *(undefined4 *)(param_1 + 0x48) = 0x2210;
    }
    goto LAB_1007fff5c;
  }
  do {
    if (iVar1 < 0x4000) {
      if ((iVar1 != 0x2000) && (iVar1 != 0x2003)) break;
    }
    else if ((iVar1 != 0x4000) && (iVar1 != 0x6000)) goto LAB_10080005e;
    *(undefined4 *)(param_1 + 0x38) = 1;
    *(undefined4 *)(param_1 + 4) = 0x2000;
    if (*(long *)(param_1 + 0x50) == 0) {
      lVar6 = FUN_10087ccc0();
      if (lVar6 == 0) goto LAB_100800085;
      iVar1 = FUN_10087cd60(lVar6,0x4000);
      if (iVar1 == 0) goto LAB_10080001c;
      *(long *)(param_1 + 0x50) = lVar6;
    }
    FUN_1007fa490(param_1);
    *(undefined4 *)(param_1 + 0x48) = 0x2210;
    piVar4 = (int *)(*(long *)(param_1 + 0x170) + 0x74);
    *piVar4 = *piVar4 + 1;
    *(undefined4 *)(param_1 + 0x60) = 0;
    iVar1 = 0x2210;
  } while( true );
joined_r0x000100800031:
  if (iVar1 - 0x2210U < 2) {
    *(undefined4 *)(param_1 + 0x44) = 0;
    iVar3 = FUN_100800100(param_1);
    if (-1 < iVar3) {
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + -1;
      return iVar3;
    }
    goto LAB_100800085;
  }
LAB_10080005e:
  FUN_100887ce0(0x14,0x73,0xff,"s23_srvr.c",0xd8);
  goto LAB_10080007f;
LAB_10080001c:
  FUN_10087cd20(lVar6);
LAB_10080007f:
  iVar3 = -1;
LAB_100800085:
  *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + -1;
  if (pcVar7 != (code *)0x0) {
    (*pcVar7)(param_1,0x2002,iVar3);
  }
  return iVar3;
}


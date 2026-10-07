
undefined8 FUN_1008907d0(long param_1,int param_2,uint param_3,void *param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = *(long *)(param_1 + 0x78);
  uVar3 = 0xffffffff;
  if (param_2 < 8) {
    if (param_2 != 0) {
      return 0xffffffff;
    }
    *(undefined4 *)(lVar1 + 0x104) = 8;
    *(undefined4 *)(lVar1 + 0x108) = 0xc;
    *(undefined8 *)(lVar1 + 0xf4) = 0;
    *(undefined8 *)(lVar1 + 0xfc) = 0;
    goto LAB_10089087c;
  }
  if (param_2 < 0x14) {
    switch(param_2) {
    case 8:
      if (*(long *)(lVar1 + 0x140) == 0) {
        return 1;
      }
      if (*(long *)(lVar1 + 0x140) != lVar1) {
        return 0;
      }
      *(long *)(*(long *)((long)param_4 + 0x78) + 0x140) = *(long *)((long)param_4 + 0x78);
      break;
    case 9:
      param_3 = 0xf - param_3;
      goto LAB_10089086a;
    default:
      goto switchD_100890831_caseD_a;
    case 0x10:
      if (*(int *)(param_1 + 0x10) == 0) {
        return 0;
      }
      if (*(int *)(lVar1 + 0xfc) == 0) {
        return 0;
      }
      lVar2 = FUN_100846570(lVar1 + 0x110,param_4,(long)(int)param_3);
      if (lVar2 == 0) {
        return 0;
      }
      *(undefined8 *)(lVar1 + 0xf8) = 0;
      *(undefined4 *)(lVar1 + 0x100) = 0;
      break;
    case 0x11:
      if (0xc < param_3 - 4) {
        return 0;
      }
      if ((param_3 & 1) != 0) {
        return 0;
      }
      if ((param_4 != (void *)0x0) && (*(int *)(param_1 + 0x10) != 0)) {
        return 0;
      }
      if (param_4 != (void *)0x0) {
        *(undefined4 *)(lVar1 + 0xfc) = 1;
        _memcpy((void *)(param_1 + 0x38),param_4,(long)(int)param_3);
      }
      *(uint *)(lVar1 + 0x108) = param_3;
    }
  }
  else {
    if (param_2 != 0x14) {
      return 0xffffffff;
    }
LAB_10089086a:
    if (6 < param_3 - 2) {
      return 0;
    }
    *(uint *)(lVar1 + 0x104) = param_3;
  }
LAB_10089087c:
  uVar3 = 1;
switchD_100890831_caseD_a:
  return uVar3;
}


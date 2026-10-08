
undefined8 FUN_10010a090(undefined8 param_1,undefined4 param_2)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  
  lVar1 = FUN_10015a340();
  uVar3 = 0;
  switch(param_2) {
  case 3:
    plVar2 = *(long **)(lVar1 + 0x140);
    break;
  default:
    goto switchD_10010a0bc_caseD_4;
  case 5:
    plVar2 = *(long **)(lVar1 + 0x148);
    break;
  case 6:
    plVar2 = *(long **)(lVar1 + 0x150);
    break;
  case 8:
    plVar2 = *(long **)(lVar1 + 0x168);
    break;
  case 10:
    plVar2 = *(long **)(lVar1 + 0x158);
    break;
  case 0xb:
    plVar2 = *(long **)(lVar1 + 0x160);
    break;
  case 0xc:
    plVar2 = *(long **)(lVar1 + 0x170);
    break;
  case 0xd:
    plVar2 = *(long **)(lVar1 + 0x178);
    break;
  case 0xf:
    plVar2 = *(long **)(lVar1 + 0x180);
    break;
  case 0x10:
    plVar2 = *(long **)(lVar1 + 0x188);
    break;
  case 0x11:
  case 0x14:
    plVar2 = *(long **)(lVar1 + 0x198);
    break;
  case 0x12:
    plVar2 = *(long **)(lVar1 + 0x1a0);
  }
  lVar1 = *plVar2;
  uVar3 = CONCAT71((int7)((ulong)lVar1 >> 8),*(int *)(lVar1 + 0xc) != *(int *)(lVar1 + 8));
switchD_10010a0bc_caseD_4:
  return uVar3;
}


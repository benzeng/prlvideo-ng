
bool FUN_00403a50(uint param_1)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  
  if (param_1 < 9) {
    bVar3 = *(long *)(g_PrlGLibAPI + (ulong)param_1 * 0x30 + 0x20) != 0;
    if (param_1 != 0) {
      uVar2 = 0;
      if (bVar3) goto LAB_00403ac0;
      while (uVar1 = uVar2 + 1, uVar1 < param_1) {
        while( true ) {
          uVar2 = uVar2 + 1;
          if (1 < uVar1) goto LAB_00403a88;
          if (bVar3 == false) break;
LAB_00403ac0:
          bVar3 = *(long *)(g_PrlGLibAPI + (ulong)uVar2 * 0x30 + 0x20) != 0;
          uVar1 = uVar2 + 1;
          if (param_1 <= uVar1) goto LAB_00403a88;
        }
      }
LAB_00403a88:
      if (param_1 == 4) {
        return bVar3 != false && g_PrlGLibAPI._176_8_ != 0;
      }
    }
    if (param_1 != 6) {
      return bVar3;
    }
    if (bVar3 != false) {
      return g_PrlGLibAPI._176_8_ != 0;
    }
  }
  return false;
}


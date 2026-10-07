
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * FUN_100424310(char *param_1,undefined8 *param_2,char param_3)

{
  undefined1 (*pauVar1) [16];
  undefined1 (*pauVar2) [16];
  undefined1 auVar3 [16];
  int iVar4;
  ulong uVar5;
  undefined1 (*pauVar6) [16];
  char *pcVar7;
  undefined1 (*pauVar8) [16];
  ulong uVar9;
  ulong uVar10;
  undefined1 (*pauVar11) [16];
  ushort *puVar12;
  ulong uVar13;
  undefined1 (*pauVar14) [16];
  undefined1 (*pauVar15) [16];
  undefined1 auVar16 [16];
  char *local_40;
  undefined1 (*local_38) [16];
  
  pauVar1 = (undefined1 (*) [16])*param_2;
  pauVar2 = (undefined1 (*) [16])param_2[1];
  pauVar6 = pauVar1;
  pauVar15 = (undefined1 (*) [16])0x0;
  if (param_3 != '\0') {
    uVar5 = (long)pauVar2 - (long)pauVar1 >> 1;
    uVar13 = 0xffffffffffffffff;
    if (!CARRY8(uVar5,uVar5)) {
      uVar13 = uVar5 * 2;
    }
    local_38 = pauVar1;
    pauVar6 = operator_new__(uVar13);
    auVar3 = _DAT_100b420d0;
    pauVar15 = pauVar6;
    if (pauVar1 != pauVar2) {
      uVar10 = ((long)pauVar2 - (long)pauVar1) - 2U >> 1;
      uVar13 = uVar10 + 1;
      uVar9 = uVar13 & 0xfffffffffffffff8;
      pauVar8 = pauVar1;
      uVar5 = 0;
      if ((uVar9 != 0) &&
         (((undefined1 (*) [16])(*pauVar1 + uVar10 * 2) < pauVar6 ||
          (uVar5 = 0, (undefined1 (*) [16])(*pauVar6 + uVar10 * 2) < pauVar1)))) {
        pauVar8 = (undefined1 (*) [16])(*pauVar1 + uVar9 * 2);
        uVar10 = uVar13 & 0xfffffffffffffff8;
        pauVar11 = pauVar6;
        pauVar14 = pauVar1;
        do {
          auVar16 = pshufb(*pauVar14,auVar3);
          *pauVar11 = auVar16;
          pauVar11 = pauVar11 + 1;
          pauVar14 = pauVar14 + 1;
          uVar10 = uVar10 - 8;
          uVar5 = uVar9;
        } while (uVar10 != 0);
      }
      if (uVar13 != uVar5) {
        puVar12 = (ushort *)(*pauVar6 + uVar5 * 2);
        do {
          *puVar12 = *(ushort *)*pauVar8 << 8 | *(ushort *)*pauVar8 >> 8;
          pauVar8 = (undefined1 (*) [16])(*pauVar8 + 2);
          puVar12 = puVar12 + 1;
        } while (pauVar2 != pauVar8);
      }
    }
  }
  uVar13 = ((long)pauVar2 - (long)pauVar1) * 2;
  local_38 = pauVar6;
  pcVar7 = operator_new__(uVar13);
  local_40 = pcVar7;
  iVar4 = FUN_100422df0(&local_38,*pauVar6 + ((long)pauVar2 - (long)pauVar1 & 0xfffffffffffffffe),
                        &local_40,pcVar7 + uVar13,0);
  if (iVar4 == 0) {
    _strlen(pcVar7);
    std::string::__init(param_1,(ulong)pcVar7);
  }
  else {
    std::string::__init(param_1,0x100a320a0);
  }
  operator_delete__(pcVar7);
  if (pauVar15 != (undefined1 (*) [16])0x0) {
    operator_delete__(pauVar15);
  }
  return param_1;
}


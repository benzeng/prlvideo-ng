
bool FUN_100c2cd30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  int iVar5;
  undefined8 *puVar6;
  int *piVar7;
  undefined8 *puVar8;
  bool bVar9;
  
  FUN_100c27c60(param_4);
  puVar2 = (undefined8 *)FUN_100c27e20(param_4);
  puVar3 = (undefined8 *)FUN_100c27e20(param_4);
  bVar9 = false;
  if ((((puVar2 != (undefined8 *)0x0) && (puVar3 != (undefined8 *)0x0)) &&
      (lVar4 = FUN_100c26b50(puVar2,param_2), lVar4 != 0)) &&
     (lVar4 = FUN_100c26b50(puVar3,param_3), bVar9 = false, lVar4 != 0)) {
    *(undefined4 *)(puVar2 + 2) = 0;
    *(undefined4 *)(puVar3 + 2) = 0;
    iVar1 = FUN_100c27160(puVar2,puVar3);
    puVar8 = puVar3;
    if (iVar1 < 0) {
      puVar8 = puVar2;
      puVar2 = puVar3;
    }
    iVar1 = *(int *)(puVar8 + 1);
    if (iVar1 != 0) {
      piVar7 = (int *)(puVar8 + 1);
      iVar5 = 0;
      do {
        puVar3 = puVar8;
        if ((*(int *)(puVar2 + 1) < 1) || ((*(byte *)*puVar2 & 1) == 0)) {
          if ((0 < iVar1) && (puVar6 = puVar2, (*(byte *)*puVar8 & 1) != 0)) goto LAB_100c2ce31;
          iVar1 = FUN_100c2b0f0(puVar2,puVar2);
          bVar9 = false;
          if ((iVar1 == 0) || (iVar1 = FUN_100c2b0f0(puVar8,puVar8), iVar1 == 0))
          goto LAB_100c2cf02;
          iVar5 = iVar5 + 1;
          iVar1 = *piVar7;
        }
        else {
          puVar6 = puVar8;
          if ((iVar1 < 1) || ((*(byte *)*puVar8 & 1) == 0)) {
LAB_100c2ce31:
            iVar1 = FUN_100c2b0f0(puVar6,puVar6);
          }
          else {
            iVar1 = FUN_100c23090(puVar2,puVar2,puVar8);
            bVar9 = false;
            if (iVar1 == 0) goto LAB_100c2cf02;
            iVar1 = FUN_100c2b0f0(puVar2,puVar2);
          }
          bVar9 = false;
          if (iVar1 == 0) goto LAB_100c2cf02;
          iVar1 = FUN_100c27160(puVar2,puVar8);
          if (iVar1 < 0) {
            puVar3 = puVar2;
            puVar2 = puVar8;
          }
          piVar7 = (int *)(puVar3 + 1);
          iVar1 = *(int *)(puVar3 + 1);
        }
        puVar8 = puVar3;
      } while (iVar1 != 0);
      if (iVar5 != 0) {
        iVar1 = FUN_100c2b1d0(puVar2,puVar2,iVar5);
        bVar9 = false;
        if (iVar1 == 0) goto LAB_100c2cf02;
      }
    }
    bVar9 = false;
    if (puVar2 != (undefined8 *)0x0) {
      lVar4 = FUN_100c26b50(param_1,puVar2);
      bVar9 = lVar4 != 0;
    }
  }
LAB_100c2cf02:
  FUN_100c27d40(param_4);
  return bVar9;
}


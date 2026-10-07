
undefined4 FUN_100205e4a(long param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  long lVar3;
  bool bVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  int *local_40;
  int *local_28;
  
  iVar1 = *(int *)(param_1 + 0x24);
  piVar2 = *(int **)(param_2 + 0x1c);
  if ((*param_2 == 1) || ((((uint)param_2[0x16] >> 0x16 ^ 1) & 1) == 0)) {
    return 0;
  }
  param_2[0x16] = param_2[0x16] | 0x400000;
  if (piVar2 == (int *)0x0) {
    FUN_1001e8d2a(param_1,"xmlSchemaFixupSimpleTypeStageTwo","missing baseType");
  }
  else {
    if ((*piVar2 != 1) && ((((uint)piVar2[0x16] >> 0x16 ^ 1) & 1) != 0)) {
      FUN_100206680(piVar2,param_1);
    }
    if (((uint)piVar2[0x16] >> 0x17 & 1) != 0) {
      return 0;
    }
    iVar5 = FUN_100203b08(param_1,param_2);
    if (iVar5 == -1) goto LAB_100205ed7;
    if (iVar5 != 0) goto LAB_100206654;
    if (param_2[0x17] == 4) {
      if ((((*piVar2 == 5) || (piVar2[0x28] == 0x2d)) && (*(long *)(piVar2 + 0x30) != 0)) &&
         (((byte)((uint)param_2[0x16] >> 2) & 1) == 1)) {
        if (*(long *)(param_2 + 0x30) == 0) {
          local_40 = *(int **)(piVar2 + 0x30);
        }
        else {
          local_40 = *(int **)(param_2 + 0x30);
          param_2[0x30] = 0;
          param_2[0x31] = 0;
        }
        puVar6 = (undefined4 *)
                 FUN_1001ee16d(param_1,*(undefined8 *)(param_1 + 0x40),0,
                               *(undefined8 *)(param_2 + 0x34),*(undefined8 *)(param_2 + 0x12),0);
        if (puVar6 == (undefined4 *)0x0) goto LAB_100205ed7;
        *puVar6 = 4;
        *(int **)(puVar6 + 0x1c) = local_40;
        *(undefined8 *)(puVar6 + 0x1e) = *(undefined8 *)(param_2 + 0x1e);
        param_2[0x1e] = 0;
        param_2[0x1f] = 0;
        *(undefined8 *)(puVar6 + 0x2c) = *(undefined8 *)(param_2 + 0x2c);
        param_2[0x2c] = 0;
        param_2[0x2d] = 0;
        *(undefined4 **)(param_2 + 0x30) = puVar6;
        if ((*local_40 != 1) && ((((uint)local_40[0x16] >> 0x16 ^ 1) & 1) != 0)) {
          FUN_100206680(local_40,param_1);
        }
        iVar5 = FUN_100205a36(param_1,puVar6);
        if (iVar5 == -1) goto LAB_100205ed7;
        if (iVar5 != 0) goto LAB_100206654;
        iVar5 = FUN_100205c40(param_1,puVar6);
        if (iVar5 == -1) goto LAB_100205ed7;
        if (iVar5 != 0) goto LAB_100206654;
      }
      else if (((*piVar2 == 5) || (piVar2[0x28] == 0x2d)) &&
              ((piVar2[0x17] == 3 && (((byte)((uint)param_2[0x16] >> 2) & 1) == 1)))) {
        if ((*(long *)(param_2 + 0x30) == 0) || (*(long *)(*(long *)(param_2 + 0x30) + 0x70) == 0))
        {
          FUN_1001ea46a(param_1,0xbfd,0,param_2,0,
                        "Internal error: xmlSchemaTypeFixup, complex type \'%s\': the <simpleContent><restriction> is missing a <simpleType> child, but was not catched by xmlSchemaCheckSRCCT()"
                        ,*(undefined8 *)(param_2 + 4));
          goto LAB_100205ed7;
        }
      }
      else if (((*piVar2 == 5) || (piVar2[0x28] == 0x2d)) &&
              (((byte)((uint)param_2[0x16] >> 1) & 1) == 1)) {
        if (*(long *)(piVar2 + 0x30) == 0) {
          FUN_1001ea46a(param_1,0xbfd,0,param_2,0,
                        "Internal error: xmlSchemaTypeFixup, complex type \'%s\': the <extension>ed base type is a complex type with no simple content type"
                        ,*(undefined8 *)(param_2 + 4));
          goto LAB_100205ed7;
        }
        *(undefined8 *)(param_2 + 0x30) = *(undefined8 *)(piVar2 + 0x30);
      }
      else {
        if (((*piVar2 != 4) && ((*piVar2 != 1 || (piVar2[0x28] == 0x2d)))) ||
           (((byte)((uint)param_2[0x16] >> 1) & 1) != 1)) {
          FUN_1001ea46a(param_1,0xbfd,0,param_2,0,
                        "Internal error: xmlSchemaTypeFixup, complex type \'%s\' with <simpleContent>: unhandled derivation case"
                        ,*(undefined8 *)(param_2 + 4));
          goto LAB_100205ed7;
        }
        *(int **)(param_2 + 0x30) = piVar2;
      }
    }
    else {
      bVar4 = false;
      local_28 = *(int **)(param_2 + 0xe);
      if ((local_28 == (int *)0x0) ||
         (((*local_28 == 0x19 &&
           (((**(int **)(local_28 + 6) == 8 || (**(int **)(local_28 + 6) == 6)) ||
            ((**(int **)(local_28 + 6) == 7 && (local_28[8] == 0)))))) &&
          (*(long *)(*(long *)(local_28 + 6) + 0x18) == 0)))) {
        if ((param_2[0x16] & 1U) == 0) {
          param_2[0x17] = 1;
        }
        else {
          if ((local_28 == (int *)0x0) || (**(int **)(local_28 + 6) != 6)) {
            local_28 = (int *)FUN_1001ee685(param_1,*(undefined8 *)(param_1 + 0x40),
                                            *(undefined8 *)(param_2 + 0x12),1,1);
            if (local_28 == (int *)0x0) goto LAB_100205ed7;
            uVar7 = FUN_1001ee5a9(param_1,*(undefined8 *)(param_1 + 0x40),6,
                                  *(undefined8 *)(param_2 + 0x12));
            *(undefined8 *)(local_28 + 6) = uVar7;
            if (*(long *)(local_28 + 6) == 0) goto LAB_100205ed7;
            *(int **)(param_2 + 0xe) = local_28;
          }
          bVar4 = true;
          param_2[0x17] = 2;
        }
      }
      else {
        param_2[0x17] = 2;
      }
      if (((uint)param_2[0x16] >> 2 & 1) == 0) {
        if (param_2[0x17] == 1) {
          param_2[0x17] = piVar2[0x17];
          *(undefined8 *)(param_2 + 0xe) = *(undefined8 *)(piVar2 + 0xe);
        }
        else if (piVar2[0x17] == 1) {
          if ((param_2[0x16] & 1U) != 0) {
            param_2[0x17] = 3;
          }
        }
        else {
          if ((param_2[0x16] & 1U) != 0) {
            param_2[0x17] = 3;
          }
          if (bVar4) {
            *(undefined8 *)(*(long *)(local_28 + 6) + 0x18) = *(undefined8 *)(piVar2 + 0xe);
          }
          else {
            uVar7 = *(undefined8 *)(param_2 + 0xe);
            lVar8 = FUN_1001ee685(param_1,*(undefined8 *)(param_1 + 0x40),
                                  *(undefined8 *)(param_2 + 0x12),1,1);
            if (lVar8 == 0) goto LAB_100205ed7;
            uVar9 = FUN_1001ee5a9(param_1,*(undefined8 *)(param_1 + 0x40),6,
                                  *(undefined8 *)(param_2 + 0x12));
            *(undefined8 *)(lVar8 + 0x18) = uVar9;
            if (*(long *)(lVar8 + 0x18) == 0) goto LAB_100205ed7;
            *(long *)(param_2 + 0xe) = lVar8;
            lVar3 = *(long *)(lVar8 + 0x18);
            uVar9 = FUN_1001ee685(param_1,*(undefined8 *)(param_1 + 0x40),
                                  *(undefined8 *)(param_2 + 0x12),
                                  *(undefined4 *)(*(long *)(param_2 + 0xe) + 0x20),
                                  *(undefined4 *)(*(long *)(param_2 + 0xe) + 0x24));
            *(undefined8 *)(lVar3 + 0x18) = uVar9;
            if (*(long *)(*(long *)(lVar8 + 0x18) + 0x18) == 0) goto LAB_100205ed7;
            lVar8 = *(long *)(*(long *)(lVar8 + 0x18) + 0x18);
            *(undefined8 *)(lVar8 + 0x18) = *(undefined8 *)(*(long *)(piVar2 + 0xe) + 0x18);
            *(undefined8 *)(lVar8 + 0x10) = uVar7;
          }
        }
      }
      else if ((param_2[0x17] != 1) && ((param_2[0x16] & 1U) != 0)) {
        param_2[0x17] = 3;
      }
    }
    iVar5 = FUN_100203a9d(param_1,param_2);
    if (iVar5 != -1) {
      if (iVar5 == 0) {
        iVar5 = FUN_1002001a3(param_1,param_2);
        if (iVar5 == -1) goto LAB_100205ed7;
        if (iVar5 == 0) {
          if (*(int *)(param_1 + 0x24) != iVar1) {
            return *(undefined4 *)(param_1 + 0x20);
          }
          return 0;
        }
      }
LAB_100206654:
      param_2[0x16] = param_2[0x16] | 0x800000;
      return *(undefined4 *)(param_1 + 0x20);
    }
  }
LAB_100205ed7:
  param_2[0x16] = param_2[0x16] | 0x800000;
  return 0xffffffff;
}


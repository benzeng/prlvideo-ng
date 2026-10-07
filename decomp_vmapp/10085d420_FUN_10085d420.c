
undefined8 FUN_10085d420(long *param_1,long param_2,long param_3,long param_4,long param_5)

{
  long *plVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  
  iVar2 = FUN_10085c5d0();
  if (iVar2 != 0) {
    FUN_100887ce0(0x10,0xa7,0x6a,"ecp_smpl.c",0x224);
    return 0;
  }
  lVar8 = 0;
  if ((param_5 == 0) && (lVar8 = FUN_10084c820(), param_5 = lVar8, lVar8 == 0)) {
    return 0;
  }
  uVar10 = 0;
  FUN_10084ca60(param_5);
  puVar3 = (undefined8 *)FUN_10084cc20(param_5);
  uVar4 = FUN_10084cc20(param_5);
  uVar5 = FUN_10084cc20(param_5);
  lVar6 = FUN_10084cc20(param_5);
  if (lVar6 == 0) goto LAB_10085d73e;
  puVar9 = (undefined8 *)(param_2 + 0x38);
  if ((*(code **)(*param_1 + 0x120) == (code *)0x0) ||
     (iVar2 = (**(code **)(*param_1 + 0x120))(param_1,puVar3,puVar9,param_5), puVar9 = puVar3,
     iVar2 != 0)) {
    if ((*(int *)(puVar9 + 1) == 1) && ((*(long *)*puVar9 == 1 && (*(int *)(puVar9 + 2) == 0)))) {
      if (*(code **)(*param_1 + 0x120) == (code *)0x0) {
        if ((param_3 == 0) || (lVar6 = FUN_10084b950(param_3,param_2 + 8), lVar6 != 0)) {
          uVar10 = 0;
          if ((param_4 != 0) && (lVar6 = FUN_10084b950(param_4,param_2 + 0x20), lVar6 == 0))
          goto LAB_10085d73e;
          goto LAB_10085d735;
        }
      }
      else if ((param_3 == 0) ||
              (iVar2 = (**(code **)(*param_1 + 0x120))(param_1,param_3,param_2 + 8,param_5),
              iVar2 != 0)) {
        if (param_4 != 0) {
          iVar2 = (**(code **)(*param_1 + 0x120))(param_1,param_4,param_2 + 0x20,param_5);
LAB_10085d6ee:
          uVar10 = 0;
          if (iVar2 == 0) goto LAB_10085d73e;
        }
LAB_10085d735:
        uVar10 = 1;
        goto LAB_10085d73e;
      }
    }
    else {
      plVar1 = param_1 + 0xd;
      lVar7 = FUN_100851d20(uVar4,puVar9,plVar1,param_5);
      if (lVar7 != 0) {
        if (*(long *)(*param_1 + 0x118) == 0) {
          iVar2 = (**(code **)(*param_1 + 0x108))(param_1,uVar5,uVar4,param_5);
        }
        else {
          iVar2 = FUN_10084eba0(uVar5,uVar4,plVar1,param_5);
        }
        uVar10 = 0;
        if ((iVar2 == 0) ||
           ((param_3 != 0 &&
            (iVar2 = (**(code **)(*param_1 + 0x100))(param_1,param_3,param_2 + 8,uVar5,param_5),
            iVar2 == 0)))) goto LAB_10085d73e;
        if (param_4 != 0) {
          if (*(long *)(*param_1 + 0x118) == 0) {
            iVar2 = (**(code **)(*param_1 + 0x100))(param_1,lVar6,uVar5,uVar4,param_5);
          }
          else {
            iVar2 = FUN_10084eac0(lVar6,uVar5,uVar4,plVar1,param_5);
          }
          if (iVar2 == 0) goto LAB_10085d73e;
          iVar2 = (**(code **)(*param_1 + 0x100))(param_1,param_4,param_2 + 0x20,lVar6,param_5);
          goto LAB_10085d6ee;
        }
        goto LAB_10085d735;
      }
      FUN_100887ce0(0x10,0xa7,3,"ecp_smpl.c",599);
    }
  }
  uVar10 = 0;
LAB_10085d73e:
  FUN_10084cb40(param_5);
  if (lVar8 != 0) {
    FUN_10084c8b0(lVar8);
  }
  return uVar10;
}


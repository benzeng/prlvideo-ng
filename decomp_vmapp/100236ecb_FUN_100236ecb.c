
int * FUN_100236ecb(long param_1,long param_2,int param_3)

{
  undefined8 uVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  long local_38;
  int *local_28;
  int *local_20;
  
  local_28 = (int *)0x0;
  local_20 = (int *)0x0;
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  for (local_38 = param_2; local_38 != 0; local_38 = *(long *)(local_38 + 0x30)) {
    if ((((local_38 == 0) || (*(long *)(local_38 + 0x48) == 0)) ||
        (iVar3 = _xmlStrEqual(*(xmlChar **)(local_38 + 0x10),(xmlChar *)"element"), iVar3 == 0)) ||
       (iVar3 = _xmlStrEqual(*(xmlChar **)(*(long *)(local_38 + 0x48) + 0x10),
                             PTR_s_http___relaxng_org_ns_structure__1011151b0), iVar3 == 0)) {
      piVar5 = (int *)FUN_100234ea7(param_1,local_38);
      piVar2 = local_28;
      piVar4 = local_20;
      if ((piVar5 != (int *)0x0) && (piVar2 = piVar5, piVar4 = piVar5, local_28 != (int *)0x0)) {
        *(int **)(local_20 + 0x10) = piVar5;
        piVar2 = local_28;
      }
    }
    else {
      piVar4 = (int *)FUN_100236b68(param_1,local_38);
      piVar2 = piVar4;
      if (local_28 != (int *)0x0) {
        if (((param_3 == 1) && (*local_28 == 4)) && (local_28 == local_20)) {
          local_28 = (int *)FUN_10022dc25(param_1,local_38);
          *local_28 = 0x12;
          *(int **)(local_28 + 0xc) = local_20;
        }
        *(int **)(local_20 + 0x10) = piVar4;
        piVar2 = local_28;
      }
      local_28 = piVar2;
      *(undefined8 *)(piVar4 + 0xe) = uVar1;
      piVar2 = local_28;
    }
    local_20 = piVar4;
    local_28 = piVar2;
  }
  return local_28;
}


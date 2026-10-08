
long FUN_10096cb33(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long local_50;
  long local_18;
  
  if ((param_1 == 0) || (param_2 == 0)) {
    local_50 = 0;
  }
  else {
    local_50 = FUN_100961260(param_1);
    if (local_50 == 0) {
      local_50 = 0;
    }
    else {
      uVar1 = *(undefined8 *)(param_1 + 0x50);
      *(undefined8 *)(param_1 + 0x50) = 0;
      if ((((param_2 == 0) || (*(long *)(param_2 + 0x48) == 0)) ||
          (iVar3 = _xmlStrEqual(*(xmlChar **)(param_2 + 0x10),(xmlChar *)"grammar"), iVar3 == 0)) ||
         (iVar3 = _xmlStrEqual(*(xmlChar **)(*(long *)(param_2 + 0x48) + 0x10),
                               PTR_s_http___relaxng_org_ns_structure__10227d2b0), iVar3 == 0)) {
        puVar5 = (undefined8 *)FUN_10096144a(param_1);
        *(undefined8 **)(local_50 + 8) = puVar5;
        if (*(long *)(local_50 + 8) == 0) {
          return local_50;
        }
        *puVar5 = *(undefined8 *)(param_1 + 0x30);
        if (*(long *)(param_1 + 0x30) != 0) {
          local_18 = *(long *)(*(long *)(param_1 + 0x30) + 8);
          if (local_18 == 0) {
            *(undefined8 **)(*(long *)(param_1 + 0x30) + 8) = puVar5;
          }
          else {
            for (; *(long *)(local_18 + 0x10) != 0; local_18 = *(long *)(local_18 + 0x10)) {
            }
            *(undefined8 **)(local_18 + 0x10) = puVar5;
          }
        }
        lVar2 = *(long *)(param_1 + 0x30);
        *(undefined8 **)(param_1 + 0x30) = puVar5;
        FUN_10096a96f(param_1,param_2);
        if (lVar2 != 0) {
          *(long *)(param_1 + 0x30) = lVar2;
        }
      }
      else {
        uVar4 = FUN_10096c98c(param_1,*(undefined8 *)(param_2 + 0x18));
        *(undefined8 *)(local_50 + 8) = uVar4;
      }
      *(undefined8 *)(param_1 + 0x50) = uVar1;
      if ((*(long *)(*(long *)(local_50 + 8) + 0x18) != 0) &&
         (FUN_10096b655(param_1,*(undefined8 *)(*(long *)(local_50 + 8) + 0x18),0),
         ((*(uint *)(param_1 + 0x40) >> 7 ^ 1) & 1) != 0)) {
        FUN_10096b825(param_1,*(undefined8 *)(*(long *)(local_50 + 8) + 0x18),0);
        while (((*(long *)(*(long *)(local_50 + 8) + 0x18) != 0 &&
                (**(int **)(*(long *)(local_50 + 8) + 0x18) == -1)) &&
               (*(long *)(*(long *)(*(long *)(local_50 + 8) + 0x18) + 0x40) != 0))) {
          *(undefined8 *)(*(long *)(local_50 + 8) + 0x18) =
               *(undefined8 *)(*(long *)(*(long *)(local_50 + 8) + 0x18) + 0x30);
        }
        FUN_10096be3f(param_1,*(undefined8 *)(*(long *)(local_50 + 8) + 0x18),0x10,0xffffffff);
      }
    }
  }
  return local_50;
}


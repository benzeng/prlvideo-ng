
int FUN_10092a979(long param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 in_stack_ffffffffffffff98;
  undefined4 uVar5;
  undefined8 uVar4;
  undefined8 in_stack_ffffffffffffffa0;
  undefined4 uVar7;
  undefined8 uVar6;
  int local_44;
  int local_10;
  
  uVar5 = (undefined4)((ulong)in_stack_ffffffffffffff98 >> 0x20);
  uVar7 = (undefined4)((ulong)in_stack_ffffffffffffffa0 >> 0x20);
  iVar1 = *(int *)(param_1 + 0x24);
  local_10 = FUN_100922c95(param_1,0,0,param_3,"id");
  if (local_10 == -1) {
LAB_10092ad11:
    local_44 = -1;
  }
  else {
    lVar2 = FUN_100920729(param_3,"targetNamespace");
    if (lVar2 == 0) {
LAB_10092aa37:
      lVar2 = FUN_100920729(param_3,"elementFormDefault");
      if (lVar2 != 0) {
        uVar3 = FUN_10092084c(param_1,lVar2);
        local_10 = FUN_100926443(uVar3,param_2 + 0x30,1);
        if (local_10 == -1) goto LAB_10092ad11;
        if (local_10 != 0) {
          uVar7 = 0;
          FUN_10091e207(param_1,0x6a9,0,lVar2,0,"(qualified | unqualified)",uVar3,0,0,0);
          uVar5 = (undefined4)((ulong)uVar3 >> 0x20);
        }
      }
      lVar2 = FUN_100920729(param_3,"attributeFormDefault");
      if (lVar2 != 0) {
        uVar3 = FUN_10092084c(param_1,lVar2);
        local_10 = FUN_100926443(uVar3,param_2 + 0x30,2);
        if (local_10 == -1) goto LAB_10092ad11;
        if (local_10 != 0) {
          uVar7 = 0;
          FUN_10091e207(param_1,0x6a5,0,lVar2,0,"(qualified | unqualified)",uVar3,0,0,0);
          uVar5 = (undefined4)((ulong)uVar3 >> 0x20);
        }
      }
      lVar2 = FUN_100920729(param_3,"finalDefault");
      if (lVar2 != 0) {
        uVar3 = FUN_10092084c(param_1,lVar2);
        uVar6 = CONCAT44(uVar7,0x20);
        uVar4 = CONCAT44(uVar5,0x10);
        local_10 = FUN_1009264b3(uVar3,param_2 + 0x30,0xffffffff,4,8,0xffffffff,uVar4,uVar6);
        uVar5 = (undefined4)((ulong)uVar4 >> 0x20);
        uVar7 = (undefined4)((ulong)uVar6 >> 0x20);
        if (local_10 == -1) goto LAB_10092ad11;
        if (local_10 != 0) {
          uVar7 = 0;
          FUN_10091e207(param_1,0xbdd,0,lVar2,0,
                        "(#all | List of (extension | restriction | list | union))",uVar3,0,0,0);
          uVar5 = (undefined4)((ulong)uVar3 >> 0x20);
        }
      }
      lVar2 = FUN_100920729(param_3,"blockDefault");
      if (lVar2 != 0) {
        uVar3 = FUN_10092084c(param_1,lVar2);
        local_10 = FUN_1009264b3(uVar3,param_2 + 0x30,0xffffffff,0x40,0x80,0x100,
                                 CONCAT44(uVar5,0xffffffff),CONCAT44(uVar7,0xffffffff));
        if (local_10 == -1) goto LAB_10092ad11;
        if (local_10 != 0) {
          FUN_10091e207(param_1,0xbdd,0,lVar2,0,
                        "(#all | List of (extension | restriction | substitution))",uVar3,0,0,0);
        }
      }
    }
    else {
      uVar3 = _xmlSchemaGetBuiltInType(0x1d);
      local_10 = FUN_100923679(param_1,0,0,lVar2,uVar3,0);
      if (local_10 == -1) goto LAB_10092ad11;
      if (local_10 == 0) goto LAB_10092aa37;
      *(undefined4 *)(param_1 + 0xcc) = 0xbdd;
    }
    if (*(int *)(param_1 + 0x24) != iVar1) {
      local_10 = *(int *)(param_1 + 0x20);
    }
    local_44 = local_10;
  }
  return local_44;
}



undefined4 FUN_1001da751(long param_1,undefined8 param_2,long param_3,long param_4)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 local_44;
  long local_30;
  long local_10;
  
  if (param_4 == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0x5aa;
    FUN_1001d7db5(param_1,"genrate transition: atom == NULL");
    local_44 = 0xffffffff;
  }
  else if (*(int *)(param_4 + 4) == 4) {
    iVar2 = FUN_1001d9e67(param_1,param_4);
    if (iVar2 < 0) {
      local_44 = 0xffffffff;
    }
    else {
      if (((param_3 != 0) && (*(long *)(param_4 + 0x38) != param_3)) && (*(int *)(param_4 + 8) != 8)
         ) {
        FUN_1001da607(param_1,*(undefined8 *)(param_4 + 0x38),param_3);
      }
      uVar1 = *(uint *)(param_4 + 8);
      if (uVar1 == 4) {
        *(undefined4 *)(param_4 + 8) = 2;
        FUN_1001da607(param_1,*(undefined8 *)(param_4 + 0x30),*(undefined8 *)(param_4 + 0x38));
        FUN_1001da607(param_1,*(undefined8 *)(param_4 + 0x38),*(undefined8 *)(param_4 + 0x30));
      }
      else if (uVar1 < 5) {
        if (uVar1 == 3) {
          *(undefined4 *)(param_4 + 8) = 2;
          FUN_1001da607(param_1,*(undefined8 *)(param_4 + 0x30),*(undefined8 *)(param_4 + 0x38));
        }
      }
      else if (uVar1 == 5) {
        *(undefined4 *)(param_4 + 8) = 2;
        FUN_1001da607(param_1,*(undefined8 *)(param_4 + 0x38),*(undefined8 *)(param_4 + 0x30));
      }
      else if (uVar1 == 8) {
        if (*(int *)(param_4 + 0xc) == 0) {
          FUN_1001da607(param_1,*(undefined8 *)(param_4 + 0x30),*(undefined8 *)(param_4 + 0x38));
          uVar3 = FUN_1001d8bb3(param_1);
          FUN_1001da3f9(param_1,uVar3);
          *(undefined8 *)(param_1 + 0x28) = uVar3;
          FUN_1001da607(param_1,*(undefined8 *)(param_4 + 0x30),uVar3);
        }
        iVar2 = FUN_1001d9cfc(param_1);
        *(int *)(*(long *)(param_1 + 0x60) + (long)iVar2 * 8) = *(int *)(param_4 + 0xc) + -1;
        *(int *)(*(long *)(param_1 + 0x60) + (long)iVar2 * 8 + 4) = *(int *)(param_4 + 0x10) + -1;
        *(undefined4 *)(param_4 + 0xc) = 0;
        *(undefined4 *)(param_4 + 0x10) = 0;
        *(undefined4 *)(param_4 + 8) = 2;
        FUN_1001da673(param_1,*(undefined8 *)(param_4 + 0x38),*(undefined8 *)(param_4 + 0x30),iVar2)
        ;
        local_10 = param_3;
        if (param_3 == 0) {
          local_10 = FUN_1001d8bb3(param_1);
          FUN_1001da3f9(param_1,local_10);
          *(long *)(param_1 + 0x28) = local_10;
        }
        FUN_1001da6e2(param_1,*(undefined8 *)(param_4 + 0x38),local_10,iVar2);
      }
      local_44 = 0;
    }
  }
  else {
    local_30 = param_3;
    if (((*(int *)(param_4 + 0xc) == 0) && (*(int *)(param_4 + 0x10) == 0)) &&
       (*(int *)(param_4 + 8) == 8)) {
      if (param_3 == 0) {
        local_30 = FUN_1001d8bb3(param_1);
        if (local_30 == 0) {
          return 0xffffffff;
        }
        FUN_1001da3f9(param_1,local_30);
      }
      FUN_1001da607(param_1,param_2,local_30);
      *(long *)(param_1 + 0x28) = local_30;
      FUN_1001d8aaa(param_4);
      local_44 = 0;
    }
    else {
      if (param_3 == 0) {
        local_30 = FUN_1001d8bb3(param_1);
        if (local_30 == 0) {
          return 0xffffffff;
        }
        FUN_1001da3f9(param_1,local_30);
      }
      iVar2 = FUN_1001d9e67(param_1,param_4);
      if (iVar2 < 0) {
        local_44 = 0xffffffff;
      }
      else {
        FUN_1001da12b(param_1,param_2,param_4,local_30,0xffffffff,0xffffffff,0);
        *(long *)(param_1 + 0x28) = local_30;
        iVar2 = *(int *)(param_4 + 8);
        if (iVar2 == 4) {
          *(undefined4 *)(param_4 + 8) = 2;
          FUN_1001da607(param_1,param_2,local_30);
          FUN_1001da12b(param_1,local_30,param_4,local_30,0xffffffff,0xffffffff,0);
        }
        else if (iVar2 == 5) {
          *(undefined4 *)(param_4 + 8) = 2;
          FUN_1001da12b(param_1,local_30,param_4,local_30,0xffffffff,0xffffffff,0);
        }
        else if (iVar2 == 3) {
          *(undefined4 *)(param_4 + 8) = 2;
          FUN_1001da607(param_1,param_2,local_30);
        }
        local_44 = 0;
      }
    }
  }
  return local_44;
}


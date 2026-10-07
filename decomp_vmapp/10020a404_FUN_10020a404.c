
int FUN_10020a404(long param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  int local_48;
  int *local_38;
  int *local_30;
  int local_1c;
  int local_18;
  int local_14;
  undefined8 *local_10;
  
  local_30 = (int *)0x0;
  local_18 = 0;
  local_14 = *(int *)(param_1 + 0xa4);
  if (*(long *)(param_1 + 200) == 0) {
    local_48 = 0;
  }
  else {
    if (param_2 == 2) {
      local_14 = local_14 + 1;
    }
    piVar1 = *(int **)(param_1 + 200);
    local_38 = piVar1;
    while (local_38 != local_30) {
      if (param_2 == 1) {
        local_1c = _xmlStreamPush(*(undefined8 *)(local_38 + 0xe),
                                  *(undefined8 *)(*(long *)(param_1 + 0xb8) + 0x18),
                                  *(undefined8 *)(*(long *)(param_1 + 0xb8) + 0x20));
      }
      else {
        local_1c = _xmlStreamPushAttr(*(undefined8 *)(local_38 + 0xe),
                                      *(undefined8 *)(*(long *)(param_1 + 0xb8) + 0x18),
                                      *(undefined8 *)(*(long *)(param_1 + 0xb8) + 0x20));
      }
      if (local_1c == -1) {
        FUN_1001e8d2a(param_1,"xmlSchemaXPathEvaluate","calling xmlStreamPush()");
        return -1;
      }
      if (local_1c != 0) {
        if (*(long *)(local_38 + 6) == 0) {
          uVar3 = (*(code *)_xmlMalloc)(0x14);
          *(undefined8 *)(local_38 + 6) = uVar3;
          if (*(long *)(local_38 + 6) == 0) {
            FUN_1001e835c(0,"allocating the state object history",0);
            return -1;
          }
          local_38[9] = 10;
        }
        else if (local_38[9] <= local_38[8]) {
          local_38[9] = local_38[9] * 2;
          uVar3 = (*(code *)_xmlRealloc)(*(undefined8 *)(local_38 + 6),(long)local_38[9] * 4);
          *(undefined8 *)(local_38 + 6) = uVar3;
          if (*(long *)(local_38 + 6) == 0) {
            FUN_1001e835c(0,"re-allocating the state object history",0);
            return -1;
          }
        }
        iVar2 = local_38[8];
        *(int *)(*(long *)(local_38 + 6) + (long)iVar2 * 4) = local_14;
        local_38[8] = iVar2 + 1;
        if (*local_38 == 1) {
          for (local_10 = *(undefined8 **)
                           (*(long *)(*(long *)(*(long *)(local_38 + 10) + 0x10) + 8) + 0x38);
              local_10 != (undefined8 *)0x0; local_10 = (undefined8 *)*local_10) {
            iVar2 = FUN_10020a275(param_1,*(undefined8 *)(local_38 + 10),local_10,2);
            if (iVar2 == -1) {
              return -1;
            }
          }
        }
        else if (*local_38 == 2) {
          if ((local_18 == 0) && (((*(uint *)(*(long *)(param_1 + 0xb8) + 0x40) >> 4 ^ 1) & 1) != 0)
             ) {
            *(uint *)(*(long *)(param_1 + 0xb8) + 0x40) =
                 *(uint *)(*(long *)(param_1 + 0xb8) + 0x40) | 0x10;
          }
          local_18 = local_18 + 1;
        }
      }
      if (*(long *)(local_38 + 2) == 0) {
        local_38 = *(int **)(param_1 + 200);
        local_30 = piVar1;
      }
      else {
        local_38 = *(int **)(local_38 + 2);
      }
    }
    local_48 = local_18;
  }
  return local_48;
}


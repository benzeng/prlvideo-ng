
int FUN_100208f14(long param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5
                 )

{
  undefined8 uVar1;
  int local_54;
  long local_20;
  int local_14;
  long local_10;
  
  local_14 = 0;
  local_20 = 0;
  if ((param_1 == 0) || (param_2 == 0)) {
    local_54 = -1;
  }
  else if (*(long *)(param_1 + 0x98) == 0) {
    FUN_1001e8d2a(param_1,"xmlSchemaAssembleByLocation","no parser context available");
    local_54 = -1;
  }
  else {
    local_10 = *(long *)(param_1 + 0x98);
    if (*(long *)(local_10 + 0x30) == 0) {
      FUN_1001e8d2a(local_10,"xmlSchemaAssembleByLocation","no constructor");
      local_54 = -1;
    }
    else {
      uVar1 = FUN_1001f8576(*(undefined8 *)(local_10 + 0x98),param_5,param_3);
      local_54 = FUN_1001f8651(local_10,1,uVar1,0,0,0,param_3,0,param_4,&local_20);
      if (local_54 == 0) {
        local_14 = local_54;
        if (local_20 == 0) {
          FUN_1001e8d2a(local_10,"xmlSchemaAssembleByLocation","no schema bucket aquired");
          local_54 = -1;
        }
        else {
          if ((local_20 != 0) && (*(long *)(*(long *)(local_10 + 0x30) + 0x18) == 0)) {
            *(long *)(*(long *)(local_10 + 0x30) + 0x18) = local_20;
          }
          if (((local_20 == 0) || (*(long *)(local_20 + 0x20) == 0)) ||
             (*(int *)(local_20 + 0x34) != 0)) {
            local_54 = 0;
          }
          else {
            *(undefined4 *)(local_10 + 0x24) = 0;
            *(undefined4 *)(local_10 + 0x20) = 0;
            *(undefined8 *)(local_10 + 0x58) = *(undefined8 *)(local_20 + 0x20);
            local_14 = FUN_1001f820b(local_10,param_2,local_20);
            if (local_14 == -1) {
              *(undefined8 *)(local_10 + 0x58) = 0;
              *(undefined8 *)(local_10 + 0x58) = 0;
              local_54 = -1;
            }
            else {
              if ((local_14 == 0) && (*(int *)(local_10 + 0x24) != 0)) {
                local_14 = *(int *)(local_10 + 0x20);
              }
              if (*(int *)(local_10 + 0x24) == 0) {
                FUN_1002082b7(local_10);
                *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + *(int *)(local_10 + 0x24);
              }
              else {
                *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + *(int *)(local_10 + 0x24);
              }
              *(undefined8 *)(local_10 + 0x58) = 0;
              local_54 = local_14;
            }
          }
        }
      }
    }
  }
  return local_54;
}



void FUN_1000cd190(long param_1,uint param_2,uint param_3)

{
  uint uVar1;
  
  if (param_2 == 0) {
    FUN_1008e3970("","vm",0,"ASSERT( %s ) occured in %s:%d [%s]","uiStepsCount",
                  "SerializationApp.cpp",0xa32,"SetProgressParamsOnDelete");
  }
  if (param_2 <= param_3) {
    FUN_1008e3970("","vm",0,"ASSERT( %s ) occured in %s:%d [%s]","uiStep < uiStepsCount",
                  "SerializationApp.cpp",0xa33,"SetProgressParamsOnDelete");
  }
  uVar1 = 1;
  if (param_2 != 0) {
    uVar1 = param_2;
  }
  *(uint *)(param_1 + 0x1fc) = uVar1;
  *(uint *)(param_1 + 0x200) = param_3;
  return;
}


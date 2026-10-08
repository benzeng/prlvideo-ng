
void FUN_10093aba2(long param_1,undefined8 param_2)

{
  int iVar1;
  
  if (*(long *)(param_1 + 0x58) != 0) {
    if (*(long *)(param_1 + 0x60) == 0) {
      FUN_10091c652(param_2,"xmlSchemaCheckAttrValConstr","type is missing");
    }
    else {
      iVar1 = FUN_100940cd5(param_2,*(undefined8 *)(param_1 + 0x68),*(undefined8 *)(param_1 + 0x60),
                            *(undefined8 *)(param_1 + 0x58),param_1 + 0x88,1,1,0);
      if (iVar1 != 0) {
        if (iVar1 < 0) {
          FUN_10091c652(param_2,"xmlSchemaAttrCheckValConstr",
                        "calling xmlSchemaVCheckCVCSimpleType()");
        }
        else {
          FUN_10091c684(param_2,0xc07,*(undefined8 *)(param_1 + 0x68),param_1,
                        "The value of the value constraint is not valid",0,0);
        }
      }
    }
  }
  return;
}


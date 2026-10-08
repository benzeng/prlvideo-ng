
void FUN_100932143(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  if (((param_2 != 0) && (param_1 != 0)) &&
     ((param_1 == 0 || ((*(uint *)(param_1 + 0x58) >> 8 & 1) == 0)))) {
    *(uint *)(param_1 + 0x58) = *(uint *)(param_1 + 0x58) | 0x100;
    if ((*(long *)(param_1 + 0x38) == 0) && (*(long *)(param_1 + 0x68) != 0)) {
      lVar1 = FUN_100920a0d(*(undefined8 *)(param_2 + 0x40),*(undefined8 *)(param_1 + 0x68),
                            *(undefined8 *)(param_1 + 0x70));
      if (lVar1 == 0) {
        FUN_10091d89f(param_2,0xbbc,param_1,*(undefined8 *)(param_1 + 0x48),"type",
                      *(undefined8 *)(param_1 + 0x68),*(undefined8 *)(param_1 + 0x70),1,
                      "type definition");
      }
      else {
        *(long *)(param_1 + 0x38) = lVar1;
      }
    }
    if (*(long *)(param_1 + 0x78) != 0) {
      lVar1 = FUN_100920924(*(undefined8 *)(param_2 + 0x40),*(undefined8 *)(param_1 + 0x78),
                            *(undefined8 *)(param_1 + 0x80));
      if (lVar1 == 0) {
        FUN_10091d89f(param_2,0xbbc,param_1,0,"substitutionGroup",*(undefined8 *)(param_1 + 0x78),
                      *(undefined8 *)(param_1 + 0x80),0xe,0);
      }
      else {
        FUN_100932143(lVar1,param_2);
        *(long *)(param_1 + 0x98) = lVar1;
        if (*(long *)(param_1 + 0x38) == 0) {
          *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(lVar1 + 0x38);
        }
      }
    }
    if (((*(long *)(param_1 + 0x38) == 0) && (*(long *)(param_1 + 0x68) == 0)) &&
       (*(long *)(param_1 + 0x78) == 0)) {
      uVar2 = _xmlSchemaGetBuiltInType(0x2d);
      *(undefined8 *)(param_1 + 0x38) = uVar2;
    }
  }
  return;
}



void FUN_10093b7b7(long param_1,long param_2)

{
  int iVar1;
  int *piVar2;
  long lVar3;
  undefined8 uVar4;
  
  if ((*(uint *)(param_1 + 0x78) >> 8 & 1) == 0) {
    *(uint *)(param_1 + 0x78) = *(uint *)(param_1 + 0x78) | 0x100;
    if (*(long *)(param_1 + 0x60) == 0) {
      if (*(long *)(param_1 + 0x30) == 0) {
        if (*(long *)(param_1 + 0x20) == 0) {
          uVar4 = _xmlSchemaGetBuiltInType(0x2e);
          *(undefined8 *)(param_1 + 0x60) = uVar4;
        }
        else {
          lVar3 = FUN_100920b4c(*(undefined8 *)(param_2 + 0x40),*(undefined8 *)(param_1 + 0x20),
                                *(undefined8 *)(param_1 + 0x28));
          if (lVar3 == 0) {
            FUN_10091d89f(param_2,0xbbc,param_1,*(undefined8 *)(param_1 + 0x68),"ref",
                          *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),0xf,0);
          }
          else {
            *(long *)(param_1 + 0x90) = lVar3;
            FUN_10093b7b7(lVar3,param_2,0);
            *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(lVar3 + 0x60);
            if (((*(uint *)(lVar3 + 0x78) >> 9 & 1) != 0) && (*(long *)(param_1 + 0x58) != 0)) {
              if (((*(uint *)(param_1 + 0x78) >> 9 ^ 1) & 1) == 0) {
                iVar1 = FUN_10093b64b(*(undefined8 *)(param_1 + 0x88),*(undefined8 *)(lVar3 + 0x88))
                ;
                if (iVar1 == 0) {
                  FUN_10091dd92(param_2,0xc06,0,0,*(undefined8 *)(param_1 + 0x68),
                                "The \'fixed\' value constraint of the attribute use must match the attribute declaration\'s value constraint \'%s\'"
                                ,*(undefined8 *)(lVar3 + 0x58));
                }
              }
              else {
                FUN_10091dd92(param_2,0xc06,0,0,*(undefined8 *)(param_1 + 0x68),
                              "The attribute declaration has a \'fixed\' value constraint , thus it must be \'fixed\' in attribute use as well"
                              ,0);
              }
            }
          }
        }
      }
      else {
        piVar2 = (int *)FUN_100920a0d(*(undefined8 *)(param_2 + 0x40),
                                      *(undefined8 *)(param_1 + 0x30),
                                      *(undefined8 *)(param_1 + 0x38));
        if ((piVar2 == (int *)0x0) || ((*piVar2 != 4 && ((*piVar2 != 1 || (piVar2[0x28] == 0x2d)))))
           ) {
          FUN_10091d89f(param_2,0xbbc,param_1,*(undefined8 *)(param_1 + 0x68),"type",
                        *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),4,0);
        }
        else {
          *(int **)(param_1 + 0x60) = piVar2;
        }
      }
    }
  }
  return;
}


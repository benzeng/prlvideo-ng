
undefined8 FUN_1003b7050(long param_1,uint *param_2,float *param_3)

{
  char *extraout_RDX;
  char *pcVar1;
  uint uVar2;
  undefined8 uVar3;
  float *pfVar4;
  
  if ((*param_2 & 0xfffff800) == 0x1800) {
    FUN_10038e8e0(*(undefined8 *)(param_1 + 8),"dcl_immediateConstantBuffer {");
    pfVar4 = (float *)(param_2 + 2);
    uVar3 = *(undefined8 *)(param_1 + 8);
    pcVar1 = extraout_RDX;
    if (pfVar4 < param_3) {
      pcVar1 = " {";
      uVar2 = 1;
      do {
        FUN_10038e8e0((double)*pfVar4,uVar3,"%s%f",pcVar1);
        pcVar1 = ", ";
        if ((uVar2 & 3) == 0) {
          pcVar1 = "} {";
        }
        pfVar4 = pfVar4 + 1;
        uVar3 = *(undefined8 *)(param_1 + 8);
        uVar2 = uVar2 + 1;
      } while (pfVar4 < param_3);
    }
    FUN_10038e8e0(uVar3,"} }\n",pcVar1);
  }
  return 0;
}


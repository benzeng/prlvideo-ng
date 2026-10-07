
undefined8 FUN_100355110(long param_1,undefined8 param_2,uint *param_3)

{
  uint uVar1;
  undefined8 uVar2;
  int iVar3;
  char *pcVar4;
  undefined8 uVar5;
  
  if (*(uint *)**(undefined8 **)(param_1 + 0x38) < 0xffff0104) {
    FUN_10038e8e0(*(undefined8 *)(param_1 + 0x30),
                  "if(any(lessThan(texcoord[%d].xyz, vec3(0.0)))) discard;\n",*param_3 & 0x7ff);
  }
  else {
    if (*(uint *)**(undefined8 **)(param_1 + 0x38) == 0xffff0104) {
      uVar5 = *(undefined8 *)(param_1 + 0x30);
      uVar2 = FUN_1003a2680(param_3);
      pcVar4 = "if(any(lessThan(%s.xyz, vec3(0.0)))) discard;\n";
    }
    else {
      uVar1 = *param_3;
      iVar3 = (uVar1 >> 0x13 & 1) + (uVar1 >> 0x12 & 1) + (uVar1 >> 0x11 & 1) + (uVar1 >> 0x10 & 1);
      uVar5 = *(undefined8 *)(param_1 + 0x30);
      uVar2 = FUN_1003a2680(param_3);
      if (iVar3 != 1) {
        FUN_10038e8e0(uVar5,"if(any(lessThan(%s, vec%d(0.0)))) discard;\n",uVar2,iVar3);
        return 0;
      }
      pcVar4 = "if(%s < 0.0) discard;\n";
    }
    FUN_10038e8e0(uVar5,pcVar4,uVar2);
  }
  return 0;
}

